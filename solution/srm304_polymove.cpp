/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6190
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

class PolyMove {
public:
    double addedArea(vector<int> x, vector<int> y);
};

double PolyMove::addedArea(vector<int> x, vector<int> y) {
    double ret;
    return ret;
}


int test0() {
    vector<int> x = {0, 1, 2};
    vector<int> y = {0, 1, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {0, 1, 1, 0};
    vector<int> y = {1, 1, 0, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4142135623730951;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> y = {0, 9, 17, 24, 30, 35, 39, 42, 44, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 44.798129010506386;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {0, 50, 100, 150, 200, 200, 0};
    vector<int> y = {200, 202, 203, 203, 202, 0, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 296.1807877329639;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {0, 2, 19, 30, 29};
    vector<int> y = {0, 300, 300, 1, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 300.7603622931292;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> y = {0, 25, 49, 72, 94, 115, 135, 154, 172, 189, 205, 220, 234, 247, 259, 270, 280, 289, 297, 304, 310, 315, 319, 322, 324, 325, 325, 324, 322, 319, 315, 310, 304, 297, 289, 280, 270, 259, 247, 234, 220, 205, 189, 172, 154, 135, 115, 94, 72, 49};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 334.4101403819167;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {0, 25, 50, 50, 0};
    vector<int> y = {50, 1000, 50, 0, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1000.3124511871279;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {25, 50, 50, 0, 0};
    vector<int> y = {1000, 50, 0, 0, 50};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1000.3124511871279;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {0, 0, 20, 40, 60, 40};
    vector<int> y = {-1, 10, 20, 29, 0, -20};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 71.64158982548453;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {0, 0, 20, 40, 60, 40, 1};
    vector<int> y = {-1, 10, 20, 29, 0, -20, -3};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 68.78317965096906;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {1, 0, 0, 20, 40, 60, 40};
    vector<int> y = {-3, -1, 10, 20, 29, 0, -20};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 68.78317965096906;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {-691, -690, -672, -662, -644, -638, -620, -598, -571, -558, -540, -526, -507, -493, -473, -453, -435, -423, -406, -400, -390, -383, -373, -368, -361, -354, -352, -350, -900, -900, -899, -898, -893, -891, -885, -882, -881, -863, -844, -837, -824, -798, -777, -755, -733, -723, -714};
    vector<int> y = {-733, -733, -734, -735, -737, -738, -742, -748, -758, -763, -771, -778, -788, -797, -810, -826, -842, -854, -873, -881, -895, -906, -926, -937, -957, -980, -988, -999, -900, -880, -868, -862, -839, -834, -821, -815, -814, -797, -783, -778, -770, -758, -749, -742, -737, -735, -734};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 654.2379198484771;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {-900, -899, -898, -891, -886, -870, -867, -865, -845, -824, -811, -801, -799, -779, -754, -735, -721, -717, -692, -671, -655, -639, -611, -592, -570, -543, -515, -494, -477, -469, -446, -429, -406, -399, -383, -371, -357, -340, -327, -318, -305, -291, -280, -271, -267, -262, -900};
    vector<int> y = {-880, -871, -867, -850, -842, -818, -814, -812, -794, -777, -767, -760, -759, -751, -742, -736, -732, -731, -727, -725, -724, -724, -725, -726, -729, -734, -742, -750, -757, -761, -774, -784, -799, -804, -816, -827, -841, -860, -877, -889, -909, -932, -952, -973, -983, -996, -900};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 734.8912341349624;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {-861, -850, -840, -829, -822, -812, -808, -783, -771, -746, -723, -704, -682, -665, -659, -648, -640, -620, -598, -570, -544, -521, -500, -475, -446, -423, -409, -383, -356, -331, -311, -295, -284, -274, -250, -228, -208, -201, -192, -186, -171, -158, -147, -900, -900, -898, -892, -890, -880, -876};
    vector<int> y = {-796, -782, -771, -760, -754, -746, -743, -727, -721, -709, -698, -690, -681, -675, -673, -670, -668, -664, -661, -658, -656, -656, -658, -661, -666, -671, -675, -684, -696, -709, -720, -729, -736, -743, -760, -778, -798, -806, -818, -827, -850, -873, -893, -900, -880, -869, -849, -844, -824, -818};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 845.4355935541583;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {-821, -810, -792, -777, -764, -747, -738, -712, -697, -671, -644, -638, -630, -617, -595, -587, -562, -554, -533, -514, -505, -498, -489, -473, -469, -462, -900, -900, -899, -898, -890, -868, -862, -841, -831};
    vector<int> y = {-824, -821, -818, -816, -815, -815, -816, -820, -823, -829, -836, -838, -841, -846, -856, -860, -875, -881, -901, -920, -930, -938, -950, -973, -979, -991, -900, -880, -873, -872, -865, -848, -844, -833, -828};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 485.0184100942037;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {0, 1, 2};
    vector<int> y = {0, 1, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {0, 1, 1, 0};
    vector<int> y = {1, 1, 0, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4142135623730951;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {0, 0, 1, 2, 1000, 1000, 800, 1};
    vector<int> y = {0, 999, 1000, 1000, 999, 800, 200, -100};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1823.6365719780913;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {2, 4, 0};
    vector<int> y = {1, -1, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0615528128088303;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {-6, -7, -6, -4, -2, 1, 3, 4, 3, -1, -3};
    vector<int> y = {-1, 2, 4, 6, 7, 7, 6, 4, -2, -5, -4};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 15.924196446313525;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {-10, -6, -2, 0, -2, -3, -6, -10, -11};
    vector<int> y = {5, 6, 5, 1, -2, -3, -3, -2, 1};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 14.535533905932738;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {0, 0, 1, 3};
    vector<int> y = {0, 1, 2, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1622776601683795;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {998, 982, 951, 904, 844, 770, 684, 587, 481, 368, 248, 125, 0, -125, -248, -368, -481, -587, -684, -770, -844, -904, -951, -982, -998, -998, -982, -951, -904, -844, -770, -684, -587, -481, -368, -248, -125, 0, 125, 248, 368, 481, 587, 684, 770, 844, 904, 951, 982, 998};
    vector<int> y = {-62, -187, -309, -425, -535, -637, -728, -809, -876, -929, -968, -992, -1000, -992, -968, -929, -876, -809, -728, -637, -535, -425, -309, -187, -62, 62, 187, 309, 425, 535, 637, 728, 809, 876, 929, 968, 992, 1000, 992, 968, 929, 876, 809, 728, 637, 535, 425, 309, 187, 62};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3131.630342333775;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {-500, -480, -460, -440, -420, -400, -380, -360, -340, -320, -300, -280, -260, -240, -220, -200, -180, -160, -140, -120, -100, -80, -60, -40, -20, 0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480};
    vector<int> y = {-950, -901, -853, -806, -760, -715, -671, -628, -586, -545, -505, -466, -428, -391, -355, -320, -286, -253, -221, -190, -160, -131, -103, -76, -50, -25, -1, 22, 44, 65, 85, 104, 122, 139, 155, 170, 184, 197, 209, 220, 230, 239, 247, 254, 260, 265, 269, 272, 274, 275};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1587.1601877383662;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {0, 50, 100, 100, 50, 0};
    vector<int> y = {1, 2, 1, 0, -1, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 100.03998401278722;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {0, 0, 2, 4, 4, 2};
    vector<int> y = {0, 1, 2, 1, 0, -1};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 4.82842712474619;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {0, 1, 2, 2, 1};
    vector<int> y = {0, 1, 1, -1, -1};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2.23606797749979;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {984, 976, 953, 914, 862, 796, 717, 627, 527, 418, 304, 184, 61, -61, -184, -304, -418, -527, -627, -717, -796, -862, -914, -953, -976, -983, -976, -953, -914, -862, -796, -717, -627, -527, -419, -304, -184, -61, 61, 184, 303, 418, 527, 627, 717, 796, 862, 914, 953, 976};
    vector<int> y = {0, -71, -142, -210, -276, -336, -392, -441, -483, -518, -544, -562, -571, -571, -562, -544, -518, -483, -441, -392, -336, -276, -210, -142, -71, 0, 71, 142, 210, 276, 336, 392, 441, 483, 518, 544, 562, 571, 571, 562, 544, 518, 483, 441, 392, 336, 276, 210, 142, 71};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2480.165866400116;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {1, 2, 0};
    vector<int> y = {1, 0, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {0, 1, 2, 7};
    vector<int> y = {0, 5, 8, 3};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 8.246211251235321;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {0, -50, -51, -51, -50, 0, 50, 51, 51, 50};
    vector<int> y = {-500, 0, 20, 21, 41, 541, 41, 21, 20, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1044.9899521048037;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {0, 10, 0};
    vector<int> y = {10, 0, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0710678118654755;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {0, 7, 500};
    vector<int> y = {0, 124, -3};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 254.5476379776485;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {0, 10, 20, 20, 10};
    vector<int> y = {0, 5, 5, -5, -5};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 20.615528128088304;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {0, 1, 432, 0};
    vector<int> y = {1, 1, 0, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 432.001157405857;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {1, 2, 3, 12, 10};
    vector<int> y = {1, 2, 2, 1, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 10.524937810560445;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {0, 2, 4, 1};
    vector<int> y = {1, 5, 3, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0990195135927845;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {0, 3, 4, 3, 0, -3, -4, -3};
    vector<int> y = {4, 3, 0, -3, -4, -3, 0, 3};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 12.0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {0, -20, -19, -18, 0, 18, 19, 20};
    vector<int> y = {-1, 0, 5, 6, 23, 6, 5, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 46.1725046566048;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {-5, -4, -2, 0, 3, 4, 3, -4};
    vector<int> y = {0, 1, 2, 2, 1, 0, -1, -1};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 9.383414268677662;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44};
    vector<int> y = {0, -1, -3, -6, -10, -15, -21, -28, -36, -45, -55, -66, -78, -91, -105, -120, -136, -153, -171, -190, -210, -231, -253, -276, -300, -325, -351, -378, -406, -435, -465, -496, -528, -561, -595, -630, -666, -703, -741, -780, -820, -861, -903, -946, -990};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 989.1766644870596;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {0, 100, 0, -100};
    vector<int> y = {1, 0, -1, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 200.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {3, 1, 7, 11, 10, 8};
    vector<int> y = {1, 8, 13, 11, 5, 1};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 15.390053977216382;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {0, 1, 26};
    vector<int> y = {0, 1, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 13.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {0, 0, 98, 100, 101, 102, 101, 100, 3, 2};
    vector<int> y = {2, 800, 802, 801, 800, 5, 3, 2, 1, 1};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 898.3103343711609;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {0, 2, 2, 0, -1};
    vector<int> y = {2, 2, 0, 0, 1};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1622776601683795;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {-1000, 0, 1000, 1000, 0, -1000};
    vector<int> y = {1, 2, 1, 0, -1, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2000.001999998;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {0, 1, 2, 3, 3, 2, 0};
    vector<int> y = {1, 2, 2, 1, 0, -3, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.4156547790585154;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {2, 0, 1};
    vector<int> y = {0, 0, 1};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {0, 0, 3, 6, 6, 1};
    vector<int> y = {0, 7, 8, 7, 0, -1};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 11.748119440177575;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {0, 1000, 500, -500, -1000};
    vector<int> y = {1, 0, -1, -1, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1750.000166666648;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {0, 0, 1, 2, 2};
    vector<int> y = {0, 50, 100, 100, 50};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 100.01249893770307;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {2, 4, 3, 2, 1};
    vector<int> y = {7, 2, 1, 1, 2};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 6.041381265149109;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {-1000, -1000, 999, 800};
    vector<int> y = {-1000, 1000, 997, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2825.5990515287194;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {0, 0, 2, 3, 4, 3, 2};
    vector<int> y = {0, 4, 3, 2, 0, -1, -1};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.995358041299246;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {0, 0, 1};
    vector<int> y = {0, 1, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7071067811865476;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {0, 3, 6, 6, 3, 0};
    vector<int> y = {1, 2, 1, -1, -2, -1};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 7.242640687119284;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {1, 3, 6, 4, 0};
    vector<int> y = {3, 7, 3, 1, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 7.161988519181639;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {0, 100, 50};
    vector<int> y = {0, 100, 49};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 70.71067811865476;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {0, 2, 0};
    vector<int> y = {1, 0, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.118033988749895;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {10, 0, 1, 2, 10, 18, 19, 20};
    vector<int> y = {-1, 0, 2, 3, 10, 3, 2, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 22.041594578792296;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {0, 50, 100, 100, 51};
    vector<int> y = {0, 1, 0, -1, -1};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 100.00249993750313;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {-99, -83, -31, 38, 90, 91, 26};
    vector<int> y = {-86, 44, 93, 71, -23, -87, -89};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 274.55264938745006;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {0, 1, 2, 1, 0, -1};
    vector<int> y = {1000, 1000, 500, 0, 0, 500};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1000.0039999840001;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {0, 3, 6, 6, 1};
    vector<int> y = {0, 1, 0, -1, -1};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 6.041381265149109;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {2, 0, 1, 3, 4};
    vector<int> y = {-1000, 999, 1000, 1000, 999};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2000.0002499999844;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x = {0, 10, 12, 13, 10};
    vector<int> y = {0, 10, 11, 10, -10};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 20.547511554864492;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x = {10, 0, 0, 5, 10};
    vector<int> y = {0, 0, 5, 10, 5};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 11.180339887498949;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x = {0, 100, 200, 200, 100};
    vector<int> y = {0, 1, 0, -1, -1};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 200.00124999218758;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x = {-100, 0, 100, 100, 0, -100, -101};
    vector<int> y = {3, 4, 3, 1, 0, 1, 2};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 201.0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x = {0, 0, 2};
    vector<int> y = {0, 1, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.118033988749895;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x = {0, 1, 102, 101, 100};
    vector<int> y = {1, 6, 5, 3, 2};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 101.54910064039849;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x = {0, 1, 2};
    vector<int> y = {0, 1, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x = {0, 1, 1, 0};
    vector<int> y = {1, 1, 0, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4142135623730951;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x = {0, 0, 1, 2, 1000, 1000, 800, 1};
    vector<int> y = {0, 999, 1000, 1000, 999, 800, 200, -100};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1823.6365719780913;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x = {2, 4, 0};
    vector<int> y = {1, -1, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0615528128088303;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x = {-6, -7, -6, -4, -2, 1, 3, 4, 3, -1, -3};
    vector<int> y = {-1, 2, 4, 6, 7, 7, 6, 4, -2, -5, -4};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 15.924196446313525;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x = {-10, -6, -2, 0, -2, -3, -6, -10, -11};
    vector<int> y = {5, 6, 5, 1, -2, -3, -3, -2, 1};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 14.535533905932738;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x = {0, 0, 1, 3};
    vector<int> y = {0, 1, 2, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1622776601683795;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x = {998, 982, 951, 904, 844, 770, 684, 587, 481, 368, 248, 125, 0, -125, -248, -368, -481, -587, -684, -770, -844, -904, -951, -982, -998, -998, -982, -951, -904, -844, -770, -684, -587, -481, -368, -248, -125, 0, 125, 248, 368, 481, 587, 684, 770, 844, 904, 951, 982, 998};
    vector<int> y = {-62, -187, -309, -425, -535, -637, -728, -809, -876, -929, -968, -992, -1000, -992, -968, -929, -876, -809, -728, -637, -535, -425, -309, -187, -62, 62, 187, 309, 425, 535, 637, 728, 809, 876, 929, 968, 992, 1000, 992, 968, 929, 876, 809, 728, 637, 535, 425, 309, 187, 62};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3131.630342333775;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> x = {-500, -480, -460, -440, -420, -400, -380, -360, -340, -320, -300, -280, -260, -240, -220, -200, -180, -160, -140, -120, -100, -80, -60, -40, -20, 0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480};
    vector<int> y = {-950, -901, -853, -806, -760, -715, -671, -628, -586, -545, -505, -466, -428, -391, -355, -320, -286, -253, -221, -190, -160, -131, -103, -76, -50, -25, -1, 22, 44, 65, 85, 104, 122, 139, 155, 170, 184, 197, 209, 220, 230, 239, 247, 254, 260, 265, 269, 272, 274, 275};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1587.1601877383662;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x = {0, 50, 100, 100, 50, 0};
    vector<int> y = {1, 2, 1, 0, -1, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 100.03998401278722;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> x = {0, 0, 2, 4, 4, 2};
    vector<int> y = {0, 1, 2, 1, 0, -1};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 4.82842712474619;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> x = {0, 1, 2, 2, 1};
    vector<int> y = {0, 1, 1, -1, -1};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2.23606797749979;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> x = {984, 976, 953, 914, 862, 796, 717, 627, 527, 418, 304, 184, 61, -61, -184, -304, -418, -527, -627, -717, -796, -862, -914, -953, -976, -983, -976, -953, -914, -862, -796, -717, -627, -527, -419, -304, -184, -61, 61, 184, 303, 418, 527, 627, 717, 796, 862, 914, 953, 976};
    vector<int> y = {0, -71, -142, -210, -276, -336, -392, -441, -483, -518, -544, -562, -571, -571, -562, -544, -518, -483, -441, -392, -336, -276, -210, -142, -71, 0, 71, 142, 210, 276, 336, 392, 441, 483, 518, 544, 562, 571, 571, 562, 544, 518, 483, 441, 392, 336, 276, 210, 142, 71};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2480.165866400116;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> x = {1, 2, 0};
    vector<int> y = {1, 0, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> x = {0, 1, 2, 7};
    vector<int> y = {0, 5, 8, 3};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 8.246211251235321;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> x = {0, -50, -51, -51, -50, 0, 50, 51, 51, 50};
    vector<int> y = {-500, 0, 20, 21, 41, 541, 41, 21, 20, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1044.9899521048037;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> x = {0, 10, 0};
    vector<int> y = {10, 0, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0710678118654755;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> x = {0, 7, 500};
    vector<int> y = {0, 124, -3};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 254.5476379776485;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> x = {0, 10, 20, 20, 10};
    vector<int> y = {0, 5, 5, -5, -5};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 20.615528128088304;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> x = {0, 1, 432, 0};
    vector<int> y = {1, 1, 0, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 432.001157405857;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> x = {1, 2, 3, 12, 10};
    vector<int> y = {1, 2, 2, 1, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 10.524937810560445;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> x = {0, 2, 4, 1};
    vector<int> y = {1, 5, 3, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0990195135927845;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> x = {0, 3, 4, 3, 0, -3, -4, -3};
    vector<int> y = {4, 3, 0, -3, -4, -3, 0, 3};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 12.0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> x = {0, -20, -19, -18, 0, 18, 19, 20};
    vector<int> y = {-1, 0, 5, 6, 23, 6, 5, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 46.1725046566048;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> x = {-5, -4, -2, 0, 3, 4, 3, -4};
    vector<int> y = {0, 1, 2, 2, 1, 0, -1, -1};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 9.383414268677662;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44};
    vector<int> y = {0, -1, -3, -6, -10, -15, -21, -28, -36, -45, -55, -66, -78, -91, -105, -120, -136, -153, -171, -190, -210, -231, -253, -276, -300, -325, -351, -378, -406, -435, -465, -496, -528, -561, -595, -630, -666, -703, -741, -780, -820, -861, -903, -946, -990};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 989.1766644870596;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> x = {0, 100, 0, -100};
    vector<int> y = {1, 0, -1, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 200.0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> x = {3, 1, 7, 11, 10, 8};
    vector<int> y = {1, 8, 13, 11, 5, 1};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 15.390053977216382;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> x = {0, 1, 26};
    vector<int> y = {0, 1, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 13.0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> x = {0, 0, 98, 100, 101, 102, 101, 100, 3, 2};
    vector<int> y = {2, 800, 802, 801, 800, 5, 3, 2, 1, 1};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 898.3103343711609;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> x = {0, 2, 2, 0, -1};
    vector<int> y = {2, 2, 0, 0, 1};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1622776601683795;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> x = {-1000, 0, 1000, 1000, 0, -1000};
    vector<int> y = {1, 2, 1, 0, -1, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2000.001999998;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> x = {0, 1, 2, 3, 3, 2, 0};
    vector<int> y = {1, 2, 2, 1, 0, -3, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.4156547790585154;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> x = {2, 0, 1};
    vector<int> y = {0, 0, 1};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> x = {0, 0, 3, 6, 6, 1};
    vector<int> y = {0, 7, 8, 7, 0, -1};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 11.748119440177575;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> x = {0, 1000, 500, -500, -1000};
    vector<int> y = {1, 0, -1, -1, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1750.000166666648;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> x = {0, 0, 1, 2, 2};
    vector<int> y = {0, 50, 100, 100, 50};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 100.01249893770307;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> x = {2, 4, 3, 2, 1};
    vector<int> y = {7, 2, 1, 1, 2};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 6.041381265149109;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> x = {-1000, -1000, 999, 800};
    vector<int> y = {-1000, 1000, 997, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2825.5990515287194;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> x = {0, 0, 2, 3, 4, 3, 2};
    vector<int> y = {0, 4, 3, 2, 0, -1, -1};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.995358041299246;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> x = {0, 0, 1};
    vector<int> y = {0, 1, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7071067811865476;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> x = {0, 3, 6, 6, 3, 0};
    vector<int> y = {1, 2, 1, -1, -2, -1};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 7.242640687119284;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> x = {1, 3, 6, 4, 0};
    vector<int> y = {3, 7, 3, 1, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 7.161988519181639;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> x = {0, 100, 50};
    vector<int> y = {0, 100, 49};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 70.71067811865476;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> x = {0, 2, 0};
    vector<int> y = {1, 0, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.118033988749895;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> x = {10, 0, 1, 2, 10, 18, 19, 20};
    vector<int> y = {-1, 0, 2, 3, 10, 3, 2, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 22.041594578792296;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> x = {0, 50, 100, 100, 51};
    vector<int> y = {0, 1, 0, -1, -1};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 100.00249993750313;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> x = {-99, -83, -31, 38, 90, 91, 26};
    vector<int> y = {-86, 44, 93, 71, -23, -87, -89};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 274.55264938745006;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> x = {0, 1, 2, 1, 0, -1};
    vector<int> y = {1000, 1000, 500, 0, 0, 500};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1000.0039999840001;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> x = {0, 3, 6, 6, 1};
    vector<int> y = {0, 1, 0, -1, -1};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 6.041381265149109;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> x = {2, 0, 1, 3, 4};
    vector<int> y = {-1000, 999, 1000, 1000, 999};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2000.0002499999844;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> x = {0, 10, 12, 13, 10};
    vector<int> y = {0, 10, 11, 10, -10};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 20.547511554864492;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> x = {10, 0, 0, 5, 10};
    vector<int> y = {0, 0, 5, 10, 5};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 11.180339887498949;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> x = {0, 100, 200, 200, 100};
    vector<int> y = {0, 1, 0, -1, -1};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 200.00124999218758;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> x = {-100, 0, 100, 100, 0, -100, -101};
    vector<int> y = {3, 4, 3, 1, 0, 1, 2};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 201.0;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> x = {0, 0, 2};
    vector<int> y = {0, 1, 0};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.118033988749895;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> x = {0, 1, 102, 101, 100};
    vector<int> y = {1, 6, 5, 3, 2};
    PolyMove* pObj = new PolyMove();
    clock_t start = clock();
    double result = pObj->addedArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 101.54910064039849;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=251074&rd=9825&pm=6190
********************************************************************************
#include <string>
#include <vector>
#include <map>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <set>
#include <iostream>
#include <sstream>
#include <cstddef>
#include <algorithm>
#include <utility>
#include <iterator>
#include <numeric>
#include <complex>
#include <list>
 
using namespace std;
 
typedef vector<int> vi;
typedef vector<int>::iterator vi_i;
typedef vector<string> vs;
typedef vector<string>::iterator vs_i;
typedef pair<int, int> pii;
 
class PolyMove
{
public:
    double addedArea(vector <int> x, vector <int> y);
};
 
typedef complex<double> ci;
 
double dodp(ci *xy, int f, int l)
{
    double dp[60];
 
    if (l <= f + 1) return 0.0;
    dp[f] = 0.0;
    dp[f + 1] = abs(xy[f] - xy[f + 2]);
    for (int j = f + 2; j < l; j++)
        dp[j] = max(dp[j - 1], dp[j - 2] + abs(xy[j - 1] - xy[j + 1]));
    return dp[l - 1];
}
 
double PolyMove::addedArea(vector <int> x, vector <int> y)
{
    int N = x.size();
    ci xy[N + 1];
    for (int i = 0; i < N; i++)
        xy[i] = ci(x[i], y[i]);
    xy[N] = xy[0];
 
    return 0.5 * max(dodp(xy, 0, N), dodp(xy, 1, N - 1) + abs(xy[1] - xy[N - 1]));
}
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/