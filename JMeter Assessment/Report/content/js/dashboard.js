/*
   Licensed to the Apache Software Foundation (ASF) under one or more
   contributor license agreements.  See the NOTICE file distributed with
   this work for additional information regarding copyright ownership.
   The ASF licenses this file to You under the Apache License, Version 2.0
   (the "License"); you may not use this file except in compliance with
   the License.  You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/
var showControllersOnly = false;
var seriesFilter = "";
var filtersOnlySampleSeries = true;

/*
 * Add header in statistics table to group metrics by category
 * format
 *
 */
function summaryTableHeader(header) {
    var newRow = header.insertRow(-1);
    newRow.className = "tablesorter-no-sort";
    var cell = document.createElement('th');
    cell.setAttribute("data-sorter", false);
    cell.colSpan = 1;
    cell.innerHTML = "Requests";
    newRow.appendChild(cell);

    cell = document.createElement('th');
    cell.setAttribute("data-sorter", false);
    cell.colSpan = 3;
    cell.innerHTML = "Executions";
    newRow.appendChild(cell);

    cell = document.createElement('th');
    cell.setAttribute("data-sorter", false);
    cell.colSpan = 7;
    cell.innerHTML = "Response Times (ms)";
    newRow.appendChild(cell);

    cell = document.createElement('th');
    cell.setAttribute("data-sorter", false);
    cell.colSpan = 1;
    cell.innerHTML = "Throughput";
    newRow.appendChild(cell);

    cell = document.createElement('th');
    cell.setAttribute("data-sorter", false);
    cell.colSpan = 2;
    cell.innerHTML = "Network (KB/sec)";
    newRow.appendChild(cell);
}

/*
 * Populates the table identified by id parameter with the specified data and
 * format
 *
 */
function createTable(table, info, formatter, defaultSorts, seriesIndex, headerCreator) {
    var tableRef = table[0];

    // Create header and populate it with data.titles array
    var header = tableRef.createTHead();

    // Call callback is available
    if(headerCreator) {
        headerCreator(header);
    }

    var newRow = header.insertRow(-1);
    for (var index = 0; index < info.titles.length; index++) {
        var cell = document.createElement('th');
        cell.innerHTML = info.titles[index];
        newRow.appendChild(cell);
    }

    var tBody;

    // Create overall body if defined
    if(info.overall){
        tBody = document.createElement('tbody');
        tBody.className = "tablesorter-no-sort";
        tableRef.appendChild(tBody);
        var newRow = tBody.insertRow(-1);
        var data = info.overall.data;
        for(var index=0;index < data.length; index++){
            var cell = newRow.insertCell(-1);
            cell.innerHTML = formatter ? formatter(index, data[index]): data[index];
        }
    }

    // Create regular body
    tBody = document.createElement('tbody');
    tableRef.appendChild(tBody);

    var regexp;
    if(seriesFilter) {
        regexp = new RegExp(seriesFilter, 'i');
    }
    // Populate body with data.items array
    for(var index=0; index < info.items.length; index++){
        var item = info.items[index];
        if((!regexp || filtersOnlySampleSeries && !info.supportsControllersDiscrimination || regexp.test(item.data[seriesIndex]))
                &&
                (!showControllersOnly || !info.supportsControllersDiscrimination || item.isController)){
            if(item.data.length > 0) {
                var newRow = tBody.insertRow(-1);
                for(var col=0; col < item.data.length; col++){
                    var cell = newRow.insertCell(-1);
                    cell.innerHTML = formatter ? formatter(col, item.data[col]) : item.data[col];
                }
            }
        }
    }

    // Add support of columns sort
    table.tablesorter({sortList : defaultSorts});
}

