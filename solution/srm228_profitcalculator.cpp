/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1768
*******************************************************************************/
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class MarginCalculator {
public:
    int percent(vector<string> items);
};

int MarginCalculator::percent(vector<string> items) {
    int ret;
    return ret;
}


int test0() {
    vector<string> items = {"012.99 008.73", "099.99 050.00", "123.45 101.07"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> items = {"000.00 049.99", "999.99 936.22", "033.99 025.64", "249.99 211.87"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> items = {"822.77 704.86", "829.42 355.45", "887.18 949.38"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> items = {"612.72 941.34", "576.46 182.66", "787.41 524.70", "637.96 333.23", "345.01 219.69", "567.22 104.77", "673.02 885.77"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> items = {"811.22 275.32", "433.89 006.48", "141.28 967.41", "344.47 786.23", "897.47 860.61", "007.42 559.29", "255.72 460.00", "419.35 931.19", "419.25 490.52", "199.78 114.44", "505.63 276.58", "720.96 735.00", "719.90 824.46", "816.58 195.94", "498.68 453.05", "399.48 921.39", "930.88 017.63", "422.20 075.39", "380.22 917.27", "630.83 995.87", "821.07 126.87", "715.73 985.62", "246.23 134.64", "168.28 550.33", "707.28 046.72", "117.76 281.87", "595.43 410.45", "345.28 532.42", "554.24 264.34", "195.73 814.87", "131.98 041.28", "595.13 939.47", "576.04 107.70", "716.00 404.75", "524.24 029.96", "673.49 070.97", "288.09 849.43", "616.34 236.34", "401.96 316.33", "371.18 014.27", "809.63 508.33", "375.68 290.84", "334.66 477.89", "689.54 526.35", "084.77 316.51", "304.76 015.91", "460.63 636.56", "357.84 436.20", "752.24 047.64", "922.10 573.12"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> items = {"882.95 832.99", "929.27 964.77", "742.30 685.96", "397.70 448.25", "617.85 627.10", "422.87 483.68", "219.99 055.89", "070.07 560.02", "866.07 447.72", "793.70 704.41", "724.74 633.57", "626.32 378.06", "085.37 477.17", "115.81 116.45", "527.15 389.21", "097.75 152.27"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> items = {"622.98 583.63", "848.33 095.30", "904.52 899.10", "982.17 387.66", "793.02 624.35", "718.24 653.33", "962.48 721.15", "676.47 256.97", "778.59 236.79", "995.35 528.65", "338.11 266.53", "564.21 084.86", "831.43 344.92", "758.78 164.73", "531.45 345.94", "575.54 363.03", "606.84 431.14", "734.79 309.50", "629.87 543.64", "754.53 618.33", "829.21 955.24", "919.37 450.29", "540.42 034.34", "367.48 234.36", "949.99 634.95", "820.77 872.22", "926.03 566.07", "352.43 083.67", "672.64 552.39", "944.34 782.60", "300.77 182.04", "870.50 638.09", "920.76 685.02", "864.03 764.59", "876.04 667.66", "808.52 369.72", "971.67 543.52", "252.16 106.53", "655.60 599.97", "596.47 491.94", "828.58 958.84", "715.35 296.59", "710.50 556.22", "924.87 593.57", "940.77 519.37", "901.58 127.49", "653.82 354.29", "825.54 772.68", "379.72 287.94", "679.26 451.09"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> items = {"950.72 262.17", "985.70 117.21", "956.93 668.68", "963.13 751.97", "977.64 998.63", "948.05 181.16", "942.45 533.92", "909.96 685.66", "970.97 728.04", "928.78 622.93", "933.82 142.80", "999.28 990.79", "911.58 233.44", "907.20 954.34", "933.87 376.56", "927.99 812.17", "999.33 049.47", "932.81 938.78", "920.33 914.34", "996.12 138.07", "952.93 306.37", "992.73 596.22", "954.18 821.73", "948.36 478.20", "990.09 558.39", "965.69 372.76", "980.71 838.76", "955.37 404.43", "992.95 144.51", "929.32 315.10", "947.99 439.90", "959.76 600.16", "930.56 280.82", "916.00 866.77", "942.71 834.16", "970.42 691.69", "990.19 397.99", "973.74 789.31", "958.69 028.31", "960.00 139.84", "953.45 713.84", "941.42 267.30", "926.04 619.81", "987.82 275.76", "930.29 575.20", "902.40 923.82", "941.32 570.16", "929.87 034.65", "937.09 792.28", "912.76 454.66"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> items = {"020.21 024.50", "214.94 093.73", "364.75 040.70", "675.91 006.26", "669.26 085.95", "843.34 048.91", "080.57 039.06", "582.71 029.53", "660.09 015.20", "828.00 063.78", "147.63 068.12", "190.19 072.89", "364.18 017.98", "514.27 043.65", "795.93 000.98", "226.85 048.25", "696.32 018.19", "400.10 070.68", "902.58 024.86", "976.80 033.84", "445.47 007.76", "588.06 000.20", "717.59 075.45", "102.65 057.83", "543.36 016.23", "816.86 093.34", "044.43 068.04", "358.78 081.42", "433.11 092.42", "656.31 067.87", "212.20 091.43", "318.72 081.43", "300.15 012.11", "154.57 088.85", "236.00 021.36", "688.89 012.02", "317.88 059.55", "498.22 044.27", "285.26 007.90", "223.92 089.14", "473.39 043.16", "254.70 050.14", "139.65 083.19", "976.30 004.22", "249.83 009.22", "357.21 060.89", "176.00 073.50", "786.66 089.90", "345.09 057.83", "602.40 037.81"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 89;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> items = {"959.61 789.67", "193.62 257.93", "273.42 517.59", "844.92 870.93", "915.59 974.69", "808.36 298.04", "700.42 349.55", "456.10 809.28", "008.96 715.53", "946.10 844.90", "237.07 987.81", "813.60 933.60", "755.37 733.22", "567.26 615.42", "823.10 336.69", "657.30 613.95", "751.79 733.49", "521.04 437.21", "809.54 917.51", "248.51 945.29", "493.89 744.66", "856.72 284.95", "730.70 365.01", "650.95 091.47", "724.51 782.39", "705.77 535.23", "680.70 591.63", "858.33 123.35", "215.70 453.97", "968.95 874.95", "991.74 616.94", "317.81 846.36", "322.12 919.30", "422.72 635.32", "986.77 773.50", "985.32 923.07", "662.86 649.19", "428.29 718.26", "124.65 650.27", "983.16 972.10", "928.06 007.20", "981.12 496.94", "067.68 295.14", "937.95 395.33", "723.15 555.24", "122.80 221.85", "698.38 489.11", "496.70 137.87", "111.61 183.28", "187.93 732.85"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> items = {"846.32 577.55", "489.54 065.68", "379.36 222.63", "927.55 952.80", "520.17 113.09", "556.30 473.94", "686.55 370.85", "808.21 294.11", "777.22 479.26", "306.16 173.35", "877.80 869.49", "386.01 090.12", "952.58 895.32", "240.94 290.34", "964.78 798.01", "698.26 035.48", "982.00 041.97", "716.20 410.21", "942.99 172.41", "242.76 262.55", "938.87 028.97", "201.41 058.42", "898.46 284.73", "598.09 194.68", "180.44 170.93", "412.27 077.47", "368.16 075.45", "953.51 588.19", "251.48 057.89", "617.72 371.01", "978.14 632.04", "222.58 253.95", "588.45 384.40", "538.56 269.76", "798.86 603.21", "999.94 422.09", "852.22 479.84", "565.44 336.65", "975.77 731.34", "491.44 031.33", "709.44 577.15", "585.07 411.56", "965.00 745.29", "690.95 064.67", "516.53 096.84", "552.76 292.01", "813.42 429.38", "851.60 421.00", "642.19 067.86", "368.38 200.66"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> items = {"898.08 229.47", "585.68 383.74", "294.18 622.84", "912.72 941.34", "576.46 182.66", "871.40 027.90", "316.34 384.95", "353.03 481.95", "914.77 499.18", "969.72 140.16", "841.17 675.76", "059.44 303.52", "340.43 298.51", "907.73 430.92", "610.57 138.08", "834.28 879.82", "244.03 346.06", "097.04 570.57", "972.51 230.23", "247.96 191.89", "808.61 538.58", "755.90 325.96", "842.73 974.27", "918.49 995.96", "361.17 109.91", "885.05 015.65", "206.26 337.22", "380.49 881.98", "998.29 322.09", "751.57 121.47", "895.65 664.97", "436.27 370.90", "165.43 236.59", "918.29 307.99", "454.19 189.40", "878.43 286.04", "557.57 309.50", "897.40 781.64", "973.93 611.21", "798.46 127.67", "869.61 151.21", "850.17 380.52", "444.21 005.98", "985.47 852.18", "695.61 109.37", "871.79 201.89", "238.79 374.78", "258.02 922.05", "932.23 473.77", "212.28 197.59"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> items = {"904.40 754.05", "810.44 603.60", "711.43 555.92", "654.81 456.15", "519.47 378.86", "909.16 733.95", "830.22 689.29", "760.50 509.88", "680.61 417.90", "574.49 387.71", "939.99 791.29", "809.26 699.00", "727.66 547.63", "658.96 428.14", "534.95 324.22", "946.40 754.13", "838.82 676.48", "741.73 527.37", "601.57 414.83", "506.58 335.98", "902.90 784.42", "834.30 671.77", "747.51 585.57", "610.70 449.48", "583.93 330.82", "957.92 760.51", "804.77 693.86", "714.62 515.12", "607.71 478.15", "585.88 357.83", "926.10 704.61", "864.55 662.57", "775.75 522.52", "606.32 434.31", "597.24 370.75", "964.63 727.37", "809.85 678.82", "761.90 547.91", "689.87 499.42", "564.75 314.01", "929.01 705.89", "830.01 671.81", "768.05 518.11", "683.09 499.48", "553.25 312.79", "957.35 708.12", "832.53 645.49", "754.89 541.54", "609.06 456.46", "541.32 366.21"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> items = {"650.07 865.28", "604.69 319.51", "471.42 016.22", "999.21 628.45", "827.20 651.72", "419.65 188.72", "393.43 515.37", "239.95 072.35", "486.56 464.25", "676.02 953.70", "213.33 050.29", "589.43 581.92", "670.57 264.75", "497.94 090.21", "109.04 454.56", "643.69 387.77", "346.03 325.56", "666.86 023.40", "934.49 570.27", "753.67 891.34", "802.40 074.33", "446.80 850.88", "775.03 584.82", "064.23 622.07", "773.45 423.42", "139.85 335.72", "980.32 517.92", "479.01 665.92", "725.83 216.71", "071.32 304.00", "877.77 053.77", "541.22 446.31", "930.08 359.98", "175.06 401.97", "043.28 764.39", "525.84 510.62", "879.57 599.88", "894.13 499.84", "959.63 316.58", "855.92 543.45", "336.76 937.81", "297.35 289.94", "791.49 495.76", "031.82 776.58", "797.62 590.40", "619.07 067.65", "588.67 136.70", "469.43 394.65", "428.54 560.24", "672.45 159.02"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> items = {"949.18 449.80", "445.49 905.04", "164.42 978.89", "204.31 497.67", "023.57 367.06", "124.58 957.75", "717.37 076.85", "688.95 741.45", "877.45 732.42", "736.56 376.15", "173.19 083.22", "022.96 762.93", "686.25 373.19", "828.44 944.56", "958.15 783.99", "877.50 309.61", "065.12 127.67", "555.66 256.56", "543.21 573.53", "472.98 411.39", "814.57 072.83", "839.15 293.54", "259.95 438.27", "095.23 928.70", "483.69 336.75", "192.00 965.90", "290.71 575.56", "614.17 341.13", "824.25 413.92", "441.61 410.99", "870.28 075.31", "833.55 098.41", "005.36 679.98", "078.12 631.36", "249.89 608.66", "986.63 452.44", "063.07 792.92", "836.93 574.63", "073.74 639.89", "516.03 382.69", "562.38 615.07", "126.61 035.13", "486.09 067.24", "892.05 086.80", "393.15 620.15", "484.08 306.25", "004.52 953.73", "524.04 076.00", "368.79 721.54", "686.33 102.64"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> items = {"416.84 001.83", "121.09 092.44", "530.80 070.45", "627.66 213.76", "976.08 694.54", "908.50 858.11", "573.35 179.76", "280.34 239.56", "616.84 283.82", "732.29 122.52", "492.43 788.84", "965.24 142.55", "928.06 911.19", "378.74 362.34", "690.32 578.94", "388.38 442.56", "103.18 754.28", "188.14 283.28", "768.51 618.87", "419.93 798.41", "851.68 707.03", "771.54 236.02", "563.48 847.60", "955.13 594.21", "719.86 520.15", "463.93 187.06", "701.42 793.14", "405.50 414.64", "101.51 669.39", "629.98 169.49", "591.34 377.85", "295.54 813.86", "260.35 854.71", "550.78 705.40", "960.73 654.15", "953.29 906.50", "725.01 394.03", "422.61 738.26", "642.99 309.97", "160.86 135.55", "127.58 021.96", "951.24 057.14", "452.65 981.65", "697.64 667.95", "392.63 988.62", "409.97 407.56", "246.20 288.19", "479.83 274.33", "696.78 518.29", "763.58 578.39"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> items = {"896.98 135.56", "138.92 144.98", "564.01 150.58", "138.94 118.58", "664.47 151.24", "972.67 134.58", "574.38 139.68", "037.69 124.67", "076.25 178.03", "952.30 133.22", "247.90 154.31", "131.06 163.76", "864.01 136.07", "823.53 148.99", "232.33 119.48", "726.15 180.68", "942.22 178.56", "799.14 126.56", "430.36 126.98", "685.80 157.73", "664.77 129.59", "712.84 179.97", "767.46 134.72", "958.33 127.79", "651.15 124.61", "369.10 116.00", "896.92 177.64", "621.93 197.17", "143.27 188.28", "929.71 160.14", "598.61 150.18", "942.37 195.03", "615.58 196.92", "062.95 130.56", "041.49 160.77", "330.11 122.73", "580.99 122.99", "095.33 130.51", "916.92 104.28", "270.49 183.68", "798.98 162.15", "314.85 130.09", "390.20 113.05", "374.19 105.61", "394.98 171.49", "818.34 174.44", "775.37 176.71", "890.86 114.59", "330.36 106.06", "096.75 112.10"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> items = {"599.50 571.24", "178.30 602.20", "842.42 795.11", "562.63 243.66", "773.70 542.78", "375.72 943.65", "613.19 633.99", "178.64 110.30", "188.65 271.73", "844.15 380.99", "208.07 530.59", "187.14 351.62", "458.06 566.67", "887.60 616.99", "527.25 470.74", "441.54 702.68", "948.92 976.76", "520.46 584.78", "022.39 809.18", "024.83 791.36", "900.04 775.35", "559.78 850.98", "991.50 429.77", "897.89 478.10", "367.23 500.82", "993.24 367.56", "635.43 601.41", "387.12 285.26", "735.05 064.91", "074.71 953.29", "469.39 477.92", "665.38 154.76", "594.16 531.15", "251.41 288.27", "285.81 319.08", "577.91 574.88", "905.34 654.79", "197.69 122.04", "251.17 464.84", "207.75 362.85", "787.41 524.70", "033.23 637.96", "345.01 219.69", "567.22 104.77", "673.02 885.77", "403.90 434.30", "308.35 045.41", "428.92 270.84", "925.33 577.93", "955.78 292.73"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> items = {"567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10", "567.89 432.10"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> items = {"500.00 250.01"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> items = {"999.99 099.99"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> items = {"999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.00", "999.99 000.01", "999.99 000.01", "999.98 000.01"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> items = {"099.99 001.00"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> items = {"999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "999.99 777.77", "000.99 777.77"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> items = {"777.77 666.66"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> items = {"999.99 768.99", "999.99 916.97", "999.99 873.95", "999.99 098.93", "999.99 904.91", "999.99 908.89", "999.99 136.87", "999.99 323.85", "999.99 046.83", "999.99 344.81", "999.99 912.79", "999.99 725.77", "999.99 302.75", "999.99 811.73", "999.99 624.71", "999.99 234.69", "999.99 040.67", "999.99 682.65", "999.99 206.63", "999.99 852.61", "999.99 445.59", "999.99 919.57", "999.99 469.55", "999.99 942.53", "999.99 204.51", "999.99 648.49", "999.99 142.47", "999.99 332.45", "999.99 552.43", "999.99 350.41", "999.99 524.39", "999.99 238.37", "999.99 174.35", "999.99 269.33", "999.99 591.31", "999.99 156.29", "999.99 182.27", "999.99 417.25", "999.99 884.23", "999.99 310.21", "999.99 384.19", "999.99 907.17", "999.99 736.15", "999.99 263.13", "999.99 334.11", "999.99 461.09", "999.99 280.07", "999.99 543.05", "999.99 222.03", "999.99 775.01"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> items = {"182.63 729.53", "664.40 710.06", "796.62 086.68", "579.75 267.41", "209.76 049.07", "888.46 276.03", "452.32 780.72", "194.38 353.27", "207.07 334.93", "961.19 309.69", "391.02 937.47", "560.29 782.37", "725.85 747.60", "709.80 475.12", "280.23 911.34", "016.61 335.19", "781.78 317.84", "933.25 619.95", "396.27 750.56", "226.51 492.27", "932.45 827.91", "422.24 090.26", "849.50 219.73", "869.10 412.32", "574.79 171.32", "716.88 810.98", "506.43 616.04", "854.24 534.86", "680.26 839.82", "962.50 533.15", "090.44 717.10", "678.69 642.85", "771.95 370.70", "670.83 654.36", "613.47 534.91", "160.28 575.64", "543.72 630.39", "690.26 079.66", "275.21 388.06", "570.87 470.40", "131.45 742.82", "009.55 205.00", "358.36 593.76", "319.45 441.84", "307.46 266.96", "924.97 046.53", "204.34 970.27", "758.49 687.47", "639.02 628.47", "477.82 300.62"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> items = {"799.94 787.18", "437.70 334.37", "981.48 236.65", "057.94 182.09", "263.03 359.70", "689.92 717.59", "554.24 053.27", "473.99 726.61", "721.62 555.30", "707.32 349.88", "635.92 467.14", "009.26 171.82", "352.09 653.54", "319.93 159.08", "638.55 484.76", "904.32 308.85", "219.12 248.37", "690.54 712.39", "121.56 488.28", "369.49 463.20", "201.27 699.05", "017.16 556.39", "497.63 602.24", "444.57 238.36", "337.36 604.24", "595.37 099.21", "366.94 539.58", "591.34 014.43", "094.52 164.20", "757.57 302.26", "187.23 344.78", "980.45 471.80", "487.13 664.98", "208.14 149.71", "971.93 942.24", "464.29 885.49", "669.49 483.55", "642.04 790.01", "640.18 919.55", "833.87 245.79", "133.55 934.13", "889.81 892.76", "959.25 969.63", "098.65 450.07", "507.40 820.21", "617.85 471.43", "663.62 000.03", "973.61 466.40", "721.62 819.17", "573.05 826.84"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> items = {"677.50 233.55", "266.15 521.28", "455.21 379.32", "701.67 300.87", "714.34 908.35", "972.61 398.25", "217.57 480.66", "739.18 638.48", "335.71 801.63", "804.55 413.47", "130.35 890.85", "841.51 232.51", "731.10 651.11", "845.07 008.29", "405.75 690.05", "170.49 126.43", "839.35 956.77", "539.20 682.61", "798.93 925.67", "062.91 788.38", "703.62 423.60", "459.46 249.92", "610.00 171.93", "165.42 006.38", "695.73 299.10", "391.39 346.63", "191.74 576.12", "593.06 847.85", "936.07 563.44", "954.04 061.69", "539.86 770.57", "840.47 725.16", "121.72 870.96", "071.15 702.05", "982.24 196.82", "494.87 966.97", "214.62 053.45", "065.48 259.83", "435.81 277.89", "430.19 536.07", "205.97 312.50", "895.37 877.75", "830.84 157.85", "728.21 563.91", "572.02 109.87", "780.77 514.49", "011.84 452.74", "524.74 684.69", "137.42 693.13", "437.73 128.39"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> items = {"803.44 135.06", "004.30 060.19", "115.11 357.84", "876.31 246.76", "488.01 117.32", "845.37 692.47", "844.57 773.55", "125.92 623.55", "840.59 728.28", "602.25 125.69", "071.56 631.18", "694.65 469.28", "900.35 647.10", "637.08 563.67", "359.81 629.76", "767.89 263.19", "572.49 215.70", "505.68 842.81", "977.87 623.13", "462.80 223.99", "360.84 098.37", "946.62 424.93", "941.12 355.77", "623.61 872.82", "986.54 099.61", "455.68 914.68", "333.69 468.65", "075.64 986.04", "759.43 034.62", "595.85 644.52", "171.66 574.18", "903.04 600.26", "275.97 351.92", "500.68 825.25", "336.84 266.29", "368.85 833.12", "574.73 257.00", "555.34 952.60", "316.49 225.53", "722.40 687.58", "904.53 061.24", "165.70 714.28", "711.05 386.25", "448.01 307.45", "271.75 348.78"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> items = {"170.72 188.76", "606.44 231.86", "696.75 496.76", "075.24 934.83", "265.82 906.21", "490.06 665.43", "363.88 982.48", "786.27 929.56", "095.31 398.15", "362.87 087.44", "712.34 128.37", "658.28 279.00", "557.74 492.34", "805.03 126.17", "582.62 189.00", "255.94 154.58", "838.56 190.90", "758.91 001.23", "140.83 508.95", "891.64 793.79", "646.63 776.01", "117.19 061.07", "986.06 375.86", "440.01 590.39", "142.06 424.52", "242.84 013.52", "926.12 794.94", "529.02 744.19", "656.04 207.68", "970.81 472.07", "669.78 242.68", "353.95 928.90", "807.88 046.25", "593.46 163.33", "188.68 580.57", "039.93 008.82", "533.87 214.56", "984.94 244.22", "147.34 136.13", "066.66 587.13", "303.79 706.44", "771.70 705.31", "859.61 549.25", "458.75 977.51", "178.45 917.66"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> items = {"693.17 425.47", "732.20 741.94", "781.93 220.30", "579.60 592.36", "411.54 210.23", "971.88 833.79", "906.49 630.08", "212.06 210.86", "653.66 729.61", "114.66 641.54", "347.14 097.80", "537.89 743.52", "754.34 080.33", "529.46 805.38", "683.57 701.87", "675.90 518.94", "169.31 703.43", "124.79 129.40", "997.29 432.72", "721.85 676.71", "815.59 583.44", "514.25 518.50", "242.34 573.65", "398.07 475.21", "254.69 810.98", "815.37 434.51", "700.02 299.72", "299.85 096.10", "544.19 234.58", "270.79 678.44", "783.49 250.88", "542.56 761.73", "722.90 637.29", "340.68 865.14", "920.69 005.79", "182.39 775.19", "765.82 390.11", "273.64 156.04", "133.97 136.96", "982.46 606.64", "741.21 676.50", "733.52 308.81", "159.90 252.44", "430.27 715.99", "622.07 339.41", "719.40 027.38", "241.46 479.67", "831.03 596.25", "656.11 824.87", "131.67 477.13"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> items = {"178.14 229.27", "623.73 303.31", "167.04 185.26", "225.36 540.36", "351.02 222.05", "551.35 636.26", "770.22 236.66", "831.85 727.04", "569.51 804.35", "992.31 395.58", "421.70 525.64", "190.96 869.01", "320.87 179.93", "645.01 496.36", "427.31 169.26", "789.37 174.56", "840.55 234.06", "400.13 772.39", "460.79 166.33", "830.60 805.10", "363.37 574.01", "619.60 556.68", "403.26 899.82", "518.67 454.47", "600.68 163.92", "614.75 316.21", "335.92 799.64", "744.92 109.89", "443.02 335.77", "982.39 059.34", "220.91 841.35", "179.39 542.83", "771.12 280.91", "645.64 388.94", "823.37 461.47", "356.78 586.09", "444.50 841.83", "725.07 145.60", "235.00 310.41", "748.61 765.34", "828.62 218.58", "693.52 015.87", "403.86 594.24", "837.11 885.05", "205.86 859.43", "943.93 152.59", "684.59 397.39", "589.08 813.67", "841.05 243.89", "197.94 875.60"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> items = {"355.89 132.76", "969.03 411.52", "426.14 524.21", "859.43 057.34", "720.72 035.70", "764.79 001.43", "438.39 446.39", "701.37 592.29", "647.01 612.95", "750.71 135.86", "897.94 046.18", "572.48 029.03", "498.96 100.88", "449.73 649.27", "294.25 207.30", "429.23 243.02", "287.36 692.43", "742.56 787.63", "587.11 497.49", "307.83 715.95", "489.56 744.63", "761.97 498.35", "935.61 144.83", "384.03 200.66", "354.46 516.14", "789.17 541.52", "872.09 209.88", "416.07 640.05", "946.67 371.65", "722.73 755.35", "296.01 647.45", "911.38 467.14", "268.65 303.93", "852.57 311.57", "229.95 173.88", "714.59 099.50", "237.60 441.79", "561.05 415.99", "582.05 424.17", "240.32 596.49", "755.87 448.75", "813.43 167.50", "246.69 699.54", "801.51 795.97", "390.84 392.25", "261.82 074.14", "416.98 308.50", "389.78 328.84", "322.61 680.00", "403.22 202.27"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> items = {"376.99 115.69", "735.87 798.93", "878.60 105.61", "830.22 235.70", "665.26 257.24", "431.11 064.12", "577.62 785.45", "334.45 092.21", "244.25 263.29", "577.25 733.80", "763.52 091.21", "928.94 772.91", "269.19 424.02", "218.98 717.45", "398.99 248.73", "610.12 176.79", "840.95 029.08", "418.42 398.96", "617.62 592.96", "972.48 040.76", "537.98 107.09", "361.42 151.74", "313.25 421.41", "454.76 696.11", "689.92 169.44", "535.95 639.39", "237.71 512.25", "903.41 657.51", "714.02 427.18", "421.59 692.63", "335.17 674.74", "917.03 728.83", "277.12 063.14", "488.39 718.21", "594.29 363.74", "353.67 053.16", "706.75 459.67", "616.46 234.31", "628.41 728.05", "207.29 504.49", "362.02 605.43", "258.71 145.15", "477.01 054.31", "567.78 580.82", "879.46 470.58", "587.68 455.48", "294.57 565.54", "513.17 316.29", "299.38 143.48", "900.95 143.42"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> items = {"928.53 035.81", "312.06 320.85", "619.76 197.31", "664.73 177.47", "468.26 639.51", "364.73 382.04", "712.99 188.54", "373.52 615.08", "584.35 266.18", "679.68 149.09", "679.82 084.60", "869.91 669.40", "569.95 319.64", "721.00 510.29", "565.25 604.85", "883.59 120.81", "595.01 662.80", "816.05 097.08", "566.81 265.76", "567.16 294.29", "752.48 687.68", "816.59 627.52", "718.35 546.06", "984.92 683.16", "617.08 491.84", "948.37 311.13", "481.49 689.61", "304.50 339.61", "417.44 675.80", "308.94 544.63", "833.28 074.63", "824.56 125.52", "753.36 321.48", "442.96 146.62", "345.61 063.94", "369.80 284.94", "558.76 012.28", "944.10 256.06", "852.26 106.91", "748.03 284.63", "829.84 131.75", "501.14 066.57", "491.59 019.09", "651.15 621.62", "354.77 585.45", "634.58 511.53", "498.13 497.77", "933.33 631.77", "992.34 295.36", "537.97 276.84"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> items = {"992.45 394.66", "728.13 273.74", "422.75 210.76", "526.59 348.72", "805.43 291.38", "711.10 041.83", "616.88 512.51", "701.46 147.80", "853.79 053.56", "677.45 219.07", "499.13 380.56", "434.30 377.85", "564.31 014.93", "593.42 221.69", "582.54 001.38", "895.32 455.46", "687.34 128.40", "749.19 150.69", "478.52 059.90", "990.45 257.50", "726.04 151.92", "601.07 545.43", "715.75 212.96", "401.01 306.89", "811.13 568.40", "913.08 021.33", "674.30 500.50", "761.39 548.70", "623.23 527.45", "565.79 169.71", "407.55 529.71", "774.41 556.62", "998.88 454.94", "615.79 461.23", "733.98 085.06", "546.82 480.19", "493.16 045.56", "601.39 187.78", "864.26 384.91", "832.97 313.66", "569.22 440.83", "441.58 448.43", "408.49 572.85", "514.84 480.68", "562.43 427.19", "459.11 189.19", "820.82 243.42", "991.46 288.21", "546.95 004.91", "536.34 200.36"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> items = {"816.29 139.82", "878.56 182.30", "835.74 300.16", "719.84 369.96", "623.19 138.68", "542.81 164.80", "521.02 288.78", "602.02 237.29", "544.92 059.96", "608.42 122.11", "581.58 393.23", "887.77 045.14", "646.18 322.04", "832.58 209.75", "703.99 214.72", "806.42 244.14", "559.42 484.86", "908.42 373.24", "827.68 452.57", "864.82 371.26", "948.78 257.89", "961.14 400.37", "923.30 317.15", "509.69 085.76", "614.82 194.13", "705.73 256.66", "646.30 130.30", "912.51 161.17", "639.30 406.08", "942.17 490.74", "767.61 430.24", "987.93 435.76", "822.85 426.19", "537.70 185.10", "900.89 375.05", "869.54 468.09", "524.71 180.19", "702.30 380.09", "735.60 108.90", "792.27 087.50", "982.13 061.57", "722.90 300.12", "711.65 013.09", "597.02 258.50", "784.09 432.46", "989.74 407.00", "651.55 070.53", "733.63 208.46", "604.88 028.82", "560.12 281.03"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> items = {"983.59 168.84", "954.06 332.31", "962.88 054.03", "852.92 138.91", "649.94 309.93", "842.44 289.41", "706.79 184.99", "863.75 347.93", "919.56 356.51", "783.65 275.98", "874.94 100.91", "723.47 172.94", "994.85 124.61", "820.73 284.67", "719.05 035.03", "952.43 158.34", "758.24 003.87", "650.48 221.33", "640.80 078.62", "670.01 242.92", "920.18 290.12", "789.88 368.72", "819.02 356.34", "948.15 095.12", "982.86 104.97", "899.62 399.14", "920.45 144.25", "744.14 024.73", "855.53 182.61", "814.87 164.80", "774.58 383.57", "692.34 224.00", "694.47 353.53", "670.02 112.67", "748.48 122.12", "991.73 309.48", "885.51 162.22", "738.29 091.10", "842.71 183.63", "713.86 004.92", "627.64 353.06", "660.86 154.84", "705.30 190.70", "673.43 138.35", "694.69 014.40", "842.59 280.57", "794.63 058.88", "879.83 007.54", "950.13 151.40", "950.73 378.68"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> items = {"001.99 000.98"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> items = {"822.77 704.86", "829.42 355.45", "887.18 949.38"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> items = {"199.99 120.14"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> items = {"612.72 941.34", "576.46 182.66", "787.41 524.70", "637.96 333.23", "345.01 219.69", "567.22 104.77", "673.02 885.77"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> items = {"811.22 275.32", "433.89 006.48", "141.28 967.41", "344.47 786.23", "897.47 860.61", "007.42 559.29", "255.72 460.00", "419.35 931.19", "419.25 490.52", "199.78 114.44", "505.63 276.58", "720.96 735.00", "719.90 824.46", "816.58 195.94", "498.68 453.05", "399.48 921.39", "930.88 017.63", "422.20 075.39", "380.22 917.27", "630.83 995.87", "821.07 126.87", "715.73 985.62", "246.23 134.64", "168.28 550.33", "707.28 046.72", "117.76 281.87", "595.43 410.45", "345.28 532.42", "554.24 264.34", "195.73 814.87", "131.98 041.28", "595.13 939.47", "576.04 107.70", "716.00 404.75", "524.24 029.96", "673.49 070.97", "288.09 849.43", "616.34 236.34", "401.96 316.33", "371.18 014.27", "809.63 508.33", "375.68 290.84", "334.66 477.89", "689.54 526.35", "084.77 316.51", "304.76 015.91", "460.63 636.56", "357.84 436.20", "752.24 047.64", "922.10 573.12"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> items = {"012.99 008.73", "099.99 050.00", "123.45 101.07"};
    MarginCalculator* pObj = new MarginCalculator();
    clock_t start = clock();
    int result = pObj->percent(items);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}



int main(int argc, char* argv[]) {
    int passed = 0;
    int failed = 0;
    test0() == 0 ? ++passed : ++failed;
    test1() == 0 ? ++passed : ++failed;
    test2() == 0 ? ++passed : ++failed;
    test3() == 0 ? ++passed : ++failed;
    test4() == 0 ? ++passed : ++failed;
    test5() == 0 ? ++passed : ++failed;
    test6() == 0 ? ++passed : ++failed;
    test7() == 0 ? ++passed : ++failed;
    test8() == 0 ? ++passed : ++failed;
    test9() == 0 ? ++passed : ++failed;
    test10() == 0 ? ++passed : ++failed;
    test11() == 0 ? ++passed : ++failed;
    test12() == 0 ? ++passed : ++failed;
    test13() == 0 ? ++passed : ++failed;
    test14() == 0 ? ++passed : ++failed;
    test15() == 0 ? ++passed : ++failed;
    test16() == 0 ? ++passed : ++failed;
    test17() == 0 ? ++passed : ++failed;
    test18() == 0 ? ++passed : ++failed;
    test19() == 0 ? ++passed : ++failed;
    test20() == 0 ? ++passed : ++failed;
    test21() == 0 ? ++passed : ++failed;
    test22() == 0 ? ++passed : ++failed;
    test23() == 0 ? ++passed : ++failed;
    test24() == 0 ? ++passed : ++failed;
    test25() == 0 ? ++passed : ++failed;
    test26() == 0 ? ++passed : ++failed;
    test27() == 0 ? ++passed : ++failed;
    test28() == 0 ? ++passed : ++failed;
    test29() == 0 ? ++passed : ++failed;
    test30() == 0 ? ++passed : ++failed;
    test31() == 0 ? ++passed : ++failed;
    test32() == 0 ? ++passed : ++failed;
    test33() == 0 ? ++passed : ++failed;
    test34() == 0 ? ++passed : ++failed;
    test35() == 0 ? ++passed : ++failed;
    test36() == 0 ? ++passed : ++failed;
    test37() == 0 ? ++passed : ++failed;
    test38() == 0 ? ++passed : ++failed;
    test39() == 0 ? ++passed : ++failed;
    test40() == 0 ? ++passed : ++failed;
    test41() == 0 ? ++passed : ++failed;
    test42() == 0 ? ++passed : ++failed;
    test43() == 0 ? ++passed : ++failed;
    test44() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10481599&rd=6517&pm=1768
********************************************************************************
#include <vector>
#include <string>
 
using namespace std;
 
class ProfitCalculator
{
  public:
    int percent(vector<string> items);
};
 
int ProfitCalculator::percent(vector<string> items)
{
  int i, size;
  float p, c;
  double tp, tc;
  double profit;
  
  tp = 0;
  tc = 0;
  size = items.size();
  for (i = 0; i < size; i++)
  {
    sscanf(items[i].c_str(), "%f %f", &p, &c);
    tp = tp + p;
    tc = tc + c;
  }
 
  profit = tp - tc;
  return ((int) (profit * 100.0 / tp));
}

********************************************************************************
*******************************************************************************/