/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8400
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

class DownloadingFiles {
public:
    double actualTime(vector<string> tasks);
};

double DownloadingFiles::actualTime(vector<string> tasks) {
    double ret;
    return ret;
}


int test0() {
    vector<string> tasks = {"3 57", "2 22"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 43.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> tasks = {"3 1057", "2 1022"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 1043.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> tasks = {"25 1000", "5 5000", "10 5000"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 2500.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> tasks = {"1 10", "1 20", "2 40"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 27.5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> tasks = {"6 88", "39 7057", "63 2502", "45 2285", "28 8749", "62 3636", "1 5546", "49 5741"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4414.542662116041;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> tasks = {"6 88"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 88.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> tasks = {"39 7057", "63 2502"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4243.617647058823;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> tasks = {"45 2285", "28 8749", "62 3636"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4246.1407407407405;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> tasks = {"1 5546", "49 5741", "52 7999", "3 458"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 6706.447619047619;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> tasks = {"62 8369", "54 7503", "66 8127", "1 830", "75 8548"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 8148.6511627906975;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> tasks = {"30 4693", "58 3199", "71 715", "29 1681", "2 5606", "94 7094"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 3886.950704225352;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> tasks = {"83 9185", "59 9351", "91 3388", "38 2783", "6 4260", "67 3117", "1 4661"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 5701.988405797101;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> tasks = {"94 3786", "14 9853", "58 6204", "99 1394", "55 8873", "93 4263", "80 3984", "48 7723"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4742.258780036968;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> tasks = {"30 8949", "62 850", "25 2795", "42 7241", "48 8247", "19 1956", "99 5842", "45 2474", "52 2799"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4652.6611374407585;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> tasks = {"42 2227", "5 4046", "12 4209", "29 3664", "59 3501", "9 9068", "69 5315", "49 3585", "53 1856", "51 4045"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 3718.94708994709;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> tasks = {"56 2731", "3 6270", "81 6850", "59 4183", "84 1622", "89 6149", "1 5066", "31 1842", "18 6184", "47 314", "26 7541"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4123.648484848485;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> tasks = {"35 9788", "64 1990", "70 9859", "71 5971", "80 5542", "47 7754", "58 3853", "28 1095", "77 7285", "25 1410", "61 8869", "43 1562"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 5842.660091047041;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> tasks = {"73 6402", "83 4529", "57 80", "82 8808", "63 8810", "48 8285", "18 7284", "68 5809", "12 5694", "69 1599", "46 5884", "99 7386", "41 260"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 5586.429512516469;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> tasks = {"56 3606", "63 9415", "17 8218", "30 500", "57 6148", "45 3178", "48 269", "25 9228", "87 1662", "29 4954", "92 8996", "8 8877", "96 6017", "6 4066"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 5274.326251896813;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> tasks = {"32 1731", "26 2492", "16 1368", "68 291", "5 9314", "87 5649", "3 2103", "68 6639", "74 8204", "76 1179", "28 2052", "6 2621", "59 6467", "48 6507", "82 4152"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4368.56784660767;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> tasks = {"19 6297", "26 7914", "33 9332", "63 5858", "83 2961", "21 2442", "88 4865", "100 388", "61 2617", "14 9438", "96 7999", "67 772", "66 9623", "13 8007", "71 3199", "65 1613"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4457.067720090294;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> tasks = {"73 1751", "49 5800", "86 4870", "32 1323", "61 168", "79 1275", "68 9900", "10 1458", "65 3918", "82 4106", "55 7296", "48 6072", "64 414", "70 5638", "74 610", "100 5398", "59 5797"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4003.859534883721;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> tasks = {"69 8564", "100 7464", "43 12", "30 850", "89 27", "20 6778", "12 9930", "95 7399", "64 5656", "78 5414", "67 8663", "29 7340", "6 3003", "13 828", "19 510", "14 619", "19 7159", "47 1443"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 5100.610565110565;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> tasks = {"33 1099", "85 5221", "98 7925", "91 1954", "98 4579", "5 6108", "39 8081", "52 4664", "32 7882", "96 5095", "33 5979", "63 2981", "10 5034", "13 1825", "93 1383", "92 2638", "16 9619", "3 2458", "81 5806"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4525.540174249758;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> tasks = {"22 1693", "44 6645", "91 9908", "22 5916", "83 4399", "36 8295", "10 3496", "59 2064", "60 4933", "69 2292", "41 6303", "24 3279", "87 8387", "61 1369", "95 3017", "80 5056", "44 2692", "74 8760", "58 6553", "27 2545"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 5237.236430542778;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> tasks = {"71 9939", "85 1400", "22 7478", "61 6529", "97 515", "48 5299", "85 9900", "41 6500", "11 9224", "48 3543", "18 6313", "38 4834", "78 1452", "28 6021", "82 6145", "97 6360", "73 9804", "4 7317", "89 4331", "45 7958", "90 5064"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 5545.464905037159;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> tasks = {"43 8464", "46 2513", "2 2480", "97 2727", "10 260", "99 3044", "59 381", "35 2144", "62 451", "82 6677", "44 1834", "37 5090", "30 4165", "79 1997", "17 2712", "14 5420", "2 5889", "60 4694", "4 3194", "73 2438", "57 2568", "75 96"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 2957.5920155793574;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> tasks = {"19 7480", "84 1511", "80 2699", "15 1261", "44 1214", "30 4556", "85 8688", "95 5237", "83 5998", "98 4391", "21 8609", "6 2115", "40 9466", "86 638", "23 1212", "21 5638", "86 2459", "53 3960", "70 4180", "80 2593", "5 5597", "17 4003", "39 2862"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4034.263559322034;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> tasks = {"86 6699", "81 800", "65 1825", "45 1813", "36 7264", "65 7129", "76 1110", "14 8327", "22 6798", "100 494", "57 940", "69 4934", "86 1256", "3 1086", "81 7967", "10 7288", "39 9687", "45 3415", "60 8002", "32 5927", "80 8820", "38 8094", "44 9144", "60 1281"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4546.3941267387945;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> tasks = {"2 7519", "29 9002", "37 5403", "59 1929", "77 5724", "43 5401", "99 9720", "68 5028", "15 1552", "49 6218", "87 7473", "59 9998", "67 2280", "49 4817", "74 3226", "35 8835", "60 6867", "74 7014", "60 733", "42 1830", "76 1283", "99 8502", "38 8502", "28 8845", "82 304"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 5439.272727272727;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> tasks = {"56 6593", "37 3527", "87 2770", "44 1028", "85 3066", "13 1653", "65 9444", "33 9024", "37 8571", "79 7353", "100 996", "75 6646", "72 6430", "55 7824", "89 120", "51 9069", "34 8004", "31 956", "86 5452", "20 8032", "2 1922", "98 3153", "89 8492", "36 3295", "83 3791", "41 7193"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 5053.617489986649;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> tasks = {"99 4411", "48 109", "71 1304", "66 2704", "1 2703", "2 6096", "83 7228", "40 6056", "82 7875", "90 9684", "84 5472", "88 726", "31 5523", "54 4104", "45 6108", "83 2611", "85 5060", "32 2319", "26 252", "74 1356", "27 137", "96 1985", "67 1585", "32 5554", "78 2335", "48 9191", "83 2189"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 3956.4377708978327;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> tasks = {"32 3339", "95 2546", "50 995", "53 9498", "33 5776", "24 4550", "82 7350", "43 6483", "43 6269", "79 127", "29 9687", "50 1705", "29 5988", "29 824", "30 7651", "51 2784", "73 7002", "69 5728", "57 8631", "37 5711", "74 2056", "91 6953", "19 3320", "52 9284", "59 8667", "85 4536", "40 2812", "28 5998"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 5164.121169916434;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> tasks = {"77 9860", "5 3959", "50 1278", "4 4049", "76 8153", "89 8166", "51 1262", "92 5349", "82 1090", "82 7733", "10 1774", "55 183", "31 1277", "57 460", "74 7318", "29 1719", "48 5643", "57 7588", "89 4177", "58 3320", "65 273", "71 9883", "15 3790", "13 6788", "91 5720", "40 7587", "25 3840", "82 2325", "98 29"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4589.220915841584;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> tasks = {"87 3619", "50 1518", "45 1132", "35 8849", "21 1717", "10 4500", "61 4014", "15 2810", "19 599", "5 3472", "94 7250", "22 3056", "23 8602", "44 8533", "99 6629", "46 657", "51 2198", "97 1612", "73 886", "58 8190", "13 516", "10 9358", "25 7322", "35 6715", "49 4194", "19 5451", "58 6201", "90 4483", "74 2563", "88 7223"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4506.175847457627;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> tasks = {"33 4559", "27 9330", "74 8540", "15 6151", "67 1564", "24 6649", "97 616", "32 7145", "63 4981", "48 8910", "58 4245", "94 1689", "33 1952", "33 9049", "81 5413", "17 6396", "80 6428", "14 6488", "26 4686", "79 1577", "20 3670", "1 5947", "57 5578", "54 9675", "53 341", "43 585", "28 1255", "45 4800", "7 3360", "11 8377", "53 2792"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4436.912948061448;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> tasks = {"30 4893", "68 322", "3 1306", "64 9602", "37 3912", "89 9949", "47 1004", "53 352", "64 8349", "73 8996", "59 1669", "88 9888", "86 5290", "36 2592", "45 1757", "40 7268", "40 4978", "57 2108", "49 4466", "61 6418", "46 7069", "28 6456", "7 9316", "1 2356", "27 5223", "97 2618", "97 826", "19 1737", "81 7709", "8 2360", "79 8283", "15 8338"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 5266.513801756587;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> tasks = {"58 195", "71 6495", "29 2614", "67 726", "70 80", "91 5327", "56 6043", "94 5934", "11 1936", "67 3421", "81 5455", "80 3625", "95 2801", "11 8688", "76 3020", "30 5193", "77 3047", "34 1509", "46 1135", "20 9508", "44 7097", "33 3707", "20 616", "42 9589", "91 8018", "58 2471", "90 1694", "82 1000", "36 8128", "97 8145", "97 7000", "54 8417", "61 88"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4276.141188420518;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> tasks = {"38 181", "93 5221", "71 2214", "49 4624", "69 355", "87 3973", "39 1521", "88 2579", "41 303", "96 2717", "51 1775", "19 1905", "18 610", "89 5527", "69 8291", "45 5756", "4 1623", "85 7728", "19 2451", "69 4284", "89 6271", "66 3016", "59 9626", "89 5388", "22 4606", "97 2133", "94 5253", "100 9163", "91 9275", "57 5409", "77 7558", "41 2380", "54 1028", "31 5783"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4682.686134852802;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> tasks = {"82 756", "63 2822", "72 4072", "25 8922", "60 425", "63 8565", "72 5307", "74 7822", "34 434", "9 5591", "66 7877", "32 3885", "24 7586", "71 9104", "73 8595", "63 787", "55 4592", "31 4870", "2 1381", "55 8835", "80 2901", "13 6581", "59 5646", "42 9168", "13 1551", "16 1997", "56 3463", "99 772", "8 4976", "56 1263", "82 604", "68 1805", "22 1119", "14 1876", "27 1902"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4242.897679952409;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> tasks = {"5 8634", "9 8502", "88 1798", "87 2175", "31 8754", "18 3154", "97 1540", "46 3626", "70 3550", "44 4951", "35 8243", "31 6648", "59 3242", "43 1658", "60 1480", "95 9883", "82 8473", "18 7300", "8 1694", "56 7527", "1 3438", "85 6102", "5 2502", "46 9268", "12 6739", "23 7967", "45 82", "38 6862", "39 7173", "30 9991", "56 2601", "82 2885", "15 4470", "90 1832", "32 3334", "66 9341"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4875.671523982999;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> tasks = {"65 1578", "2 1568", "99 8281", "2 4607", "17 3595", "27 5873", "37 9173", "86 9158", "1 9941", "79 1297", "99 352", "36 9011", "23 4250", "99 6026", "97 7206", "81 1338", "99 7503", "69 1498", "76 4630", "93 4402", "34 3341", "47 2980", "97 3028", "54 3065", "64 6625", "30 7677", "24 9429", "33 9678", "87 4173", "60 9040", "78 7846", "1 549", "30 7045", "39 3691", "80 7957", "27 3958", "39 2242"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 5210.930880159125;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> tasks = {"91 4992", "21 4278", "60 3118", "69 3810", "43 3701", "44 9648", "18 9612", "75 2102", "5 1428", "92 5982", "55 4550", "78 4771", "10 1179", "22 1486", "79 4658", "60 4226", "19 77", "14 677", "47 9933", "15 4048", "95 8096", "7 409", "61 4087", "78 9103", "86 3437", "94 6389", "5 1461", "89 6755", "63 1155", "23 9097", "27 1198", "83 5797", "3 564", "20 5095", "95 1903", "59 4163", "4 6518", "40 71"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4804.315846403461;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> tasks = {"7 1687", "13 6046", "31 9476", "17 4500", "81 8251", "96 5035", "98 7738", "14 7021", "42 515", "91 6659", "99 5708", "22 2757", "80 730", "49 6947", "11 1552", "40 2740", "29 8770", "19 7004", "56 3647", "33 8099", "5 1359", "94 5924", "28 1977", "28 6611", "64 3927", "82 5251", "11 1694", "13 1239", "46 9737", "52 9463", "5 2709", "82 4246", "29 546", "97 7553", "22 9752", "85 2858", "75 4377", "97 1702", "79 7382"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 5313.035379812695;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> tasks = {"77 4339", "97 533", "53 1519", "28 7168", "92 1541", "69 8945", "33 9209", "20 9197", "10 7238", "81 2767", "98 2005", "75 2983", "93 6801", "13 3138", "45 3385", "33 3323", "44 9029", "45 7202", "51 6909", "84 9404", "64 1478", "21 9996", "43 6255", "78 7153", "14 3947", "88 8959", "71 639", "40 995", "18 3071", "77 9553", "3 1796", "81 7167", "85 7393", "13 9656", "84 1606", "64 906", "45 9524", "78 5073", "23 8338", "78 4104"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 5047.290176550476;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> tasks = {"88 2799", "17 8732", "84 6313", "62 5604", "28 7165", "22 6078", "59 2656", "98 443", "1 1262", "99 8622", "86 1761", "69 2801", "54 965", "44 2440", "76 233", "71 2810", "100 1800", "70 5006", "64 4009", "31 2786", "63 2467", "71 8481", "92 8725", "10 8838", "96 9286", "4 6444", "43 7800", "81 4217", "87 4514", "92 2602", "91 5454", "23 192", "59 5775", "14 8475", "95 4056", "89 6518", "5 4713", "10 307", "71 7035", "92 4968", "17 6303"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4591.174629324547;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> tasks = {"64 475", "35 6113", "66 2906", "14 5699", "56 4910", "84 3479", "49 4561", "49 8508", "49 5917", "86 7214", "90 3863", "77 7527", "94 9484", "87 5050", "64 6682", "85 6738", "8 8610", "67 7366", "71 9084", "40 703", "74 2029", "90 829", "45 2229", "61 599", "71 4651", "1 2978", "8 9885", "9 4116", "7 642", "61 7274", "98 451", "92 4598", "2 361", "98 8189", "59 1592", "88 8064", "12 9933", "10 1688", "59 900", "91 2232", "12 5310", "63 654"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4671.001278772378;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> tasks = {"30 3808", "69 1114", "65 31", "33 4178", "82 9675", "41 7317", "8 7481", "13 6718", "8 7270", "43 1436", "40 6840", "59 2816", "83 2439", "13 2550", "100 9068", "53 7208", "23 9017", "7 9199", "88 1674", "66 4971", "52 2986", "40 1909", "21 569", "56 7059", "81 4348", "8 9596", "88 5349", "18 4172", "97 1173", "4 1978", "31 7648", "75 6649", "77 8591", "68 9708", "89 1211", "84 3133", "60 409", "6 511", "36 5233", "90 354", "18 756", "53 904", "22 301"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4233.7807435653;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> tasks = {"18 4454", "93 2823", "19 8828", "97 1615", "88 1721", "91 2539", "50 9097", "82 987", "100 8112", "74 6127", "95 379", "47 1466", "40 949", "47 5813", "22 7143", "5 919", "20 3860", "47 1107", "16 2068", "27 3779", "12 1135", "81 7796", "49 6173", "48 7729", "18 8091", "42 9557", "70 6657", "45 5963", "85 4690", "8 4072", "72 9683", "1 3131", "71 4095", "48 2836", "31 250", "11 1331", "24 5109", "79 994", "41 7634", "99 5942", "65 2760", "96 1505", "4 1305", "22 9804"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4327.294090909091;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> tasks = {"98 8930", "25 4244", "27 5010", "6 7250", "12 2831", "38 5583", "5 9813", "38 3703", "88 897", "1 2925", "5 6990", "48 3440", "94 3309", "53 2477", "8 9706", "34 1845", "39 9756", "70 6433", "90 4733", "43 8595", "7 2012", "70 14", "54 4015", "69 6408", "63 652", "44 1310", "29 3946", "69 8585", "44 9667", "7 7137", "35 6829", "5 1487", "95 9226", "63 8743", "70 2812", "78 1334", "75 9549", "17 328", "1 9534", "54 5501", "30 1870", "18 796", "10 5022", "8 281", "52 498"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4866.860772895712;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> tasks = {"4 9843", "76 5530", "55 4209", "74 3666", "44 7903", "14 3863", "99 7411", "29 2091", "65 1045", "75 5403", "51 3118", "93 6943", "52 5728", "84 1857", "36 9046", "38 434", "38 4653", "68 8249", "72 6036", "46 8141", "30 336", "79 9317", "64 9315", "4 7790", "16 4686", "47 3006", "79 9172", "46 838", "58 144", "94 3981", "96 4874", "85 1146", "55 7015", "51 5314", "76 767", "32 6451", "55 9394", "65 4032", "30 2845", "25 6302", "89 698", "62 1614", "89 6886", "12 1725", "61 3942", "57 3272"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4764.940077821012;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> tasks = {"26 9372", "30 275", "78 4839", "72 4940", "83 1050", "83 3900", "73 8126", "39 9678", "53 2649", "11 6019", "83 2689", "39 84", "67 2796", "33 9274", "35 554", "64 6731", "33 9157", "68 1430", "82 199", "88 2160", "46 7309", "100 4527", "46 3739", "13 5816", "54 5616", "67 4068", "48 8427", "3 697", "28 6750", "10 9126", "6 3730", "80 6478", "53 9692", "20 8024", "25 9326", "62 8198", "79 6049", "18 1110", "92 3137", "77 7126", "87 7481", "93 6315", "15 8145", "22 2547", "24 6373", "66 1192", "44 7992"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4937.60752688172;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> tasks = {"12 2520", "54 4217", "93 3908", "14 3685", "63 5558", "99 4317", "87 2391", "73 7385", "84 3407", "69 4525", "76 126", "32 9002", "35 9850", "99 5368", "86 1354", "75 6484", "41 8915", "7 2053", "24 4433", "1 8899", "34 168", "19 6937", "19 9691", "71 4474", "73 9581", "21 802", "29 1606", "27 2319", "23 7480", "37 7984", "41 2530", "66 4812", "19 8677", "47 7526", "36 9222", "58 1984", "64 308", "54 7582", "15 6458", "13 7628", "81 150", "57 1986", "55 5595", "12 9111", "9 7123", "14 1780", "28 5306", "5 2746"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4558.751278475128;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> tasks = {"73 8871", "71 6583", "10 1100", "5 2420", "9 2145", "47 7699", "99 1483", "11 3160", "59 275", "95 3221", "15 1204", "47 7322", "22 3893", "78 7628", "66 2840", "60 9749", "72 4449", "12 173", "54 7163", "10 6616", "68 8664", "44 4816", "22 3992", "88 917", "93 236", "50 6801", "92 746", "44 9056", "65 9716", "37 1408", "36 5957", "82 6678", "27 8251", "2 2562", "95 475", "57 675", "82 3505", "88 4238", "25 4711", "90 1067", "15 7128", "2 4496", "63 3574", "59 8882", "47 7177", "36 3385", "38 5288", "5 9620", "51 2701"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4447.767162944582;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> tasks = {"37 4093", "22 1140", "79 2094", "98 5428", "86 7348", "35 8641", "8 4546", "26 1473", "62 6921", "59 9470", "68 2759", "87 5675", "81 6062", "31 7435", "12 6055", "3 878", "14 5654", "46 6925", "58 5296", "37 8312", "48 3306", "41 1214", "46 3683", "38 6141", "12 5237", "38 5258", "28 9112", "42 804", "81 5255", "31 2196", "100 3159", "48 9911", "91 5910", "100 8175", "91 2705", "94 2855", "81 7352", "91 4902", "97 501", "34 3589", "95 1147", "77 6500", "41 523", "80 2202", "9 2861", "48 1948", "15 5037", "90 5888", "66 2372", "11 8434"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4671.076667895319;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> tasks = {"100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000", "100 10000"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 10000.0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> tasks = {"3 1057", "2 1022"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 1043.0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> tasks = {"6 88", "39 7057", "63 2502", "45 2285", "28 8749", "62 3636", "1 5546", "49 5741"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 4414.542662116041;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> tasks = {"3 57", "2 1001"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 434.6;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> tasks = {"1 10", "2 10", "3 20", "4 20", "5 30"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 21.333333333333332;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> tasks = {"2 22", "3 57", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "3 44", "2 43"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 43.9527027027027;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> tasks = {"5 11", "4 11", "8 11", "3 12", "2 10", "2 15", "1 15", "91 11"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 11.112068965517242;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> tasks = {"1 10", "1 20", "1 10", "1 10"};
    DownloadingFiles* pObj = new DownloadingFiles();
    clock_t start = clock();
    double result = pObj->actualTime(tasks);
    clock_t end = clock();
    delete pObj;
    double expected = 12.5;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test45() == 0 ? ++passed : ++failed;
    test46() == 0 ? ++passed : ++failed;
    test47() == 0 ? ++passed : ++failed;
    test48() == 0 ? ++passed : ++failed;
    test49() == 0 ? ++passed : ++failed;
    test50() == 0 ? ++passed : ++failed;
    test51() == 0 ? ++passed : ++failed;
    test52() == 0 ? ++passed : ++failed;
    test53() == 0 ? ++passed : ++failed;
    test54() == 0 ? ++passed : ++failed;
    test55() == 0 ? ++passed : ++failed;
    test56() == 0 ? ++passed : ++failed;
    test57() == 0 ? ++passed : ++failed;
    test58() == 0 ? ++passed : ++failed;
    test59() == 0 ? ++passed : ++failed;
    test60() == 0 ? ++passed : ++failed;
    test61() == 0 ? ++passed : ++failed;
    test62() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22401534&rd=10800&pm=8400
********************************************************************************
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
 
class DownloadingFiles {
public:
  double actualTime(vector <string>);
};
 
double DownloadingFiles::actualTime(vector <string> tasks) {
  int n = tasks.size();
  int t = 0;
  int sum = 0 ;
  for(int i=0; i<n; i++) {
    int a, b;
    sscanf(tasks[i].c_str(), "%d %d", &a, &b);
    t+=a; sum+=a*b;
  }
  return (long double)sum/(long double)t;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/