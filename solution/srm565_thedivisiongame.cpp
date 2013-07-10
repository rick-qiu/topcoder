/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12264
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

class TheDivisionGame {
public:
    long countWinningIntervals(int L, int R);
};

long TheDivisionGame::countWinningIntervals(int L, int R) {
    long ret;
    return ret;
}


int test0() {
    int L = 9;
    int R = 10;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int L = 2;
    int R = 5;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int L = 2;
    int R = 6;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int L = 2;
    int R = 100;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 4345;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int L = 2;
    int R = 1000000;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 484332732439;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int L = 999805519;
    int R = 1000072678;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 34556370200;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int L = 322182648;
    int R = 322366988;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 16458568846;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int L = 972332890;
    int R = 972991678;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 210198241511;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int L = 621951803;
    int R = 622514232;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 153220984390;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int L = 439994515;
    int R = 440256601;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 33270043250;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int L = 246393079;
    int R = 247097102;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 240055105607;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int L = 735723387;
    int R = 735981106;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 32159046732;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int L = 136622599;
    int R = 137301388;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 223179003425;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int L = 995729871;
    int R = 995999472;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 35186785054;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int L = 928521092;
    int R = 929178016;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 209018892540;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int L = 313049587;
    int R = 313806848;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 277610201814;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int L = 306324944;
    int R = 306741607;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 84047562501;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int L = 917527876;
    int R = 918390177;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 360158429580;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int L = 498758103;
    int R = 499481464;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 253450583775;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int L = 124459316;
    int R = 125179275;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 251059459794;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int L = 277598778;
    int R = 278295907;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 235386888210;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int L = 787264027;
    int R = 787293044;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 406583323;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int L = 452363613;
    int R = 452697481;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 53987632578;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int L = 513997053;
    int R = 514233830;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 27145496229;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int L = 519831547;
    int R = 520505144;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 219777996483;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int L = 963150948;
    int R = 963191500;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 794716297;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int L = 823418002;
    int R = 824138375;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 251360267051;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int L = 121125910;
    int R = 121159002;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 530168251;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int L = 304949729;
    int R = 305059410;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 5795337874;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int L = 581905907;
    int R = 582132507;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 24769134983;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int L = 690179303;
    int R = 690871331;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 231936917782;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int L = 498892693;
    int R = 499771152;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 373788102163;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int L = 739417415;
    int R = 740072972;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 208101472766;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int L = 59514906;
    int R = 60026429;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 126730757152;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int L = 15950270;
    int R = 16496160;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 144341568064;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int L = 1000000000;
    int R = 1001000000;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 484283198296;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int L = 1000000000;
    int R = 1000999999;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 484282227087;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int L = 999992337;
    int R = 1000735125;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 267186927998;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int L = 1769231;
    int R = 2042041;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 35967574613;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int L = 227633262;
    int R = 228191236;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 150789097552;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int L = 78813294;
    int R = 79619929;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 315164873645;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int L = 5532558;
    int R = 6305121;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 289100669074;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int L = 316885025;
    int R = 317516761;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 193303790510;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int L = 244051794;
    int R = 244640881;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 168083555209;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int L = 860698463;
    int R = 861305104;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 178256637164;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int L = 996513632;
    int R = 996980625;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 105625900802;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int L = 301279250;
    int R = 301508496;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 25446777025;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int L = 374189411;
    int R = 374577316;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 72798202317;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int L = 9236217;
    int R = 9840769;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 177019805409;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int L = 94047129;
    int R = 94167616;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 7031495982;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int L = 45187085;
    int R = 45576001;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 73250601799;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int L = 633980676;
    int R = 634636864;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 208556568290;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int L = 19576505;
    int R = 20169081;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 169857904630;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int L = 10038384;
    int R = 10556001;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 129749022173;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int L = 361707707;
    int R = 361912576;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 20323479752;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int L = 427665693;
    int R = 428407204;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 266258283474;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int L = 414586888;
    int R = 415344400;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 277800445017;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int L = 9969942;
    int R = 10310521;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 56089594166;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int L = 12566125;
    int R = 12567777;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1313432;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int L = 999999888;
    int R = 1000999888;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 484283199243;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int L = 999000000;
    int R = 1000000000;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 484361741725;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int L = 1000000000;
    int R = 1000900000;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 392269511489;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int L = 999999999;
    int R = 1000999333;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 483636599604;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int L = 999000001;
    int R = 1000000000;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 484360773690;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int L = 900000000;
    int R = 901000000;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 484204626300;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int L = 101000001;
    int R = 102000000;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 484227486489;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int L = 724313112;
    int R = 725313112;
    TheDivisionGame* pObj = new TheDivisionGame();
    clock_t start = clock();
    long result = pObj->countWinningIntervals(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 484374259067;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23064874&rd=15187&pm=12264
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
typedef long long LL;
 
LL f[1000006], g[1000006], h[1000006], a[1000006];
 
class TheDivisionGame {
public:
  long long countWinningIntervals(LL L, LL R) {
    memset(g, 0, sizeof(g));
    memset(f, 0, sizeof(f));
    memset(h, 0, sizeof(h));
    for (int i = L; i <= R; ++ i)  a[i - L] = i;
    for (LL i = 2; i * i <= R; ++ i)  if (!g[i])
    {
      for (LL j = i * i; j <= 1000000; j += i)  g[j] = 1;
      for (LL j = ((L - 1) / i + 1) * i; j <= R; j += i)
      {
        for (; a[j - L] % i == 0; a[j - L] /= i)  f[j - L] ++;
      }
    }
    for (int i = 0; i <= R - L; ++ i)  f[i] += (a[i] != 1);
    LL  ans = 0, tot = 1;
    for (int i = 1; i <= R - L; ++ i)  f[i] ^= f[i - 1];
    h[0] = 1;
    for (int i = 0; i <= R - L; ++ i)
    {
      ans += tot - h[f[i]];
      h[f[i]] ++;
      tot ++;
    }
    return ans;
  }
};
 
 
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/