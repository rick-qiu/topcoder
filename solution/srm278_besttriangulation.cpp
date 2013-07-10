/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5923
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

class BestTriangulation {
public:
    double maxArea(vector<string> vertices);
};

double BestTriangulation::maxArea(vector<string> vertices) {
    double ret;
    return ret;
}


int test0() {
    vector<string> vertices = {"1 1", "2 3", "3 2"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> vertices = {"1 1", "1 2", "3 3", "2 1"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> vertices = {"1 2", "1 3", "2 4", "3 4", "4 3", "4 2", "3 1", "2 1"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> vertices = {"6 2", "2 1", "1 2", "1 4", "2 6", "5 6", "6 5"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> vertices = {"1 1", "1 2", "10000 10000"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4999.5;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> vertices = {"2054 1314", "1480 2046", "2905 2202"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 566322.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> vertices = {"2761 1516", "1605 1046", "1396 2886", "2213 2086"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1112635.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> vertices = {"2902 1630", "1574 1245", "1350 2047", "2794 2451"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 624292.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> vertices = {"2827 1909", "1515 1127", "1524 2326", "1860 2387"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 783025.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> vertices = {"1789 1184", "1096 1611", "1132 2546", "2699 2754", "2989 2477"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1241950.5;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> vertices = {"2864 1876", "1451 1253", "1267 2819", "2006 2689", "2727 2263", "2877 2129"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1197150.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> vertices = {"2272 1011", "1441 2063", "1316 2313", "2003 2385", "2924 2166"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 976542.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> vertices = {"1586 1455", "1060 1346", "1104 2393", "2185 2461", "2962 2337"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 973895.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> vertices = {"2994 1171", "2236 1026", "1483 1263", "1415 1771", "1520 2565", "2655 2691", "2971 2014"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1132766.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> vertices = {"2460 1139", "1821 1037", "1426 1163", "1022 1918", "1903 2779", "2757 2643", "2725 2463"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1197057.5;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> vertices = {"2967 1937", "2821 1452", "2611 1387", "2344 1366", "1520 1714", "1237 2582", "1362 2694", "1398 2703", "2218 2821"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 811541.5;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> vertices = {"2912 1373", "2119 1045", "1057 2120", "1192 2420", "2873 2465"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1176545.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> vertices = {"2847 1685", "2937 1136", "1339 1014", "1109 1157", "1037 2619", "1281 2810", "2270 2810", "2518 2701", "2646 2389"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1523032.5;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> vertices = {"2941 1906", "2716 1450", "2481 1017", "1090 1545", "1061 2361", "2071 2841", "2871 2304"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1175850.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> vertices = {"2950 1871", "2552 1200", "1438 1235", "1276 1478", "1030 2029", "1003 2186", "1923 2812", "2354 2875"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1199673.5;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> vertices = {"2867 1480", "2462 1166", "1641 1037", "1098 1890", "1135 2302", "1537 2592", "2130 2739", "2962 2725"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1318396.5;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> vertices = {"2888 1378", "1374 1261", "1259 1310", "1239 2604", "1304 2884", "1351 2912", "1578 2930", "2398 2943", "2852 2279"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1308644.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> vertices = {"2896 1573", "2204 1077", "1524 1177", "1132 1413", "1157 2702", "2467 2948", "2905 2487"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1307697.5;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> vertices = {"2618 1366", "1846 1135", "1157 1307", "1101 1433", "1435 2942", "2102 2954", "2163 2946", "2583 2795", "2692 2469"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1187212.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> vertices = {"2986 1945", "2844 1197", "2337 1078", "1957 1043", "1181 1168", "1076 1870", "1305 2405", "1778 2963", "2752 2973"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1539026.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> vertices = {"2937 1823", "2610 1137", "1790 1263", "1064 1744", "1014 1845", "1032 2631", "1439 2729", "2190 2874"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1237446.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> vertices = {"2116 1193", "1587 1057", "1441 1105", "1007 2716", "1436 2993", "2884 2932", "2892 2288"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1619611.5;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> vertices = {"2819 1695", "2308 1030", "2000 1008", "1605 1082", "1135 1631", "1027 2846", "1600 2958", "2246 2953", "2667 2899", "2735 2775"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1535110.5;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> vertices = {"2816 1052", "1769 1047", "1271 1236", "1098 1314", "1186 2273", "1344 2716", "1859 2968", "2788 2562", "2962 2306"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1520477.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> vertices = {"2508 1288", "2313 1059", "1239 1032", "1172 1267", "1042 2608", "1388 2725", "2322 2838", "2594 2870", "2959 2862"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1646133.5;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> vertices = {"2900 1588", "2795 1121", "2214 1013", "1260 1035", "1010 1118", "1617 2923", "2423 2990", "2756 2949", "2901 2227"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1668640.5;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> vertices = {"2557 1163", "2442 1019", "1864 1017", "1609 1033", "1085 1116", "1084 2092", "1772 2616", "2472 2921", "2811 2566"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1307553.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> vertices = {"2885 1874", "2329 1013", "1594 1103", "1086 2997", "2099 2924", "2469 2873", "2892 2737"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1644242.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> vertices = {"2611 1742", "1449 2943", "2140 2576"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 201718.5;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> vertices = {"2801 1385", "1684 2518", "2510 2579", "2790 2082"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 501997.5;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> vertices = {"2990 1806", "1686 1404", "1436 1562", "1484 2035", "2122 2374"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 547232.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> vertices = {"1757 1768", "1645 1962", "1933 2593", "2665 2839", "2418 2084"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 280302.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> vertices = {"2007 1387", "1046 1664", "1388 2523", "1881 2851", "2991 2918"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1032756.5;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> vertices = {"2281 1331", "1479 1503", "1326 1598", "1160 2626", "1882 2984", "2059 2981", "2239 2972"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 892585.5;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> vertices = {"2662 1605", "1983 1473", "1069 1496", "1804 2904", "2954 2836", "2912 2003"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1111149.5;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> vertices = {"2058 1106", "1421 1066", "1600 2001", "1660 2259", "1900 2641", "2044 2752", "2814 2812", "2862 2629"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 775328.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> vertices = {"2897 1189", "1717 1361", "1340 2428", "1401 2795", "1874 2812", "2659 2762", "2939 2458"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1077139.5;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> vertices = {"2850 1647", "1965 1044", "1088 1424", "1115 2379", "1835 2926", "2842 2573"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1239971.5;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> vertices = {"2594 1117", "1220 1314", "1009 1914", "1070 2707", "2671 2974", "2810 2943"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1563132.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> vertices = {"2816 1044", "2534 1093", "1228 1348", "1120 1690", "1058 3000", "2999 2994"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1893024.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> vertices = {"1747 1237", "1353 1318", "1042 1674", "1138 2012", "1284 2452", "1442 2631", "1665 2809", "2476 2962", "2861 2738", "2403 2027"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1024236.5;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> vertices = {"2746 1225", "2426 1231", "1228 1729", "1165 2114", "1169 2232", "1252 2862", "2477 2705", "2679 2277"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1055532.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> vertices = {"2997 1549", "2143 1020", "1033 1225", "1260 2749", "1274 2817", "2601 2783"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1524302.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> vertices = {"2817 1864", "2935 1146", "2510 1199", "2004 1387", "1467 1662", "1130 2312", "1242 2886", "1848 2894", "2168 2889", "2667 2497", "2716 2372"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1125896.5;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> vertices = {"2748 1480", "2600 1093", "2100 1176", "1314 1389", "1236 2886", "2294 2952", "2699 2826", "2857 2331"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1270659.5;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> vertices = {"2972 1237", "1550 1272", "1153 1470", "1029 1832", "1433 2523", "2232 2794", "2629 2900", "2928 2705"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1513562.0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> vertices = {"2939 1462", "2923 1217", "2144 1008", "1471 1010", "1034 1090", "1244 2440", "1410 2754", "2960 2960", "2953 2403"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1643914.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> vertices = {"2949 1242", "2755 1045", "1578 1101", "1050 1676", "1321 2321", "1565 2701", "2816 2968", "2984 2875", "2986 2443"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1658603.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> vertices = {"2479 1229", "1745 1032", "1206 1083", "1125 1849", "1086 2404", "1281 2533", "1815 2653", "2327 2706", "2719 2738", "2845 2743", "2688 2083"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1318374.5;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> vertices = {"2985 1871", "2709 1003", "2469 1002", "1063 1112", "1177 2528", "1610 2963", "2737 2241", "2848 2110"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1571224.5;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> vertices = {"5453 5835", "5375 4586", "4381 829", "3617 5771", "4945 7983"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4561204.0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> vertices = {"9785 2266", "8749 1865", "4922 863", "1785 4768", "3101 7753", "9249 5053"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1.872151E7;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> vertices = {"7607 1658", "4412 1683", "1213 3830", "4649 7823", "5900 8409", "7659 7947", "8840 5100"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0162405E7;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> vertices = {"6919 1471", "5443 61", "1399 140", "661 4060", "1765 5766", "5225 5349", "6962 3633", "7568 2944"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6840265E7;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> vertices = {"9428 2479", "9195 319", "9099 170", "1572 64", "198 687", "35 6597", "613 9968", "5280 9992", "9922 9898"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.67320065E7;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> vertices = {"9569 2577", "8950 973", "8477 798", "2166 353", "166 508", "436 9114", "2067 9505", "5387 9658", "8315 9160", "8886 8353"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0332811E7;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> vertices = {"9389 3098", "9901 844", "9786 238", "4923 709", "3675 904", "1708 1326", "649 2892", "673 4648", "1796 7017", "2215 7361", "4520 7979"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8401195E7;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> vertices = {"9957 4718", "9816 555", "8121 136", "6002 289", "294 1066", "347 4558", "425 6546", "525 7934", "2552 9332", "7839 9643", "8707 9422", "10000 8669"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.27628445E7;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> vertices = {"9953 1851", "9503 757", "7408 277", "1287 286", "808 2112", "140 7882", "2558 9403", "2980 9474", "4830 9757", "6520 9972", "8268 9807", "9425 8414", "9862 7559"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 3.85577165E7;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> vertices = {"9966 4932", "10000 494", "8792 138", "3752 61", "2744 91", "335 423", "7 2087", "1 7086", "1 9465", "164 9500", "2170 9845", "5787 9760", "9172 9679", "9830 8250"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.54666725E7;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> vertices = {"9897 6100", "9940 3872", "9909 2631", "9016 218", "8577 60", "35 306", "4 7496", "243 8739", "386 9027", "853 9351", "3960 9917", "4468 9974", "8742 9895", "9254 9874", "9786 7845"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.4584797E7;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> vertices = {"9960 3847", "9953 1719", "8839 219", "6807 197", "3539 201", "1160 223", "757 474", "365 832", "254 1121", "86 7148", "138 8593", "727 9054", "4945 9971", "6033 9997", "8788 9026", "9764 8202"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.1781136E7;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> vertices = {"9863 2094", "9749 1241", "9603 872", "8329 556", "7987 529", "520 166", "88 1326", "15 1619", "82 4916", "214 9058", "317 9850", "1412 9942", "4079 9969", "6909 9995", "8814 9928", "9623 9226", "9919 7341"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.62382205E7;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> vertices = {"9933 1173", "9919 799", "9603 312", "8624 93", "7795 3", "1760 8", "504 145", "319 274", "131 917", "65 1327", "18 9605", "373 9983", "2344 9982", "5252 9978", "9204 9957", "9773 9588", "9862 8646", "9902 5777"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.67945605E7;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> vertices = {"9984 839", "9984 296", "9912 135", "9237 4", "1551 33", "112 113", "37 2653", "36 5891", "49 8668", "215 9399", "384 9983", "4355 9994", "7309 9993", "8631 9983", "9022 9967", "9791 8997", "9867 8452", "9939 7698", "9945 7284"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.8693432E7;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> vertices = {"9999 2323", "9975 1674", "9457 223", "8913 50", "8802 46", "5922 32", "1228 56", "591 62", "126 88", "101 762", "49 5248", "269 7483", "646 9561", "2233 9877", "2816 9909", "6525 9991", "8435 9948", "9109 9835", "9966 8740", "9998 6066"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.65350795E7;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> vertices = {"9980 5056", "9936 1103", "9341 719", "7759 36", "4140 90", "3660 114", "2856 160", "1367 395", "774 786", "77 2283", "23 2560", "9 4834", "61 9049", "108 9545", "664 9747", "2032 9927", "6715 9869", "7241 9856", "8969 9653", "9508 9407", "9851 8740"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.46129575E7;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> vertices = {"9994 3154", "9989 1962", "9840 966", "9723 395", "9411 158", "7986 3", "5448 3", "2249 8", "1379 18", "6 278", "19 7332", "44 7915", "134 9369", "199 9652", "309 9875", "422 9944", "2389 9995", "7320 9975", "9578 9931", "9826 9842", "9911 9312", "9993 5281"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.7897567E7;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> vertices = {"10000 3469", "9963 712", "9957 634", "9834 271", "9700 165", "9516 46", "8836 4", "1332 57", "229 628", "171 749", "52 1269", "30 1412", "7 4937", "35 8676", "121 9917", "2247 9960", "3581 9986", "6759 9995", "9486 9998", "9888 9890", "9914 9318", "9957 8206", "9998 6402"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.8292483E7;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> vertices = {"9972 3992", "9970 3881", "9857 1074", "9687 586", "9186 298", "8664 79", "8147 59", "5520 1", "2074 15", "1107 37", "105 485", "66 700", "15 4127", "9 6402", "112 9065", "515 9811", "951 9863", "2482 9905", "4137 9938", "7464 9988", "8551 9904", "9662 9783", "9945 9535", "9960 8885"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.6189389E7;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> vertices = {"9990 4321", "9981 2023", "9924 136", "9610 59", "7704 26", "7457 23", "4785 5", "3786 9", "1141 84", "684 107", "415 143", "137 268", "23 1903", "10 2674", "21 8526", "32 9351", "103 9839", "238 9955", "486 9966", "1911 10000", "9558 9974", "9645 9904", "9907 9601", "9962 9141", "9983 6519"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.8379658E7;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> vertices = {"9994 959", "9867 277", "9836 166", "8786 63", "5053 21", "2131 45", "760 63", "616 65", "135 315", "29 1241", "21 2747", "13 4619", "8 5966", "10 8252", "128 9318", "261 9665", "822 9962", "1002 9997", "5539 9970", "7119 9960", "8697 9950", "8972 9927", "9717 9710", "9878 8842", "9966 8123", "9982 6071"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.7448245E7;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> vertices = {"9980 3664", "9964 448", "9950 114", "9826 99", "9621 79", "6974 20", "2960 2", "659 10", "215 125", "76 378", "51 823", "15 2011", "3 6931", "3 7284", "7 8496", "12 9325", "54 9713", "107 9946", "380 9970", "3311 9992", "4399 9998", "8403 9999", "9546 9951", "9785 9926", "9989 9852", "9993 9053", "9996 7249"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.9067832E7;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> vertices = {"9970 2749", "9954 1288", "9919 493", "9691 130", "9475 63", "8982 7", "3918 7", "1811 57", "1259 83", "911 132", "793 169", "524 283", "356 356", "81 832", "6 1570", "1 8110", "4 8526", "71 9463", "163 9994", "940 9998", "5869 9997", "9112 9963", "9762 9920", "9834 9899", "9958 9839", "9977 9076", "9993 6536", "9988 5642"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.862032E7;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> vertices = {"9997 1691", "9985 1071", "9972 432", "9863 47", "9799 3", "6386 4", "3346 5", "1044 16", "214 41", "64 194", "27 540", "23 680", "13 1031", "2 2984", "1 4604", "12 9702", "103 9886", "280 9935", "575 9975", "962 9990", "4101 9998", "4827 9999", "5954 10000", "6481 10000", "8361 9995", "9892 9962", "9995 9789", "10000 8273", "9999 5487"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.918537E7;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> vertices = {"9999 3638", "9997 488", "9948 128", "9935 107", "9811 28", "9556 24", "7703 3", "6669 2", "5614 1", "931 1", "346 8", "166 61", "10 187", "4 375", "2 3160", "1 5143", "2 7646", "11 9005", "21 9698", "253 9974", "1391 9988", "3150 9999", "6870 9995", "8096 9989", "9084 9982", "9752 9970", "9937 9953", "9967 9653", "9993 8427", "9998 5531"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.9198051E7;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> vertices = {"9994 2040", "9988 1291", "9972 952", "9937 409", "9861 90", "9761 43", "9679 5", "8476 2", "5002 1", "2740 11", "312 28", "164 46", "111 159", "32 1219", "20 3175", "7 5583", "8 6435", "21 9568", "147 9883", "499 9979", "1680 9992", "2720 9996", "6840 9993", "8948 9989", "9575 9958", "9814 9876", "9956 9760", "9982 9733", "9989 9594", "9995 9318", "10000 6108"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.85823585E7;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> vertices = {"10000 2535", "9998 1014", "9984 630", "9946 102", "9879 57", "9677 15", "6183 5", "3626 1", "637 5", "316 43", "27 95", "2 132", "1 1861", "1 5157", "2 7170", "7 8037", "12 8700", "19 9068", "33 9589", "51 9659", "123 9910", "215 9946", "389 9964", "705 9996", "8529 10000", "9441 9989", "9703 9961", "9917 9876", "9973 9802", "9980 9397", "9987 8876", "9995 6172"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.9191601E7;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> vertices = {"9997 3558", "9998 893", "9916 480", "9901 464", "9525 205", "8064 38", "6067 9", "5256 6", "4525 9", "3298 19", "614 63", "111 111", "29 630", "10 2475", "5 5608", "14 8098", "45 8479", "155 9425", "184 9577", "285 9788", "566 9909", "1114 9965", "1412 9977", "1544 9979", "2960 9988", "8227 9942", "8597 9913", "9338 9793", "9950 9659", "9961 9603", "9986 9270", "9988 9094", "9995 6744"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.8321076E7;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> vertices = {"9999 3210", "9996 1494", "9976 389", "9972 296", "9910 52", "9731 27", "8755 2", "2806 6", "2421 8", "1506 14", "1126 24", "174 60", "37 283", "24 435", "17 1440", "3 4346", "3 5698", "5 6353", "15 7599", "28 8584", "37 9097", "175 9834", "196 9869", "271 9984", "1543 9991", "2146 9994", "6979 10000", "8742 10000", "9779 9980", "9935 9567", "9956 9137", "9970 8818", "9979 8438", "9999 6714"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.90490175E7;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> vertices = {"9997 2689", "9987 1927", "9973 962", "9966 704", "9954 466", "9859 170", "9836 130", "9672 59", "8958 4", "2346 1", "1562 1", "412 10", "295 71", "38 240", "14 605", "8 2834", "1 5809", "2 9119", "14 9639", "56 9900", "92 9940", "1165 9987", "2939 10000", "8058 9999", "9435 9984", "9780 9973", "9834 9946", "9875 9902", "9943 9391", "9980 8597", "9990 8342", "9997 7908", "9999 7350", "10000 7068", "10000 5680"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.888789E7;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> vertices = {"9994 4143", "9987 1924", "9981 818", "9978 467", "9945 110", "9853 48", "9268 8", "7771 2", "1732 1", "750 7", "504 12", "174 68", "89 103", "40 290", "11 638", "4 2062", "2 3023", "5 5133", "7 6085", "9 6906", "19 8636", "36 9643", "57 9819", "141 9920", "940 9985", "2421 9995", "7451 10000", "9323 9997", "9661 9990", "9932 9965", "9965 9844", "9989 9291", "9999 8416", "10000 8103", "10000 7475"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.9160332E7;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> vertices = {"9999 5494", "9996 2684", "9988 1624", "9980 697", "9950 55", "9754 7", "8252 5", "5056 3", "1556 3", "283 10", "152 191", "69 357", "38 904", "22 1368", "12 2155", "1 3609", "2 5231", "4 7028", "9 8665", "25 9468", "36 9790", "120 9879", "337 9931", "733 9973", "2258 9989", "3416 9991", "7389 9992", "8200 9986", "9618 9972", "9664 9960", "9819 9919", "9865 9890", "9934 9807", "9995 9687", "9996 9476"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.901003E7;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> vertices = {"10000 2091", "9999 988", "9989 569", "9983 440", "9824 157", "9786 134", "9540 9", "9471 2", "7764 1", "3525 1", "208 2", "57 94", "23 204", "2 2414", "2 7222", "20 9697", "27 9769", "147 9924", "270 9949", "425 9972", "521 9980", "891 9988", "2016 9997", "2866 10000", "5597 9999", "6801 9997", "8624 9993", "9650 9978", "9725 9974", "9824 9923", "9872 9836", "9911 9658", "9964 9345", "9992 8233", "10000 6999"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.8983946E7;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> vertices = {"9998 3163", "9994 1327", "9986 669", "9963 489", "9931 342", "9880 252", "9758 116", "9743 102", "9553 23", "9384 10", "9130 3", "3274 2", "2241 4", "1286 8", "963 13", "400 36", "269 55", "15 159", "2 1078", "2 1497", "9 7479", "12 9447", "36 9815", "69 9957", "253 9987", "361 9995", "5144 9998", "7413 9992", "9178 9967", "9789 9914", "9826 9785", "9881 9584", "9989 8899", "9993 7961", "9999 6046"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.9033061E7;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> vertices = {"9996 4347", "9987 1133", "9924 536", "9841 235", "9478 64", "9317 40", "8726 11", "7879 5", "7663 5", "3412 11", "2330 19", "612 34", "80 42", "47 284", "14 2718", "8 3328", "5 4767", "7 7397", "22 8096", "38 8535", "82 9178", "151 9697", "219 9806", "468 9922", "820 9959", "1132 9977", "1914 9998", "4690 9999", "9224 10000", "9870 9974", "9909 9934", "9933 9877", "9952 9818", "9986 9132", "9998 7876"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.8728926E7;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> vertices = {"9995 319", "9899 91", "9385 35", "9157 22", "8588 15", "6409 5", "5929 3", "5269 1", "1719 7", "1369 8", "305 40", "282 50", "85 177", "17 664", "6 1032", "2 3474", "2 5931", "5 8705", "10 9477", "23 9683", "101 9926", "286 9957", "1423 9981", "1967 9990", "3605 9998", "6007 10000", "6810 10000", "9056 9996", "9801 9992", "9836 9983", "9850 9965", "9995 9470", "9998 9096", "10000 7054", "9999 5338"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.89291875E7;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> vertices = {"1 1", "10000 10000", "10000 1"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99900005E7;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> vertices = {"1 1", "1 2", "2 3", "4 4", "7 5", "11 6", "16 7", "22 8", "29 9", "37 10", "46 11", "56 12", "67 13", "79 14", "92 15", "106 16", "121 17", "137 18", "154 19", "172 20", "191 21", "211 22", "232 23", "254 24", "277 25", "301 26", "326 27", "352 28", "379 29", "407 30", "436 31", "466 32", "497 33", "529 34", "562 35"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 2456.5;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> vertices = {"10000 3469", "9963 712", "9957 634", "9834 271", "9700 165", "9516 46", "8836 4", "1332 57", "229 628", "171 749", "52 1269", "30 1412", "7 4937", "35 8676", "121 9917", "2247 9960", "3581 9986", "6759 9995", "9486 9998", "9888 9890", "9914 9318", "9957 8206", "9998 6402"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.8292483E7;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> vertices = {"10000 3469", "9963 712", "9957 634", "9834 271", "9700 165", "9516 46", "8836 4", "1332 57", "229 628", "171 749", "52 1269", "30 1412", "7 4937", "35 8676", "121 9917", "2247 9960", "3581 9986", "6759 9995", "9486 9998", "9888 9890", "9914 9318", "9957 8206", "9998 6402", "9999 6000", "10000 5000"};
    BestTriangulation* pObj = new BestTriangulation();
    clock_t start = clock();
    double result = pObj->maxArea(vertices);
    clock_t end = clock();
    delete pObj;
    double expected = 4.8292483E7;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test63() == 0 ? ++passed : ++failed;
    test64() == 0 ? ++passed : ++failed;
    test65() == 0 ? ++passed : ++failed;
    test66() == 0 ? ++passed : ++failed;
    test67() == 0 ? ++passed : ++failed;
    test68() == 0 ? ++passed : ++failed;
    test69() == 0 ? ++passed : ++failed;
    test70() == 0 ? ++passed : ++failed;
    test71() == 0 ? ++passed : ++failed;
    test72() == 0 ? ++passed : ++failed;
    test73() == 0 ? ++passed : ++failed;
    test74() == 0 ? ++passed : ++failed;
    test75() == 0 ? ++passed : ++failed;
    test76() == 0 ? ++passed : ++failed;
    test77() == 0 ? ++passed : ++failed;
    test78() == 0 ? ++passed : ++failed;
    test79() == 0 ? ++passed : ++failed;
    test80() == 0 ? ++passed : ++failed;
    test81() == 0 ? ++passed : ++failed;
    test82() == 0 ? ++passed : ++failed;
    test83() == 0 ? ++passed : ++failed;
    test84() == 0 ? ++passed : ++failed;
    test85() == 0 ? ++passed : ++failed;
    test86() == 0 ? ++passed : ++failed;
    test87() == 0 ? ++passed : ++failed;
    test88() == 0 ? ++passed : ++failed;
    test89() == 0 ? ++passed : ++failed;
    test90() == 0 ? ++passed : ++failed;
    test91() == 0 ? ++passed : ++failed;
    test92() == 0 ? ++passed : ++failed;
    test93() == 0 ? ++passed : ++failed;
    test94() == 0 ? ++passed : ++failed;
    test95() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=9906197&rd=8075&pm=5923
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <set> 
#include <map> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
#include <list> 
#include <regex.h>  
using namespace std; 
 
// LIB CODE 
typedef vector<int> VI; 
typedef vector<VI> VVI; 
#define PB push_back 
#define FOR(i,a,b) for(int i=(a);i<int(b);++i) 
#define SZ(v) ((int)(v).size()) 
#define FORSZ(i,a,v) FOR(i,a,SZ(v)) 
#define REPSZ(i,v) FORSZ(i,0,v) 
typedef vector<string> VS; 
#define REP(i,n) FOR(i,0,n) 
template<class T, class U> T cast (U x) { T y; ostringstream a; a<<x; istringstream b(a.str()); b>>y; return y; } 
template<class T> vector<T> split(string s, string x=" ") { vector<T> r; REP(i,s.size()) { string c; while(i<(int)s.size()&&x.find(s[i])==string::npos) c+=s[i++]; if(c.size()) r.push_back(cast<T>(c)); } return r; } 
template<class T> vector<vector<T> > splitv(VS vs,string x=" ") { vector<vector<T> > r; REPSZ(i,vs) r.PB(split<T>(vs[i],x)); return r; } 
// REAL CODE 
 
class BestTriangulation { 
public: 
  double maxArea(vector <string> vertices) { 
    VVI coord=splitv<int>(vertices); 
    int n=coord.size(); 
    double ret=0; 
    REP(i,n) REP(j,i) REP(k,j) { 
      double area=abs((coord[j][0]-coord[i][0])*(coord[k][1]-coord[i][1])-(coord[k][0]-coord[i][0])*(coord[j][1]-coord[i][1])); 
      ret>?=area; 
    } 
    return ret/2; 
     
  } 
   
}; 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/