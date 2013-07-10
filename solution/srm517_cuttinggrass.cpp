/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11536
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

class CuttingGrass {
public:
    int theMin(vector<int> init, vector<int> grow, int H);
};

int CuttingGrass::theMin(vector<int> init, vector<int> grow, int H) {
    int ret;
    return ret;
}


int test0() {
    vector<int> init = {5, 8, 58};
    vector<int> grow = {2, 1, 1};
    int H = 16;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> init = {5, 8};
    vector<int> grow = {2, 1};
    int H = 58;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> init = {5, 8};
    vector<int> grow = {2, 1};
    int H = 0;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> init = {5, 1, 6, 5, 8, 4, 7};
    vector<int> grow = {2, 1, 1, 1, 4, 3, 2};
    int H = 33;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> init = {49, 13, 62, 95, 69, 75, 62, 96, 97, 22, 69, 69, 52};
    vector<int> grow = {7, 2, 4, 3, 6, 5, 7, 6, 5, 4, 7, 7, 4};
    int H = 517;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> init = {27452, 7066, 27676, 42510, 1298, 281, 25087, 37955, 47657, 11828, 14803, 46075, 45122, 23486, 489, 2393, 21128, 29058, 34225, 23953, 10743, 17065, 31508, 26232, 16120, 35255, 36787, 35940, 10925, 43039, 49305, 23639, 27759, 29905, 13878, 6817, 18327, 21164, 16832, 49286, 1358, 40187, 21455, 23173, 10964, 5544, 37282, 4167, 18200, 48396};
    vector<int> grow = {899, 661, 388, 733, 786, 70, 176, 622, 27, 878, 958, 988, 983, 259, 949, 712, 333, 296, 22, 661, 593, 332, 409, 635, 498, 919, 731, 9, 484, 863, 754, 344, 336, 7, 863, 929, 383, 770, 206, 648, 59, 306, 313, 771, 687, 544, 380, 21, 37, 720};
    int H = 1000000;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> init = {39345, 577, 628, 1456, 558, 13268, 30376, 44622, 11057, 21302, 1215, 27559, 23675, 44154, 18449, 23710, 19244, 32419, 4496, 4800, 45034, 9374, 19788, 30383, 16579, 43346, 11022, 17611, 12658, 20354, 38351, 25479, 2460, 23964, 13765, 5763, 13013, 24076, 11684, 23631, 33498, 23603, 14690, 41150, 10583, 42512, 22402, 46122, 22426, 32585};
    vector<int> grow = {460, 744, 433, 90, 233, 60, 167, 136, 121, 851, 639, 147, 73, 668, 271, 441, 793, 1000, 176, 550, 59, 455, 278, 356, 705, 864, 68, 474, 7, 117, 540, 79, 480, 733, 755, 836, 854, 353, 539, 143, 866, 492, 967, 191, 333, 588, 282, 246, 992, 279};
    int H = 1000000;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> init = {42544, 35710, 7085, 4007, 34386, 5302, 28913, 6545, 37453, 2227, 31335, 44024, 21063, 38397, 27717, 46086, 32456, 38217, 25859, 345, 16841, 23610, 35876, 13544, 1870, 49020, 45994, 23368, 532, 36835, 18715, 18089, 31456, 9504, 39857, 5832, 12116, 6351, 26604, 16086, 486, 25735, 6979, 19895, 21119, 47423, 10154, 1497, 2078, 20201};
    vector<int> grow = {220, 840, 148, 744, 21, 36, 653, 634, 890, 537, 273, 411, 960, 415, 694, 954, 934, 599, 577, 561, 915, 864, 354, 313, 639, 438, 25, 303, 127, 743, 914, 537, 855, 390, 277, 325, 760, 214, 498, 682, 631, 723, 593, 732, 625, 423, 712, 393, 351, 635};
    int H = 1000000;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> init = {48626, 45854, 11602, 8368, 43119, 6356, 35241, 33063, 43150, 38322, 43449, 3749, 26046, 14059, 37168, 1684, 14759, 26276, 34438, 11969, 9461, 24963, 15896, 14676, 10675, 15947, 6090, 27846, 23625, 2535, 25639, 25889, 28439, 35980, 12460, 9214, 44752, 29075, 28248, 11585, 28850, 24122, 16610, 33056, 33098, 32009, 46245, 22177, 12744, 27479};
    vector<int> grow = {94, 832, 809, 737, 940, 63, 525, 232, 758, 434, 870, 988, 201, 689, 537, 709, 472, 781, 589, 229, 54, 534, 143, 741, 894, 123, 14, 165, 440, 402, 282, 400, 849, 593, 838, 542, 486, 729, 851, 940, 843, 789, 897, 1, 523, 173, 904, 933, 996, 303};
    int H = 1000000;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> init = {22381, 24683, 26513, 17915, 8739, 12817, 19927, 25661, 6504, 10331, 45030, 4697, 37704, 47856, 8654, 5075, 5364, 31037, 43996, 10697, 46672, 15163, 8747, 20508, 30605, 27321, 30549, 16844, 37995, 23947, 9277, 16244, 31481, 40231, 8551, 37641, 21065, 28536, 45553, 42519, 44690, 15414, 41961, 47017, 33694, 17452, 24930, 735, 33511, 27867};
    vector<int> grow = {323, 432, 183, 127, 372, 543, 498, 484, 421, 825, 519, 998, 203, 754, 920, 19, 575, 169, 411, 480, 74, 198, 818, 221, 661, 417, 39, 760, 838, 415, 526, 819, 976, 762, 335, 273, 257, 881, 807, 38, 955, 944, 646, 390, 721, 188, 962, 777, 405, 836};
    int H = 1000000;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> init = {1231, 1536, 1519, 1940, 1539, 1385, 1599, 1613, 1394, 1803, 1763, 1706, 1863, 1452, 1818, 1914, 1386, 1954, 1496, 1722, 1616, 1862, 1755, 1215, 1233, 1078, 1448, 1241, 1732, 1561, 1633, 1307, 1844, 1911, 1371, 1338, 1989, 1789, 1656, 1413, 1929, 1182, 1815, 1474, 1540, 1797, 1586, 1427, 1996, 1202};
    vector<int> grow = {86, 55, 2, 86, 96, 71, 81, 53, 79, 22, 23, 8, 69, 32, 35, 39, 30, 18, 92, 64, 88, 1, 48, 81, 91, 75, 44, 77, 3, 33, 9, 52, 56, 4, 19, 73, 52, 18, 8, 77, 91, 59, 50, 62, 42, 87, 89, 24, 71, 67};
    int H = 63601;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> init = {1231, 1536, 1519, 1940, 1539, 1385, 1599, 1613, 1394, 1803, 1763, 1706, 1863, 1452, 1818, 1914, 1386, 1954, 1496, 1722, 1616, 1862, 1755, 1215, 1233, 1078, 1448, 1241, 1732, 1561, 1633, 1307, 1844, 1911, 1371, 1338, 1989, 1789, 1656, 1413, 1929, 1182, 1815, 1474, 1540, 1797, 1586, 1427, 1996, 1202};
    vector<int> grow = {86, 55, 2, 86, 96, 71, 81, 53, 79, 22, 23, 8, 69, 32, 35, 39, 30, 18, 92, 64, 88, 1, 48, 81, 91, 75, 44, 77, 3, 33, 9, 52, 56, 4, 19, 73, 52, 18, 8, 77, 91, 59, 50, 62, 42, 87, 89, 24, 71, 67};
    int H = 63600;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
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
    vector<int> init = {1889, 1958, 1825, 1304, 1555, 1437, 1697, 1607, 1129, 1639, 1600, 1791, 1029, 1194, 1608, 1713, 1792, 1807, 1932, 1158, 1738, 1919, 1821, 1360, 1148, 1769, 1643, 1577, 1045, 1809, 1512, 1181, 1351, 1476, 1267, 1607, 1858, 1676, 1402, 1547, 1265, 1554, 1831, 1808, 1885, 1550, 1764, 1415, 1609, 1270};
    vector<int> grow = {65, 13, 90, 68, 36, 68, 32, 58, 70, 100, 30, 75, 34, 76, 57, 77, 40, 30, 79, 99, 100, 49, 35, 54, 7, 2, 3, 82, 29, 17, 79, 38, 9, 93, 49, 80, 14, 36, 54, 98, 96, 37, 42, 45, 54, 22, 21, 52, 66, 76};
    int H = 52041;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> init = {1889, 1958, 1825, 1304, 1555, 1437, 1697, 1607, 1129, 1639, 1600, 1791, 1029, 1194, 1608, 1713, 1792, 1807, 1932, 1158, 1738, 1919, 1821, 1360, 1148, 1769, 1643, 1577, 1045, 1809, 1512, 1181, 1351, 1476, 1267, 1607, 1858, 1676, 1402, 1547, 1265, 1554, 1831, 1808, 1885, 1550, 1764, 1415, 1609, 1270};
    vector<int> grow = {65, 13, 90, 68, 36, 68, 32, 58, 70, 100, 30, 75, 34, 76, 57, 77, 40, 30, 79, 99, 100, 49, 35, 54, 7, 2, 3, 82, 29, 17, 79, 38, 9, 93, 49, 80, 14, 36, 54, 98, 96, 37, 42, 45, 54, 22, 21, 52, 66, 76};
    int H = 52040;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> init = {1448, 1646, 1737, 1029, 1239, 1956, 1421, 1162, 1580, 1438, 1283, 1600, 1722, 1466, 1944, 1337, 1464, 1457, 1180, 1734, 1700, 1949, 1530, 1988, 1679, 1465, 1360, 1735, 1187, 1357, 1319, 1884, 1948, 1554, 1918, 1934, 1863, 1486, 1136, 1291, 1894, 1360, 1448, 1264, 1603, 1356, 1665, 1825, 1187, 1639};
    vector<int> grow = {22, 81, 62, 29, 63, 71, 43, 39, 56, 52, 92, 54, 10, 45, 78, 23, 12, 75, 56, 51, 72, 53, 90, 49, 92, 85, 86, 77, 21, 69, 8, 87, 58, 86, 28, 36, 80, 55, 82, 73, 60, 46, 66, 22, 63, 90, 66, 1, 98, 88};
    int H = 83108;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
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
    vector<int> init = {1448, 1646, 1737, 1029, 1239, 1956, 1421, 1162, 1580, 1438, 1283, 1600, 1722, 1466, 1944, 1337, 1464, 1457, 1180, 1734, 1700, 1949, 1530, 1988, 1679, 1465, 1360, 1735, 1187, 1357, 1319, 1884, 1948, 1554, 1918, 1934, 1863, 1486, 1136, 1291, 1894, 1360, 1448, 1264, 1603, 1356, 1665, 1825, 1187, 1639};
    vector<int> grow = {22, 81, 62, 29, 63, 71, 43, 39, 56, 52, 92, 54, 10, 45, 78, 23, 12, 75, 56, 51, 72, 53, 90, 49, 92, 85, 86, 77, 21, 69, 8, 87, 58, 86, 28, 36, 80, 55, 82, 73, 60, 46, 66, 22, 63, 90, 66, 1, 98, 88};
    int H = 83107;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> init = {1926, 1957, 1069, 1136, 1390, 1817, 1037, 1113, 1020, 1530, 1221, 1989, 1721, 1826, 1922, 1293, 1412, 1671, 1691, 1360, 1620, 1554, 1901, 1624, 1816, 1064, 1904, 1353, 1993, 1051, 1358, 1297, 1907, 1444, 1850, 1873, 1434, 1111, 1933, 1200, 1939, 1032, 1689, 1849, 1315, 1381, 1155, 1545, 1936, 1376};
    vector<int> grow = {65, 61, 42, 17, 2, 98, 26, 82, 32, 40, 21, 6, 54, 45, 70, 41, 12, 26, 30, 57, 80, 99, 19, 12, 21, 80, 25, 61, 31, 39, 52, 40, 54, 55, 75, 6, 49, 19, 67, 26, 44, 2, 7, 68, 72, 64, 47, 99, 88, 38};
    int H = 43412;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> init = {1926, 1957, 1069, 1136, 1390, 1817, 1037, 1113, 1020, 1530, 1221, 1989, 1721, 1826, 1922, 1293, 1412, 1671, 1691, 1360, 1620, 1554, 1901, 1624, 1816, 1064, 1904, 1353, 1993, 1051, 1358, 1297, 1907, 1444, 1850, 1873, 1434, 1111, 1933, 1200, 1939, 1032, 1689, 1849, 1315, 1381, 1155, 1545, 1936, 1376};
    vector<int> grow = {65, 61, 42, 17, 2, 98, 26, 82, 32, 40, 21, 6, 54, 45, 70, 41, 12, 26, 30, 57, 80, 99, 19, 12, 21, 80, 25, 61, 31, 39, 52, 40, 54, 55, 75, 6, 49, 19, 67, 26, 44, 2, 7, 68, 72, 64, 47, 99, 88, 38};
    int H = 43411;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> init = {1771, 1620, 1250, 1140, 1349, 1669, 1824, 1364, 1622, 1563, 1895, 1536, 1469, 1531, 1111, 1714, 1258, 1438, 1487, 1844, 1122, 1418, 1845, 1587, 1761, 1614, 1500, 1307, 1407, 1377, 1424, 1476, 1357, 1275, 1647, 1385, 1724, 1264, 1940, 1530, 1278, 1231, 1625, 1217, 1104, 1168, 1690, 1694, 1462, 1101};
    vector<int> grow = {97, 45, 99, 61, 1, 40, 53, 1, 83, 42, 95, 77, 21, 25, 96, 10, 61, 12, 86, 45, 64, 5, 64, 64, 61, 25, 83, 5, 44, 60, 46, 97, 97, 74, 12, 96, 73, 18, 22, 86, 62, 10, 59, 96, 65, 41, 87, 3, 100, 89};
    int H = 79597;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> init = {1771, 1620, 1250, 1140, 1349, 1669, 1824, 1364, 1622, 1563, 1895, 1536, 1469, 1531, 1111, 1714, 1258, 1438, 1487, 1844, 1122, 1418, 1845, 1587, 1761, 1614, 1500, 1307, 1407, 1377, 1424, 1476, 1357, 1275, 1647, 1385, 1724, 1264, 1940, 1530, 1278, 1231, 1625, 1217, 1104, 1168, 1690, 1694, 1462, 1101};
    vector<int> grow = {97, 45, 99, 61, 1, 40, 53, 1, 83, 42, 95, 77, 21, 25, 96, 10, 61, 12, 86, 45, 64, 5, 64, 64, 61, 25, 83, 5, 44, 60, 46, 97, 97, 74, 12, 96, 73, 18, 22, 86, 62, 10, 59, 96, 65, 41, 87, 3, 100, 89};
    int H = 79596;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> init = {1591, 1016, 1910, 1612, 1318, 1711, 1030, 1560, 1428, 1181, 1997, 1539, 1105, 1999, 1249, 1770, 1911, 1135, 1363, 1903, 1861, 1515, 1617, 1795, 1567, 1587, 1382, 1752, 1734, 1036, 1512, 1164, 1275, 1706, 1610, 1140, 1295, 1654, 1936, 1313, 1091, 1845, 1489, 1309, 1842, 1747, 1230, 1298, 1542, 1585};
    vector<int> grow = {54, 41, 88, 8, 34, 7, 92, 38, 88, 95, 84, 97, 22, 50, 67, 70, 26, 13, 37, 29, 72, 49, 81, 26, 8, 17, 87, 20, 88, 15, 9, 80, 87, 16, 59, 19, 97, 3, 53, 15, 93, 11, 92, 31, 85, 26, 38, 86, 19, 85};
    int H = 56755;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> init = {1591, 1016, 1910, 1612, 1318, 1711, 1030, 1560, 1428, 1181, 1997, 1539, 1105, 1999, 1249, 1770, 1911, 1135, 1363, 1903, 1861, 1515, 1617, 1795, 1567, 1587, 1382, 1752, 1734, 1036, 1512, 1164, 1275, 1706, 1610, 1140, 1295, 1654, 1936, 1313, 1091, 1845, 1489, 1309, 1842, 1747, 1230, 1298, 1542, 1585};
    vector<int> grow = {54, 41, 88, 8, 34, 7, 92, 38, 88, 95, 84, 97, 22, 50, 67, 70, 26, 13, 37, 29, 72, 49, 81, 26, 8, 17, 87, 20, 88, 15, 9, 80, 87, 16, 59, 19, 97, 3, 53, 15, 93, 11, 92, 31, 85, 26, 38, 86, 19, 85};
    int H = 56754;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> init = {1544, 1936, 1350, 1748, 1706, 1861, 1288, 1093, 1603, 1550, 1342, 1634, 1072, 1046, 1764, 1313, 1001, 1146, 1737, 1492, 1161, 1436, 1209, 1605, 1146, 1132, 1367, 1978, 1499, 1536, 1019, 1034, 1098, 1932, 1516, 1038, 1236, 1071, 1450, 1038, 1497, 1029, 1256, 1161, 1943, 1497, 1971, 1818, 1382, 1411};
    vector<int> grow = {5, 2, 89, 28, 13, 86, 30, 4, 15, 41, 21, 97, 98, 76, 34, 98, 23, 66, 3, 41, 21, 50, 17, 15, 82, 24, 40, 20, 88, 27, 11, 6, 6, 41, 98, 16, 39, 40, 51, 98, 8, 29, 34, 63, 34, 31, 76, 33, 14, 73};
    int H = 65391;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> init = {1544, 1936, 1350, 1748, 1706, 1861, 1288, 1093, 1603, 1550, 1342, 1634, 1072, 1046, 1764, 1313, 1001, 1146, 1737, 1492, 1161, 1436, 1209, 1605, 1146, 1132, 1367, 1978, 1499, 1536, 1019, 1034, 1098, 1932, 1516, 1038, 1236, 1071, 1450, 1038, 1497, 1029, 1256, 1161, 1943, 1497, 1971, 1818, 1382, 1411};
    vector<int> grow = {5, 2, 89, 28, 13, 86, 30, 4, 15, 41, 21, 97, 98, 76, 34, 98, 23, 66, 3, 41, 21, 50, 17, 15, 82, 24, 40, 20, 88, 27, 11, 6, 6, 41, 98, 16, 39, 40, 51, 98, 8, 29, 34, 63, 34, 31, 76, 33, 14, 73};
    int H = 65390;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> init = {1187, 1909, 1352, 1486, 1587, 1380, 1098, 1774, 1053, 1729, 1455, 1088, 1119, 1553, 1099, 1498, 1385, 1893, 1703, 1066, 1342, 1995, 1544, 1352, 1039, 1017, 1975, 1512, 1856, 1311, 1688, 1918, 1341, 1280, 1447, 1923, 1073, 1400, 1802, 1959, 1197, 1869, 1565, 1237, 1513, 1808, 1434, 1198, 1104, 1877};
    vector<int> grow = {94, 92, 28, 10, 88, 66, 66, 76, 36, 18, 13, 86, 83, 61, 80, 31, 66, 17, 88, 79, 63, 95, 50, 53, 41, 71, 91, 6, 86, 82, 4, 58, 4, 66, 99, 22, 14, 54, 1, 11, 100, 48, 63, 32, 67, 9, 96, 67, 15, 68};
    int H = 60018;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> init = {1187, 1909, 1352, 1486, 1587, 1380, 1098, 1774, 1053, 1729, 1455, 1088, 1119, 1553, 1099, 1498, 1385, 1893, 1703, 1066, 1342, 1995, 1544, 1352, 1039, 1017, 1975, 1512, 1856, 1311, 1688, 1918, 1341, 1280, 1447, 1923, 1073, 1400, 1802, 1959, 1197, 1869, 1565, 1237, 1513, 1808, 1434, 1198, 1104, 1877};
    vector<int> grow = {94, 92, 28, 10, 88, 66, 66, 76, 36, 18, 13, 86, 83, 61, 80, 31, 66, 17, 88, 79, 63, 95, 50, 53, 41, 71, 91, 6, 86, 82, 4, 58, 4, 66, 99, 22, 14, 54, 1, 11, 100, 48, 63, 32, 67, 9, 96, 67, 15, 68};
    int H = 60017;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> init = {1516, 1114, 1281, 1701, 1754, 1246, 1953, 1398, 1257, 1879, 1533, 1846, 1654, 1153, 1937, 1534, 1534, 1338, 1425, 1375, 1318, 1560, 1465, 1324, 1637, 1718, 1396, 1723, 1292, 1860, 1300, 1428, 1526, 1091, 1988, 1226, 1718, 1643, 1793, 1032, 1887, 1497, 1696, 1971, 1361, 2000, 1418, 1401, 1309, 1671};
    vector<int> grow = {60, 44, 84, 31, 63, 6, 77, 75, 35, 32, 40, 4, 19, 14, 34, 18, 25, 82, 73, 9, 94, 19, 58, 34, 22, 15, 78, 42, 97, 84, 13, 99, 13, 75, 46, 2, 11, 94, 17, 24, 44, 95, 26, 19, 16, 93, 29, 56, 20, 51};
    int H = 75627;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> init = {1516, 1114, 1281, 1701, 1754, 1246, 1953, 1398, 1257, 1879, 1533, 1846, 1654, 1153, 1937, 1534, 1534, 1338, 1425, 1375, 1318, 1560, 1465, 1324, 1637, 1718, 1396, 1723, 1292, 1860, 1300, 1428, 1526, 1091, 1988, 1226, 1718, 1643, 1793, 1032, 1887, 1497, 1696, 1971, 1361, 2000, 1418, 1401, 1309, 1671};
    vector<int> grow = {60, 44, 84, 31, 63, 6, 77, 75, 35, 32, 40, 4, 19, 14, 34, 18, 25, 82, 73, 9, 94, 19, 58, 34, 22, 15, 78, 42, 97, 84, 13, 99, 13, 75, 46, 2, 11, 94, 17, 24, 44, 95, 26, 19, 16, 93, 29, 56, 20, 51};
    int H = 75626;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> init = {1800, 1452, 1318, 1857, 1415, 1663, 1890, 1759, 1925, 1860, 1812, 1561, 1969, 1385, 1095, 1816, 1249, 1030, 1251, 1093, 1210, 1493, 1230, 1893, 1206, 1529, 1943, 1473, 1028, 1631, 1466, 1142, 1481, 1175, 1155, 1318, 1242, 1927, 1008, 1690, 1187, 1960, 1667, 1930, 1070, 1868, 1259, 1428, 1723, 1608};
    vector<int> grow = {17, 35, 1, 42, 100, 38, 18, 20, 27, 91, 40, 69, 68, 27, 98, 61, 31, 49, 41, 36, 39, 80, 12, 35, 76, 57, 55, 64, 67, 21, 11, 13, 36, 41, 67, 36, 31, 1, 17, 23, 9, 27, 2, 67, 95, 42, 19, 43, 96, 23};
    int H = 54929;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> init = {1800, 1452, 1318, 1857, 1415, 1663, 1890, 1759, 1925, 1860, 1812, 1561, 1969, 1385, 1095, 1816, 1249, 1030, 1251, 1093, 1210, 1493, 1230, 1893, 1206, 1529, 1943, 1473, 1028, 1631, 1466, 1142, 1481, 1175, 1155, 1318, 1242, 1927, 1008, 1690, 1187, 1960, 1667, 1930, 1070, 1868, 1259, 1428, 1723, 1608};
    vector<int> grow = {17, 35, 1, 42, 100, 38, 18, 20, 27, 91, 40, 69, 68, 27, 98, 61, 31, 49, 41, 36, 39, 80, 12, 35, 76, 57, 55, 64, 67, 21, 11, 13, 36, 41, 67, 36, 31, 1, 17, 23, 9, 27, 2, 67, 95, 42, 19, 43, 96, 23};
    int H = 54928;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> init = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> grow = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    int H = 50;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> init = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> grow = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    int H = 49;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> init = {100000};
    vector<int> grow = {100000};
    int H = 0;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> init = {0};
    vector<int> grow = {1};
    int H = 0;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> init = {1586, 1808, 1761, 1209, 1157, 1652, 1279, 1827, 1498, 1670, 1075, 1008, 1623, 1064, 1230, 1034, 1653, 1701, 1373, 1118, 1607, 1139, 1792, 1045, 1958, 1976, 1982, 1660, 1439, 1332, 1256, 1448, 1277, 1225, 1158, 1342, 1946, 1997, 1445, 1300, 1938, 1133, 1567, 1787, 1569, 1245, 1700, 1191, 1427, 1243};
    vector<int> grow = {19, 26, 38, 33, 73, 10, 27, 46, 74, 93, 29, 27, 28, 82, 84, 20, 95, 87, 24, 85, 50, 5, 24, 2, 25, 19, 13, 56, 15, 93, 43, 34, 13, 89, 11, 70, 16, 62, 23, 81, 47, 21, 43, 7, 56, 12, 77, 36, 6, 83};
    int H = 73450;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> init = {1586, 1808, 1761, 1209, 1157, 1652, 1279, 1827, 1498, 1670, 1075, 1008, 1623, 1064, 1230, 1034, 1653, 1701, 1373, 1118, 1607, 1139, 1792, 1045, 1958, 1976, 1982, 1660, 1439, 1332, 1256, 1448, 1277, 1225, 1158, 1342, 1946, 1997, 1445, 1300, 1938, 1133, 1567, 1787, 1569, 1245, 1700, 1191, 1427, 1243};
    vector<int> grow = {19, 26, 38, 33, 73, 10, 27, 46, 74, 93, 29, 27, 28, 82, 84, 20, 95, 87, 24, 85, 50, 5, 24, 2, 25, 19, 13, 56, 15, 93, 43, 34, 13, 89, 11, 70, 16, 62, 23, 81, 47, 21, 43, 7, 56, 12, 77, 36, 6, 83};
    int H = 73449;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> init = {1677, 1507, 1915, 1301, 1026, 1206, 1976, 1067, 1536, 1855, 1942, 1602, 1071, 1026, 1669, 1330, 1141, 1751, 1884, 1264, 1920, 1708, 1104, 1955, 1535, 1415, 1942, 1328, 1240, 1068, 1719, 1216, 1353, 1178, 1549, 1919, 1336, 1213, 1428, 1510, 1969, 1748, 1466, 1872, 1678, 1512, 1618, 1111, 1985, 1413};
    vector<int> grow = {98, 55, 51, 39, 73, 43, 34, 38, 13, 3, 55, 51, 46, 84, 13, 41, 12, 90, 10, 95, 9, 18, 14, 41, 69, 18, 46, 17, 88, 85, 47, 48, 97, 65, 63, 68, 16, 97, 92, 58, 33, 64, 81, 54, 49, 37, 48, 54, 26, 7};
    int H = 40487;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> init = {1677, 1507, 1915, 1301, 1026, 1206, 1976, 1067, 1536, 1855, 1942, 1602, 1071, 1026, 1669, 1330, 1141, 1751, 1884, 1264, 1920, 1708, 1104, 1955, 1535, 1415, 1942, 1328, 1240, 1068, 1719, 1216, 1353, 1178, 1549, 1919, 1336, 1213, 1428, 1510, 1969, 1748, 1466, 1872, 1678, 1512, 1618, 1111, 1985, 1413};
    vector<int> grow = {98, 55, 51, 39, 73, 43, 34, 38, 13, 3, 55, 51, 46, 84, 13, 41, 12, 90, 10, 95, 9, 18, 14, 41, 69, 18, 46, 17, 88, 85, 47, 48, 97, 65, 63, 68, 16, 97, 92, 58, 33, 64, 81, 54, 49, 37, 48, 54, 26, 7};
    int H = 40486;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> init = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};
    vector<int> grow = {91, 14, 17, 69, 14, 85, 93, 33, 11, 16, 67, 67, 47, 82, 2, 1, 92, 90, 30, 18, 31, 14, 23, 73, 72, 99, 10, 18, 53, 10, 47, 37, 25, 44, 18, 69, 51, 42, 32, 35, 87, 98, 84, 85, 83, 82, 74, 97, 92, 88};
    int H = 72196;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> init = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};
    vector<int> grow = {91, 14, 17, 69, 14, 85, 93, 33, 11, 16, 67, 67, 47, 82, 2, 1, 92, 90, 30, 18, 31, 14, 23, 73, 72, 99, 10, 18, 53, 10, 47, 37, 25, 44, 18, 69, 51, 42, 32, 35, 87, 98, 84, 85, 83, 82, 74, 97, 92, 88};
    int H = 72195;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> init = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};
    vector<int> grow = {31, 74, 81, 85, 88, 82, 66, 53, 59, 99, 46, 40, 50, 83, 69, 59, 80, 73, 23, 79, 75, 1, 92, 79, 85, 70, 45, 86, 66, 35, 99, 35, 59, 73, 60, 61, 33, 10, 14, 92, 77, 18, 65, 20, 81, 58, 63, 88, 92, 48};
    int H = 103393;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> init = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};
    vector<int> grow = {31, 74, 81, 85, 88, 82, 66, 53, 59, 99, 46, 40, 50, 83, 69, 59, 80, 73, 23, 79, 75, 1, 92, 79, 85, 70, 45, 86, 66, 35, 99, 35, 59, 73, 60, 61, 33, 10, 14, 92, 77, 18, 65, 20, 81, 58, 63, 88, 92, 48};
    int H = 103392;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> init = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};
    vector<int> grow = {76, 65, 77, 41, 53, 100, 42, 84, 97, 51, 34, 72, 64, 22, 10, 76, 9, 5, 12, 60, 13, 30, 70, 26, 32, 33, 9, 28, 66, 90, 97, 6, 92, 31, 19, 59, 3, 46, 51, 56, 29, 34, 40, 21, 87, 76, 87, 21, 46, 73};
    int H = 96498;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> init = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};
    vector<int> grow = {76, 65, 77, 41, 53, 100, 42, 84, 97, 51, 34, 72, 64, 22, 10, 76, 9, 5, 12, 60, 13, 30, 70, 26, 32, 33, 9, 28, 66, 90, 97, 6, 92, 31, 19, 59, 3, 46, 51, 56, 29, 34, 40, 21, 87, 76, 87, 21, 46, 73};
    int H = 96497;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> init = {1940, 1539, 1385, 1599, 1613, 1394, 1803, 1763, 1706, 1863, 1452, 1818, 1914, 1386, 1954, 1496, 1722, 1616, 1862, 1755, 1215, 1233, 1078, 1448, 1241, 1732, 1561, 1633, 1307, 1844, 1911, 1371, 1338, 1989, 1789, 1656, 1413, 1929, 1182, 1815, 1474, 1540, 1797, 1586, 1427, 1996, 1202, 1701, 1731, 1538};
    vector<int> grow = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    int H = 123578;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> init = {1940, 1539, 1385, 1599, 1613, 1394, 1803, 1763, 1706, 1863, 1452, 1818, 1914, 1386, 1954, 1496, 1722, 1616, 1862, 1755, 1215, 1233, 1078, 1448, 1241, 1732, 1561, 1633, 1307, 1844, 1911, 1371, 1338, 1989, 1789, 1656, 1413, 1929, 1182, 1815, 1474, 1540, 1797, 1586, 1427, 1996, 1202, 1701, 1731, 1538};
    vector<int> grow = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    int H = 123577;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> init = {1304, 1555, 1437, 1697, 1607, 1129, 1639, 1600, 1791, 1029, 1194, 1608, 1713, 1792, 1807, 1932, 1158, 1738, 1919, 1821, 1360, 1148, 1769, 1643, 1577, 1045, 1809, 1512, 1181, 1351, 1476, 1267, 1607, 1858, 1676, 1402, 1547, 1265, 1554, 1831, 1808, 1885, 1550, 1764, 1415, 1609, 1270, 1387, 1132, 1616};
    vector<int> grow = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    int H = 130173;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> init = {1304, 1555, 1437, 1697, 1607, 1129, 1639, 1600, 1791, 1029, 1194, 1608, 1713, 1792, 1807, 1932, 1158, 1738, 1919, 1821, 1360, 1148, 1769, 1643, 1577, 1045, 1809, 1512, 1181, 1351, 1476, 1267, 1607, 1858, 1676, 1402, 1547, 1265, 1554, 1831, 1808, 1885, 1550, 1764, 1415, 1609, 1270, 1387, 1132, 1616};
    vector<int> grow = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    int H = 130172;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> init = {1029, 1239, 1956, 1421, 1162, 1580, 1438, 1283, 1600, 1722, 1466, 1944, 1337, 1464, 1457, 1180, 1734, 1700, 1949, 1530, 1988, 1679, 1465, 1360, 1735, 1187, 1357, 1319, 1884, 1948, 1554, 1918, 1934, 1863, 1486, 1136, 1291, 1894, 1360, 1448, 1264, 1603, 1356, 1665, 1825, 1187, 1639, 1231, 1139, 1109};
    vector<int> grow = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    int H = 87174;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> init = {1029, 1239, 1956, 1421, 1162, 1580, 1438, 1283, 1600, 1722, 1466, 1944, 1337, 1464, 1457, 1180, 1734, 1700, 1949, 1530, 1988, 1679, 1465, 1360, 1735, 1187, 1357, 1319, 1884, 1948, 1554, 1918, 1934, 1863, 1486, 1136, 1291, 1894, 1360, 1448, 1264, 1603, 1356, 1665, 1825, 1187, 1639, 1231, 1139, 1109};
    vector<int> grow = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    int H = 87173;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> init = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> grow = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int H = 1225;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> init = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> grow = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int H = 1224;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> init = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> grow = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int H = 801197;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> init = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> grow = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int H = 801196;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> init = {57050};
    vector<int> grow = {51131};
    int H = 57050;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> init = {57050};
    vector<int> grow = {51131};
    int H = 57049;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> init = {58100};
    vector<int> grow = {22951};
    int H = 0;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> init = {1231, 1536, 1519, 1940, 1539, 1385, 1599, 1613, 1394, 1803, 1763, 1706, 1863, 1452, 1818, 1914, 1386, 1954, 1496, 1722, 1616, 1862, 1755, 1215, 1233, 1078, 1448, 1241, 1732, 1561, 1633, 1307, 1844, 1911, 1371, 1338, 1989, 1789, 1656, 1413, 1929, 1182, 1815, 1474, 1540, 1797, 1586, 1427, 1996, 1202};
    vector<int> grow = {86, 55, 2, 86, 96, 71, 81, 53, 79, 22, 23, 8, 69, 32, 35, 39, 30, 18, 92, 64, 88, 1, 48, 81, 91, 75, 44, 77, 3, 33, 9, 52, 56, 4, 19, 73, 52, 18, 8, 77, 91, 59, 50, 62, 42, 87, 89, 24, 71, 67};
    int H = 63601;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> init = {5, 1, 6, 5, 8, 4, 7};
    vector<int> grow = {2, 1, 1, 1, 4, 3, 2};
    int H = 33;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> init = {5, 8, 58};
    vector<int> grow = {2, 1, 1};
    int H = 16;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> init = {5, 6, 7, 8, 9};
    vector<int> grow = {1, 1, 1, 1, 2};
    int H = 11;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> init = {1};
    vector<int> grow = {1};
    int H = 5;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> init = {100, 100, 100};
    vector<int> grow = {1, 1, 100};
    int H = 20;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> init = {100, 150, 200, 600};
    vector<int> grow = {500, 1000, 2405, 5405};
    int H = 1;
    CuttingGrass* pObj = new CuttingGrass();
    clock_t start = clock();
    int result = pObj->theMin(init, grow, H);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22868779&rd=14542&pm=11536
