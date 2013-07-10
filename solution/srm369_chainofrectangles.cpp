/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8192
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

class ChainOfRectangles {
public:
    int getMaximalArea(vector<int> width, vector<int> height, string color);
};

int ChainOfRectangles::getMaximalArea(vector<int> width, vector<int> height, string color) {
    int ret;
    return ret;
}


int test0() {
    vector<int> width = {10000};
    vector<int> height = {10000};
    string color = "R";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 100000000;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> width = {10, 5};
    vector<int> height = {10, 5};
    string color = "GB";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> width = {10, 9};
    vector<int> height = {8, 7};
    string color = "GB";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> width = {10, 8, 6, 4, 2};
    vector<int> height = {9, 7, 5, 3, 1};
    string color = "GBRRG";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> width = {234, 142, 82};
    vector<int> height = {7371, 5111, 4567};
    string color = "BBG";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 1350320;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> width = {3764, 3723, 3696, 3272, 3176, 3074, 2964, 2668, 2621, 2614, 2576, 2570, 2563, 2472, 2074, 2025, 1951, 1831, 1794, 1793, 1786, 1772, 1737, 1695, 1629, 1074, 930, 886, 864, 810, 596, 496, 450, 301, 204, 185, 173, 172, 90, 16};
    vector<int> height = {9334, 9012, 8835, 8799, 8787, 8358, 8263, 8133, 8038, 7949, 7433, 6345, 5916, 5578, 5459, 5029, 4907, 4903, 4871, 4787, 4726, 4578, 4419, 4313, 4238, 4222, 4214, 3706, 3335, 3134, 2771, 2685, 2488, 1820, 1577, 1454, 861, 781, 595, 15};
    string color = "BRGBRBBBRGBGBGBBGBBRBRGBGBBGBRGBRBGGBGBG";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 16281839;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> width = {2004, 1941, 1474};
    vector<int> height = {221, 135, 109};
    string color = "GGB";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 282218;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> width = {6326, 5885, 5625, 5371, 5368, 5150, 5045, 4590, 4029, 3988, 3825, 3817, 3336, 2545, 2311, 2216, 2011, 1897, 1837, 1388, 1026, 35};
    vector<int> height = {3121, 3101, 3070, 3055, 3049, 2997, 2685, 2657, 2626, 2401, 2299, 2279, 2260, 1891, 1677, 1319, 1297, 1255, 982, 912, 616, 53};
    string color = "GGGBGBGBBRRBRGGRBBBRGB";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 8137570;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> width = {8946, 7371};
    vector<int> height = {3415, 1462};
    string color = "RB";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 19774188;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> width = {6146, 6001, 5966, 5887, 5377, 5094, 4766, 4446, 4165, 3974, 3304, 2126, 1316, 930, 368, 355};
    vector<int> height = {756, 722, 608, 585, 576, 507, 433, 427, 351, 319, 316, 285, 140, 126, 21, 13};
    string color = "RGBBRRRBRBBRRGRR";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 2203031;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> width = {3332, 3032, 2676};
    vector<int> height = {1899, 946, 323};
    string color = "BRB";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 4323544;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> width = {6422, 6401, 6172, 6091, 5883, 5767, 5579, 5385, 5304, 5239, 5120, 5063, 5017, 4984, 4893, 4826, 4550, 4358, 4117, 4110, 4108, 3757, 2640, 2612, 2532, 1488, 1347, 1258, 1256, 1173, 1164, 1048, 977, 552, 524, 359, 272, 171};
    vector<int> height = {443, 440, 438, 430, 389, 388, 386, 349, 324, 323, 310, 306, 305, 298, 290, 246, 243, 226, 218, 213, 211, 208, 197, 180, 171, 146, 144, 139, 136, 132, 121, 116, 65, 62, 41, 39, 32, 28};
    string color = "BGBBBRGRBRBGBBBRRBRGGBRRBGGBGBRGGBBGGB";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 1509007;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> width = {5176, 4485, 1820};
    vector<int> height = {358, 271, 170};
    string color = "RGG";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 1215435;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> width = {7631, 7252, 6797, 6091, 6064, 5846, 5537, 5529, 4999, 4667, 4657, 4128, 3292, 3138, 3020, 2855, 2529, 2521, 2022, 1954, 1539, 653, 486};
    vector<int> height = {6803, 6588, 5574, 5501, 5421, 4733, 3924, 3869, 3672, 3618, 3279, 2212, 2181, 1703, 1688, 1642, 1337, 1205, 1125, 1079, 803, 641, 363};
    string color = "BRGRBGGGGRGRRGRBGRGRRRG";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 22235490;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> width = {4522, 4440, 2304, 538};
    vector<int> height = {806, 540, 474, 422};
    string color = "RRGR";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 2779672;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> width = {2881, 2768, 2722, 2603, 2440, 2417, 2276, 2059, 2006, 1981, 1915, 1841, 1795, 1708, 1699, 1480, 1372, 1277, 1233, 1217, 1159, 547, 502, 415};
    vector<int> height = {2680, 2273, 2259, 2118, 1990, 1863, 1714, 1610, 1582, 1450, 1365, 1317, 1258, 1072, 957, 825, 814, 692, 663, 240, 202, 162, 143, 138};
    string color = "RGGBRGRGGRRBGRGRRRBBBRRG";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 3455970;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> width = {4949};
    vector<int> height = {2422};
    string color = "B";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 11986478;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> width = {17, 13, 12, 9, 8, 7, 6, 4, 2};
    vector<int> height = {64, 56, 51, 34, 33, 32, 31, 23, 13};
    string color = "BBBGGGRBR";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 848;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> width = {7948};
    vector<int> height = {383};
    string color = "G";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 3044084;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> width = {17, 14, 12, 11, 8, 1};
    vector<int> height = {17, 16, 13, 8, 7, 5};
    string color = "GBRGGG";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 153;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> width = {2968};
    vector<int> height = {1749};
    string color = "R";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 5191032;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> width = {30, 24, 19, 18, 17, 16, 14, 13, 7, 4, 1};
    vector<int> height = {16, 15, 14, 12, 11, 10, 8, 5, 4, 3, 1};
    string color = "RBRBGGGRRRG";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 234;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> width = {4, 3};
    vector<int> height = {12, 8};
    string color = "GB";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> width = {26, 22, 10, 7};
    vector<int> height = {5, 4, 3, 2};
    string color = "GBGR";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> width = {7, 4};
    vector<int> height = {24, 21};
    string color = "RB";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> width = {37, 33, 30, 3};
    vector<int> height = {6, 4, 3, 2};
    string color = "RGBB";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> width = {7, 6, 3, 1};
    vector<int> height = {10, 6, 5, 1};
    string color = "RGGR";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> width = {8, 7, 5, 4, 2};
    vector<int> height = {8, 7, 6, 5, 3};
    string color = "RGRBG";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> width = {6, 5, 4, 1};
    vector<int> height = {10, 8, 5, 1};
    string color = "BRGG";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> width = {1};
    vector<int> height = {1};
    string color = "B";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> width = {9978, 9933, 9931, 9547, 9489, 9397, 9390, 9348, 9186, 9171, 8868, 8818, 8592, 8238, 8165, 8127, 7826, 7804, 7693, 7665, 7521, 7359, 6959, 6859, 6704, 6462, 6384, 6309, 5521, 5267, 5079, 4992, 4908, 4536, 4330, 4161, 4157, 4089, 4017, 3974, 3548, 3534, 3476, 2904, 2805, 2515, 2115, 1831, 1408, 1248};
    vector<int> height = {9963, 9802, 9773, 9770, 9706, 9603, 9598, 9508, 9157, 9073, 9045, 8869, 8833, 8725, 8604, 8328, 7967, 7815, 7703, 7559, 7245, 7159, 7073, 6952, 6797, 6767, 6434, 6219, 6150, 5939, 5754, 5582, 5449, 5289, 5208, 5186, 5124, 4751, 4215, 4192, 4083, 3843, 3643, 3617, 3294, 3109, 2667, 2601, 2282, 1188};
    string color = "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 99410814;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> width = {9841, 9424, 9423, 9410, 9391, 9306, 9289, 9146, 9100, 8971, 8918, 8731, 8639, 8586, 8324, 8175, 8173, 8056, 7768, 7702, 7516, 7295, 6767, 6758, 6695, 6595, 6390, 6263, 5770, 5718, 5514, 4525, 4502, 4483, 4270, 4109, 4106, 3931, 3817, 3709, 3082, 2918, 2852, 2594, 2499, 2074, 1702, 1555, 1267, 868};
    vector<int> height = {9864, 9789, 9724, 9721, 9280, 8821, 8753, 8564, 8514, 8440, 8316, 8285, 8170, 8119, 8068, 7977, 7863, 7688, 7532, 7476, 7342, 7238, 7227, 7055, 6858, 6597, 6578, 6396, 6334, 6282, 6100, 5863, 5815, 5804, 5727, 5694, 5244, 5095, 4671, 4567, 4328, 4005, 3827, 2934, 2782, 2541, 2150, 1906, 1208, 1009};
    string color = "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 97071624;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> width = {9986, 9766, 9518, 9448, 9330, 9298, 9255, 9227, 8970, 8941, 8743, 8597, 8529, 8417, 8192, 8146, 8083, 8021, 7809, 7772, 7456, 7424, 7413, 7370, 7306, 7175, 7105, 6924, 6863, 6322, 6220, 6185, 6039, 5978, 5810, 5652, 5406, 5094, 5088, 4915, 4493, 3805, 3705, 3703, 3064, 2842, 2108, 1937, 1682, 546};
    vector<int> height = {9993, 9978, 9894, 9846, 9757, 9560, 9494, 9457, 9267, 9227, 9222, 9097, 8645, 8595, 8448, 8363, 8154, 7996, 7854, 7803, 6960, 6835, 6667, 6626, 6582, 6569, 6441, 6400, 6193, 5972, 5928, 5736, 5684, 5361, 5301, 4902, 4854, 4614, 4484, 4404, 4104, 3855, 3762, 3613, 3314, 2974, 2636, 2011, 1558, 872};
    string color = "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 99790098;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> width = {9976, 9971, 9965, 9861, 9387, 9305, 9282, 9089, 8635, 8483, 8428, 8411, 8381, 8248, 8236, 8190, 7747, 7680, 7596, 7439, 7320, 6998, 6927, 6880, 6860, 6845, 6789, 6438, 6212, 6065, 5835, 5571, 5524, 5454, 5179, 5030, 4797, 4668, 3898, 3528, 3307, 3016, 2944, 2158, 2090, 1956, 1807, 1633, 1530, 1143};
    vector<int> height = {9972, 9923, 9897, 9644, 9623, 9537, 9515, 9416, 9163, 8858, 8824, 8739, 8634, 8626, 8477, 8395, 8187, 8184, 8004, 7954, 7807, 7760, 7488, 7452, 7442, 7408, 7260, 7091, 7007, 6932, 6905, 6895, 6560, 6160, 5963, 5661, 5638, 5460, 5213, 5181, 5110, 4911, 4858, 4561, 4503, 4346, 3352, 2332, 2263, 1884};
    string color = "GGGGRGRRRRGGGGGGGGGRRGGGGRGRRRRGRRRGRGGRRRRRRGRRGR";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 52910327;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> width = {9970, 9957, 9850, 9684, 9630, 9556, 9462, 9374, 9309, 9255, 9235, 9177, 9173, 9130, 9029, 8926, 8829, 8790, 8704, 8620, 8536, 8513, 8370, 8349, 8150, 8003, 7775, 7747, 7745, 7617, 7509, 7497, 7072, 6394, 6345, 6174, 5892, 5582, 5408, 5333, 5204, 4931, 4826, 4677, 4174, 3839, 3812, 3308, 2416, 2395};
    vector<int> height = {9989, 9897, 9742, 9739, 9426, 9387, 9279, 8933, 8765, 8737, 8653, 8545, 8318, 8293, 8280, 8249, 8145, 8049, 7960, 7854, 7839, 7725, 7720, 7368, 7116, 7012, 6917, 6887, 6800, 6673, 6651, 6462, 5798, 5782, 5766, 5599, 5562, 5076, 4905, 4547, 3925, 3894, 3637, 3552, 2966, 2829, 2088, 1767, 1446, 714};
    string color = "BBBRRRBBRBRBRBBRRBRBBRRBBBBBBBRRBRBRRBRBRBRRBRBRBB";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 52070608;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> width = {9991, 9805, 9760, 9692, 9691, 9652, 9527, 9464, 9454, 9311, 9231, 9185, 9038, 8970, 8848, 8756, 8727, 8718, 8709, 8492, 8414, 8265, 8029, 7974, 7803, 7481, 7087, 6818, 6772, 6589, 6436, 6428, 6013, 5984, 5979, 5684, 5664, 5614, 5538, 5507, 5324, 4652, 4595, 4391, 4166, 4107, 3251, 2974, 1862, 1469};
    vector<int> height = {9730, 9720, 9699, 9541, 9436, 9434, 9360, 9168, 9122, 9066, 9015, 8878, 8748, 8567, 8528, 8399, 8216, 8147, 8114, 7953, 7623, 7340, 7117, 7054, 6752, 6405, 6369, 6360, 6351, 6127, 6064, 6048, 5926, 5904, 5816, 5313, 5174, 5141, 5136, 5073, 4982, 4739, 4731, 3698, 3450, 3270, 3215, 3055, 2220, 1456};
    string color = "GBGGGBBBBBBBGBBGGBGBGGBBBBGGGGBGGBBGBBGGGBBGBBBBBB";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 58026996;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> width = {9975, 9967, 9900, 9721, 9705, 9665, 9480, 9399, 9222, 9046, 8919, 8820, 8503, 8426, 8374, 8266, 8258, 8117, 7960, 7866, 7822, 7778, 7705, 7539, 7472, 7256, 7192, 6995, 6764, 6646, 6580, 6537, 6535, 6245, 6201, 6173, 6108, 5975, 5906, 5871, 5680, 5579, 5460, 4597, 4443, 4106, 2950, 2906, 2384, 1966};
    vector<int> height = {9973, 9931, 9824, 9820, 9766, 9734, 9733, 9599, 9450, 9250, 9210, 8993, 8983, 8885, 8833, 8687, 8653, 8511, 8420, 8404, 8282, 8152, 8136, 8002, 7741, 7697, 7663, 7654, 7627, 7125, 6658, 6613, 6408, 6198, 6136, 5951, 5425, 5276, 5265, 5146, 3311, 2943, 2620, 2569, 2564, 2362, 2164, 1888, 1704, 1620};
    string color = "BRBGGGGRBBGRRBGBGGRBGGRRBGRGGGBRBBRBBRGBRRRBRGRBBB";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 38791685;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> width = {9985, 9967, 9957, 9888, 9803, 9719, 9626, 9571, 9569, 9223, 9219, 9103, 9096, 8933, 8556, 8534, 8482, 8192, 8190, 8185, 8078, 7859, 7685, 7593, 7024, 7017, 6999, 6833, 6624, 6528, 6414, 6335, 5970, 5936, 5895, 5752, 5707, 5311, 5178, 5156, 5121, 4962, 4863, 4832, 4757, 4506, 4072, 3068, 2836, 2476};
    vector<int> height = {9988, 9885, 9763, 9647, 9348, 9281, 9241, 9233, 9063, 8969, 8827, 8822, 8739, 8315, 8259, 8243, 8192, 8070, 8037, 8023, 7964, 7721, 7561, 7259, 7232, 7156, 6745, 6658, 6461, 6316, 6090, 6020, 5834, 5549, 5531, 5418, 5278, 5108, 4934, 4871, 4842, 3620, 3499, 3468, 3435, 3274, 2345, 1997, 1612, 1024};
    string color = "GBRBRGGBGGRRGGGRGGRGGBGRRBGRBGBRRGGGGBRBGRGBGBGRGR";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 53002036;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> width = {9789, 9715, 9667, 9659, 9197, 8736, 8673, 8423, 8233, 8128, 8095, 7943, 7722, 7460, 7444, 7335, 7326, 7236, 7183, 7095, 7040, 7006, 6937, 6637, 6255, 6159, 6106, 5746, 5336, 5239, 5077, 5034, 4875, 4579, 4522, 4514, 4030, 3956, 3154, 3012, 2850, 2698, 2570, 2384, 1785, 1719, 1620, 819, 769, 654};
    vector<int> height = {9718, 9550, 9440, 9375, 9373, 9325, 9189, 9148, 9106, 8997, 8843, 8723, 8698, 8564, 8412, 8391, 8359, 8154, 8011, 7900, 7684, 7665, 7360, 7318, 6921, 6787, 6712, 6254, 6229, 5685, 5659, 5604, 5429, 4926, 4692, 4529, 4111, 3805, 3276, 3175, 3120, 3037, 3008, 2994, 2901, 2869, 2599, 2372, 2318, 1821};
    string color = "GGRGRBRBRBBBBRRBGRBGBGRBRBGGBRBGGGBRRRRBGRBRGBGRBB";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 33009366;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> width = {9998, 9929, 9911, 9708, 9413, 9309, 9304, 9272, 9143, 9130, 9123, 9056, 9044, 8974, 8886, 8860, 8725, 8587, 8571, 8448, 7970, 7913, 7886, 7710, 7611, 7607, 7467, 7251, 7080, 7012, 6486, 6186, 5965, 5863, 5732, 5640, 5552, 5219, 5214, 5003, 4995, 4750, 4260, 3913, 3213, 2758, 1880, 1343, 942, 771};
    vector<int> height = {9895, 9643, 9609, 9471, 9435, 9409, 9148, 9101, 9001, 8987, 8793, 8775, 8684, 8546, 8357, 8287, 8267, 8259, 8010, 7788, 7622, 7527, 7507, 7227, 7216, 7101, 7030, 6943, 6941, 6936, 6818, 6783, 6695, 6663, 6524, 6503, 6057, 6038, 5856, 5136, 5076, 4509, 4194, 4161, 3698, 3671, 3230, 2960, 1829, 1697};
    string color = "RBRBGRGBBGGBBRRBGGBBBGGGBBBGRGGGRBBRGBGRBRRGGRRGGR";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 38331900;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> width = {9999, 9801, 9357, 9332, 9213, 9155, 8872, 8806, 8728, 8679, 8614, 8367, 8314, 8038, 7966, 7866, 7856, 7781, 7393, 7278, 7229, 7210, 7191, 7064, 7044, 6999, 6570, 6276, 6109, 6062, 6037, 6021, 5925, 5436, 5326, 5146, 4079, 3929, 3872, 3600, 3213, 3096, 3027, 2633, 2437, 1902, 1869, 1565, 1353, 1050};
    vector<int> height = {9999, 9976, 9904, 9885, 9835, 9784, 9614, 9543, 9533, 9512, 9448, 9396, 9389, 9353, 9172, 9119, 8736, 8658, 8518, 8434, 8408, 8309, 8288, 8141, 8128, 8098, 8058, 7994, 7757, 7611, 7101, 6963, 6846, 6629, 6375, 5508, 5396, 5389, 4682, 4391, 4281, 3879, 3628, 3604, 3300, 3190, 3159, 2520, 2012, 613};
    string color = "RRRBRRGRGGRRRBBGGRRRBBRRRBRRRBGRGRRGRGBBBBRBGRGBRR";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 50663391;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> width = {1000, 100, 10};
    vector<int> height = {1000, 100, 10};
    string color = "BBB";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> width = {10000};
    vector<int> height = {10000};
    string color = "R";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 100000000;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> width = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> height = {50, 49, 48, 47, 45, 44, 32, 11, 10, 3};
    string color = "RRRRRGGRRR";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 313;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> width = {1000, 900, 899, 888, 600, 123, 12};
    vector<int> height = {100, 90, 89, 50, 49, 48, 1};
    string color = "RRGBRBB";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 43485;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> width = {10, 8, 6, 4, 2};
    vector<int> height = {9, 7, 5, 3, 1};
    string color = "GGGGG";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> width = {10, 5};
    vector<int> height = {10, 5};
    string color = "GG";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> width = {10, 7};
    vector<int> height = {10, 7};
    string color = "RB";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> width = {5, 3, 1};
    vector<int> height = {5, 3, 1};
    string color = "RRR";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> width = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> height = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    string color = "RGBRGBRGBR";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> width = {10};
    vector<int> height = {10};
    string color = "R";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> width = {5, 3, 1};
    vector<int> height = {6, 4, 2};
    string color = "GGB";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> width = {10, 8, 6, 4, 2};
    vector<int> height = {9, 7, 5, 3, 1};
    string color = "GBRRG";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> width = {4, 3, 2};
    vector<int> height = {4, 3, 2};
    string color = "BRG";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> width = {9, 7, 5};
    vector<int> height = {8, 6, 4};
    string color = "BRG";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> width = {10, 9};
    vector<int> height = {10, 9};
    string color = "RG";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> width = {10, 8, 5, 4, 3, 1};
    vector<int> height = {10, 8, 5, 4, 3, 1};
    string color = "RGBRGB";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> width = {1000, 5};
    vector<int> height = {1000, 5};
    string color = "BR";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 999975;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> width = {10000, 3, 1};
    vector<int> height = {10000, 3, 1};
    string color = "RGR";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 99999992;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> width = {5};
    vector<int> height = {5};
    string color = "B";
    ChainOfRectangles* pObj = new ChainOfRectangles();
    clock_t start = clock();
    int result = pObj->getMaximalArea(width, height, color);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22659060&rd=10785&pm=8192
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
#define V(type) vector<type>
#define Vall(t) t.begin(),t.end()
#define forV(var, vec) for(int var=0;var<vec.size();var++)
using namespace std;
 
class ChainOfRectangles {
public:
  int getMaximalArea(vector <int>, vector <int>, string);
};
 
int ck(char c)
{
  if(c == 'R'){return 0;}
  if(c=='G'){return 1;}
  return 2;
}
 
int ChainOfRectangles::getMaximalArea(vector <int> width, vector <int> height, string color) {
  V(int) cct(3,0);
  forV(i,width)
  {
    cct[ck(color[i])] += width[i]*height[i];
    if(i != 0){cct[ck(color[i-1])] -= width[i]*height[i];}
  }
  sort(Vall(cct));
  reverse(Vall(cct));
  return cct[0];
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/