$(document).ready(function() {

    // Customize table sorter default options
    $.extend( $.tablesorter.defaults, {
        theme: 'blue',
        cssInfoBlock: "tablesorter-no-sort",
        widthFixed: true,
        widgets: ['zebra']
    });

    var data = {"OkPercent": 100.0, "KoPercent": 0.0};
    var dataset = [
        {
            "label" : "FAIL",
            "data" : data.KoPercent,
            "color" : "#FF6347"
        },
        {
            "label" : "PASS",
            "data" : data.OkPercent,
            "color" : "#9ACD32"
        }];
    $.plot($("#flot-requests-summary"), dataset, {
        series : {
            pie : {
                show : true,
                radius : 1,
                label : {
                    show : true,
                    radius : 3 / 4,
                    formatter : function(label, series) {
                        return '<div style="font-size:8pt;text-align:center;padding:2px;color:white;">'
                            + label
                            + '<br/>'
                            + Math.round10(series.percent, -2)
                            + '%</div>';
                    },
                    background : {
                        opacity : 0.5,
                        color : '#000'
                    }
                }
            }
        },
        legend : {
            show : true
        }
    });

    // Creates APDEX table
    createTable($("#apdexTable"), {"supportsControllersDiscrimination": true, "overall": {"data": [0.6577777777777778, 500, 1500, "Total"], "isController": false}, "titles": ["Apdex", "T (Toleration threshold)", "F (Frustration threshold)", "Label"], "items": [{"data": [0.4666666666666667, 500, 1500, "https://demowebshop.tricentis.com/logout"], "isController": false}, {"data": [0.9833333333333333, 500, 1500, "https://demowebshop.tricentis.com/login"], "isController": false}, {"data": [0.625, 500, 1500, "https://demowebshop.tricentis.com/register"], "isController": false}, {"data": [0.6666666666666666, 500, 1500, "https://demowebshop.tricentis.com/logout-1"], "isController": false}, {"data": [0.7833333333333333, 500, 1500, "https://demowebshop.tricentis.com/logout-0"], "isController": false}, {"data": [0.0, 500, 1500, "Test"], "isController": true}, {"data": [0.8, 500, 1500, "https://demowebshop.tricentis.com/health"], "isController": false}, {"data": [1.0, 500, 1500, "https://demowebshop.tricentis.com/register-1"], "isController": false}, {"data": [0.5166666666666667, 500, 1500, "https://demowebshop.tricentis.com/register-0"], "isController": false}, {"data": [0.5, 500, 1500, "https://demowebshop.tricentis.com/search?q=Health+Book"], "isController": false}]}, function(index, item){
        switch(index){
            case 0:
                item = item.toFixed(3);
                break;
            case 1:
            case 2:
                item = formatDuration(item);
                break;
        }
        return item;
    }, [[0, 0]], 3);

    // Create statistics table
    createTable($("#statisticsTable"), {"supportsControllersDiscrimination": true, "overall": {"data": ["Total", 420, 0, 0.0, 569.3333333333336, 144, 2801, 524.0, 1033.7, 1160.55, 1779.420000000002, 0.8375543413233358, 16.63295520829179, 0.9563286141965461], "isController": false}, "titles": ["Label", "#Samples", "FAIL", "Error %", "Average", "Min", "Max", "Median", "90th pct", "95th pct", "99th pct", "Transactions/s", "Received", "Sent"], "items": [{"data": ["https://demowebshop.tricentis.com/logout", 60, 0, 0.0, 965.2499999999999, 679, 2801, 981.5, 1343.6999999999998, 1552.1, 2801.0, 0.14127719291636154, 5.015685263552603, 0.26185948452661545], "isController": false}, {"data": ["https://demowebshop.tricentis.com/login", 60, 0, 0.0, 321.80000000000007, 269, 975, 297.0, 348.9, 449.29999999999995, 975.0, 0.1541156586646392, 3.4467575751056976, 0.14914904075845453], "isController": false}, {"data": ["https://demowebshop.tricentis.com/register", 60, 0, 0.0, 691.3833333333333, 317, 1800, 711.5, 967.5999999999999, 1294.9, 1800.0, 0.13633327122595423, 1.7823178729510245, 0.18133390176733363], "isController": false}, {"data": ["https://demowebshop.tricentis.com/logout-1", 60, 0, 0.0, 568.8833333333334, 466, 1638, 512.0, 801.0999999999998, 1125.199999999999, 1638.0, 0.14134608589130485, 4.928823595667742, 0.13209785566208862], "isController": false}, {"data": ["https://demowebshop.tricentis.com/logout-0", 60, 0, 0.0, 395.2499999999999, 193, 1161, 420.5, 563.0, 684.3999999999995, 1161.0, 0.14156018195202053, 0.08944281027632547, 0.13008606564145636], "isController": false}, {"data": ["Test", 30, 0, 0.0, 5282.9, 4182, 7409, 5062.5, 6562.0, 7053.7, 7409.0, 0.07975329646958741, 16.353475748351766, 0.8082809675404082], "isController": true}, {"data": ["https://demowebshop.tricentis.com/health", 30, 0, 0.0, 685.6333333333332, 360, 2098, 411.5, 1679.9000000000005, 1966.5499999999997, 2098.0, 0.08090876727402181, 2.957041616435807, 0.07356060774620538], "isController": false}, {"data": ["https://demowebshop.tricentis.com/register-1", 30, 0, 0.0, 180.3, 144, 469, 160.0, 175.8, 459.65, 469.0, 0.08096357448783792, 0.11820365611261494, 0.07645681301732352], "isController": false}, {"data": ["https://demowebshop.tricentis.com/register-0", 30, 0, 0.0, 579.2, 495, 977, 558.5, 618.0, 901.6499999999999, 977.0, 0.0808764854314491, 0.04122805214376604, 0.0969885977634956], "isController": false}, {"data": ["https://demowebshop.tricentis.com/search?q=Health+Book", 30, 0, 0.0, 640.3999999999999, 521, 1410, 568.5, 840.3000000000003, 1326.3999999999999, 1410.0, 0.08086732905994426, 2.1528557202179104, 0.0746285409781712], "isController": false}]}, function(index, item){
        switch(index){
            // Errors pct
            case 3:
                item = item.toFixed(2) + '%';
                break;
            // Mean
            case 4:
            // Mean
            case 7:
            // Median
            case 8:
            // Percentile 1
            case 9:
            // Percentile 2
            case 10:
            // Percentile 3
            case 11:
            // Throughput
            case 12:
            // Kbytes/s
            case 13:
            // Sent Kbytes/s
                item = item.toFixed(2);
                break;
        }
        return item;
    }, [[0, 0]], 0, summaryTableHeader);

    // Create error table
    createTable($("#errorsTable"), {"supportsControllersDiscrimination": false, "titles": ["Type of error", "Number of errors", "% in errors", "% in all samples"], "items": []}, function(index, item){
        switch(index){
            case 2:
            case 3:
                item = item.toFixed(2) + '%';
                break;
        }
        return item;
    }, [[1, 1]]);

        // Create top5 errors by sampler
    createTable($("#top5ErrorsBySamplerTable"), {"supportsControllersDiscrimination": false, "overall": {"data": ["Total", 420, 0, "", "", "", "", "", "", "", "", "", ""], "isController": false}, "titles": ["Sample", "#Samples", "#Errors", "Error", "#Errors", "Error", "#Errors", "Error", "#Errors", "Error", "#Errors", "Error", "#Errors"], "items": [{"data": [], "isController": false}, {"data": [], "isController": false}, {"data": [], "isController": false}, {"data": [], "isController": false}, {"data": [], "isController": false}, {"data": [], "isController": false}, {"data": [], "isController": false}, {"data": [], "isController": false}, {"data": [], "isController": false}, {"data": [], "isController": false}]}, function(index, item){
        return item;
    }, [[0, 0]], 0);

});
