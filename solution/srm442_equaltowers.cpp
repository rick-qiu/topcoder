/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10466
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

class EqualTowers {
public:
    int height(vector<int> bricks);
};

int EqualTowers::height(vector<int> bricks) {
    int ret;
    return ret;
}


int test0() {
    vector<int> bricks = {2, 3, 5};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> bricks = {10, 9, 2};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> bricks = {11, 11};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> bricks = {88242, 313, 1991, 4207, 2483, 1763, 224, 16, 582, 22943, 28632, 47682, 378, 90, 88, 43, 117, 19, 8};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 99901;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> bricks = {188242, 313, 1991, 4207, 2483, 1763, 224, 16, 582, 22943, 111653, 23787, 16820, 12415, 1270, 3032, 2293, 5221, 396, 42};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 199661;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> bricks = {162, 50, 7, 10966, 24, 8940, 3, 5788, 611, 178328, 6709, 39, 471, 1, 7537, 716, 67940, 22, 15502, 3, 29407, 3086, 6398, 27, 58706, 456, 1, 9, 19187, 77491, 1, 1346, 66};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 250000;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> bricks = {950, 17716, 178, 54, 5776, 34, 183, 5176, 13398, 249, 2608, 3681, 855, 88196, 1891, 58459, 2753, 27242, 1729, 231217};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 115564;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> bricks = {16, 19706, 7490, 58606, 363, 10253, 8709, 167609, 211, 48747, 38190, 10696, 3144, 187, 2425, 4411, 13443, 10008, 6, 302, 461, 10367, 2456, 6948, 1803, 782, 72642};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 249897;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> bricks = {2708, 21206, 6036, 26939, 22955, 8624, 57476, 12597, 1493, 21684, 33122, 9287, 16186, 5355, 5073, 2807, 233894, 12340};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 239409;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> bricks = {30722, 69, 2595, 282, 22602, 1999, 22609, 678, 22411, 66, 1, 52297, 2375, 3, 247, 4, 41, 11, 455, 792, 226, 14, 7656, 3732, 5080, 614, 902, 2, 206, 608, 995, 64482, 89, 255135};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 122432;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> bricks = {571, 39, 967, 2, 9471, 10, 40, 46730, 6476, 1, 382, 1, 1, 913, 6604, 1004, 28666, 2908, 2340, 402, 38, 16, 258541, 131, 6249, 3, 7, 3061, 4, 2876, 2, 5200, 18722, 59, 104, 29, 91401, 6000, 29};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 120729;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> bricks = {2077, 825, 3, 8560, 31476, 1, 6, 806, 10, 32313, 201, 10330, 10, 16, 1632, 2653, 1, 122, 17443, 154, 1799, 9557, 2054, 19372, 13, 92, 5, 259916, 98553};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 120042;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> bricks = {4, 20, 2893, 50089, 5068, 1, 1654, 460, 2, 2, 4481, 1907, 10, 20321, 1904, 2031, 288665, 2455, 31027, 190, 541, 811, 8903, 15, 1675, 51, 15505, 8, 5, 58594, 11, 383, 172, 142};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 105667;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> bricks = {347, 65, 2643, 35, 83, 149, 3016, 3190, 524, 2185, 92345, 914, 3, 51, 8721, 1, 9034, 2295, 1460, 7942, 2, 21, 14806, 496, 78456, 3, 2, 65, 8, 261, 658, 486, 609, 439, 21795, 86, 55, 14546, 3183, 359, 8604, 145, 66987, 75, 490, 5, 4, 862, 245, 151232};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 249994;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> bricks = {90000, 60000, 60001, 60000, 60001};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 120001;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> bricks = {285094, 56875, 5213, 8, 1299, 26306, 66, 3, 5896, 64198, 5, 6566, 3607, 35267, 7174, 52, 2, 2369};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 107453;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> bricks = {27, 260, 98825, 25182, 153, 2653, 70154, 13, 892, 1142, 51590, 2018, 144, 501, 246446};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 249870;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> bricks = {13681, 207, 4, 1, 4638, 54124, 11839, 234098, 88168, 17491, 4770, 2107, 23436, 35, 45399, 2};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 115313;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> bricks = {77524, 8, 2989, 22, 479, 16057, 2574, 16, 2911, 93155, 121978, 169575, 35, 6426, 1367, 899, 3985};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 248488;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> bricks = {63656, 3876, 25655, 12906, 62938, 7538, 23445, 215389};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 100007;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> bricks = {400, 421, 58236, 39488, 3772, 44124, 846, 61, 12041, 485, 114, 5622, 174381, 4682, 48880, 23787, 22, 8443, 1196, 25658, 41739, 7, 8, 5530, 10};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 249973;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> bricks = {3665, 45365, 2230, 45520, 60396, 3769, 27691, 5571, 210317, 1688, 25329, 32007, 27083, 5425};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 123863;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> bricks = {5681, 93979, 40521, 41089, 3865, 6028, 5520, 268799, 7925, 14984, 10256, 1087};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 100007;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> bricks = {36252, 17006, 2701, 282051, 8035, 15613, 1555, 2479, 109, 1973, 15569, 8988, 37678, 484, 39490, 26336, 1315};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 107014;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> bricks = {68751, 8237, 40379, 6696, 1171, 1953, 208572, 10019, 17627, 6144, 32181, 8013, 13994, 64478, 11516};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 226604;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> bricks = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 250000;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> bricks = {500000};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> bricks = {14, 3, 20, 15, 15, 14, 24, 23, 15};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> bricks = {34, 77, 34, 87, 13, 8, 123, 56, 8, 65468, 345, 7684, 135, 498, 654, 687, 14, 9875, 6871, 451, 679, 5435, 984, 654, 984, 984, 287, 105, 430, 3455, 245, 779, 2456, 678, 5633, 161, 186, 343, 87, 23, 98, 34};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 26187;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> bricks = {2, 3, 5};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> bricks = {384, 387, 278, 416, 294, 336, 387, 493, 150, 422, 363, 28, 191, 60, 264, 427, 41, 427, 173, 237, 212, 369, 68, 430, 283, 31, 363, 124, 68, 136, 430, 303, 23, 59, 70, 168, 394, 457, 12, 43, 230, 374, 422, 420, 285, 38, 199, 325, 316, 371};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 6379;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> bricks = {592, 1, 7129, 1646, 2125, 8696, 2750, 4168, 3686, 9436, 331, 5798, 3723, 2095, 3083, 4842, 2, 6813, 5917, 2052, 3, 4114, 8137, 2187, 4065, 7106, 5639, 9820, 8208, 2426, 9788, 8482, 3498, 8278, 2551, 3847, 7984, 4005, 3963, 8170, 6949, 6138, 4285, 7938, 6149, 7076, 9697, 9170, 5766, 256};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 125290;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> bricks = {14, 3, 20, 15, 15, 14, 24, 23, 15, 243};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> bricks = {307, 128, 115, 736, 896, 216, 966, 446, 151, 421, 671, 2, 528, 823, 76, 619, 193, 709, 582, 332, 692, 38, 200, 724, 274, 61, 23, 621, 178, 167, 381, 582, 164, 123, 809, 412, 965, 577, 239, 193, 505, 108, 39, 868, 637, 231, 746, 649, 932, 690};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 10861;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> bricks = {14, 3, 20, 15, 15, 14, 24, 23, 15};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> bricks = {250000, 72500, 1000, 10000, 2340, 324, 356, 123, 547, 6574, 123, 234, 436, 5467, 2354, 213, 23, 34, 2, 5, 5, 667, 3, 2, 1, 1, 34, 45, 45, 675, 34, 34, 234, 234, 435, 234, 45, 45, 125000};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 16464;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> bricks = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 33, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 638;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> bricks = {1, 100, 100, 200, 201, 401};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 501;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> bricks = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 250000;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> bricks = {126, 890, 1432, 857, 3518, 242, 3556, 935, 1303, 643, 7504, 6321, 5814, 1919, 4493, 4853, 3527, 4047, 6785, 3835, 12602, 6022, 2473, 12606, 11850, 16334, 11609, 8705, 16540, 17635, 22378, 6207, 14040, 17799, 1387, 16818, 28793, 14682, 21062, 6553, 23399, 6784, 7866, 33971, 34677, 31638, 3543, 11847, 14532, 2977};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 249643;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> bricks = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 137;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> bricks = {586, 208, 346, 502, 302, 140, 965, 573, 679, 942, 339, 911, 988, 578, 99, 627, 339, 973, 235, 3, 27, 856, 609, 330, 979, 384, 306, 252, 300, 47, 57, 920, 137, 221, 331, 322, 779, 301, 930, 454, 4, 581, 101, 406, 148, 898, 232, 988, 286, 594};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 11556;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> bricks = {14, 3, 20, 15, 15, 14, 24, 23, 15, 14};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> bricks = {1, 1, 3, 240, 300, 1, 11, 1, 11, 1, 23, 121, 2346, 3324, 43562, 554, 55, 55, 100, 9, 50000, 200000, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 4, 67, 8, 6, 4, 4, 3, 2, 7, 4, 235, 3256};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 50994;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> bricks = {14, 3, 20, 15, 15, 14, 24, 23, 15, 2, 2, 4, 4, 1, 3};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> bricks = {123, 43243, 34, 234, 234, 234, 435, 456, 234, 234, 234, 423, 454, 5435, 34523, 545, 345, 2344, 4324, 2344, 23423, 234, 234, 2345, 345, 4554, 3234, 234, 4545, 545, 345, 324, 234, 234, 2345, 234, 5235, 235, 234, 235, 3455, 35234, 23434, 234, 234, 2345, 545, 4344, 3434, 34324};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 126620;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> bricks = {10, 15, 14, 12, 11, 5, 2, 3, 20, 11, 14};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> bricks = {6813, 7007, 8614, 1501, 518, 10571, 23980, 2479, 4900, 21366, 11486, 65, 6963, 12091, 6137, 13551, 18288, 18164, 2499, 2546, 18813, 15560, 13972, 20951, 6918, 4036, 7446, 23855, 9381, 14125, 1097, 4233, 19459, 2069, 6858, 5789, 11585, 6445, 6996, 714, 918, 6362, 6791, 30659, 1337, 18827, 25064, 9861, 13953, 6217};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 249915;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> bricks = {4343, 432, 52, 7634, 7536, 423, 523, 63, 78, 1, 523, 6342, 63, 321, 2, 2, 32, 3253, 235, 325, 6, 6235, 325347, 72, 325, 3276, 32, 7, 3, 36, 6345, 6, 7, 2, 32, 327, 2, 563, 532};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 24995;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> bricks = {111, 2323, 2341, 1235, 3245, 3245, 2345, 234, 3245, 3246, 56, 456, 567, 567, 2345, 2345, 2345, 2345, 3245, 456, 426, 567, 678, 789, 5000, 7, 435, 34634, 333, 333, 333, 3, 3, 2, 1, 435, 567, 68, 78, 3456, 456, 567, 567, 43, 34, 4256, 4356, 45, 42, 2456};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 48633;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> bricks = {177, 2, 161, 3, 338, 289, 1234, 6, 1000, 23, 2234};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 2572;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> bricks = {11, 11, 2};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> bricks = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 637;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> bricks = {10000, 9999, 9998, 9997, 9996, 9995, 9994, 9993, 9992, 9991, 9990, 9989, 9988, 9987, 9986, 9985, 9984, 9983, 9982, 9981, 9980, 9979, 9978, 9977, 9976, 9975, 9974, 9973, 9972, 9971, 9970, 9969, 9968, 9967, 9966, 9965, 9964, 9963, 9962, 9961, 9960, 9959, 9958, 9957, 9956, 9955, 9954, 9953, 9952, 9951};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 239436;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> bricks = {1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> bricks = {14, 3, 20, 15, 15, 14, 24, 23, 15, 2, 3, 13, 43, 14, 17, 33, 12, 13, 12, 1, 1, 4, 14, 21, 12, 11, 14, 33, 22, 21, 24, 21, 12, 22, 24, 31, 31, 2, 1, 3, 2, 5, 14, 16, 17, 14, 18, 13, 12, 11};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 376;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> bricks = {9999, 9998, 9997, 9996, 9995, 9994, 9993, 9992, 9991, 9990, 9989, 9988, 9987, 9986, 9985, 9984, 9983, 9982, 9981, 9980, 9979, 9978, 9977, 9976, 9975, 9974, 9973, 9972, 9971, 9970, 9999, 9998, 9997, 9996, 9995, 9994, 9993, 9992, 9991, 9990, 9989, 9988, 9987, 9986, 9985, 9984, 9983, 9982, 9981, 9980};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 239692;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> bricks = {100000, 100000};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 100000;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> bricks = {14, 3, 20, 15, 15, 14, 24, 23, 15, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 3, 4, 5, 6, 7, 834, 54, 4, 3, 4, 5, 4, 5, 6, 7, 8, 3, 4, 566, 7, 76, 5, 4, 5, 565, 4, 4, 3, 3};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 1209;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> bricks = {1, 2, 5, 300, 52, 94, 21, 854, 23, 19, 43, 100, 1000, 54, 5000, 97, 81, 359, 1584, 34, 94, 22, 59, 78, 4, 6, 9, 194, 994, 26, 996, 654, 488, 124, 84, 161, 894, 210, 929, 44, 12};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 7902;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> bricks = {3243, 23412, 2421, 23, 2341, 23, 234, 123, 52312, 1, 23, 2, 3, 33, 31, 2341, 2341, 214, 2};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 5078;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> bricks = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 160000;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> bricks = {1, 1, 1, 1, 1, 2};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
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
    vector<int> bricks = {10, 3, 2, 2, 2, 2, 2};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> bricks = {1, 2, 6, 2, 876, 123, 345, 467, 23, 234, 12, 345, 567, 89, 23, 423, 435, 67, 783, 674, 234, 645, 234, 56, 657, 879, 9, 526, 324, 999, 998, 997, 996, 995, 994, 993, 992, 991, 990, 989, 988, 987};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 10985;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> bricks = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1000, 1000, 1000, 443, 32432, 2323, 32432, 232, 32432, 32423, 23432, 12, 2144, 343, 5454, 23, 5454, 213123, 5454, 3432, 5423, 12, 24324, 23432, 123, 2123, 123, 12321, 43, 121, 324, 12, 213, 123, 12312, 43, 123, 24, 123, 123};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 238054;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> bricks = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 2500;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> bricks = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> bricks = {150, 151, 151, 152, 150, 49, 12000, 20001, 18000, 1, 5, 19231, 23133, 1212, 1331, 9817, 150, 151, 151, 152, 150, 49, 12000, 20001, 18000, 1, 5, 19231, 23133, 1212, 1331, 9817, 19231, 23133, 9999, 18191, 18919, 19231, 23133, 1212, 1331, 9817, 19231, 23133, 9999, 18191, 18919};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 222369;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> bricks = {12, 254, 654, 31, 97, 89, 54, 65, 32, 25, 24, 26, 27, 29, 24, 32, 32, 31, 14, 14, 1, 21, 25, 14, 15, 17, 16, 18, 19, 32, 30, 17, 15, 65, 57, 58, 54, 53, 52, 51, 56, 45, 78, 87, 65, 41, 12, 32, 10};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 1311;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> bricks = {1, 6, 6};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> bricks = {3, 23, 43, 54, 65, 3434, 24, 666, 566, 100, 143, 765, 23, 887, 34, 8977, 455, 233, 55, 49, 353, 6442, 5575, 343, 233, 986, 40, 7, 2, 9, 6, 773, 545, 275, 9234, 3474, 23444, 234, 274, 23, 66, 247, 13, 86, 12, 7654, 23, 24, 4};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 38500;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> bricks = {1, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039, 104};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 20442;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> bricks = {10000, 10000, 10000};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> bricks = {48899, 48901, 5, 5};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> bricks = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 41, 2467, 2334, 2500, 3169, 3724, 3478, 1358, 2962, 464, 1705, 145, 3281, 827, 1961, 491, 2995, 3942, 827, 1436, 391, 2604, 3902, 153, 292, 382, 1421, 2716, 3718, 3895, 1447, 64990};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 194080;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> bricks = {14, 3, 20, 15, 15, 14, 24, 23, 15, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 106;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> bricks = {5, 5, 1, 2};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> bricks = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 282, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 691;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> bricks = {10000, 10000, 10000, 10000, 10000, 10001, 9999, 9999, 10001, 20001, 1, 200, 4000, 10, 13, 13, 26, 200, 2020, 222, 45, 234, 90, 89, 78, 67, 56, 45, 34, 34, 34, 34, 34, 34, 3434, 344, 434, 1123, 112, 112, 123, 111, 121, 111, 111, 200, 200, 19};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 62084;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> bricks = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 1, 1, 1, 1};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 107;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> bricks = {213, 32, 43, 555, 34, 2342, 243234, 23, 55, 15, 15, 15, 15, 23, 43};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 247;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> bricks = {10, 9, 2, 3, 4, 2, 3, 4, 5, 6, 8, 9, 12, 10, 12, 2, 4, 6, 8, 2, 10, 13, 3, 6, 7, 4, 9, 7};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> bricks = {250000, 249999};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> bricks = {2, 3, 5, 17, 105, 106, 2, 195, 11, 82, 103, 18, 107, 105, 8, 9, 11, 196, 19, 80, 105, 19, 1, 20, 20, 40, 15, 15, 31, 16, 15};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 740;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> bricks = {499999, 1};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> bricks = {9876, 987, 6464, 405, 8765, 93234};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> bricks = {10, 9, 2, 2, 3, 4, 5, 7, 8, 9, 12, 10, 13, 4, 5, 7, 6, 9, 10, 11, 2, 3, 6, 7};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> bricks = {12000, 64444, 1222, 56, 66, 301, 1005, 100000, 15444, 9688, 987, 9888, 1022, 989, 20111, 50154, 12445, 454, 877, 657, 7788, 789, 12, 699, 887, 977, 548, 1, 544, 44133, 654, 68, 879, 669, 451, 3357, 687, 1123, 12, 51, 13, 25, 687, 665, 48, 889, 11202, 21547, 10010};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 205612;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> bricks = {12, 3, 3};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> bricks = {1, 2, 2, 1, 1, 3, 2, 3, 2, 2, 1, 1, 2, 3, 3, 3, 2, 1, 2, 3, 4, 3, 2, 3, 3, 2, 2, 3, 3, 3, 2, 2, 2, 3, 3, 3, 3, 2, 2, 2, 1, 2, 2, 3, 3, 3, 3, 3, 1, 1};
    EqualTowers* pObj = new EqualTowers();
    clock_t start = clock();
    int result = pObj->height(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22780004&rd=13750&pm=10466
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
#include <cstring> 
using namespace std; 
 
class EqualTowers { 
public: 
  int height(vector <int>); 
}; 
int b[2][500001]; 
int abs(int n){ 
  return n<0?-n:n; 
} 
int EqualTowers::height(vector <int> bricks) { 
  int i, end, j, k,p,N=bricks.size(); 
  memset ( b, -1, sizeof ( b ) ); 
    b[1][0] = 0, p = 0, end = 0; 
    for ( i = 0; i < N; i ++, p = 1 - p ) 
    { 
            memcpy ( b[p], b[1 - p], sizeof ( b[p] ) ); 
            end += bricks[i]; 
            for ( j = 0; j <= end; j ++ ) 
            { 
                k = abs ( j + bricks[i] ); 
                if ( k <= end && b[1 - p][j] >= 0 && b[p][k] < b[1 - p][j] + bricks[i] ) 
                { 
                    b[p][j + bricks[i]] = b[1 - p][j] + bricks[i]; 
                } 
                k = abs ( j - bricks[i] ); 
                if ( k <= end && b[1 - p][j] >= 0 && b[p][k] < b[1 - p][j] + bricks[i] ) 
                { 
                    b[p][k] = b[1 - p][j] + bricks[i]; 
                } 
            }    
     } 
     if ( b[1 - p][0] ) return b[1 - p][0] / 2; 
     else return -1; 
} 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/