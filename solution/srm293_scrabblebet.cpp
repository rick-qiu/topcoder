/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6116
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

class ScrabbleBet {
public:
    double estimate(int trials, int games, int winsNeeded, int winChance);
};

double ScrabbleBet::estimate(int trials, int games, int winsNeeded, int winChance) {
    double ret;
    return ret;
}


int test0() {
    int trials = 2;
    int games = 2;
    int winsNeeded = 1;
    int winChance = 50;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9375;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int trials = 2;
    int games = 2;
    int winsNeeded = 2;
    int winChance = 50;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4375;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int trials = 10;
    int games = 10;
    int winsNeeded = 5;
    int winChance = 25;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5566860567603682;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int trials = 2;
    int games = 20;
    int winsNeeded = 5;
    int winChance = 10;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08448495352665641;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int trials = 50;
    int games = 15;
    int winsNeeded = 1;
    int winChance = 0;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int trials = 50;
    int games = 17;
    int winsNeeded = 16;
    int winChance = 100;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int trials = 50;
    int games = 10;
    int winsNeeded = 10;
    int winChance = 75;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9448701546682944;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int trials = 50;
    int games = 1;
    int winsNeeded = 1;
    int winChance = 1;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.39499393286246354;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int trials = 50;
    int games = 2;
    int winsNeeded = 2;
    int winChance = 1;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.004987769576990653;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int trials = 50;
    int games = 20;
    int winsNeeded = 20;
    int winChance = 81;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5250569771959787;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int trials = 50;
    int games = 20;
    int winsNeeded = 10;
    int winChance = 3;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 4.138295262023917E-9;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int trials = 1;
    int games = 20;
    int winsNeeded = 18;
    int winChance = 90;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.676926805189466;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int trials = 40;
    int games = 15;
    int winsNeeded = 7;
    int winChance = 45;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999999837;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int trials = 16;
    int games = 13;
    int winsNeeded = 13;
    int winChance = 4;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int trials = 44;
    int games = 15;
    int winsNeeded = 5;
    int winChance = 11;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.565146716273372;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int trials = 33;
    int games = 5;
    int winsNeeded = 5;
    int winChance = 1;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 3.3000002730432243E-9;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int trials = 16;
    int games = 13;
    int winsNeeded = 8;
    int winChance = 1;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9699797348948778E-12;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int trials = 49;
    int games = 10;
    int winsNeeded = 10;
    int winChance = 14;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4173477047574323E-7;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int trials = 49;
    int games = 14;
    int winsNeeded = 11;
    int winChance = 58;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9929135760091945;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int trials = 18;
    int games = 7;
    int winsNeeded = 5;
    int winChance = 69;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999777416546;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int trials = 27;
    int games = 9;
    int winsNeeded = 9;
    int winChance = 8;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 3.6238791967235784E-9;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int trials = 18;
    int games = 5;
    int winsNeeded = 3;
    int winChance = 43;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9997587412531408;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int trials = 40;
    int games = 1;
    int winsNeeded = 1;
    int winChance = 1;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3310282414303197;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int trials = 29;
    int games = 7;
    int winsNeeded = 3;
    int winChance = 34;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999610106829;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int trials = 3;
    int games = 18;
    int winsNeeded = 5;
    int winChance = 4;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0016975880254400666;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int trials = 1;
    int games = 11;
    int winsNeeded = 6;
    int winChance = 26;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04118903683622188;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int trials = 23;
    int games = 5;
    int winsNeeded = 1;
    int winChance = 57;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int trials = 49;
    int games = 19;
    int winsNeeded = 15;
    int winChance = 22;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0336054480419854E-5;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int trials = 33;
    int games = 13;
    int winsNeeded = 10;
    int winChance = 12;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 4.133856688515181E-6;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int trials = 2;
    int games = 13;
    int winsNeeded = 10;
    int winChance = 74;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7981605453468209;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int trials = 50;
    int games = 11;
    int winsNeeded = 8;
    int winChance = 5;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8120113459984E-7;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int trials = 18;
    int games = 4;
    int winsNeeded = 3;
    int winChance = 81;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999999912;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int trials = 24;
    int games = 11;
    int winsNeeded = 5;
    int winChance = 9;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04033011176814705;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int trials = 50;
    int games = 20;
    int winsNeeded = 11;
    int winChance = 41;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.999667822769;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int trials = 33;
    int games = 9;
    int winsNeeded = 9;
    int winChance = 22;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 3.9839114637896245E-5;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int trials = 50;
    int games = 18;
    int winsNeeded = 3;
    int winChance = 72;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int trials = 49;
    int games = 9;
    int winsNeeded = 8;
    int winChance = 54;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.814876016676038;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int trials = 6;
    int games = 18;
    int winsNeeded = 3;
    int winChance = 11;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8987322831202943;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int trials = 50;
    int games = 19;
    int winsNeeded = 18;
    int winChance = 98;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int trials = 47;
    int games = 19;
    int winsNeeded = 18;
    int winChance = 34;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 2.231689414378124E-6;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int trials = 50;
    int games = 12;
    int winsNeeded = 8;
    int winChance = 5;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 8.061755853994157E-7;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int trials = 22;
    int games = 18;
    int winsNeeded = 4;
    int winChance = 12;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9794115810094438;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int trials = 35;
    int games = 2;
    int winsNeeded = 2;
    int winChance = 0;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int trials = 25;
    int games = 15;
    int winsNeeded = 5;
    int winChance = 14;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7064508968154499;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int trials = 34;
    int games = 20;
    int winsNeeded = 17;
    int winChance = 1;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int trials = 8;
    int games = 2;
    int winsNeeded = 1;
    int winChance = 65;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999492905722;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int trials = 50;
    int games = 8;
    int winsNeeded = 1;
    int winChance = 99;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int trials = 49;
    int games = 8;
    int winsNeeded = 3;
    int winChance = 21;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999963518258111;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int trials = 14;
    int games = 7;
    int winsNeeded = 5;
    int winChance = 11;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.003900675571786638;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int trials = 4;
    int games = 8;
    int winsNeeded = 4;
    int winChance = 58;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9981934313486637;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int trials = 10;
    int games = 9;
    int winsNeeded = 4;
    int winChance = 9;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.055598874821344624;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int trials = 38;
    int games = 19;
    int winsNeeded = 2;
    int winChance = 1;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4428278729962877;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int trials = 49;
    int games = 13;
    int winsNeeded = 1;
    int winChance = 0;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int trials = 5;
    int games = 4;
    int winsNeeded = 4;
    int winChance = 30;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03984919292150724;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int trials = 50;
    int games = 18;
    int winsNeeded = 17;
    int winChance = 24;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0239526721255174E-8;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int trials = 50;
    int games = 8;
    int winsNeeded = 5;
    int winChance = 9;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.013009428767352116;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int trials = 27;
    int games = 14;
    int winsNeeded = 6;
    int winChance = 93;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int trials = 37;
    int games = 10;
    int winsNeeded = 2;
    int winChance = 55;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int trials = 49;
    int games = 13;
    int winsNeeded = 12;
    int winChance = 50;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08039575630037099;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int trials = 32;
    int games = 8;
    int winsNeeded = 1;
    int winChance = 100;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int trials = 18;
    int games = 4;
    int winsNeeded = 3;
    int winChance = 12;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10736376079946097;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int trials = 40;
    int games = 5;
    int winsNeeded = 4;
    int winChance = 10;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.018235909601249878;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int trials = 38;
    int games = 6;
    int winsNeeded = 6;
    int winChance = 49;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4111848009007051;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int trials = 14;
    int games = 9;
    int winsNeeded = 2;
    int winChance = 88;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int trials = 49;
    int games = 16;
    int winsNeeded = 3;
    int winChance = 27;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int trials = 10;
    int games = 5;
    int winsNeeded = 2;
    int winChance = 74;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int trials = 49;
    int games = 2;
    int winsNeeded = 2;
    int winChance = 2;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.019413013731441886;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int trials = 50;
    int games = 4;
    int winsNeeded = 2;
    int winChance = 12;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9776464635292131;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int trials = 2;
    int games = 13;
    int winsNeeded = 10;
    int winChance = 42;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02317069244188419;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int trials = 50;
    int games = 19;
    int winsNeeded = 12;
    int winChance = 55;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999947108317;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int trials = 50;
    int games = 7;
    int winsNeeded = 6;
    int winChance = 66;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999994796213061;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int trials = 13;
    int games = 10;
    int winsNeeded = 2;
    int winChance = 100;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int trials = 50;
    int games = 10;
    int winsNeeded = 9;
    int winChance = 13;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 4.681875731993301E-6;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int trials = 3;
    int games = 4;
    int winsNeeded = 2;
    int winChance = 45;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9402321281438738;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int trials = 1;
    int games = 17;
    int winsNeeded = 13;
    int winChance = 22;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 2.703945773396832E-6;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int trials = 2;
    int games = 7;
    int winsNeeded = 5;
    int winChance = 11;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 5.581731702325454E-4;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int trials = 50;
    int games = 20;
    int winsNeeded = 10;
    int winChance = 23;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3152314209871049;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int trials = 50;
    int games = 20;
    int winsNeeded = 15;
    int winChance = 99;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int trials = 49;
    int games = 19;
    int winsNeeded = 10;
    int winChance = 78;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int trials = 49;
    int games = 19;
    int winsNeeded = 11;
    int winChance = 43;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9993955411352937;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int trials = 5;
    int games = 20;
    int winsNeeded = 10;
    int winChance = 42;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8395138357738366;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int trials = 50;
    int games = 20;
    int winsNeeded = 13;
    int winChance = 13;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 4.780366629431043E-6;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int trials = 50;
    int games = 10;
    int winsNeeded = 10;
    int winChance = 75;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9448701546682944;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int trials = 48;
    int games = 17;
    int winsNeeded = 11;
    int winChance = 45;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9840391872684441;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int trials = 50;
    int games = 20;
    int winsNeeded = 15;
    int winChance = 69;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999538539;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int trials = 50;
    int games = 20;
    int winsNeeded = 13;
    int winChance = 43;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8678241798679364;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int trials = 1;
    int games = 20;
    int winsNeeded = 10;
    int winChance = 50;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5880985260009766;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int trials = 50;
    int games = 20;
    int winsNeeded = 19;
    int winChance = 72;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4615168664126693;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int trials = 10;
    int games = 10;
    int winsNeeded = 5;
    int winChance = 25;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5566860567603682;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int trials = 2;
    int games = 2;
    int winsNeeded = 1;
    int winChance = 50;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9375;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int trials = 2;
    int games = 20;
    int winsNeeded = 5;
    int winChance = 10;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08448495352665641;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int trials = 50;
    int games = 17;
    int winsNeeded = 16;
    int winChance = 100;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int trials = 50;
    int games = 20;
    int winsNeeded = 10;
    int winChance = 23;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3152314209871049;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int trials = 50;
    int games = 20;
    int winsNeeded = 15;
    int winChance = 99;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int trials = 49;
    int games = 19;
    int winsNeeded = 10;
    int winChance = 78;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int trials = 49;
    int games = 19;
    int winsNeeded = 11;
    int winChance = 43;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9993955411352937;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int trials = 5;
    int games = 20;
    int winsNeeded = 10;
    int winChance = 42;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8395138357738366;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int trials = 50;
    int games = 20;
    int winsNeeded = 13;
    int winChance = 13;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 4.780366629431043E-6;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int trials = 50;
    int games = 10;
    int winsNeeded = 10;
    int winChance = 75;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9448701546682944;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int trials = 48;
    int games = 17;
    int winsNeeded = 11;
    int winChance = 45;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9840391872684441;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int trials = 50;
    int games = 20;
    int winsNeeded = 15;
    int winChance = 69;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999538539;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int trials = 50;
    int games = 20;
    int winsNeeded = 13;
    int winChance = 43;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8678241798679364;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int trials = 1;
    int games = 20;
    int winsNeeded = 10;
    int winChance = 50;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5880985260009766;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int trials = 50;
    int games = 20;
    int winsNeeded = 19;
    int winChance = 72;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4615168664126693;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int trials = 10;
    int games = 10;
    int winsNeeded = 5;
    int winChance = 25;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5566860567603682;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int trials = 2;
    int games = 2;
    int winsNeeded = 1;
    int winChance = 50;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9375;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int trials = 2;
    int games = 20;
    int winsNeeded = 5;
    int winChance = 10;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08448495352665641;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int trials = 50;
    int games = 17;
    int winsNeeded = 16;
    int winChance = 100;
    ScrabbleBet* pObj = new ScrabbleBet();
    clock_t start = clock();
    double result = pObj->estimate(trials, games, winsNeeded, winChance);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20763521&rd=9814&pm=6116
********************************************************************************
#pragma warning (disable:4786) 
#include <iostream> 
#include <sstream> 
#include <vector> 
#include <string> 
#include <algorithm> 
#include <cmath> 
 
using namespace std; 
typedef vector <int> VI; 
typedef vector <string> VS; 
 
typedef double LD; 
 
class ScrabbleBet 
{ 
public:  
  LD CNK(int n, int k) 
  { 
    LD res = 1.0; 
    int i; 
    for (i=n-k+1;i<=n;i++) 
      res *= LD(i); 
 
    for (i=1;i<=k;i++) 
      res /= LD(i); 
 
    return res; 
  } 
 
  double estimate(int trials, int games, int winsNeeded, int winChance)  
  {  
    LD prob = winChance * 0.01; 
    LD p0 = 0.0, p1, p2; 
 
    int i;  
    for (i=winsNeeded; i<=games; i++) 
    { 
      LD tmp = pow(prob, LD(i)) * pow(1.0 - prob, LD(games - i)); 
      p0 += CNK(games, i) * tmp; 
    } 
 
    p1 = 1.0 - p0; 
    p2 = pow(p1, LD(trials)); 
    return LD(1.0 - p2); 
  }  
 
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/