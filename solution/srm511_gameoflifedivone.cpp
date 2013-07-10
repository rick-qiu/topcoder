/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11486
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

class GameOfLifeDivOne {
public:
    long theCount(string init, int T, int K);
};

long GameOfLifeDivOne::theCount(string init, int T, int K) {
    long ret;
    return ret;
}


int test0() {
    string init = "0?1";
    int T = 1;
    int K = 1;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string init = "?????????";
    int T = 0;
    int K = 1;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 511;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string init = "??0???????";
    int T = 58;
    int K = 6;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 151;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string init = "?????????1";
    int T = 47;
    int K = 3;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 453;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string init = "??01??110?";
    int T = 100;
    int K = 3;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 29;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string init = "??????????????????????????????????????????????????";
    int T = 1000;
    int K = 0;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842624;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string init = "010101";
    int T = 10;
    int K = 4;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string init = "10101";
    int T = 2;
    int K = 5;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string init = "?????????1???0???1??1??????0??????0??0????1???????";
    int T = 12;
    int K = 40;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 31577324313;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string init = "???";
    int T = 1;
    int K = 0;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string init = "??????????";
    int T = 99;
    int K = 3;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 823;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string init = "???";
    int T = 0;
    int K = 2;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string init = "???";
    int T = 0;
    int K = 1;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string init = "???";
    int T = 1000;
    int K = 3;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string init = "???";
    int T = 1000;
    int K = 3;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string init = "???";
    int T = 607;
    int K = 1;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string init = "???";
    int T = 298;
    int K = 0;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string init = "???";
    int T = 17;
    int K = 0;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string init = "???";
    int T = 8;
    int K = 3;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string init = "???";
    int T = 1;
    int K = 3;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string init = "???";
    int T = 7;
    int K = 3;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string init = "?????????????????????????????????????????????????";
    int T = 0;
    int K = 23;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 403023636746956;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string init = "?????????????????????????????????????????????????";
    int T = 0;
    int K = 5;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 562949953189786;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string init = "?????????????????????????????????????????????????";
    int T = 1000;
    int K = 26;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 247145497139164;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string init = "?????????????????????????????????????????????????";
    int T = 1000;
    int K = 8;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 561082903169202;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string init = "?????????????????????????????????????????????????";
    int T = 862;
    int K = 13;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 545777839940362;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string init = "?????????????????????????????????????????????????";
    int T = 895;
    int K = 37;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 17172113480950;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string init = "?????????????????????????????????????????????????";
    int T = 2;
    int K = 22;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 385287847999258;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string init = "?????????????????????????????????????????????????";
    int T = 20;
    int K = 28;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 181542024838938;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string init = "?????????????????????????????????????????????????";
    int T = 17;
    int K = 6;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 562358668473190;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string init = "?????????????????????????????????????????????????";
    int T = 16;
    int K = 45;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 303377597195;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string init = "??????????????????????????????????????????????????";
    int T = 0;
    int K = 3;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906841348;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string init = "??????????????????????????????????????????????????";
    int T = 0;
    int K = 15;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1124435014542268;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string init = "??????????????????????????????????????????????????";
    int T = 1000;
    int K = 5;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1125396592633103;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string init = "??????????????????????????????????????????????????";
    int T = 1000;
    int K = 31;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 226224770913436;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string init = "??????????????????????????????????????????????????";
    int T = 786;
    int K = 0;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842624;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string init = "??????????????????????????????????????????????????";
    int T = 236;
    int K = 6;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1124912962780553;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string init = "??????????????????????????????????????????????????";
    int T = 2;
    int K = 22;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 799951559419648;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string init = "??????????????????????????????????????????????????";
    int T = 21;
    int K = 21;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 848229259540648;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string init = "??????????????????????????????????????????????????";
    int T = 9;
    int K = 37;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 42829121309326;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string init = "??????????????????????????????????????????????????";
    int T = 11;
    int K = 32;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 180812122173236;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string init = "?????1??111???????11??????????11?????1???????????1";
    int T = 0;
    int K = 10;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1099511627776;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string init = "?11?111111111111??1?111?1111?1111111?11111?1111?11";
    int T = 0;
    int K = 18;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1024;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string init = "???0??0???0??0??????????0??????????????0??????0???";
    int T = 160;
    int K = 13;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 7601054837275;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string init = "?1?111111??1??11????11111?11?1?11?111?11111111???1";
    int T = 273;
    int K = 28;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 262144;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string init = "??1???111??11??11??1??1?1???11??1??11????11??1????";
    int T = 16;
    int K = 27;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2141616800;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string init = "??????????11?11?1?111??1??1?1?1???1???111?1?????11";
    int T = 21;
    int K = 23;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2147154784;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string init = "??0000?????0??0000000?00???00?000000?000?00?0000?0";
    int T = 5;
    int K = 20;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string init = "0000000000000000?00?000?00000000000000000000000000";
    int T = 15;
    int K = 7;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string init = "???????????????????????????????1??????0???????0???";
    int T = 0;
    int K = 32;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2813768603466;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string init = "??????1???????????10???????0??????????????1???1??0";
    int T = 0;
    int K = 9;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8796092885510;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string init = "0??1010?01?10?0?01?10?01??010?01?1010?01?1???10101";
    int T = 408;
    int K = 36;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10519;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string init = "0?0?0???0???0??1??????????010??1???10?0????101????";
    int T = 677;
    int K = 47;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 943319;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string init = "0?????01?101?10?0?010??101??010?0?0?????0?01???101";
    int T = 11;
    int K = 46;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 7097;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string init = "?1????0??1????????0???01????01??0101??0?0??1?1???1";
    int T = 24;
    int K = 1;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8589662593;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string init = "?????10?0?0?0101???1???1?1?1??0??101?1?????1??01??";
    int T = 10;
    int K = 40;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 45611576;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string init = "??0??????1???1??????????????010???0??1????????????";
    int T = 3;
    int K = 29;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1172949674850;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string init = "?111001010??100???10????00?11??1?010?011??0??10??0";
    int T = 0;
    int K = 13;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2097152;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string init = "0101010101001?101010???1010010101010101010101?1011";
    int T = 0;
    int K = 40;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string init = "????1???10?0?1????1????1??????1????01????????0?0??";
    int T = 740;
    int K = 40;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4873914135;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string init = "0100010110101?0101001010110101101010?010?010101?11";
    int T = 499;
    int K = 42;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string init = "?000?0??000???0??1?1110?0??????????0?00???0?000?0?";
    int T = 15;
    int K = 31;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 40153;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string init = "???????????10??01????01???00???0??????????????0??0";
    int T = 5;
    int K = 18;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 381708923992;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string init = "111111111111000111111011?1111100111111111100000011";
    int T = 21;
    int K = 39;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string init = "????????????????????????????????1?????????????????";
    int T = 20;
    int K = 25;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 327634393915761;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string init = "????11?????1??0?????0????????????0?00???00????????";
    int T = 0;
    int K = 9;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1099510867677;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string init = "????0????????0????????????1???????????????????????";
    int T = 0;
    int K = 48;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string init = "1??01?01?1010010100101?1010???01?1?1?1?10??1?10?01";
    int T = 619;
    int K = 36;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3616;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string init = "00?0?101??11?0100?0?101011100111??1?0???0000?110?0";
    int T = 231;
    int K = 18;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 31436;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string init = "11111000000011011001011110010001101001001111110111";
    int T = 2;
    int K = 3;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string init = "010?01??0?00???010????10??0101?1?1?100?010??101010";
    int T = 19;
    int K = 16;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 296602;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string init = "????????????????????????????????????????1?????????";
    int T = 2;
    int K = 15;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 544202858929478;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string init = "01??11111??1??0?110110011??011?01001?1??1?010?????";
    int T = 3;
    int K = 45;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 432;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string init = "???101???0?0?1??111?0?0???????1111?0?0?1100110??00";
    int T = 0;
    int K = 30;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1271626;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string init = "?????????0???0?0??0?????10??????????00????????????";
    int T = 0;
    int K = 28;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 194458630304;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string init = "??001?01??1?1??0????0?????010??1??1?1???110?01?1?1";
    int T = 572;
    int K = 40;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 7097773;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string init = "101??1010?101101?001?111001?1?0?01011??00?01??0?10";
    int T = 486;
    int K = 45;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string init = "1011010010101011110?101101010101010101010101001010";
    int T = 13;
    int K = 5;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string init = "01???1?01?10?0010010?101?1010100?00101?0?010?010?1";
    int T = 5;
    int K = 39;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string init = "001?100??111?0101?101?1011??001??11?10???0??001?0?";
    int T = 25;
    int K = 3;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 262144;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string init = "?01?110??1?01010101010?0101010?010?1?10??1010??110";
    int T = 11;
    int K = 28;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2460;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string init = "???????1???";
    int T = 0;
    int K = 6;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 638;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string init = "?0?0??0?00????00???????00?0????????";
    int T = 0;
    int K = 5;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 33539156;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string init = "?????1?111?11????1???111?1?11????1?11??1??????11?";
    int T = 385;
    int K = 26;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1073260960;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string init = "1111111111111111?111111111111111?111111";
    int T = 867;
    int K = 22;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string init = "1?1?11111?1??1??1?????";
    int T = 11;
    int K = 1;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4096;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string init = "?00?0?00000000?000000?0000?0000000??00";
    int T = 5;
    int K = 24;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string init = "1?1111?1111?111?111111111";
    int T = 6;
    int K = 1;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string init = "?111111111111?11111111111";
    int T = 12;
    int K = 0;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string init = "01????01010?0??1";
    int T = 0;
    int K = 2;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 128;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string init = "010?0??1????0?0101010?01?10101?1";
    int T = 0;
    int K = 13;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1981;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string init = "1010101010101010?010?010101010101010101010101";
    int T = 589;
    int K = 39;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string init = "?101?1?101??????01??01?????10???????0???????0??";
    int T = 24;
    int K = 12;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4227743764;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string init = "0?01010?0?01?1?101010101?101?10";
    int T = 15;
    int K = 27;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string init = "????0???0?0";
    int T = 2;
    int K = 4;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 101;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string init = "??01??0?0101?1?1??01010?0??101010?010?01?1?1";
    int T = 16;
    int K = 28;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 11285;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string init = "????????????0?????????0????????????";
    int T = 4;
    int K = 14;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 5714341674;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string init = "00?0101?101010????10101010??11?1?100?0101010101010";
    int T = 0;
    int K = 19;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2048;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string init = "?????0?0??0?????0?11??0?";
    int T = 0;
    int K = 5;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 130918;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string init = "??00";
    int T = 146;
    int K = 0;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string init = "????0??1?";
    int T = 87;
    int K = 9;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string init = "1?1?11?11?1?0?1?1?1??11?????0??0?0????0?1???1";
    int T = 5;
    int K = 21;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 66180976;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string init = "?????????0";
    int T = 3;
    int K = 10;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 29;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string init = "0??0?000?00000000???0?00?100????0?0000?00?1110??00";
    int T = 6;
    int K = 48;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string init = "0?0?????1??10???0?00?10??00??10??0??001?0101???";
    int T = 7;
    int K = 15;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 22159325;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string init = "010101?10101?01010101010101010";
    int T = 0;
    int K = 1;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string init = "????0??????1??0";
    int T = 0;
    int K = 10;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 299;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string init = "1??11111?11???11?11?1?1110?111?111110???1??1???11";
    int T = 811;
    int K = 25;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 524288;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string init = "??????????1?????1???????????????????";
    int T = 890;
    int K = 4;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 17160197364;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string init = "001";
    int T = 0;
    int K = 0;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string init = "?01?11?011000?0?01?0111?0????1111101?0?1?0000000";
    int T = 3;
    int K = 13;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 16384;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string init = "1??0?0?0?0??0???1???????10???????01?0?";
    int T = 4;
    int K = 17;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 27382912;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string init = "1?1111?01";
    int T = 0;
    int K = 9;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string init = "10?????111010";
    int T = 0;
    int K = 12;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string init = "00?0?1?111001??000?001010??01??111??1?0?1110????";
    int T = 0;
    int K = 4;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 262144;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string init = "0010100010101010?00?0101?100?0";
    int T = 339;
    int K = 29;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string init = "111000??1??001?00?00000?1?";
    int T = 263;
    int K = 25;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string init = "010101?1?1??010";
    int T = 1;
    int K = 10;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string init = "?1010?10?01010101010101010100101011010101010100100";
    int T = 19;
    int K = 20;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string init = "?1????????";
    int T = 4;
    int K = 0;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 512;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string init = "10100?????10??????10";
    int T = 0;
    int K = 16;
    GameOfLifeDivOne* pObj = new GameOfLifeDivOne();
    clock_t start = clock();
    long result = pObj->theCount(init, T, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22777271&rd=14536&pm=11486
********************************************************************************
#include <algorithm> 
#include <string> 
#include <memory.h> 
using namespace std; 
 
class  
GameOfLifeDivOne{ 
public: 
  int uK, uT; 
  bool possi(string& inp, int x, int y){ 
    return inp[x] == '?' || inp[x] == (char)(y + '0'); 
  } 
  long long dynamic(int x, string &dat){ 
    int i, j, k, o,  n; 
    n = dat.size(); 
    string inp = ""; 
    for(i=0;i<n;i++)inp += dat[(x + i)%n]; 
    char s = inp[0]; 
    inp += s; inp += s; 
     
    long long dy[55][55][2]; 
    memset(dy, 0, sizeof(dy)); 
    dy[1][(s-'0') * 2][s-'0'] = 1; 
     
     
    for(i=0;i<inp.size();i++){ 
      for(o=0;o<=inp.size();o++){ 
        for(j=0;j<2;j++){ 
          if(dy[i][o][j] != 0){ 
//            printf("%d %d %d %lld\n",i,o,j,dy[i][o][j]); 
            if(i+1 < inp.size()){ 
              if(possi(inp, i+1, j)){ 
//                printf("> %d %d %d\n",i+1,o+j,j); 
                dy[i+1][o+j][j] += dy[i][o][j]; 
              } 
            } 
            int p; 
            p = (1-j)*2; 
            for(k=i+1;k+1<inp.size();k+=2){ 
              if(!possi(inp, k-1, j)) break; 
              if(!possi(inp, k, 1-j)) break;  
               
              if(possi(inp, k+1, 1-j)){ 
                dy[k+1][o+p][1-j] += dy[i][o][j]; 
//                printf("> %d %d %d\n",k+1,o+p,1-j); 
              } 
              p ++; 
            } 
             
            p = 1; 
            int pl; 
            for(k=i+1;k+2<inp.size();k+=2){ 
              if(!possi(inp, k, 1-j)) break; 
              if(!possi(inp, k+1, j)) break; 
              pl = max(p - uT, 0); 
              if(j == 1) pl = (p * 2 + 1) - pl; 
              if(possi(inp, k+2, j)){ 
                dy[k+2][o + pl][j] += dy[i][o][j]; 
//                printf("> %d %d %d\n",k+2,o+pl,j); 
              } 
              p ++; 
            } 
          } 
        } 
      } 
    } 
    long long res = 0;     
    for(o=uK + (s-'0') * 2;o <= inp.size();o++){ 
      res += dy[inp.size()-1][o][s-'0']; 
    } 
//    printf("dy %s %lld\n", inp.c_str(), res); 
    return res; 
  } 
  long long determine(int x, string &dat){ 
    if(x == dat.size()){ 
      if(dat[0] == dat[dat.size()-1]) return dynamic(dat.size()-1, dat); 
      if(dat.size()/2 >= uK) return 1; 
      return 0; 
    } 
    char now = dat[x]; 
    long long sol = 0; 
    int p; 
    if(x == 0) p = dat.size()-1; 
    else p = x-1; 
    if(now == '1' || now == '?'){ 
      dat[x] = '1'; 
      if(x > 0 && dat[x] == dat[p])  sol += dynamic(p, dat); 
      else sol += determine(x+1, dat); 
    } 
    if(now == '0' || now == '?'){ 
      dat[x] = '0'; 
      if(x > 0 && dat[x] == dat[p])  sol += dynamic(p, dat); 
      else sol += determine(x+1, dat); 
    } 
    dat[x] = now; 
     
//    printf("%s %lld\n", dat.c_str(), sol); 
    return sol; 
  } 
  long long theCount(string init, int T, int K){ 
    uK = K; uT = T; 
    return determine(0, init); 
  } 
};

********************************************************************************
*******************************************************************************/