********************************************************************************
#include <cstdio> 
#include <cstring> 
#include <cstdlib> 
#include <cmath> 
 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <map> 
#include <set> 
#include <algorithm> 
#include <functional> 
using namespace std; 
 
#define all(x) (x).begin(),(x).end() 
#define pb push_back 
#define mp make_pair 
#define sz size() 
#define xx first 
#define yy second 
 
#define repeach(i,x) for(typeof(x.begin()) i=x.begin(); i!=x.end(); ++i) 
#define repreach(i,x) for(typeof(x.rbegin()) i=x.rbegin(); i!=x.rend(); ++i) 
#define rep(i,n) for(int i=0;i<(n);++i) 
#define repx(i,s,t) for(int i=(s);i<(t);++i) 
#define repr(i,n) for(int i=(n)-1;i>=0;--i) 
#define reprx(i,s,t) for(int i=(s)-1;i>=(t);--i) 
 
#define mset memset 
#define mcpy memcpy 
#define mclr(x,sz) mset(x,0,sz) 
 
#define debug(x) cout<#x<<": "<<x<<endl; 
 
/*TEMPLATE-KM*/ 
#define MAXN 55 
#define inf 1000000000 
#define _clr(x) memset(x,0xff,sizeof(int)*n) 
 
int kuhn_munkras(int m,int n,int mat[][MAXN],int* match1,int* match2){ 
  int s[MAXN],t[MAXN],l1[MAXN],l2[MAXN],p,q,ret=0,i,j,k; 
  for (i=0;i<m;i++) 
    for (l1[i]=-inf,j=0;j<n;j++) 
      l1[i]=mat[i][j]>l1[i]?mat[i][j]:l1[i]; 
  for (i=0;i<n;l2[i++]=0); 
  for (_clr(match1),_clr(match2),i=0;i<m;i++){ 
    for (_clr(t),s[p=q=0]=i;p<=q&&match1[i]<0;p++) 
      for (k=s[p],j=0;j<n&&match1[i]<0;j++) 
        if (l1[k]+l2[j]==mat[k][j]&&t[j]<0){ 
          s[++q]=match2[j],t[j]=k; 
          if (s[q]<0) 
            for (p=j;p>=0;j=p) 
              match2[j]=k=t[j],p=match1[k],match1[k]=j; 
        } 
    if (match1[i]<0){ 
      for (i--,p=inf,k=0;k<=q;k++) 
        for (j=0;j<n;j++) 
          if (t[j]<0&&l1[s[k]]+l2[j]-mat[s[k]][j]<p) 
            p=l1[s[k]]+l2[j]-mat[s[k]][j]; 
      for (j=0;j<n;l2[j]+=t[j]<0?0:p,j++); 
      for (k=0;k<=q;l1[s[k++]]-=p); 
    } 
  } 
  for (i=0;i<m;i++) 
    ret+=mat[i][match1[i]]; 
  return ret; 
} 
/*************/ 
int mat[MAXN][MAXN]; 
int mx[MAXN], my[MAXN]; 
class CuttingGrass { 
public: 
  int theMin(vector <int> init, vector <int> grow, int H) { 
    int sum_i=0, sum_d=0; 
    rep(i,init.sz) sum_i+=init[i]; 
     
    if(sum_i <= H) return 0; 
    rep(i,grow.sz) sum_d+=grow[i]; 
    rep(k,init.sz) { 
      int d=k+1; 
      mclr(mat, sizeof mat); 
      rep(i, d) rep(j, init.sz) 
        mat[i][j] = init[j]+(i+1)*grow[j]; 
      // rep(i, d)  { rep(j, init.sz) cout << mat[i][j] << " "; cout << endl; } 
      int kmv=kuhn_munkras(d, init.sz, mat, mx, my); 
       
      // cout << kmv << " " << sum_i+d*sum_d-kmv << endl; 
      if(sum_i+d*sum_d-kmv <= H) return d; 
    } 
    return -1; 
  } 
 
}; 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/