/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11308
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

class P8XGraphBuilder {
public:
    int solve(vector<int> scores);
};

int P8XGraphBuilder::solve(vector<int> scores) {
    int ret;
    return ret;
}


int test0() {
    vector<int> scores = {1, 3, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> scores = {0, 0, 0, 10};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> scores = {1, 2, 3, 4, 5, 6};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> scores = {5, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> scores = {10000};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 20000;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> scores = {10000, 0, 0, 0, 0, 0, 10000, 0, 0, 0, 0, 10000, 0, 0, 0, 0, 0, 10000};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 190000;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> scores = {0, 3, 1};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> scores = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 510000;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> scores = {4, 5, 6, 7};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> scores = {1, 3, 2, 5, 3, 7, 5};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> scores = {10, 21, 29, 41, 49, 59, 71};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 146;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> scores = {7, 18, 0, 39, 0, 0, 0, 80};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 140;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> scores = {0, 0, 0, 4, 7, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> scores = {1536, 3976, 9368, 5164, 2635, 6510, 3443, 3293, 7391, 2953, 9185, 8683, 2958, 5987, 4680, 1586, 4920, 6392, 2330, 2725, 5064, 9025, 4348, 8736, 8199, 2490, 7231, 5505, 8020, 4377, 5667, 9419, 5555, 7404, 4567, 2061, 2423, 1523, 2541, 881, 2872, 1803, 5961, 5861, 6026, 6062, 9098, 8117, 6675};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 264768;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> scores = {2879, 8295, 3104};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 22348;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> scores = {2731, 6643, 2362, 7394, 7728, 8372, 6708, 7035, 1375, 1355, 5932, 6438, 4287, 8750, 4139, 3192, 2862, 321, 4767, 7315, 8817, 6087, 8953, 1385};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 158251;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> scores = {5545, 3532, 3108, 8784, 82, 3696, 1283, 1504, 5417, 3350, 4928, 8033, 8709, 1217, 4035, 5079, 8580, 8005, 8595, 4791, 7543, 231, 8078, 3083, 2659, 3353, 4361, 1976, 3959, 6112, 6297, 7211, 7388, 7486, 1002, 6270, 1128, 3769, 3556, 7759, 5792, 1229};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 278105;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> scores = {2630, 3683, 4111, 8621, 9383, 9284, 4540, 9258, 2549, 6487, 4353, 9110, 3037, 9195};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 64467;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> scores = {9995, 1279, 9367, 8724, 1784, 5371, 9725, 2602, 3480, 5696, 885, 2672, 9953, 712, 1365, 3633, 1837, 4991, 9654, 5351, 5626, 5837, 54, 4192, 6806, 5627, 8142, 8117, 892, 8379, 8521, 5957, 7834, 1420, 126, 1304, 950, 8547, 9889, 242, 210, 6835, 2149, 485, 9111, 4662, 752, 4763};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 488108;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> scores = {364, 3759, 3448, 2554, 9161, 9126, 418};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 23282;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> scores = {7617, 9979, 1701, 3152, 4491, 3915, 8398, 9542, 2702, 439, 443, 9059, 8702, 7037};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 144961;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> scores = {9868, 1510, 8604, 9804, 3540, 6214, 9138, 7084};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 86220;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> scores = {2679, 1464, 4512, 5231, 9128, 2235, 5067, 5590, 3329, 1720, 3683, 8629, 9887, 5836, 6891, 6501, 6839, 5185, 7255, 3007, 7638, 4482, 4645, 4797, 5081, 2140, 7424, 3626, 2266, 2507, 6827, 430, 123, 3564, 5882, 4496, 6772, 4056, 8862, 412, 5774};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 177008;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> scores = {0, 110};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> scores = {30, 60};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> scores = {39, 78};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 156;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> scores = {71, 140};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 282;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> scores = {0, 178};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 178;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> scores = {0, 0, 357};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 357;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> scores = {65, 130, 195};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 390;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> scores = {15, 30, 45};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> scores = {87, 172, 258};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 519;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> scores = {145, 0, 147};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 582;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> scores = {0, 56, 84, 112, 140};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 224;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> scores = {113, 226, 339, 452, 565};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 1130;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> scores = {14, 14, 42, 56, 14};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 140;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> scores = {93, 186, 278, 372, 462};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 930;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> scores = {114, 0, 0, 256, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 712;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> scores = {91, 0, 273, 0, 0, 0, 0, 728, 819, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 1820;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> scores = {160, 320, 480, 640, 800, 960, 1120, 1280, 1440, 1600};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 3200;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> scores = {67, 134, 21, 28, 35, 402, 49, 56, 63, 70};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 1340;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> scores = {85, 168, 255, 336, 425, 500, 583, 680, 749, 832};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 1700;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> scores = {8, 0, 24, 44, 40, 0, 41, 64, 99, 80};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 196;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> scores = {124, 248, 372, 496, 0, 744, 0, 992, 1116, 1240, 1364, 0, 1612, 1736, 0, 1984, 2108, 2232, 2356, 2480, 2604};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 5208;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> scores = {59, 118, 177, 236, 295, 354, 413, 472, 531, 590, 649, 708, 767, 826, 885, 944, 1003, 1062, 1121, 1180, 1239};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 2478;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> scores = {12, 18, 36, 36, 45, 54, 48, 54, 81, 120, 72, 144, 84, 90, 135, 144, 153, 216, 171, 126, 189};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 504;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> scores = {26, 50, 78, 100, 125, 150, 182, 208, 225, 242, 266, 290, 314, 364, 390, 386, 442, 468, 475, 520, 546};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 1092;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> scores = {0, 62, 93, 148, 185, 186, 0, 248, 0, 0, 407, 444, 0, 0, 0, 0, 0, 0, 589, 0, 651};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 1240;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> scores = {38, 0, 114, 152, 190, 0, 266, 304, 0, 380, 418, 456, 494, 532, 570, 608, 646, 0, 722, 760, 0, 836, 0, 912, 950, 0, 0, 1064, 1102, 1140, 0, 0, 1254, 1292, 1330, 1368, 1406, 1444, 1482, 0, 0, 1596, 1634, 1672, 0, 1748};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 3496;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> scores = {24, 48, 72, 96, 120, 144, 168, 192, 216, 240, 264, 288, 312, 336, 360, 384, 408, 432, 456, 480, 504, 528, 552, 576, 600, 624, 648, 672, 696, 720, 744, 768, 792, 816, 840, 864, 888, 912, 936, 960, 984, 1008, 1032, 1056, 1080, 1104};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 2208;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> scores = {12, 18, 27, 36, 45, 54, 63, 54, 81, 90, 99, 108, 117, 126, 180, 192, 153, 162, 171, 180, 132, 198, 207, 216, 156, 234, 168, 252, 261, 270, 279, 384, 396, 408, 315, 324, 333, 234, 351, 360, 492, 504, 387, 528, 405, 414};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 1104;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> scores = {43, 86, 129, 172, 215, 258, 301, 344, 387, 430, 473, 516, 559, 602, 645, 688, 731, 774, 817, 860, 903, 946, 989, 1032, 1075, 1118, 1161, 1204, 1247, 1290, 1333, 1376, 1419, 1462, 1505, 1548, 1591, 1634, 1677, 1720, 1724, 1806, 1849, 1892, 1935, 1978};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 3956;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> scores = {0, 0, 137, 0, 0, 206, 0, 252, 0, 910, 0, 0, 0, 0, 1365, 1456, 459, 0, 1729, 0, 1911, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 827, 0, 0, 3276, 0, 3458, 0, 3640, 0, 1034, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 4550;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> scores = {21, 0, 63, 0, 105, 126, 147, 0, 189, 210, 0, 0, 0, 0, 0, 0, 357, 0, 399, 0, 0, 0, 0, 504, 525, 0, 0, 588, 0, 630, 651, 0, 0, 714, 735, 756, 0, 0, 0, 0, 861, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 2058;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> scores = {161, 322, 483, 644, 805, 966, 1127, 1288, 1449, 1610, 1771, 1932, 2093, 2254, 2415, 2576, 2737, 2898, 3059, 3220, 3381, 3542, 3703, 3864, 4025, 4186, 4347, 4508, 4669, 4830, 4991, 5152, 5313, 5474, 5635, 5796, 5957, 6118, 6279, 6440, 6601, 6762, 6923, 7084, 7245, 7406, 7567, 7728, 7889};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 15778;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> scores = {157, 162, 243, 628, 177, 942, 567, 192, 729, 1570, 1727, 212, 1053, 222, 227, 232, 2669, 2826, 2983, 1620, 1701, 3454, 1863, 1944, 3925, 282, 2187, 2268, 297, 302, 307, 312, 317, 322, 5495, 2916, 337, 5966, 3159, 3240, 357, 3402, 367, 6908, 7065, 3726, 387, 3888, 3969};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 15386;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> scores = {42, 84, 126, 166, 210, 248, 289, 336, 378, 420, 462, 504, 559, 588, 630, 672, 699, 774, 798, 840, 863, 924, 945, 1008, 1027, 1092, 1161, 1204, 1247, 1232, 1302, 1344, 1355, 1428, 1470, 1512, 1554, 1634, 1638, 1642, 1722, 1764, 1806, 1848, 1890, 1932, 2021, 1970, 2058};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 4168;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> scores = {34, 0, 102, 116, 170, 204, 238, 272, 306, 340, 374, 408, 572, 356, 660, 544, 578, 0, 476, 880, 714, 748, 782, 816, 850, 644, 1188, 1232, 0, 1020, 1054, 1408, 1452, 836, 1190, 0, 1258, 932, 1326, 0, 0, 1428, 1462, 1496, 1530, 1564, 1598, 0, 1666};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 3852;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> scores = {0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1104, 0, 1200, 0, 0, 0, 0, 0, 0, 1536, 1584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2160, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 2688;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> scores = {34, 68, 102, 136, 170, 204, 238, 272, 306, 340, 374, 408, 442, 476, 510, 544, 578, 612, 646, 680, 714, 748, 782, 816, 850, 884, 918, 952, 986, 1020, 1054, 1088, 1122, 1156, 1190, 1224, 1258, 1292, 1326, 1360, 1394, 1428, 1462, 1496, 1530, 1564, 1598, 1632, 1666, 1700};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 3400;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> scores = {149, 100, 150, 596, 250, 894, 0, 400, 450, 1490, 0, 1788, 650, 2086, 2235, 2384, 0, 900, 2831, 0, 3129, 3278, 0, 3576, 3725, 0, 4023, 0, 4321, 0, 0, 1600, 0, 1700, 0, 0, 1850, 0, 1950, 0, 2050, 0, 6407, 2200, 0, 2300, 0, 2400, 2450, 7450};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 14900;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> scores = {93, 184, 275, 366, 465, 558, 651, 744, 837, 930, 1023, 1104, 1185, 1302, 1395, 1488, 1581, 1674, 1731, 1860, 1953, 2004, 2095, 2232, 2277, 2392, 2459, 2604, 2697, 2732, 2823, 2976, 3069, 3096, 3220, 3348, 3441, 3534, 3551, 3642, 3813, 3824, 3999, 4006, 4185, 4278, 4279, 4464, 4557, 4650};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 9300;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> scores = {0, 0, 0, 164, 0, 0, 0, 152, 17, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 684, 0, 0, 1599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 2624;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> scores = {0, 66, 99, 132, 0, 198, 0, 264, 0, 0, 363, 396, 0, 462, 0, 528, 561, 0, 627, 0, 693, 0, 759, 792, 825, 858, 891, 924, 0, 0, 1023, 0, 1089, 1122, 1155, 1188, 1221, 0, 0, 1320, 0, 1386, 0, 1452, 1485, 1518, 1551, 1584, 0, 1650};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 3234;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> scores = {38, 76, 114, 152, 190, 228, 266, 304, 342, 380, 418, 456, 494, 532, 570, 608, 646, 684, 722, 760, 798, 836, 874, 912, 950, 988, 1026, 1064, 1102, 1140, 1178, 1216, 1254, 1292, 1330, 1368, 1406, 1444, 1482, 1520, 1558, 1596, 1634, 1672, 1710, 1748, 1786, 1824, 1862, 1900};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 3800;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> scores = {39, 78, 117, 156, 195, 234, 273, 312, 351, 390, 429, 468, 507, 1862, 585, 0, 663, 702, 741, 780, 819, 858, 897, 936, 975, 1014, 1053, 1092, 1131, 1170, 1209, 1248, 1287, 1326, 1365, 1404, 1443, 1482, 1521, 1560, 1599, 1638, 1677, 1716, 1755, 1794, 1833, 1872, 1911, 1950};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 7848;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> scores = {63, 124, 189, 248, 307, 372, 441, 504, 551, 612, 682, 756, 795, 856, 917, 992, 1039, 1116, 1197, 1260, 1323, 1386, 1449, 1466, 1550, 1588, 1701, 1710, 1771, 1860, 1893, 2016, 2015, 2142, 2205, 2198, 2259, 2356, 2381, 2520, 2542, 2604, 2709, 2686, 2835, 2852, 2869, 2976, 2991, 3150};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 6300;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> scores = {0, 24, 0, 0, 180, 0, 0, 0, 0, 0, 0, 432, 0, 504, 540, 0, 0, 0, 0, 0, 0, 0, 0, 288, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 1368, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 1764, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 2184;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> scores = {0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> scores = {1};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> scores = {10000};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 20000;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> scores = {0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> scores = {0, 1};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> scores = {1, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> scores = {1, 1};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> scores = {1, 2};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> scores = {2, 1};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> scores = {1, 3};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
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
    vector<int> scores = {3, 1};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> scores = {0, 10000};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> scores = {10000, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 20000;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> scores = {10000, 10000};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 30000;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> scores = {10000, 9999};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 29999;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> scores = {9999, 10000};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 29998;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> scores = {5000, 10000};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 20000;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> scores = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> scores = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 510000;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> scores = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> scores = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> scores = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 2501;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> scores = {10000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 500000;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> scores = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10000};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> scores = {0, 10000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 490000;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> scores = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> scores = {0, 0, 0, 0, 0, 0, 10000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 80000;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> scores = {200, 200, 600, 800, 1000, 200, 200, 1600, 1800, 2000, 200, 200, 2600, 2800, 200, 3200, 3400, 3600, 3800, 4000, 4200, 200, 200, 4800, 5000, 5200, 200, 5600, 200, 6000, 6200, 6400, 200, 200, 200, 7200, 200, 7600, 200, 8000, 200, 200, 8600, 200, 200, 9200, 9400, 9600, 9800, 10000};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 20000;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> scores = {101, 202, 303, 404, 505, 596, 707, 808, 893, 992, 1091, 1190, 1289, 1414, 1487, 1616, 1685, 1784, 1883, 2020, 2081, 2222, 2279, 2378, 2525, 2626, 2675, 2828, 2929, 3030, 3131, 3170, 3333, 3368, 3467, 3566, 3737, 3838, 3939, 4040, 4141, 4160, 4343, 4444, 4545, 4556, 4747, 4848, 4949, 5050};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 10100;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> scores = {200, 400, 0, 800, 0, 0, 0, 1600, 0, 0, 0, 0, 0, 0, 0, 3200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 12000;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> scores = {201, 400, 3, 804, 5, 6, 0, 1608, 0, 0, 0, 12, 13, 0, 0, 3200, 0, 0, 0, 20, 0, 0, 23, 0, 0, 26, 0, 0, 29, 30};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 12060;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> scores = {0, 400, 0, 0, 0, 0, 0, 1600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 11600;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> scores = {1, 3, 9, 27, 81, 243, 729, 2187, 6561};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 6570;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> scores = {1, 3, 9, 27, 101, 267, 729, 2187, 6561};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 6570;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> scores = {1, 0, 9, 0, 81, 0, 0, 2187, 6561};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 6570;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> scores = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 8206;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> scores = {7, 2, 4, 8, 16, 68, 34, 128, 310, 572, 1090, 2120, 4174, 8192};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 8290;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> scores = {0, 2, 4, 0, 16, 0, 0, 128, 256, 0, 0, 0, 4096, 8192};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 8192;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> scores = {1, 10, 100, 1000, 10000};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 10005;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> scores = {8, 24, 100, 1000, 10000};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 10040;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> scores = {0, 10, 100, 1000, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 1010;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> scores = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 6784;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> scores = {1, 2, 3, 13, 18, 13, 21, 22, 41, 109, 126, 213, 355, 586, 1017, 1597, 2618, 4181, 6803};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 6822;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> scores = {1, 2, 3, 0, 8, 13, 0, 34, 55, 0, 0, 233, 0, 610, 0, 1597, 2584, 4181, 6765};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 6784;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> scores = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 6765;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> scores = {0, 13, 1, 2, 3, 5, 8, 13, 75, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4301, 6765};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 6765;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> scores = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 0, 377, 610, 987, 1597, 2584, 4181, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 4182;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> scores = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 6785;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> scores = {5, 9, 0, 0, 0, 0, 41, 53, 6, 95, 89, 192, 189, 433, 558, 1051, 1665, 2520, 4257, 6693};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 6793;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> scores = {1, 1, 2, 0, 5, 8, 13, 21, 0, 0, 0, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 6785;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> scores = {9, 240, 350, 400, 578, 629, 596, 784, 577, 1112, 1077, 1058, 1344, 1686, 1098, 1755, 1667, 1680, 1925, 1760, 2229, 1923, 2276, 2603, 2509, 2993, 2758, 2590, 2489, 2778, 3169, 3275, 3733, 3711, 3239, 3448, 4454, 4321, 3818, 3748, 3997, 4159, 4585, 4892, 4350, 4445, 4604, 4477, 4438, 5123};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 11778;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> scores = {9, 240, 350, 400, 578, 689, 596, 784, 577, 1112, 1077, 1058, 1344, 1686, 1248, 1755, 1667, 1680, 1925, 1760, 2229, 1923, 2276, 2603, 2759, 2993, 2758, 2590, 2489, 2778, 3169, 2975, 3733, 3711, 3239, 3448, 4454, 4321, 4208, 3748, 3997, 4159, 4585, 4892, 4350, 4445, 5074, 4477, 4438, 5123};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 11778;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> scores = {9, 240, 0, 400, 578, 629, 596, 784, 577, 1112, 1077, 1058, 1344, 1686, 1098, 1755, 1667, 0, 1925, 1760, 2229, 1923, 2276, 2603, 0, 2993, 0, 0, 2489, 2778, 3169, 3275, 3733, 3711, 3239, 3448, 4454, 4321, 3818, 3748, 3997, 4159, 4585, 4892, 4350, 4445, 4604, 4477, 4438, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 11778;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> scores = {70, 175, 335, 499, 295, 482, 913, 619, 375, 1005, 1126, 914, 1769, 1415, 1130, 1573, 1982, 1881, 1940, 1630, 1835, 2117, 1655, 2884, 2286, 3161, 2563, 3089, 2894, 3562, 3097, 2960, 2914, 3605, 3447, 3838, 3610, 3664, 3556, 3774, 4405, 4546, 4231, 4542, 4193, 4797, 4872, 4150, 5463, 4411};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 10539;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> scores = {80, 195, 365, 479, 345, 542, 863, 699, 305, 1105, 1236, 814, 1659, 1555, 1280, 1733, 1832, 1721, 1770, 1830, 2045, 2337, 1445, 2664, 2536, 2921, 2833, 2829, 2624, 3862, 2807, 2660, 2604, 3285, 3797, 4198, 3260, 3304, 3946, 3774, 4815, 4146, 4661, 4542, 4193, 5257, 5342, 4150, 5953, 4911};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 11035;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> scores = {70, 175, 0, 0, 0, 0, 913, 0, 0, 0, 0, 914, 0, 0, 1130, 0, 0, 0, 0, 0, 0, 0, 1655, 0, 2286, 3161, 2563, 0, 0, 0, 0, 0, 0, 0, 0, 3838, 0, 0, 0, 0, 0, 4546, 4231, 4542, 4193, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 10419;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> scores = {103, 195, 201, 439, 468, 857, 845, 1120, 757, 985, 1091, 1487, 1215, 1437, 1716, 1589, 1510, 1988, 1796, 2272, 2199, 2170, 2230, 2533, 3058, 2757, 2755, 2922, 3525, 2230, 2555, 3116, 3136, 3691, 3406, 3476, 3753, 3759, 4018, 3744, 3827, 4385, 4104, 4916, 4736, 4655, 4652, 5094, 4916, 5042};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 12565;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> scores = {112, 195, 201, 439, 468, 857, 845, 1192, 757, 913, 1091, 1487, 1116, 1437, 1716, 1589, 1510, 1988, 1796, 2272, 2199, 2170, 2041, 2533, 3058, 2757, 2755, 2922, 3525, 2500, 2555, 3404, 3136, 3691, 3406, 3800, 3753, 3435, 4018, 3744, 3827, 4385, 4104, 5312, 4349, 4655, 4652, 5094, 4916, 5042};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 13272;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> scores = {0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4652, 0, 0, 5042};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 7024;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> scores = {163, 357, 420, 220, 754, 496, 783, 710, 1118, 828, 829, 1283, 1341, 1233, 1536, 1302, 1851, 1684, 1514, 1778, 1732, 2213, 1471, 2950, 2080, 3029, 2036, 3244, 3273, 2882, 3704, 3052, 3420, 3892, 4047, 3580, 3492, 3470, 3050, 4291, 3908, 3970, 3774, 4111, 4357, 4894, 4795, 4513, 5171, 4867};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 17819;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> scores = {172, 375, 420, 202, 727, 550, 783, 710, 1118, 918, 748, 1193, 1341, 1125, 1536, 1302, 1716, 1846, 1685, 1616, 1732, 2411, 1282, 2752, 2080, 3263, 2279, 3244, 3534, 3152, 3443, 2782, 3420, 3604, 4362, 3580, 3177, 3812, 2717, 4651, 3557, 4348, 3405, 3733, 3970, 4498, 4390, 4945, 5612, 4435};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 18719;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> scores = {163, 0, 420, 0, 0, 496, 0, 0, 1118, 828, 0, 0, 0, 1233, 0, 0, 0, 0, 0, 1778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3704, 0, 3420, 0, 0, 3580, 0, 3470, 3050, 0, 0, 0, 0, 4111, 0, 0, 0, 0, 0, 4867};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 14318;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> scores = {183, 299, 435, 327, 278, 360, 702, 1004, 859, 706, 1045, 1239, 937, 1295, 1203, 1249, 1496, 1738, 1717, 2080, 1977, 1980, 2088, 2389, 2812, 2594, 2770, 2748, 3076, 3437, 2736, 3343, 2740, 3371, 3528, 3316, 3759, 4099, 3558, 3642, 3682, 4462, 4747, 4604, 4310, 4534, 4794, 4802, 4777, 5685};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 15497;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> scores = {183, 315, 459, 327, 278, 360, 758, 1068, 803, 786, 973, 1335, 849, 1295, 1203, 1249, 1632, 1610, 1869, 2240, 2145, 1980, 1920, 2389, 2812, 2594, 2770, 2748, 3076, 3213, 2736, 3599, 3004, 3643, 3528, 3316, 3759, 4403, 3262, 3642, 3682, 4462, 4419, 4604, 4310, 4534, 4794, 5186, 4777, 5685};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 16089;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> scores = {183, 299, 0, 0, 278, 0, 702, 0, 859, 706, 0, 1239, 937, 1295, 0, 0, 1496, 1738, 0, 0, 0, 0, 2088, 0, 0, 0, 2770, 2748, 0, 0, 2736, 0, 0, 0, 3528, 0, 3759, 4099, 3558, 3642, 3682, 0, 4747, 0, 0, 4534, 0, 0, 4777, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 15017;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> scores = {200, 400, 600, 800, 1000, 1200, 1400, 1600, 1800, 0, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800, 8000, 8200, 8400, 8600, 8800, 9000, 9200, 9400, 9600, 9800, 10000};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 20000;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> scores = {200, 400, 0, 800, 1000, 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 0, 8000, 8200, 8400, 8600, 8800, 9000, 9200, 9400, 9600, 9800, 10000};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 20000;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> scores = {200, 400, 600, 0, 1000, 1200, 1400, 1600, 0, 2000, 2200, 2400, 0, 2800, 3000, 3200, 0, 3600, 3800, 0, 4200, 4400, 4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800, 8000, 8200, 8400, 8600, 8800, 9000, 9200, 0, 9600, 9800, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 20000;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> scores = {0, 400, 600, 800, 1000, 0, 1400, 0, 0, 2000, 2200, 2400, 2600, 0, 0, 3200, 3400, 0, 3800, 0, 0, 0, 0, 4800, 0, 5200, 0, 0, 5800, 0, 0, 0, 0, 0, 0, 7200, 0, 7600, 0, 8000, 8200, 0, 8600, 8800, 9000, 0, 9400, 0, 9800, 10000};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 19600;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> scores = {0, 0, 0, 0, 1000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3200, 0, 0, 3800, 0, 4200, 0, 0, 0, 5000, 5200, 0, 0, 5800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8600, 8800, 0, 0, 9400, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 12000;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> scores = {0, 400, 600, 0, 0, 0, 0, 1600, 0, 0, 0, 0, 0, 0, 0, 0, 3400, 0, 0, 0, 0, 0, 4600, 0, 5000, 0, 0, 0, 0, 0, 0, 0, 0, 6800, 0, 0, 0, 0, 0, 8000, 0, 8400, 0, 0, 9000, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 19600;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> scores = {0, 0, 0, 0, 0, 1200, 0, 0, 0, 0, 0, 0, 0, 2800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5200, 0, 5600, 0, 6000, 0, 0, 6600, 6800, 0, 7200, 0, 0, 0, 0, 0, 0, 0, 8800, 0, 0, 0, 0, 9800, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 11200;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> scores = {0, 0, 0, 0, 0, 1200, 1400, 0, 0, 0, 0, 0, 0, 0, 0, 3200, 0, 0, 3800, 0, 0, 0, 4600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7000, 0, 0, 7600, 7800, 0, 0, 8400, 0, 0, 0, 9200, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 11600;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> scores = {0, 0, 0, 0, 0, 0, 0, 0, 0, 2000, 0, 0, 0, 0, 0, 3200, 0, 3600, 3800, 4000, 0, 0, 0, 4800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7800, 0, 0, 0, 8600, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 10400;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> scores = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2400, 0, 0, 0, 3200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 10400;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> scores = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7400, 0, 7800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 10200;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> scores = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 7800;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> scores = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5001, 10000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 15001;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> scores = {2, 7, 6, 3, 9, 7, 7, 7, 7, 8, 8, 2, 7, 9, 3, 2, 8, 1, 2, 1, 5, 4, 1, 2, 5001, 10000, 6, 6, 1, 1, 2, 9, 9, 1, 3, 5, 5, 4, 10, 7, 10, 10, 1, 7, 1, 1, 4, 5, 4, 5};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 15099;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> scores = {201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 10050;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> scores = {200, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 20000;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> scores = {200, 402, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 20098;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> scores = {201, 402, 603, 798, 1005, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 20100;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> scores = {201, 402, 603, 798, 997, 1196, 1395, 1608, 1793, 2000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 20100;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> scores = {201, 402, 603, 798, 997, 1200, 1407, 1608, 1793, 2000, 2200, 2390, 2613, 2800, 2987, 3186, 3400, 3600, 3783, 3982, 4221, 4400, 4600, 4800, 5000, 5226, 5427, 5574, 5800, 6030, 6171, 6400, 6600, 6834, 6967, 7200, 7365, 7638, 7763, 8000, 8241, 8442, 8559, 8800, 9000, 9156, 9355, 9554, 9849, 10000};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 20100;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> scores = {0, 402, 600, 800, 997, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 19698;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> scores = {0, 0, 599, 800, 1000, 1200, 1400, 1608, 1793, 2000, 2191, 2412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 14577;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> scores = {0, 0, 0, 804, 1000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 13060;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> scores = {0, 0, 0, 0, 997, 1206, 1400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 12173;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> scores = {0, 0, 0, 0, 0, 0, 0, 0, 0, 1992, 2200, 2412, 2589, 2788, 2987, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 10800;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> scores = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4778, 5025, 5200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 10225;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> scores = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5025, 5226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 10251;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> scores = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5200, 5427, 5628, 5800, 6000, 6200, 6370, 6633, 6834, 6967, 7166, 7365, 7638, 7763, 8000, 8161, 8360, 8600, 8758, 9000, 9156, 9447, 9600, 9849, 10000};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> scores = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7962, 8161, 8360, 8559, 8844, 9045, 9200, 9447, 9648, 9753, 9952};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 9952;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> scores = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9600, 9849, 10000};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> scores = {10000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 500000;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> scores = {5001, 10000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 500002;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> scores = {3334, 6666, 9998, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 333302;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> scores = {2001, 4000, 5999, 7998, 9997, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 200002;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> scores = {1001, 2000, 2999, 4004, 4997, 5996, 7000, 8000, 8993, 10000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 100098;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> scores = {200, 400, 603, 804, 1000, 1200, 1400, 1600, 1809, 2000, 2211, 2400, 2589, 2788, 3000, 3200, 3385, 3584, 3783, 3982, 4181, 4422, 4579, 4824, 5000, 5226, 5427, 5600, 5773, 5972, 6200, 6432, 6600, 6768, 7035, 7166, 7365, 7600, 7763, 7962, 8241, 8360, 8600, 8844, 9045, 9200, 9447, 9600, 9849, 9952};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 20073;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> scores = {0, 4000, 5999, 8004, 9997, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 196000;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> scores = {0, 0, 2499, 3336, 4165, 4994, 5826, 6658, 7497, 8330, 9163, 10000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 60813;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> scores = {0, 0, 0, 7998, 10000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 129970;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> scores = {0, 0, 0, 0, 7145, 8574, 9991, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 87169;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> scores = {0, 0, 0, 0, 0, 0, 0, 0, 0, 6652, 7337, 8004, 8658, 9338, 9977, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 36000;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> scores = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9240, 9625, 9960, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 19585;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> scores = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9577, 9984, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 19561;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> scores = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5176, 5427, 5574, 5773, 5972, 6200, 6432, 6633, 6834, 6967, 7166, 7365, 7600, 7763, 8000, 8241, 8442, 8643, 8844, 9045, 9200, 9355, 9554, 9753, 10000};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> scores = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8000, 8200, 8400, 8643, 8758, 8957, 9246, 9447, 9648, 9753, 9952};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 9952;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> scores = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9648, 9849, 9952};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 9952;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> scores = {0, 2000, 2599, 10000, 9997, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 162000;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> scores = {123, 43, 534, 124};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 946;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> scores = {8110, 692, 3168, 3829, 38, 6486, 8683, 9089, 9496, 2589, 5988, 5144, 9352, 9313, 8650, 6738, 2042, 1257, 335, 8759, 1191, 7605, 5262, 2180, 8501, 3829, 3773, 606, 9290, 5997, 7548, 9554, 5559, 1624, 6467, 9539, 6127, 1237, 7811, 9172, 599, 6077, 213, 8683, 8213, 3990, 5822, 5601, 3390, 5758};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 420562;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> scores = {3, 2, 5, 3, 7, 3, 2, 5, 3, 7, 3, 2, 5, 3, 7, 3, 2, 5, 3, 7, 3, 2, 5, 3, 7, 3, 2, 5, 3, 7, 3, 2, 5, 3, 7, 3, 2, 5, 3, 7, 3, 2, 5, 3, 7, 3, 2, 5, 3, 7};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> scores = {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> scores = {128, 7989, 3833, 9790, 2728, 9714, 8155, 2716, 9065, 6963, 9905, 2190, 3060, 2525, 2545, 9146, 2696, 2545, 6044, 1705, 6698, 8322, 2008, 8685, 4750, 6940, 8395, 9264, 8294, 4859, 4900, 2558, 933, 9742, 1040, 7081, 9744, 9694, 5089, 4157, 1350, 5822, 3531, 1253, 9586, 3550, 7527, 851, 4697, 508};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 391717;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> scores = {1, 3, 2, 5, 3, 7, 5};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> scores = {857, 775, 674, 132, 31, 755, 853, 560, 465, 878, 968, 268, 648, 494, 578, 598, 925, 939, 647, 544, 768, 270, 116, 883, 277, 284, 306, 246, 835, 686, 459, 303, 694, 562, 585, 522, 346, 833, 688, 188, 799, 525, 628, 293, 783, 871, 552, 43, 159, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 44172;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> scores = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> scores = {1};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> scores = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> scores = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<int> scores = {15};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<int> scores = {2};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<int> scores = {5, 8, 15, 16, 94, 36, 87, 93, 50, 22, 63, 28, 91, 60, 64, 27, 41, 27, 73, 37, 12, 69, 68, 30, 83, 31, 63, 24, 68, 36, 30, 3, 23, 59, 70, 68, 94, 57, 12, 43, 30, 74, 22, 20, 85, 38, 99, 25, 16, 71};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 1326;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<int> scores = {1500, 1555, 1005, 1006, 1955, 1959, 1923, 1699, 1770, 1990, 2000, 1022, 234, 5, 6, 6, 1342, 1666, 1523, 12, 59, 100, 201, 1002, 1003, 1005, 1008, 999, 2000, 1500, 1555, 1005, 1006, 1955, 1959, 1923, 1699, 1770, 1990, 2000, 1022, 234, 5, 6, 6, 1342, 1666, 1523, 12};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 80460;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<int> scores = {9, 6, 5, 1, 0, 9, 9, 6, 8, 3, 4, 8, 4, 9, 9, 2, 5, 5, 3, 3, 3, 7, 4, 3, 8, 0, 8, 8, 0, 6, 8, 1, 9, 8, 9, 7, 2, 2, 8, 2, 8, 9, 0, 7, 8, 1, 5, 8, 6, 1};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 459;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<int> scores = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<int> scores = {0, 0, 10000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 80000;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<int> scores = {1, 2, 3, 4, 5, 6, 7, 7, 4, 7, 3, 2, 7, 4, 8, 3, 3, 6, 4, 6, 8, 9, 4, 3, 0, 3, 1, 3, 5, 3, 4, 5, 7, 8, 5, 4, 6, 4, 5, 6, 8, 4, 4, 4, 4, 4, 6, 7, 8, 9};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<int> scores = {7325, 8438, 9414, 515, 1774, 8104, 8527, 3125, 8751, 4622, 7759, 486, 7138, 5362, 5431, 7896, 7023, 5939, 3126, 8363, 9434, 8085, 6488, 3711, 310, 3538, 3217, 2312, 5115, 25, 4787, 5479, 2219, 1599, 5817, 6156, 9285, 9544, 6998, 92, 5749, 942, 1929, 7478, 8405, 1549, 5228, 9435, 4864, 1079};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 428112;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<int> scores = {1, 5, 0, 10000};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 10004;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<int> scores = {1, 2, 45, 36, 754, 24, 326, 43, 62, 57, 65, 56, 45, 36, 754, 24, 326, 43, 62, 57, 65, 56, 45, 36, 754, 24, 326, 43, 62, 57, 65, 56, 45, 36, 754, 24, 326, 43, 62, 57, 65, 56, 45, 36, 754, 24, 326, 43, 62, 57};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 9088;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<int> scores = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<int> scores = {0, 0, 5, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<int> scores = {0, 0, 0, 0, 5, 5, 5, 5, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<int> scores = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<int> scores = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 2, 3, 4, 5, 6, 7, 8, 9, 4, 34, 34, 5, 2, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 3, 4, 5, 6, 7, 8, 9, 4, 23, 4, 5};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 548;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<int> scores = {1, 3, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 11};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 149;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<int> scores = {666, 666, 666, 1313, 1313, 1313, 666, 666, 666};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 7954;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<int> scores = {3};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<int> scores = {0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<int> scores = {49, 24, 26, 12, 5, 33, 25, 30, 35, 41, 46, 23, 21, 3, 38, 43, 11, 19, 34, 29, 20, 32, 39, 7, 50, 31, 2, 8, 1, 48, 13, 18, 9, 10, 37, 4, 42, 16, 45, 47, 15, 22, 27, 44, 17, 36, 40, 6, 28, 14};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 2494;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<int> scores = {45, 5, 53, 35, 35, 4, 23, 53, 756, 453, 345, 5, 345, 345, 345, 345, 45, 345, 534, 5, 5, 435, 345, 534, 45, 54, 354, 345, 345, 345, 345, 354, 345, 345, 345, 3, 3553, 35, 35, 35, 354, 35, 3454, 53, 35, 345, 35, 35, 345, 345};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 6521;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<int> scores = {26, 37, 48, 9, 20, 31, 42, 3, 14, 25, 36, 47, 8, 19, 30, 41, 2, 13, 24, 35, 46, 7, 18, 29, 40, 1, 12, 23, 34, 45, 6, 17, 28, 39, 0, 11, 22, 33, 44, 5, 16, 27, 38, 49, 10, 21, 32, 43, 4, 15};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 1865;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<int> scores = {1, 3, 2, 5, 3, 7, 5, 2, 0, 6, 6, 10};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<int> scores = {1968, 1150, 1444, 1367, 1608, 1736, 3082, 98, 2014, 2881, 4868, 9721, 7426, 1779, 8237, 9998, 3022, 2790, 5746, 1134, 8399, 8432, 8669, 7416, 6508, 3750, 9480, 8165, 9595, 8892, 4833, 5794, 4992, 2144, 6093, 3878, 397, 5639, 7134, 806, 3446, 7764, 9545, 3651, 8331, 1009, 6406, 638, 5558, 1752};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 131148;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<int> scores = {41, 17, 34, 0, 19, 24, 28, 8, 12, 14, 5, 45, 31, 27, 11, 41, 45, 42, 27, 36, 41, 4, 2, 3, 42, 32, 21, 16, 18, 45, 47, 26, 21, 38, 19, 12, 17, 49, 35, 44, 3, 11, 22, 33, 23, 14, 41, 11, 3, 18};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 2107;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<int> scores = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 5100;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<int> scores = {0, 0, 1, 1, 1, 1, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<int> scores = {0, 0, 0, 10000, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    vector<int> scores = {0, 6, 5, 7, 8, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 1, 8, 0, 0, 0, 0, 1, 1, 2, 0, 1, 0, 1, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 294;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    vector<int> scores = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 510000;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    vector<int> scores = {1, 2, 3, 5, 6, 7, 9, 100, 11, 12, 13, 14};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 117;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    vector<int> scores = {1, 2, 3, 5, 6, 7, 2, 1, 2, 3, 1, 3, 2, 3, 3, 4, 2, 3, 1, 3, 2, 3, 4, 1, 1, 3, 4, 2, 3, 2, 3, 2, 1, 5, 6, 3, 2, 3, 3, 1, 7, 5, 4, 3, 4, 2, 3, 3, 1, 4};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 116;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    vector<int> scores = {0, 2, 0, 4, 2, 0, 0, 0, 1, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    vector<int> scores = {2, 3, 4, 5, 6, 7, 8, 9, 10, 102, 1023, 101};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 1048;
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    vector<int> scores = {1, 1, 1, 5, 5, 5, 1, 1, 1, 10, 10, 10, 10, 4, 4, 4, 4, 4, 11, 11, 11, 11, 11, 11, 11, 1, 1, 1, 1, 50, 50, 50, 1, 1, 100, 100, 1, 1, 1, 170};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 210;
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    vector<int> scores = {23, 12, 34, 45, 67, 2, 1, 45};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 273;
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    vector<int> scores = {0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10000};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    vector<int> scores = {261, 891, 1137, 2512, 7885, 7779, 8386, 3423, 8317, 3467, 4684, 6486, 9144, 240, 3560, 4958, 8836, 653, 137, 1174, 373, 8984, 402, 3358, 5835, 9987, 9909, 6103, 4309, 5101, 7149, 7861, 1385, 6025, 5236, 9111, 5613, 1720, 3099, 6829};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 81568;
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    vector<int> scores = {0, 0, 1, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    vector<int> scores = {89, 0, 67, 89, 34, 56, 78, 89, 45, 78, 67, 12, 34, 67, 89, 45, 65, 32, 24, 67, 455, 54, 34, 76, 23, 90, 12, 56, 78, 99, 67, 12, 90, 454, 78, 34, 78, 98, 100, 16, 1, 89, 67};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 4626;
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    vector<int> scores = {14, 29, 45, 33, 26, 37, 48, 15, 154, 22, 27, 28, 71, 79, 137, 159};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 486;
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    vector<int> scores = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    vector<int> scores = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 1, 1, 231, 142, 4, 3214, 2314, 4231, 4123, 4231, 2143, 4321, 234, 321, 421, 213, 1, 432, 21, 4, 2, 5, 532, 432, 21, 423, 4, 12, 423, 14, 214, 312, 4231, 4, 4, 4, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 9691;
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    vector<int> scores = {1, 3, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 149;
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    vector<int> scores = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    vector<int> scores = {0, 0, 10, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    vector<int> scores = {1968, 1150, 1444, 1367, 1608, 1736, 3082, 98, 2014, 2881, 4868, 9721, 3426, 1779, 2237, 3998, 9922, 2790, 5746, 1134, 8399, 8432, 8669, 7416, 6508, 3750, 9480, 8165, 9595, 8892, 4833, 5794, 4992, 2144, 6093, 3878, 397, 5639, 7134, 806, 3446, 7764, 9545, 3651, 8331, 1009, 6406, 638, 5558, 1752};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 131581;
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    vector<int> scores = {1, 1, 5, 1, 14, 1, 1, 1, 3, 1, 1, 1, 8, 1, 1, 9, 1, 1, 2, 1, 1, 1, 6, 1, 1, 8, 1, 19, 1, 15, 17, 1, 1, 1, 1, 1, 10, 18, 1, 16, 1, 1, 1, 1, 11, 1, 1, 1, 1, 1};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 207;
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test240() {
    vector<int> scores = {5, 18, 11, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 240: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 240: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test241() {
    vector<int> scores = {255};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 510;
    if(result == expected) {
        cout << "Test Case 241: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 241: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test242() {
    vector<int> scores = {1, 3, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 242: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 242: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test243() {
    vector<int> scores = {0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 243: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 243: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test244() {
    vector<int> scores = {1000, 34, 56, 987, 45, 67, 45, 324, 10000, 10000, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 56, 54, 78, 6, 7, 45, 34, 87, 67, 344, 10000, 10000, 10000, 0, 0, 0, 8};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 104000;
    if(result == expected) {
        cout << "Test Case 244: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 244: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test245() {
    vector<int> scores = {4, 1, 20, 10, 10, 10};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 245: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 245: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test246() {
    vector<int> scores = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10000};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 246: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 246: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test247() {
    vector<int> scores = {0, 0, 0, 10, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 247: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 247: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test248() {
    vector<int> scores = {10};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 248: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 248: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test249() {
    vector<int> scores = {4833, 1112, 4639, 9656, 2702, 9930};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 38928;
    if(result == expected) {
        cout << "Test Case 249: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 249: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test250() {
    vector<int> scores = {1, 2, 4, 2, 6, 7, 4, 5, 6, 8, 3, 6, 8, 9, 3, 4, 8, 7, 9, 2, 2, 4, 6, 8, 10, 1, 2, 3, 5, 6, 8, 3, 5, 6, 8, 3, 3, 5, 6, 8, 9, 4, 6, 2, 10, 10, 10, 10, 10, 10};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 124;
    if(result == expected) {
        cout << "Test Case 250: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 250: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test251() {
    vector<int> scores = {1, 3, 9, 1, 3, 4, 0, 6};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 251: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 251: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test252() {
    vector<int> scores = {3423, 2321, 123, 123, 213, 324, 3452, 231, 543, 656, 3, 5, 4, 2, 4, 6, 6, 4, 3, 2, 23, 23, 23, 453, 34, 5, 345, 23, 432, 4, 3423, 98, 234, 234, 5654, 213, 343, 442, 546, 231, 4232, 1233, 231, 231, 213, 4324, 324, 213, 213, 23};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 174066;
    if(result == expected) {
        cout << "Test Case 252: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 252: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test253() {
    vector<int> scores = {7, 6, 87, 4650, 234, 458, 765, 48, 995, 154, 654, 897, 321, 82, 654, 60, 564, 321, 654, 321, 654, 56, 564, 21, 654, 684, 684, 321, 654, 321, 654, 231, 81, 564, 5468, 4863, 5684, 3246, 6540, 456, 6, 68, 48, 564, 654, 321, 8591, 564, 7568};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 74638;
    if(result == expected) {
        cout << "Test Case 253: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 253: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test254() {
    vector<int> scores = {0, 0, 1000, 1000, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 3000;
    if(result == expected) {
        cout << "Test Case 254: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 254: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test255() {
    vector<int> scores = {0, 5, 6};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 255: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 255: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test256() {
    vector<int> scores = {3302, 4711, 7237, 1877};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 21854;
    if(result == expected) {
        cout << "Test Case 256: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 256: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test257() {
    vector<int> scores = {12, 31, 0, 31, 32, 12, 324};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 408;
    if(result == expected) {
        cout << "Test Case 257: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 257: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test258() {
    vector<int> scores = {1, 2, 3, 4, 5, 6, 5, 1, 1, 3, 5, 45, 23, 3, 4, 45, 6, 5, 2, 3, 4, 52, 33, 4, 4, 35, 6, 5, 43, 5, 4, 23, 4, 523, 4, 5, 32, 3, 2, 43, 33, 3, 2, 44, 4, 23, 53, 2, 3, 3};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 622;
    if(result == expected) {
        cout << "Test Case 258: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 258: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test259() {
    vector<int> scores = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 259: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 259: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test260() {
    vector<int> scores = {1, 2, 5, 5, 5};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 260: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 260: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test261() {
    vector<int> scores = {10000, 1, 2, 5, 1, 3};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 60003;
    if(result == expected) {
        cout << "Test Case 261: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 261: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test262() {
    vector<int> scores = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 2, 3, 4, 5, 6, 7, 8, 9, 10, 100, 1000, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 500, 6, 7, 8, 900, 1000};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 1069;
    if(result == expected) {
        cout << "Test Case 262: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 262: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test263() {
    vector<int> scores = {1, 3, 2, 5, 3, 7, 1, 3, 2, 5, 3, 7, 1, 3, 2, 5, 3, 7, 1, 3, 2, 5, 3, 7, 1, 3, 2, 5, 3, 7, 1, 3, 2, 5, 3, 7, 1, 3, 2, 5, 3, 7, 1, 3, 2, 5, 3, 7, 5};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 146;
    if(result == expected) {
        cout << "Test Case 263: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 263: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test264() {
    vector<int> scores = {77, 54, 66, 29, 43, 31, 28, 40, 90, 6, 53, 89, 42, 55, 61, 8, 61, 7, 94, 89, 77, 69, 43, 90, 81, 29, 97, 79, 38, 20, 61, 51, 54, 75, 89, 51, 83, 49, 51, 13, 89, 87, 42, 10, 62, 23, 97, 2, 25, 84};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 3989;
    if(result == expected) {
        cout << "Test Case 264: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 264: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test265() {
    vector<int> scores = {344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 10000, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344, 344};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 27200;
    if(result == expected) {
        cout << "Test Case 265: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 265: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test266() {
    vector<int> scores = {1, 4, 8, 1, 7, 0, 6, 2};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 266: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 266: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test267() {
    vector<int> scores = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 267: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 267: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test268() {
    vector<int> scores = {5, 0, 1};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 268: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 268: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test269() {
    vector<int> scores = {48, 45, 63, 58, 38, 60, 24, 42, 30, 79, 17, 36, 91, 43, 89, 7, 41, 43, 65, 49, 47, 6, 91, 30, 71, 51, 7, 2, 94, 49, 30, 24, 85, 55, 57, 41, 67, 77, 32, 9, 45, 40, 27, 24, 38, 39, 19, 83, 30, 42};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 2805;
    if(result == expected) {
        cout << "Test Case 269: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 269: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test270() {
    vector<int> scores = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 3, 12, 23, 4, 5, 64, 6, 33, 33, 334, 4454, 445, 334, 334, 22, 33, 334, 33, 22, 22, 33, 44, 44, 4, 33, 22, 45, 33, 22, 222, 33, 3, 22, 33, 34, 34, 32, 22, 23, 34};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 8966;
    if(result == expected) {
        cout << "Test Case 270: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 270: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test271() {
    vector<int> scores = {0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 271: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 271: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test272() {
    vector<int> scores = {8077, 666, 474, 7763, 6558, 7315, 8175, 8907, 9505, 9018, 4301, 9056, 360, 5689, 8816, 2010, 1996, 7824, 8659, 1641, 8284, 8621, 7210, 1663, 6954, 1877, 1919, 1074, 9937, 2699, 8398, 1745, 2552, 199, 2170, 7014, 2891, 7283, 1496, 973, 383, 4150, 1809, 2834, 2126, 1045, 6244, 4560, 2170, 6873};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 420008;
    if(result == expected) {
        cout << "Test Case 272: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 272: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test273() {
    vector<int> scores = {10, 20, 10, 0, 1, 20, 100, 1000, 9, 10, 2, 3, 10, 30, 2000, 10, 1212, 2222, 985, 845, 903, 345, 5768, 132, 34, 467, 297, 213, 407, 301, 203, 404, 104, 508, 103, 1211, 555, 333, 897, 999, 1022, 908, 788, 974, 774, 988, 107, 999, 498, 201};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 12076;
    if(result == expected) {
        cout << "Test Case 273: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 273: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test274() {
    vector<int> scores = {9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 99, 99, 99, 99, 99, 99, 99, 99, 4, 3, 2, 1, 0, 3, 2, 1, 12, 12, 8, 8, 8, 8, 8, 8, 8, 66};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 639;
    if(result == expected) {
        cout << "Test Case 274: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 274: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test275() {
    vector<int> scores = {41, 8466, 6334, 6498, 9168, 5723, 1477, 9356, 6960, 4462, 5705, 8143, 3279, 6826, 9961, 491, 2995, 1941, 4827, 5436, 2388, 4603, 3902, 153, 292, 2381, 7420, 8715, 9717, 9894, 5447, 1724, 4770, 1537, 1869, 9911, 5665, 6297, 7034, 9894, 8701, 3809, 1319, 330, 7672, 4664, 5140, 7711, 8251, 6868};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 414916;
    if(result == expected) {
        cout << "Test Case 275: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 275: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test276() {
    vector<int> scores = {3, 4, 0, 8, 0, 8, 4, 6};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 276: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 276: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test277() {
    vector<int> scores = {3, 1, 5, 5, 3, 2, 6, 7, 1, 1};
    P8XGraphBuilder* pObj = new P8XGraphBuilder();
    clock_t start = clock();
    int result = pObj->solve(scores);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 277: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 277: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test96() == 0 ? ++passed : ++failed;
    test97() == 0 ? ++passed : ++failed;
    test98() == 0 ? ++passed : ++failed;
    test99() == 0 ? ++passed : ++failed;
    test100() == 0 ? ++passed : ++failed;
    test101() == 0 ? ++passed : ++failed;
    test102() == 0 ? ++passed : ++failed;
    test103() == 0 ? ++passed : ++failed;
    test104() == 0 ? ++passed : ++failed;
    test105() == 0 ? ++passed : ++failed;
    test106() == 0 ? ++passed : ++failed;
    test107() == 0 ? ++passed : ++failed;
    test108() == 0 ? ++passed : ++failed;
    test109() == 0 ? ++passed : ++failed;
    test110() == 0 ? ++passed : ++failed;
    test111() == 0 ? ++passed : ++failed;
    test112() == 0 ? ++passed : ++failed;
    test113() == 0 ? ++passed : ++failed;
    test114() == 0 ? ++passed : ++failed;
    test115() == 0 ? ++passed : ++failed;
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    test224() == 0 ? ++passed : ++failed;
    test225() == 0 ? ++passed : ++failed;
    test226() == 0 ? ++passed : ++failed;
    test227() == 0 ? ++passed : ++failed;
    test228() == 0 ? ++passed : ++failed;
    test229() == 0 ? ++passed : ++failed;
    test230() == 0 ? ++passed : ++failed;
    test231() == 0 ? ++passed : ++failed;
    test232() == 0 ? ++passed : ++failed;
    test233() == 0 ? ++passed : ++failed;
    test234() == 0 ? ++passed : ++failed;
    test235() == 0 ? ++passed : ++failed;
    test236() == 0 ? ++passed : ++failed;
    test237() == 0 ? ++passed : ++failed;
    test238() == 0 ? ++passed : ++failed;
    test239() == 0 ? ++passed : ++failed;
    test240() == 0 ? ++passed : ++failed;
    test241() == 0 ? ++passed : ++failed;
    test242() == 0 ? ++passed : ++failed;
    test243() == 0 ? ++passed : ++failed;
    test244() == 0 ? ++passed : ++failed;
    test245() == 0 ? ++passed : ++failed;
    test246() == 0 ? ++passed : ++failed;
    test247() == 0 ? ++passed : ++failed;
    test248() == 0 ? ++passed : ++failed;
    test249() == 0 ? ++passed : ++failed;
    test250() == 0 ? ++passed : ++failed;
    test251() == 0 ? ++passed : ++failed;
    test252() == 0 ? ++passed : ++failed;
    test253() == 0 ? ++passed : ++failed;
    test254() == 0 ? ++passed : ++failed;
    test255() == 0 ? ++passed : ++failed;
    test256() == 0 ? ++passed : ++failed;
    test257() == 0 ? ++passed : ++failed;
    test258() == 0 ? ++passed : ++failed;
    test259() == 0 ? ++passed : ++failed;
    test260() == 0 ? ++passed : ++failed;
    test261() == 0 ? ++passed : ++failed;
    test262() == 0 ? ++passed : ++failed;
    test263() == 0 ? ++passed : ++failed;
    test264() == 0 ? ++passed : ++failed;
    test265() == 0 ? ++passed : ++failed;
    test266() == 0 ? ++passed : ++failed;
    test267() == 0 ? ++passed : ++failed;
    test268() == 0 ? ++passed : ++failed;
    test269() == 0 ? ++passed : ++failed;
    test270() == 0 ? ++passed : ++failed;
    test271() == 0 ? ++passed : ++failed;
    test272() == 0 ? ++passed : ++failed;
    test273() == 0 ? ++passed : ++failed;
    test274() == 0 ? ++passed : ++failed;
    test275() == 0 ? ++passed : ++failed;
    test276() == 0 ? ++passed : ++failed;
    test277() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22708061&rd=14552&pm=11308
********************************************************************************
#include <cstdio> 
#include <cctype> 
#include <vector> 
#include <string> 
#include <cassert> 
#include <climits> 
#include <cstdlib> 
#include <cstring> 
#include <utility> 
#include <cmath> 
#include <queue> 
#include <stack> 
#include <map> 
#include <set> 
#include <algorithm> 
using namespace std; 
 
#ifdef __MINGW32__ 
    #define LLF "%I64d" 
#else 
    #define LLF "%lld" 
#endif 
 
typedef long long LL; 
typedef pair<int,int> PII; 
 
class P8XGraphBuilder{ 
public: 
    int dp[52][52]; 
    int solve(vector<int> u){ 
        u.insert(u.begin(),0); 
        int n=u.size(); 
        memset(dp,192,sizeof(dp)); 
        dp[1][0]=0; 
        for(int i=1;i<=n;i++) for(int j=1;j<i;j++) 
        for(int p=1;p<n;p++) for(int q=0;q+1<n;q++){ 
            dp[i][p]=max(dp[i][p],dp[j][p-1]+dp[i-j][q]-u[p-1]-u[q]+u[p]+u[q+1]); 
        } 
        return *max_element(dp[n],dp[n]+52); 
    } 
};

********************************************************************************
*******************************************************************************/