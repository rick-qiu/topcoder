/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1697
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

class PowerOutage {
public:
    int estimateTimeOut(vector<int> fromJunction, vector<int> toJunction, vector<int> ductLength);
};

int PowerOutage::estimateTimeOut(vector<int> fromJunction, vector<int> toJunction, vector<int> ductLength) {
    int ret;
    return ret;
}


int test0() {
    vector<int> fromJunction = {0};
    vector<int> toJunction = {1};
    vector<int> ductLength = {10};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> fromJunction = {0, 1, 0};
    vector<int> toJunction = {1, 2, 3};
    vector<int> ductLength = {10, 10, 10};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> fromJunction = {0, 0, 0, 1, 4};
    vector<int> toJunction = {1, 3, 4, 2, 5};
    vector<int> ductLength = {10, 10, 100, 10, 5};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 165;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> fromJunction = {0, 0, 0, 1, 4, 4, 6, 7, 7, 7, 20};
    vector<int> toJunction = {1, 3, 4, 2, 5, 6, 7, 20, 9, 10, 31};
    vector<int> ductLength = {10, 10, 100, 10, 5, 1, 1, 100, 1, 1, 5};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 281;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> fromJunction = {0, 0, 0, 0, 0};
    vector<int> toJunction = {1, 2, 3, 4, 5};
    vector<int> ductLength = {100, 200, 300, 400, 500};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 2500;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> fromJunction = {0, 0, 0, 1, 3, 3, 3, 6, 7, 1, 6, 9, 11, 2, 5, 9, 8, 4, 1, 7, 14, 14, 19, 17, 10, 0, 22, 19, 22, 4, 2, 21, 30, 11, 15, 15, 28, 2, 0, 16, 4, 34};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42};
    vector<int> ductLength = {1545174, 710331, 1502620, 1852105, 896652, 899215, 1652061, 920516, 422581, 1473180, 877279, 1788544, 1633870, 1649520, 431786, 1995351, 706354, 1805296, 662289, 799528, 694758, 1453779, 1956529, 1869395, 1220390, 1884529, 1319130, 625564, 1587407, 1874797, 1410594, 487925, 1907863, 1330317, 1255604, 1901852, 353482, 1528028, 1219052, 1918150, 892447, 39622};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 98420169;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> fromJunction = {0, 0, 0, 2, 2, 4, 0, 5, 2, 1, 6, 0, 8, 2, 7, 3, 10, 7, 1, 3, 16, 19, 2, 7, 11};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    vector<int> ductLength = {834262, 924263, 1345877, 1490808, 979348, 503685, 729018, 1018014, 826429, 816962, 353022, 1918970, 1606647, 1053895, 266907, 180077, 773533, 1101255, 1806238, 311115, 9652, 560284, 240780, 1846388, 1920570};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 41643650;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> fromJunction = {0, 0, 0, 1, 1, 0, 3, 5, 1, 5, 7, 5, 9, 8, 11, 10, 5, 8, 15, 1, 0, 9, 20, 0, 4, 4, 9, 22, 27, 5, 29, 19, 25, 18, 3, 21, 35, 22, 37, 13, 14, 17, 4, 2, 16, 19};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46};
    vector<int> ductLength = {379499, 166690, 1343134, 1641741, 746252, 422653, 505011, 196589, 967672, 1306817, 848735, 1475454, 230577, 524420, 337691, 1771612, 692558, 1358483, 580331, 1212494, 200537, 1064259, 184, 1105877, 246146, 1860087, 1404521, 1412698, 1663214, 6438, 1113183, 488144, 418060, 1386673, 1911684, 917363, 1520221, 221901, 848402, 782427, 1070163, 1477933, 19582, 1355209, 1669785, 1321542};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 78515327;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> fromJunction = {0, 0, 1, 1, 0, 2, 3, 5, 0, 8, 4, 0, 7, 11, 0, 7, 4, 1, 10, 0, 14, 1, 14, 2, 5, 22, 17, 20, 11, 4, 9, 17, 22, 22, 11, 34};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36};
    vector<int> ductLength = {1018364, 366729, 38720, 309940, 930370, 1180695, 184916, 1682446, 1464885, 1419914, 627577, 1694249, 3555, 1141976, 1605618, 354404, 1442970, 1889613, 1017314, 1745357, 799406, 549771, 1861235, 592722, 930547, 1314662, 1026768, 271675, 781098, 170104, 1424080, 324735, 394783, 1118990, 351154, 1637251};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 62287142;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> fromJunction = {0, 0, 1, 0, 2, 4, 0, 2, 5, 8, 1, 6, 0, 5, 0, 5};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    vector<int> ductLength = {1729373, 1885106, 922241, 977293, 1141921, 567820, 66690, 651505, 1012843, 1988606, 371754, 81693, 1615432, 1898237, 901627, 1854306};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 30407630;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> fromJunction = {0, 0, 0, 1, 2, 0, 2, 1, 2, 4, 8, 9, 5, 0, 4, 13, 1, 4, 12, 18, 16, 1, 11, 15, 2, 1, 7, 6, 7, 9, 17, 16, 30, 8, 16};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35};
    vector<int> ductLength = {1418462, 1278038, 1028936, 1306190, 358986, 160135, 1683722, 11350, 1305385, 368434, 1525170, 987467, 480563, 934431, 271728, 1597538, 1743014, 1769895, 1813389, 1461874, 1893254, 1477795, 88527, 581247, 1833248, 713324, 1361475, 403221, 1972539, 718387, 1458663, 1121235, 1502044, 1798459, 1955857};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 74811543;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> fromJunction = {0, 0, 1, 0, 0, 3, 0, 3, 6, 1, 1, 1, 11, 9, 10, 12, 13, 4, 1, 6, 3, 20, 14, 8, 15, 24, 7, 25, 1, 5, 28, 15, 1, 2, 22, 29, 33, 27, 21, 2, 5, 22, 32, 3, 28, 9};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46};
    vector<int> ductLength = {847817, 770152, 1001155, 1824147, 1506406, 1034613, 946906, 140093, 1310056, 922256, 749589, 1023886, 749501, 1744210, 1537681, 1184367, 1381046, 1985817, 1654234, 544683, 667021, 1612060, 1679503, 1501655, 78175, 1292920, 144480, 400691, 205752, 1725150, 357733, 1454413, 1504070, 1829872, 408774, 1409636, 346109, 305703, 1458140, 118220, 309943, 1278765, 1064918, 448427, 268375, 1962541};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 85765968;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> fromJunction = {0, 0, 1, 1, 1, 3, 1, 4, 7, 2, 0, 3, 6, 8, 5, 11, 3, 12, 0, 15, 15, 18, 0, 4, 7, 24, 25, 10, 0, 19, 25, 6, 15, 29, 20, 5, 23, 19};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38};
    vector<int> ductLength = {178317, 81669, 294672, 1649827, 671297, 443274, 1823848, 333826, 1750416, 289900, 1922826, 1961031, 1984157, 1022042, 1708788, 952091, 1095097, 1600638, 1896461, 288397, 741380, 540242, 1094958, 60081, 950467, 1955292, 1607609, 1717760, 1318832, 242398, 1586217, 1374294, 1231329, 1969383, 562578, 962458, 1114049, 313948};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 78008798;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> fromJunction = {0, 0, 0, 0, 1, 0, 3, 2, 6, 4, 0, 2, 11, 3, 1, 14, 3, 2, 5, 15, 6, 0, 11, 8, 11, 24, 23, 6, 22, 2, 15, 20, 4, 22, 30, 14, 5, 9, 7, 7, 36, 15, 34, 3, 2};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45};
    vector<int> ductLength = {752846, 1419859, 179904, 163605, 1740377, 190846, 1352634, 965272, 824872, 538518, 1438990, 714089, 1749318, 238531, 429771, 1075929, 996791, 634327, 687236, 1567508, 1123950, 68018, 1617650, 191391, 571448, 1348412, 164008, 205801, 1063191, 1117957, 1692178, 1234376, 1504523, 1015591, 1828379, 1224921, 1545579, 937373, 1414625, 373769, 1896141, 1897686, 252657, 422834, 1773177};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 83927521;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> fromJunction = {0, 0, 1, 1, 0, 0, 2, 3, 4, 5, 8, 10, 11};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    vector<int> ductLength = {943585, 1648675, 1338921, 820885, 1212292, 1859530, 543745, 1377985, 1804035, 428384, 1150800, 335109, 740014};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 22856615;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> fromJunction = {0, 0, 1, 1, 0, 1, 5, 3, 5, 2, 1, 4, 10, 6, 5, 1, 4, 4, 14, 15, 0, 15};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22};
    vector<int> ductLength = {376211, 1482872, 1905579, 1145345, 438770, 998746, 1459100, 1878278, 219472, 959127, 1267487, 1347437, 936337, 854433, 684756, 1060117, 1881497, 446829, 1659636, 1807314, 1890011, 901122};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 47040884;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> fromJunction = {0, 0, 1, 0, 2, 2, 5, 2, 4, 8, 3, 0, 6, 10, 9, 7, 2, 7, 3, 7, 2, 11, 6, 7, 11, 13, 12, 4, 4, 25, 27, 11, 31, 17, 2, 26, 22, 10, 10, 36, 10, 10};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42};
    vector<int> ductLength = {1277866, 480329, 1078395, 1723131, 533536, 779614, 566322, 51041, 637484, 763428, 774975, 1621576, 982114, 1375064, 142770, 825494, 1994658, 406716, 1013671, 1610274, 170613, 444117, 1739193, 1826816, 730378, 890549, 102159, 889987, 1584887, 913667, 1830941, 635771, 1276238, 1699548, 284073, 552123, 378197, 500669, 569073, 1136436, 558949, 1828063};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 73530896;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> fromJunction = {0, 0, 1, 0, 0, 0, 1, 5, 4, 6, 3, 2, 11, 12, 9, 5, 5, 12, 9, 2, 18, 9, 13, 12, 11, 14, 8, 3, 4, 6, 29, 21, 31};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33};
    vector<int> ductLength = {98078, 1723181, 1907599, 868478, 1683181, 359831, 1240380, 210186, 1383719, 1703037, 876433, 1804594, 509469, 1804554, 910783, 1966359, 1458068, 250642, 645544, 891869, 649491, 1701392, 412587, 1679802, 41707, 11376, 142926, 85893, 941781, 197527, 42002, 669090, 685167};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 53769747;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> fromJunction = {0, 0, 1, 1, 3, 0, 3, 3, 5, 3, 3};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    vector<int> ductLength = {1252805, 253181, 1203273, 1841390, 1608554, 1063453, 487484, 654229, 706557, 11620, 532801};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 14459505;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> fromJunction = {0, 0, 0, 2, 2, 1, 5, 1, 1, 8, 7, 8, 5, 10, 9, 8, 10, 12, 6, 16, 0, 18, 5, 21, 8, 21, 1, 14, 23, 18, 4, 29, 16, 7, 28, 11};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36};
    vector<int> ductLength = {509659, 486861, 965314, 1628541, 1859217, 1001809, 1982310, 45754, 1696070, 1851086, 1031583, 1594297, 1131832, 745749, 162256, 312493, 365205, 582876, 880866, 471508, 1574248, 1871927, 319501, 614765, 316609, 139107, 988271, 307676, 511103, 691702, 426075, 1103234, 676301, 751771, 920074, 934427};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 56609756;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> fromJunction = {0, 0, 0, 1, 3, 0, 1, 0, 6, 6, 1, 7, 7, 10, 10, 14, 0};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    vector<int> ductLength = {751733, 1344009, 1019280, 537600, 1551461, 674123, 65498, 1180664, 680101, 1611313, 1043203, 865040, 1622177, 1689008, 1944767, 1166790, 1561007};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 33474314;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> fromJunction = {0, 0, 1, 0, 2, 2, 1, 5, 1, 3, 4, 6, 4, 6, 6, 10, 5, 3, 8, 9, 7, 9, 7, 0, 4, 2, 13, 4, 3, 10, 8, 2, 10, 23, 11, 33, 11};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37};
    vector<int> ductLength = {1294867, 597696, 1523655, 765283, 1787300, 986819, 216201, 1322398, 344225, 1705748, 198188, 1012595, 35830, 746795, 1573254, 429459, 1043174, 329970, 1836204, 1379586, 1132311, 1683782, 1297930, 1429021, 1731043, 1067837, 1031900, 517491, 1684028, 486290, 845151, 1461262, 409488, 1254354, 996097, 1104731, 690404};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 69866245;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> fromJunction = {0, 0, 1, 0, 0, 4, 4, 3, 6, 1, 9, 6, 6, 8, 3, 1, 13, 2, 7, 1, 0, 6, 2, 20, 9, 17, 2, 5, 27, 5};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    vector<int> ductLength = {1655513, 1288547, 1059556, 1849097, 526089, 748097, 974421, 1554413, 1076226, 561244, 461166, 1895268, 1618975, 1490309, 304244, 1574509, 1512446, 446342, 640606, 1692527, 12876, 242279, 699501, 1224640, 137574, 370940, 1943210, 1845479, 1911263, 1437418};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 59409995;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> fromJunction = {0, 0, 1, 0, 0, 1, 1, 2, 6, 2, 8, 10, 7, 5, 9, 5, 6, 7, 9, 12, 5, 14, 18, 13, 11, 18, 4, 12, 16, 13, 17, 20, 15, 32, 17, 33, 11, 0, 34, 31, 1, 14, 20, 32};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44};
    vector<int> ductLength = {294918, 1099730, 1202110, 993996, 1543962, 1161311, 1483613, 450015, 90043, 454342, 1629921, 1353696, 1775056, 1821838, 330370, 1925977, 1534797, 45918, 964891, 1005585, 1686856, 1284904, 416848, 1596684, 654307, 559629, 354079, 1445602, 1654464, 898545, 296341, 1309822, 1415004, 763026, 910742, 961101, 1442474, 1086743, 161156, 1672546, 149601, 1746000, 1675984, 1889379};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 87275298;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> fromJunction = {0, 0, 1, 1, 2, 1, 2, 5, 7, 0, 4, 6, 8, 6, 8, 12, 4, 1};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
    vector<int> ductLength = {313053, 168664, 402275, 54049, 393602, 499109, 749479, 1042800, 57274, 622270, 1596212, 1054667, 1876671, 351739, 1244814, 1995994, 1128598, 749365};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 24738447;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> fromJunction = {0, 0, 1, 1, 2, 1, 3, 3, 5, 2, 8, 1, 9, 3, 8, 5, 0, 2, 10, 2, 7, 19};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22};
    vector<int> ductLength = {857406, 660149, 1156926, 1509980, 1871188, 1160180, 317462, 841144, 217081, 686125, 536614, 259427, 1233779, 1322758, 342385, 906158, 102339, 1626542, 1275723, 391519, 1912170, 1262612};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 36655370;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> fromJunction = {0, 0, 0, 2, 2, 4, 5, 3, 1, 0, 9, 9, 4, 0, 10, 11, 9, 13, 17, 3, 19, 15, 2, 19, 11, 0, 2, 6, 22, 21, 8, 26, 28, 20, 2, 21, 19};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37};
    vector<int> ductLength = {298652, 1500755, 1109048, 192356, 637114, 69350, 243189, 40810, 1746214, 221815, 124923, 1972983, 1674866, 254749, 1670991, 319494, 395247, 1903923, 1738732, 795035, 98725, 1288238, 695642, 387134, 1398075, 307895, 1555232, 708697, 1357609, 1608282, 1086459, 1072782, 795498, 264290, 1666311, 1770066, 803523};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 61501772;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> fromJunction = {0, 0, 0, 0, 3, 2, 4, 6, 6, 4, 6, 5, 4, 7, 6, 2, 7, 4, 5, 12, 3, 19, 14, 11, 13, 12, 16, 1, 5, 7, 21};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};
    vector<int> ductLength = {157665, 740707, 1275422, 929688, 744297, 37573, 532450, 790633, 476601, 1958761, 1457041, 1327950, 1319504, 1558723, 794768, 1889626, 1257519, 865619, 1930348, 1852163, 862803, 320480, 1323570, 1421402, 1347915, 370035, 1852986, 1360524, 1541544, 215668, 1140537};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 62109212;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> fromJunction = {0, 0, 0, 1, 3, 3, 1, 1, 2, 8, 0, 7, 0, 5, 10, 6, 7, 11, 9, 17, 13, 18, 16, 9, 9, 7, 2, 25, 14, 5, 15, 15, 17, 11, 15, 14, 27, 25};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38};
    vector<int> ductLength = {1472833, 50518, 1408518, 1711239, 1300755, 304477, 593189, 502402, 1131329, 903699, 1786982, 1008541, 1311241, 1747625, 1804910, 1907516, 659938, 232342, 1292989, 1928613, 1537444, 1604390, 601208, 1059487, 1699019, 333352, 255969, 186444, 1364376, 1701275, 1625663, 74167, 958614, 1629762, 634583, 487615, 648176, 729373};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 74071639;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> fromJunction = {0, 0, 1, 2, 1, 0, 3, 2, 5, 7, 5};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    vector<int> ductLength = {977811, 18, 1107648, 1705547, 1948231, 555759, 435758, 52900, 535438, 1527731, 887322};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 15419378;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> fromJunction = {0, 0, 0, 2, 2, 3, 2, 1, 4, 6, 2, 7, 8, 5, 8, 1, 8, 4, 6, 16, 14, 6, 2, 1, 18, 7, 15, 25, 4, 5, 8, 6, 17, 9, 3, 12, 12};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37};
    vector<int> ductLength = {1751618, 1599193, 340971, 665993, 918084, 747678, 1033399, 1469380, 1317758, 1251734, 871051, 37927, 392739, 1573027, 940168, 680380, 9995, 1648695, 1284127, 1797133, 867172, 867305, 10028, 763349, 10797, 1606185, 1303792, 638893, 643308, 1061631, 1262468, 525010, 48426, 7884, 1804364, 1618879, 612806};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 62501736;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> fromJunction = {0, 0, 0, 2, 3, 2, 2, 3, 3, 2, 4, 2, 6, 5, 6, 7, 2, 13, 2, 6, 13, 9, 17, 22, 22, 9, 22, 13, 20, 11, 15, 30, 12, 27, 25, 14, 34, 15, 2, 2, 9, 38, 41, 4, 22};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45};
    vector<int> ductLength = {1055606, 1755967, 1221245, 644877, 37480, 1500320, 1829087, 380899, 938657, 789449, 439377, 740299, 64509, 420687, 380363, 1548568, 329337, 108997, 1980630, 1842063, 1343641, 975371, 1890242, 1225727, 203177, 541534, 1743720, 1748448, 414215, 291579, 1668168, 348454, 496783, 322003, 901130, 1527762, 1464910, 1155763, 962743, 1615314, 437273, 247570, 565533, 846616, 1384418};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 77995116;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> fromJunction = {0, 0, 1, 0, 0, 4, 5, 3, 5, 6, 0, 9, 8, 9, 13, 14, 10, 10, 8, 8, 6, 19, 15, 15, 23, 21, 0, 18, 22, 7, 28, 14, 25, 30, 9, 5, 15, 34, 26, 14, 29, 38, 3, 0, 21};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45};
    vector<int> ductLength = {1889945, 904077, 117888, 989579, 1698301, 133083, 1769141, 1081719, 606890, 1248245, 978457, 1990873, 1946024, 29490, 1286826, 264199, 1609783, 1993708, 541512, 1412538, 1048471, 910177, 775091, 850976, 669075, 1055202, 1960483, 1271040, 885821, 1905044, 1775846, 1829788, 1837274, 837854, 621506, 1492708, 1470779, 33427, 1223682, 1839688, 1639240, 849110, 1018547, 1664178, 438613};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 95187954;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> fromJunction = {0, 0, 0, 0, 3, 4, 3, 2, 1, 5, 5, 1, 10, 10, 10, 5, 4, 14, 11, 12, 4, 14, 15, 20, 22, 21, 0, 17, 21, 1, 20, 21};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32};
    vector<int> ductLength = {1061004, 287847, 274693, 193881, 1632219, 1565441, 956163, 1376734, 548592, 1873373, 1203836, 1755495, 508157, 1522369, 1047430, 1341256, 1709695, 180581, 1404854, 820253, 1392359, 1050783, 1048473, 840228, 752428, 1379498, 427084, 456201, 251648, 770856, 24654, 1980278};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 56170861;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> fromJunction = {0, 0, 0, 1, 3, 3, 3, 3, 6, 3, 6, 1, 2, 0, 10, 2, 9, 12, 12, 8, 10, 9, 20, 0, 23, 4, 18, 3, 12, 26, 7, 6, 28, 27};
    vector<int> toJunction = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34};
    vector<int> ductLength = {1095627, 331101, 1085668, 893254, 297560, 852819, 437066, 252918, 1270159, 940343, 350574, 835016, 197442, 998884, 114086, 430140, 912630, 1575003, 1106814, 1000451, 321044, 1272839, 1150331, 242087, 461783, 1148490, 1915341, 1794021, 107448, 1784684, 267535, 1594622, 1134929, 1558255};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 52482686;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> fromJunction = {0, 0, 13, 9, 3, 4, 5, 1, 5, 3, 2, 0, 0, 0, 4, 13, 0};
    vector<int> toJunction = {9, 4, 15, 11, 16, 14, 7, 6, 12, 13, 10, 2, 1, 5, 8, 17, 3};
    vector<int> ductLength = {1046279, 1311183, 429331, 1140774, 1468021, 49084, 791438, 304381, 1675432, 1353849, 889525, 391384, 1018989, 170090, 53233, 996444, 194951};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 24023532;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> fromJunction = {0, 2, 1, 1, 1, 1, 5, 0, 2, 1, 0, 0};
    vector<int> toJunction = {1, 6, 5, 12, 9, 4, 11, 10, 7, 3, 2, 8};
    vector<int> ductLength = {1637136, 958939, 1692459, 1504502, 983456, 1603950, 1737362, 1642028, 469895, 1390018, 444910, 1653149};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 26368651;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> fromJunction = {1, 1, 3, 7, 4, 2, 0, 0, 4, 4, 4, 6};
    vector<int> toJunction = {4, 3, 7, 9, 10, 5, 1, 2, 12, 11, 6, 8};
    vector<int> ductLength = {756086, 1354570, 1221591, 178962, 1697791, 359837, 1296576, 1527871, 1198063, 153975, 1229519, 48712};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 17995407;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> fromJunction = {2, 1, 0, 3, 15, 13, 2, 1, 2, 11, 13, 5, 0, 1, 16, 7, 9, 0, 11, 9, 2, 12, 10, 2, 17, 2};
    vector<int> toJunction = {25, 24, 1, 7, 20, 18, 4, 16, 11, 19, 15, 10, 2, 6, 23, 9, 21, 3, 17, 12, 8, 14, 13, 5, 26, 22};
    vector<int> ductLength = {647053, 1727718, 731575, 232820, 1942977, 211544, 841642, 1223983, 774948, 1406837, 1380047, 569215, 249690, 291226, 141650, 629043, 1414604, 849116, 499326, 1947278, 171465, 527815, 1505299, 1647180, 1272119, 1097027};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 40571986;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> fromJunction = {0, 5, 6, 1, 0, 1, 0, 6, 5, 7, 1, 3, 9};
    vector<int> toJunction = {13, 8, 11, 4, 1, 5, 2, 10, 7, 9, 3, 6, 12};
    vector<int> ductLength = {142410, 692222, 173386, 1412872, 692595, 1563931, 1129239, 1805929, 580530, 1566523, 1947253, 1995800, 1537794};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 24039391;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> fromJunction = {4, 0, 3, 18, 4, 16, 0, 0, 7, 15, 11, 10, 0, 2, 9, 11, 4, 11, 1, 9, 4, 1};
    vector<int> toJunction = {7, 2, 15, 21, 6, 22, 1, 4, 9, 19, 17, 13, 14, 10, 11, 16, 8, 20, 3, 18, 12, 5};
    vector<int> ductLength = {1660956, 62640, 77587, 1272780, 1113397, 503075, 1387878, 1123542, 1358587, 499855, 715022, 677340, 1305328, 939678, 1687302, 490056, 1516439, 677638, 1579077, 1934850, 626217, 1530915};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 38129603;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> fromJunction = {14, 0, 1, 7, 7, 3, 6, 15, 2, 1, 0, 1, 4, 2, 10, 7, 0, 2, 4};
    vector<int> toJunction = {16, 10, 6, 12, 14, 5, 9, 18, 8, 3, 1, 4, 17, 15, 13, 11, 2, 7, 19};
    vector<int> ductLength = {1921996, 577367, 1505571, 1460432, 1430407, 1016675, 1894760, 1231629, 388326, 1437292, 1915706, 874341, 1310859, 1228544, 1889610, 126905, 1740379, 292492, 263611};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 39628530;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> fromJunction = {5, 2, 1, 1, 0, 6, 0, 1, 7, 0, 5};
    vector<int> toJunction = {8, 5, 9, 3, 4, 10, 1, 6, 11, 2, 7};
    vector<int> ductLength = {79790, 412736, 992031, 693922, 1956418, 511737, 294883, 1830943, 1407898, 1619964, 29128};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 16189174;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> fromJunction = {10, 5, 9, 6, 5, 0, 4, 1, 6, 7, 4, 0, 3, 2, 3, 9, 9, 4, 0, 0, 0};
    vector<int> toJunction = {14, 15, 19, 20, 11, 16, 8, 3, 10, 9, 21, 1, 13, 17, 6, 18, 12, 7, 4, 2, 5};
    vector<int> ductLength = {1879072, 1806395, 130616, 1621653, 356886, 264619, 1209940, 428737, 523297, 888522, 476337, 620297, 1243504, 370345, 313209, 1475071, 1401301, 927429, 1040433, 636352, 1950874};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 34798323;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> fromJunction = {0, 0, 12, 0, 0, 1, 3, 5, 0, 4, 9, 5, 11, 0, 2, 10, 10, 13, 4, 15, 9, 2, 7, 3, 19, 0, 18, 3, 10, 14, 8, 5, 4, 9, 10, 11, 34, 31};
    vector<int> toJunction = {21, 1, 37, 27, 3, 22, 11, 7, 4, 12, 18, 10, 25, 6, 35, 16, 19, 30, 14, 32, 13, 5, 29, 24, 31, 2, 26, 9, 15, 17, 38, 8, 20, 34, 23, 28, 36, 33};
    vector<int> ductLength = {1989030, 1171764, 1799845, 1027309, 636100, 1903563, 1811712, 1845748, 1798259, 805087, 890009, 90665, 1821628, 1983330, 1156474, 1944869, 1102485, 657367, 1056858, 1340509, 1728841, 1397877, 1553437, 9466, 1353486, 107529, 968268, 1031078, 1156275, 1590348, 1032351, 344523, 90737, 1510988, 1287522, 698159, 793786, 920345};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 83842867;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> fromJunction = {0, 3, 1, 0, 3, 0, 1, 7, 3, 5, 0, 8, 10, 3, 2, 3, 6};
    vector<int> toJunction = {1, 6, 3, 5, 10, 4, 13, 11, 15, 12, 2, 16, 17, 7, 14, 8, 9};
    vector<int> ductLength = {1578260, 1218711, 1866477, 721147, 1643722, 1782452, 261647, 1087255, 1742963, 1825573, 875857, 293748, 977401, 400982, 352445, 1425558, 411437};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 30865410;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> fromJunction = {13, 3, 6, 11, 6, 0, 12, 10, 7, 3, 5, 1, 2, 3, 0, 6, 1, 18, 1, 28, 9, 5, 19, 8, 18, 8, 5, 2, 1, 0, 13, 3, 3, 8};
    vector<int> toJunction = {19, 7, 23, 24, 27, 1, 32, 17, 26, 6, 16, 3, 8, 25, 2, 20, 5, 33, 4, 30, 11, 31, 34, 15, 21, 14, 28, 12, 29, 10, 22, 9, 13, 18};
    vector<int> ductLength = {1939124, 624647, 115487, 1898132, 1371577, 901484, 1803049, 1440387, 225298, 980929, 602505, 1503991, 824930, 565939, 1135589, 556027, 762588, 518280, 1730809, 1999961, 335367, 1450496, 20210, 234806, 1528926, 1947845, 307591, 1663503, 1145374, 1444665, 943710, 1874283, 98232, 659068};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 63796361;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> fromJunction = {7, 0, 3, 0, 1, 9, 2, 5, 2, 1, 2};
    vector<int> toJunction = {10, 1, 5, 2, 4, 11, 9, 7, 8, 3, 6};
    vector<int> ductLength = {1315910, 500256, 950519, 1790890, 510374, 1599470, 1921609, 942967, 141838, 1899360, 1335672};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 20208718;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> fromJunction = {8, 3, 0, 0, 11, 1, 3, 0, 2, 0, 11, 12, 16, 15, 1, 9, 1, 15, 0};
    vector<int> toJunction = {10, 16, 2, 9, 13, 7, 5, 3, 11, 8, 14, 15, 19, 18, 4, 12, 6, 17, 1};
    vector<int> ductLength = {576737, 1198444, 1478004, 1320682, 1728124, 74457, 640423, 859439, 396425, 622192, 641519, 249187, 623832, 1829669, 1766977, 668524, 519702, 839337, 666319};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 29331924;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> fromJunction = {2, 20, 13, 3, 0, 8, 27, 1, 15, 14, 4, 17, 1, 4, 3, 0, 19, 1, 11, 8, 25, 5, 23, 11, 24, 9, 16, 28, 1, 3, 24, 32, 5, 0, 4, 1, 33, 26, 12, 3, 22, 0, 18, 5, 29};
    vector<int> toJunction = {26, 24, 37, 30, 1, 22, 36, 8, 23, 16, 7, 29, 13, 9, 6, 3, 33, 5, 14, 17, 38, 11, 25, 27, 42, 43, 20, 41, 31, 19, 45, 40, 10, 18, 21, 4, 39, 32, 35, 12, 28, 2, 44, 15, 34};
    vector<int> ductLength = {329133, 245682, 1771816, 396083, 1199436, 116651, 1559470, 1003774, 338022, 622393, 425077, 286918, 1701721, 1528541, 1224547, 1977017, 1036813, 968150, 314176, 1148997, 1153805, 661904, 23064, 1223179, 376791, 1330353, 1488303, 1043509, 352065, 1559595, 1840450, 1253848, 899630, 1982407, 1113596, 1600769, 865191, 833071, 620742, 522864, 1183449, 1432196, 367368, 1839185, 749294};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 81681596;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> fromJunction = {2, 0, 0, 14, 0, 0, 9, 5, 0, 3, 1, 6, 19, 2, 3, 2, 8, 11, 0, 5, 2, 3, 0, 8, 11, 2, 1, 4, 9, 7};
    vector<int> toJunction = {25, 4, 2, 16, 1, 3, 17, 24, 14, 11, 10, 12, 26, 6, 9, 28, 30, 27, 22, 8, 18, 7, 5, 21, 15, 19, 20, 13, 23, 29};
    vector<int> ductLength = {1586467, 1618809, 1114806, 508273, 534101, 726857, 221776, 1116921, 669362, 1520246, 540530, 587647, 1402096, 1566860, 522354, 1263991, 1552242, 746838, 1384853, 1609739, 1404090, 1689050, 1607587, 796206, 255562, 170164, 1011284, 1372433, 1451904, 462279};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 57261086;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> fromJunction = {8, 4, 4, 7, 1, 0, 4, 11, 0, 5, 2, 8, 8, 16, 0, 11, 6, 12, 2, 7, 0};
    vector<int> toJunction = {12, 17, 8, 21, 7, 3, 11, 14, 2, 16, 6, 13, 10, 18, 5, 20, 15, 19, 4, 9, 1};
    vector<int> ductLength = {1500654, 1463902, 307954, 1057170, 1197232, 413484, 752165, 1974779, 1679987, 33185, 1575192, 1329102, 1471985, 1019482, 414493, 837182, 1803690, 72109, 328954, 1988340, 1808546};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 41000305;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> fromJunction = {0, 5, 4, 0, 1, 0, 0, 0, 0, 3, 1, 0, 0, 3};
    vector<int> toJunction = {4, 12, 8, 13, 5, 9, 1, 11, 10, 7, 6, 2, 3, 14};
    vector<int> ductLength = {1750984, 184964, 830044, 490218, 1201448, 1132009, 1971504, 1664440, 1771097, 1447623, 1824147, 1749196, 1660867, 839485};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 33240401;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> fromJunction = {1, 0, 0, 7, 0, 2, 2, 2, 0, 1, 2, 10, 0, 0, 13, 2, 7, 3, 0, 0, 0, 2, 24, 2, 2, 16, 10, 2, 10};
    vector<int> toJunction = {27, 3, 1, 12, 6, 17, 7, 16, 10, 28, 15, 21, 2, 18, 19, 23, 14, 13, 5, 22, 11, 9, 26, 4, 8, 25, 29, 20, 24};
    vector<int> ductLength = {1004890, 1705829, 978015, 1485112, 55531, 1202443, 1792437, 1077937, 159087, 53155, 1456126, 912125, 561312, 599118, 654389, 435688, 1110460, 255424, 410433, 252592, 1894509, 1296, 1249670, 631000, 959111, 1701673, 1033863, 1004283, 490407};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 46416969;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> fromJunction = {9, 11, 10, 14, 3, 13, 8, 0, 8, 8, 0, 1, 5, 2, 0, 22, 19, 26, 27, 12, 4, 1, 0, 0, 4, 13, 6, 1, 4, 7, 0, 7, 9, 23, 3};
    vector<int> toJunction = {27, 16, 18, 20, 12, 29, 13, 2, 23, 19, 35, 4, 7, 15, 1, 28, 34, 32, 30, 31, 14, 3, 21, 10, 6, 25, 17, 26, 9, 11, 8, 24, 22, 33, 5};
    vector<int> ductLength = {11417, 1393219, 300177, 363007, 1417083, 198504, 1656682, 1949361, 1400674, 901149, 174125, 1483057, 108888, 1387611, 1268450, 1017972, 1616540, 379787, 640371, 1977835, 1418340, 631825, 1544233, 1743914, 1073708, 709815, 761482, 888679, 573209, 35025, 1168621, 828726, 117570, 1167738, 1236274};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 61794943;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> fromJunction = {1, 3, 3, 0, 0, 3, 6, 0, 0, 4};
    vector<int> toJunction = {4, 5, 10, 1, 7, 6, 9, 3, 2, 8};
    vector<int> ductLength = {24, 75, 49, 99, 2, 66, 19, 23, 4, 83};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 682;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> fromJunction = {0, 2, 5, 0, 8, 0, 0, 0, 1, 6};
    vector<int> toJunction = {4, 5, 9, 1, 10, 2, 7, 6, 3, 8};
    vector<int> ductLength = {55, 69, 1087030, 797633, 50, 13, 50, 70, 24, 52};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 2682980;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> fromJunction = {9, 1, 2, 9, 15, 0, 1, 0, 0, 0, 9, 4, 0, 1, 0, 0, 5, 9, 4, 6};
    vector<int> toJunction = {16, 8, 13, 12, 19, 9, 10, 5, 2, 1, 18, 6, 4, 3, 7, 15, 11, 17, 20, 14};
    vector<int> ductLength = {18, 84, 16, 52, 8, 28, 97, 9, 78, 73, 69, 57, 57, 92, 83, 528321, 99826, 890673, 44, 31};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 2148731;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> fromJunction = {5, 3, 24, 1, 37, 17, 7, 0, 6, 20, 12, 15, 0, 0, 0, 15, 3, 15, 1, 36, 7, 0, 2, 34, 4, 4, 4, 1, 3, 0, 0, 30, 24, 21, 5, 1, 22, 12, 15, 0, 17, 24, 1, 8, 3, 10, 6, 14};
    vector<int> toJunction = {24, 6, 27, 8, 40, 35, 12, 33, 9, 34, 44, 31, 2, 45, 29, 22, 19, 47, 13, 46, 15, 48, 20, 41, 42, 21, 18, 38, 5, 1, 26, 39, 36, 37, 7, 10, 30, 17, 28, 3, 23, 32, 4, 14, 16, 43, 11, 25};
    vector<int> ductLength = {217592, 96, 69, 5, 36, 54, 41, 82, 7, 61, 18, 54, 71, 55, 37, 68, 32, 15, 73, 80, 73, 42, 98, 18, 22, 9, 68, 4, 53, 40, 11, 23, 6, 52, 11, 60, 11, 1368335, 98, 12, 25, 20, 23, 22, 23, 70, 95, 10};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1807254;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> fromJunction = {7, 3, 2, 8, 2, 0, 0, 0, 2, 2, 0, 4, 2};
    vector<int> toJunction = {13, 9, 6, 11, 10, 1, 4, 2, 12, 7, 3, 8, 5};
    vector<int> ductLength = {9, 56, 98, 61, 11, 2, 95, 22, 85, 68, 54, 16, 80};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1142;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> fromJunction = {9, 0, 0, 11, 10, 1, 0, 15, 8, 3, 7, 9, 9, 4, 8, 4, 1, 10, 1, 21, 12, 4, 1, 1, 7, 12, 0, 1};
    vector<int> toJunction = {15, 8, 6, 22, 16, 14, 2, 28, 10, 23, 9, 11, 18, 25, 26, 12, 3, 19, 5, 27, 20, 21, 7, 4, 24, 17, 1, 13};
    vector<int> ductLength = {17, 30, 39, 48, 33, 55, 14, 4, 53, 1440799, 72, 85, 37, 95, 288415, 16, 47, 1, 59, 62, 1906506, 76, 65, 6, 68, 3, 199027, 590165};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 6746239;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> fromJunction = {1, 5, 14, 10, 0, 24, 18, 27, 10, 1, 14, 8, 11, 0, 0, 16, 5, 8, 5, 16, 4, 35, 2, 7, 6, 39, 6, 6, 0, 5, 5, 0, 19, 12, 13, 5, 20, 4, 1, 0, 26};
    vector<int> toJunction = {16, 23, 17, 20, 29, 27, 40, 35, 33, 7, 19, 26, 25, 2, 18, 36, 14, 12, 28, 21, 6, 37, 34, 15, 11, 41, 13, 8, 1, 9, 30, 4, 38, 22, 24, 10, 32, 31, 5, 3, 39};
    vector<int> ductLength = {43, 56, 98, 99, 75, 20, 47, 3, 66, 80, 21, 64, 61, 49, 43, 680409, 56, 91, 72, 44, 93, 94, 54, 59, 90, 63, 62, 61, 51, 54, 56, 61, 48, 29, 66, 6, 77, 78, 4, 49, 18};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 684837;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> fromJunction = {3, 7, 8, 20, 1, 12, 1, 8, 0, 4, 2, 2, 3, 3, 1, 8, 6, 3, 5, 3, 14, 0, 7};
    vector<int> toJunction = {8, 10, 11, 23, 18, 15, 4, 16, 2, 13, 14, 12, 7, 17, 3, 22, 20, 6, 9, 5, 21, 1, 19};
    vector<int> ductLength = {44, 53, 69, 56, 31, 5, 63, 7, 97, 16, 68, 13, 45, 7, 11, 75, 41, 49, 662298, 62, 76, 75, 34};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 664144;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> fromJunction = {1, 0, 3, 1, 2, 1, 7, 8, 0, 3, 5, 0, 1, 5, 0};
    vector<int> toJunction = {12, 3, 6, 4, 14, 5, 9, 11, 1, 13, 10, 2, 15, 7, 8};
    vector<int> ductLength = {36, 95, 68, 67, 99, 44, 14, 32, 38, 28, 13, 30, 4, 69, 21};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1151;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> fromJunction = {2, 10, 8, 2, 34, 3, 11, 5, 20, 10, 1, 1, 4, 30, 6, 11, 6, 8, 6, 19, 3, 0, 15, 7, 22, 0, 2, 8, 0, 2, 8, 5, 1, 0, 2, 2, 7, 3, 4, 4, 16, 11, 0};
    vector<int> toJunction = {20, 19, 33, 29, 39, 13, 17, 41, 23, 40, 16, 28, 26, 34, 14, 35, 11, 10, 30, 43, 7, 2, 37, 42, 24, 3, 6, 36, 22, 4, 15, 21, 8, 12, 32, 5, 25, 9, 27, 18, 38, 31, 1};
    vector<int> ductLength = {20, 70, 31, 35, 18, 1, 41, 35, 20, 79, 90, 30, 17, 1493773, 33, 97, 55, 31, 89, 65, 88, 54, 53, 59, 57, 3, 42, 76, 32, 10, 89, 72, 14, 63, 81, 43, 43, 37, 5, 27, 13, 91, 17};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1497422;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> fromJunction = {6, 1, 0, 13, 7, 19, 7, 4, 14, 8, 19, 7, 16, 10, 14, 5, 0, 1, 5, 0, 10, 5, 12, 17, 19, 7, 1};
    vector<int> toJunction = {14, 4, 2, 27, 17, 25, 11, 7, 22, 10, 21, 12, 20, 16, 18, 8, 1, 3, 13, 5, 24, 15, 19, 26, 23, 9, 6};
    vector<int> ductLength = {51, 95, 23, 72, 69, 30, 15, 41, 27, 60, 27, 49, 1149702, 91, 2, 91, 2, 45, 57, 41, 1375402, 6, 41, 634436, 44, 13, 1065868};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 7077206;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> fromJunction = {2, 0, 0, 8, 4, 5, 8, 0, 1, 0, 1};
    vector<int> toJunction = {7, 2, 6, 11, 8, 9, 10, 4, 3, 1, 5};
    vector<int> ductLength = {81, 55, 27, 36, 80, 95, 95, 67, 56, 77, 27};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1150;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> fromJunction = {5, 0, 0, 0, 11, 4, 1, 1, 1, 1, 0, 0, 6, 0};
    vector<int> toJunction = {7, 3, 13, 8, 14, 6, 5, 9, 11, 12, 1, 4, 10, 2};
    vector<int> ductLength = {68, 26, 13, 65, 25, 75, 11, 98, 32, 8, 39, 71, 70, 37};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1060;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> fromJunction = {2, 1, 7, 0, 0, 0, 0, 1, 0, 6, 0};
    vector<int> toJunction = {8, 9, 11, 5, 1, 2, 7, 4, 6, 10, 3};
    vector<int> ductLength = {18, 40, 97, 31, 17, 86, 11, 5, 13, 9, 16};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 578;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> fromJunction = {0, 3, 9, 1, 11, 3, 1, 0, 1, 0, 0, 0, 5, 1};
    vector<int> toJunction = {12, 11, 14, 8, 13, 6, 9, 5, 10, 1, 2, 4, 7, 3};
    vector<int> ductLength = {13, 86, 25, 49, 35, 85, 77, 1, 29, 28, 82, 41, 68, 53};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1142;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> fromJunction = {0, 10, 2, 0, 7, 6, 18, 2, 5, 15, 16, 1, 22, 10, 5, 8, 16, 3, 15, 1, 7, 2, 14, 12, 20, 1, 4, 3, 2, 16, 11, 1, 17, 6, 18, 6, 5, 3, 21, 18, 4};
    vector<int> toJunction = {1, 13, 31, 2, 22, 11, 26, 20, 36, 29, 37, 3, 38, 18, 12, 27, 19, 24, 33, 39, 17, 4, 35, 14, 23, 10, 16, 5, 6, 32, 28, 15, 34, 8, 25, 41, 7, 30, 40, 21, 9};
    vector<int> ductLength = {83, 29, 95, 75, 55, 80, 81, 70, 737903, 21, 59, 54, 99, 23, 8, 71, 94, 10, 50, 91, 22, 54, 63, 53, 97, 95, 60, 81, 85, 6, 83, 74, 529019, 60, 48, 8, 81, 88, 64, 45, 98};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1800549;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> fromJunction = {13, 12, 2, 22, 1, 13, 2, 11, 18, 0, 20, 11, 0, 17, 6, 22, 1, 0, 3, 9, 1, 14, 22, 0, 4, 9, 0, 10, 6, 5, 0};
    vector<int> toJunction = {18, 23, 6, 31, 17, 15, 11, 30, 20, 12, 26, 16, 10, 29, 25, 24, 3, 2, 13, 21, 7, 28, 27, 5, 14, 22, 1, 19, 9, 8, 4};
    vector<int> ductLength = {10, 80, 123817, 80, 33, 52, 53, 2, 63, 94, 14, 7, 23, 66, 50, 60, 34, 72, 9, 86, 12, 6, 58, 36, 82, 63, 80, 59, 3, 3, 34};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 126247;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> fromJunction = {4, 6, 0, 0, 7, 4, 11, 4, 13, 4, 2, 0, 2, 15, 0, 10, 0, 1, 11, 3, 11, 9};
    vector<int> toJunction = {6, 8, 5, 1, 15, 9, 22, 12, 21, 11, 4, 2, 17, 18, 13, 19, 3, 10, 20, 7, 14, 16};
    vector<int> ductLength = {12, 68, 64, 96, 15, 8, 33, 64, 10, 73, 98, 55, 98, 66, 44, 3, 26, 68, 62, 8, 95, 23};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1857;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> fromJunction = {1, 15, 1, 6, 21, 1, 3, 8, 2, 11, 19, 5, 0, 0, 5, 3, 10, 5, 8, 10, 2, 10, 5, 0, 1, 7, 9, 17};
    vector<int> toJunction = {10, 19, 8, 18, 25, 3, 5, 14, 4, 24, 21, 7, 2, 1, 15, 6, 12, 20, 13, 23, 22, 17, 28, 11, 9, 16, 27, 26};
    vector<int> ductLength = {77, 98, 21, 81, 46, 90, 4, 57, 6, 3, 2, 82, 61, 65, 12, 68, 20, 83, 56, 31, 41, 30, 63, 64, 792720, 86, 17, 27};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 795220;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> fromJunction = {9, 4, 7, 2, 2, 10, 0, 2, 1, 0, 0, 13, 8, 0, 1, 5, 0};
    vector<int> toJunction = {17, 6, 9, 16, 12, 14, 3, 7, 13, 1, 10, 15, 11, 4, 5, 8, 2};
    vector<int> ductLength = {68, 463127, 10, 51, 70, 67, 20, 27, 57, 79, 1, 52, 20, 23, 77, 48, 74};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 464592;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> fromJunction = {0};
    vector<int> toJunction = {1};
    vector<int> ductLength = {10};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> fromJunction = {0, 0, 0, 1, 4, 4, 6, 7, 7, 7, 20};
    vector<int> toJunction = {1, 3, 4, 2, 5, 6, 7, 20, 9, 10, 31};
    vector<int> ductLength = {10, 10, 100, 10, 5, 1, 1, 100, 1, 1, 5};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 281;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> fromJunction = {0, 2, 2, 2, 3};
    vector<int> toJunction = {2, 3, 4, 5, 6};
    vector<int> ductLength = {100, 200, 300, 400, 500};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 2200;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> fromJunction = {0, 0, 0, 0, 0};
    vector<int> toJunction = {1, 2, 3, 4, 5};
    vector<int> ductLength = {100, 200, 300, 400, 500};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 2500;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> fromJunction = {0, 0, 2, 2};
    vector<int> toJunction = {1, 2, 3, 4};
    vector<int> ductLength = {5, 1, 1, 1};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> fromJunction = {0, 0};
    vector<int> toJunction = {1, 2};
    vector<int> ductLength = {10, 3};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> fromJunction = {0};
    vector<int> toJunction = {1};
    vector<int> ductLength = {10};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> fromJunction = {0, 0, 0, 1, 4, 4, 6, 7, 7, 7, 20};
    vector<int> toJunction = {1, 3, 4, 2, 5, 6, 7, 20, 9, 10, 31};
    vector<int> ductLength = {10, 10, 100, 10, 5, 1, 1, 100, 1, 1, 5};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 281;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> fromJunction = {0, 2, 2, 2, 3};
    vector<int> toJunction = {2, 3, 4, 5, 6};
    vector<int> ductLength = {100, 200, 300, 400, 500};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 2200;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> fromJunction = {0, 0, 0, 0, 0};
    vector<int> toJunction = {1, 2, 3, 4, 5};
    vector<int> ductLength = {100, 200, 300, 400, 500};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 2500;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> fromJunction = {0, 0, 2, 2};
    vector<int> toJunction = {1, 2, 3, 4};
    vector<int> ductLength = {5, 1, 1, 1};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> fromJunction = {0, 0};
    vector<int> toJunction = {1, 2};
    vector<int> ductLength = {10, 3};
    PowerOutage* pObj = new PowerOutage();
    clock_t start = clock();
    int result = pObj->estimateTimeOut(fromJunction, toJunction, ductLength);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=311170&rd=4515&pm=1697
********************************************************************************
#line 108 "PowerOutage.cpp" 
#include <stdlib.h> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <iostream> 
#include <sstream> 
using namespace std; 
 
#ifdef __GNUC__ 
typedef long long lint; 
#else 
typedef __int64 lint; 
#endif 
 
class PowerOutage 
{  
public:  
  int estimateTimeOut(vector <int> fj, vector <int> tj, vector <int> dl)  
  { 
   vector<int> wl(50); 
   int k=fj.size(); 
   int i,j; 
 
   int sm=0; 
   for(i=0;i<k;i++) sm+=dl[i]; 
   int ml=0; 
   wl[0]=0; 
   for(i=1;i<50;i++) 
   { 
    for(j=0;j<k;j++) 
     if(tj[j]==i) 
     { 
      wl[i]=wl[fj[j]]+dl[j]; 
      break; 
     } 
    ml=max(ml,wl[i]); 
   } 
   return 2*sm-ml; 
  }  
  
  
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/