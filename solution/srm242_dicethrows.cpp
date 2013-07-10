/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4450
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

class DiceThrows {
public:
    double winProbability(int numDiceA, vector<int> sidesA, int numDiceB, vector<int> sidesB);
};

double DiceThrows::winProbability(int numDiceA, vector<int> sidesA, int numDiceB, vector<int> sidesB) {
    double ret;
    return ret;
}


int test0() {
    int numDiceA = 1;
    vector<int> sidesA = {1, 2, 3, 4, 5, 6};
    int numDiceB = 1;
    vector<int> sidesB = {1, 2, 3, 4, 5, 6};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.41666666666666663;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int numDiceA = 200;
    vector<int> sidesA = {1, 3, 8, 18, 45, 100};
    int numDiceB = 200;
    vector<int> sidesB = {1, 4, 10, 21, 53, 100};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25240407058279035;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int numDiceA = 2;
    vector<int> sidesA = {1, 1, 1, 2, 2, 2};
    int numDiceB = 3;
    vector<int> sidesB = {1, 1, 1, 1, 1, 1};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int numDiceA = 200;
    vector<int> sidesA = {6, 5, 4, 3, 2, 1};
    int numDiceB = 200;
    vector<int> sidesB = {3, 4, 6, 5, 1, 2};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49416239842107595;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int numDiceA = 100;
    vector<int> sidesA = {1, 1, 1, 1, 1, 2};
    int numDiceB = 199;
    vector<int> sidesB = {1, 1, 1, 1, 1, 1};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5306467074865068E-78;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int numDiceA = 1;
    vector<int> sidesA = {1, 2, 1, 2, 1, 2};
    int numDiceB = 1;
    vector<int> sidesB = {2, 1, 2, 1, 2, 1};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int numDiceA = 200;
    vector<int> sidesA = {1, 3, 8, 18, 45, 100};
    int numDiceB = 80;
    vector<int> sidesB = {1, 4, 10, 21, 53, 100};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999976160046;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int numDiceA = 100;
    vector<int> sidesA = {1, 3, 5, 10, 15, 20};
    int numDiceB = 100;
    vector<int> sidesB = {9, 9, 9, 9, 9, 9};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4943375131579816;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int numDiceA = 100;
    vector<int> sidesA = {7, 8, 9, 9, 10, 11};
    int numDiceB = 100;
    vector<int> sidesB = {1, 3, 5, 10, 15, 20};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49968090996086173;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int numDiceA = 10;
    vector<int> sidesA = {1, 2, 3, 4, 5, 6};
    int numDiceB = 1;
    vector<int> sidesB = {59, 70, 80, 90, 95, 100};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 2.7563619479867007E-9;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int numDiceA = 1;
    vector<int> sidesA = {60, 70, 80, 90, 95, 100};
    int numDiceB = 10;
    vector<int> sidesB = {1, 2, 3, 4, 5, 6};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999972436379;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int numDiceA = 91;
    vector<int> sidesA = {69, 98, 52, 53, 48, 89};
    int numDiceB = 133;
    vector<int> sidesB = {51, 9, 99, 12, 44, 43};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8922893426623625;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int numDiceA = 131;
    vector<int> sidesA = {3, 72, 90, 25, 91, 34};
    int numDiceB = 175;
    vector<int> sidesB = {18, 45, 63, 27, 51, 36};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.38895365380512525;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int numDiceA = 137;
    vector<int> sidesA = {60, 28, 29, 5, 14, 19};
    int numDiceB = 92;
    vector<int> sidesB = {45, 100, 16, 32, 51, 11};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.142456572809483;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int numDiceA = 155;
    vector<int> sidesA = {99, 39, 55, 85, 21, 52};
    int numDiceB = 153;
    vector<int> sidesB = {95, 67, 66, 5, 84, 41};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4480478450853752;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int numDiceA = 196;
    vector<int> sidesA = {71, 41, 29, 76, 96, 12};
    int numDiceB = 189;
    vector<int> sidesB = {77, 9, 47, 95, 72, 44};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.34670932289383705;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int numDiceA = 74;
    vector<int> sidesA = {82, 57, 69, 2, 77, 75};
    int numDiceB = 107;
    vector<int> sidesB = {68, 83, 6, 31, 42, 3};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7895416899310314;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int numDiceA = 195;
    vector<int> sidesA = {94, 40, 1, 8, 81, 11};
    int numDiceB = 142;
    vector<int> sidesB = {24, 39, 74, 17, 76, 88};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5714253512162418;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int numDiceA = 101;
    vector<int> sidesA = {17, 82, 37, 97, 59, 23};
    int numDiceB = 114;
    vector<int> sidesB = {73, 79, 80, 31, 6, 34};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.14213780140021903;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int numDiceA = 167;
    vector<int> sidesA = {14, 49, 45, 79, 55, 90};
    int numDiceB = 184;
    vector<int> sidesB = {42, 71, 60, 47, 32, 23};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9815760232124386;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int numDiceA = 103;
    vector<int> sidesA = {57, 88, 39, 21, 19, 91};
    int numDiceB = 128;
    vector<int> sidesB = {29, 54, 88, 32, 82, 5};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04037445470659537;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int numDiceA = 61;
    vector<int> sidesA = {87, 87, 75, 41, 42, 58};
    int numDiceB = 62;
    vector<int> sidesB = {89, 78, 47, 63, 87, 23};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4404035701658416;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int numDiceA = 63;
    vector<int> sidesA = {75, 27, 98, 92, 65, 48};
    int numDiceB = 126;
    vector<int> sidesB = {72, 56, 1, 62, 16, 31};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01593491572116412;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int numDiceA = 118;
    vector<int> sidesA = {65, 52, 4, 73, 90, 65};
    int numDiceB = 184;
    vector<int> sidesB = {50, 3, 16, 67, 37, 82};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.020732525118590778;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int numDiceA = 33;
    vector<int> sidesA = {14, 32, 91, 97, 48, 28};
    int numDiceB = 39;
    vector<int> sidesB = {80, 50, 11, 38, 96, 13};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2665639976189537;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int numDiceA = 59;
    vector<int> sidesA = {75, 21, 78, 64, 9, 82};
    int numDiceB = 73;
    vector<int> sidesB = {80, 97, 40, 20, 51, 18};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07091673648667753;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int numDiceA = 82;
    vector<int> sidesA = {39, 74, 28, 24, 75, 22};
    int numDiceB = 57;
    vector<int> sidesB = {33, 64, 79, 40, 39, 92};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8592708622541287;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int numDiceA = 54;
    vector<int> sidesA = {63, 87, 6, 9, 62, 100};
    int numDiceB = 75;
    vector<int> sidesB = {54, 12, 13, 95, 8, 42};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6503180290720642;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int numDiceA = 98;
    vector<int> sidesA = {36, 69, 78, 48, 95, 89};
    int numDiceB = 168;
    vector<int> sidesB = {6, 28, 29, 29, 60, 84};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.669735268455362;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int numDiceA = 176;
    vector<int> sidesA = {56, 86, 13, 17, 99, 58};
    int numDiceB = 111;
    vector<int> sidesB = {89, 78, 63, 99, 95, 63};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9226976824449573;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int numDiceA = 165;
    vector<int> sidesA = {48, 99, 56, 89, 37, 29};
    int numDiceB = 191;
    vector<int> sidesB = {61, 16, 58, 97, 10, 84};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16818711679580858;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int numDiceA = 13;
    vector<int> sidesA = {46, 83, 42, 21, 31, 47};
    int numDiceB = 10;
    vector<int> sidesB = {51, 17, 22, 85, 43, 73};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8280454034647005;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int numDiceA = 78;
    vector<int> sidesA = {42, 15, 86, 71, 17, 2};
    int numDiceB = 43;
    vector<int> sidesB = {97, 40, 99, 68, 5, 23};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9656249263567392;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int numDiceA = 137;
    vector<int> sidesA = {36, 61, 48, 31, 96, 85};
    int numDiceB = 100;
    vector<int> sidesB = {94, 75, 88, 30, 88, 69};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9840863679633509;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int numDiceA = 127;
    vector<int> sidesA = {21, 22, 54, 64, 72, 94};
    int numDiceB = 185;
    vector<int> sidesB = {13, 5, 100, 53, 23, 45};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.19630313135275743;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int numDiceA = 90;
    vector<int> sidesA = {80, 64, 32, 57, 49, 49};
    int numDiceB = 104;
    vector<int> sidesB = {6, 58, 29, 81, 80, 13};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8394366633008992;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int numDiceA = 85;
    vector<int> sidesA = {89, 74, 28, 86, 16, 50};
    int numDiceB = 106;
    vector<int> sidesB = {77, 49, 44, 97, 7, 30};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09950087419073816;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int numDiceA = 152;
    vector<int> sidesA = {13, 19, 17, 94, 78, 7};
    int numDiceB = 107;
    vector<int> sidesB = {18, 80, 64, 94, 27, 86};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.062226672739695225;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int numDiceA = 90;
    vector<int> sidesA = {67, 38, 36, 17, 71, 37};
    int numDiceB = 76;
    vector<int> sidesB = {70, 16, 99, 74, 23, 48};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2703034500524742;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int numDiceA = 100;
    vector<int> sidesA = {67, 41, 86, 88, 55, 59};
    int numDiceB = 164;
    vector<int> sidesB = {26, 51, 24, 26, 12, 91};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7983177346915058;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int numDiceA = 121;
    vector<int> sidesA = {36, 70, 38, 61, 50, 13};
    int numDiceB = 121;
    vector<int> sidesB = {28, 79, 35, 69, 30, 27};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.501752060427102;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int numDiceA = 145;
    vector<int> sidesA = {33, 43, 42, 39, 36, 42};
    int numDiceB = 119;
    vector<int> sidesB = {21, 92, 68, 83, 29, 5};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2609327938893526;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int numDiceA = 74;
    vector<int> sidesA = {1, 45, 38, 46, 69, 97};
    int numDiceB = 61;
    vector<int> sidesB = {3, 58, 77, 89, 10, 67};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9411406781077755;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int numDiceA = 94;
    vector<int> sidesA = {94, 78, 54, 73, 60, 58};
    int numDiceB = 160;
    vector<int> sidesB = {53, 58, 61, 21, 9, 62};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04536527419664167;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int numDiceA = 81;
    vector<int> sidesA = {27, 7, 87, 38, 65, 77};
    int numDiceB = 70;
    vector<int> sidesB = {45, 62, 64, 94, 38, 5};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9146438656313055;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int numDiceA = 196;
    vector<int> sidesA = {96, 29, 12, 89, 46, 7};
    int numDiceB = 193;
    vector<int> sidesB = {7, 69, 30, 49, 76, 65};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.24534383811241348;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int numDiceA = 18;
    vector<int> sidesA = {24, 31, 16, 65, 61, 56};
    int numDiceB = 18;
    vector<int> sidesB = {70, 16, 76, 24, 17, 68};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.34812559599367604;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int numDiceA = 164;
    vector<int> sidesA = {84, 85, 53, 34, 44, 25};
    int numDiceB = 199;
    vector<int> sidesB = {48, 2, 51, 11, 80, 84};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.30362425458716547;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int numDiceA = 185;
    vector<int> sidesA = {68, 65, 99, 14, 20, 53};
    int numDiceB = 178;
    vector<int> sidesB = {91, 73, 30, 27, 33, 95};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.17486496878427826;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int numDiceA = 155;
    vector<int> sidesA = {13, 90, 42, 27, 59, 99};
    int numDiceB = 119;
    vector<int> sidesB = {93, 79, 30, 91, 70, 62};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5819575480418528;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int numDiceA = 89;
    vector<int> sidesA = {13, 1, 36, 61, 19, 70};
    int numDiceB = 103;
    vector<int> sidesB = {16, 58, 7, 45, 50, 18};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.11854621851619367;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int numDiceA = 94;
    vector<int> sidesA = {32, 87, 68, 95, 49, 81};
    int numDiceB = 134;
    vector<int> sidesB = {55, 82, 5, 99, 53, 12};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.19815474682507994;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int numDiceA = 193;
    vector<int> sidesA = {20, 89, 23, 47, 41, 9};
    int numDiceB = 162;
    vector<int> sidesB = {50, 52, 6, 75, 50, 58};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.13750119664901542;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int numDiceA = 3;
    vector<int> sidesA = {26, 49, 6, 95, 52, 26};
    int numDiceB = 5;
    vector<int> sidesB = {57, 60, 79, 47, 81, 15};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.017172377495808563;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int numDiceA = 130;
    vector<int> sidesA = {75, 23, 77, 69, 99, 26};
    int numDiceB = 133;
    vector<int> sidesB = {77, 83, 12, 98, 28, 75};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2831248206864896;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int numDiceA = 75;
    vector<int> sidesA = {81, 99, 82, 85, 40, 99};
    int numDiceB = 138;
    vector<int> sidesB = {60, 59, 8, 23, 20, 86};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6959432865451713;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int numDiceA = 73;
    vector<int> sidesA = {70, 12, 17, 51, 52, 81};
    int numDiceB = 79;
    vector<int> sidesB = {37, 32, 97, 21, 28, 47};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4954853514613028;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int numDiceA = 149;
    vector<int> sidesA = {86, 71, 100, 88, 84, 68};
    int numDiceB = 182;
    vector<int> sidesB = {100, 71, 91, 48, 42, 33};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9658509062350724;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int numDiceA = 59;
    vector<int> sidesA = {74, 66, 82, 32, 57, 72};
    int numDiceB = 84;
    vector<int> sidesB = {3, 25, 26, 89, 48, 41};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9689650546244156;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int numDiceA = 46;
    vector<int> sidesA = {83, 1, 66, 11, 11, 59};
    int numDiceB = 22;
    vector<int> sidesB = {97, 73, 66, 41, 61, 32};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9594884367769796;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int numDiceA = 53;
    vector<int> sidesA = {31, 40, 59, 94, 84, 31};
    int numDiceB = 57;
    vector<int> sidesB = {25, 95, 28, 51, 17, 40};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9814866796160062;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int numDiceA = 200;
    vector<int> sidesA = {100, 50, 25, 12, 6, 3};
    int numDiceB = 200;
    vector<int> sidesB = {99, 49, 24, 11, 5, 2};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6155775286164739;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int numDiceA = 200;
    vector<int> sidesA = {1, 3, 8, 18, 45, 100};
    int numDiceB = 200;
    vector<int> sidesB = {1, 4, 10, 21, 53, 100};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25240407058279035;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int numDiceA = 200;
    vector<int> sidesA = {100, 100, 100, 100, 100, 100};
    int numDiceB = 200;
    vector<int> sidesB = {100, 100, 100, 100, 100, 100};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int numDiceA = 200;
    vector<int> sidesA = {99, 100, 100, 100, 100, 100};
    int numDiceB = 200;
    vector<int> sidesB = {100, 100, 100, 100, 100, 98};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9980545763195985;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int numDiceA = 200;
    vector<int> sidesA = {99, 99, 99, 100, 100, 100};
    int numDiceB = 200;
    vector<int> sidesB = {99, 99, 99, 100, 100, 100};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4800653490181033;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int numDiceA = 200;
    vector<int> sidesA = {1, 4, 8, 100, 50, 60};
    int numDiceB = 200;
    vector<int> sidesB = {20, 57, 34, 78, 100, 78};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1748499430056009E-13;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int numDiceA = 18;
    vector<int> sidesA = {6, 6, 6, 6, 6, 6};
    int numDiceB = 10;
    vector<int> sidesB = {1, 2, 3, 4, 5, 6};
    DiceThrows* pObj = new DiceThrows();
    clock_t start = clock();
    double result = pObj->winProbability(numDiceA, sidesA, numDiceB, sidesB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999999999;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7462740&rd=7217&pm=4450
********************************************************************************
#include <string>
#include <vector>
#include <cmath>
#include <cctype>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <utility>
#include <numeric>
 
using namespace std;
 
long double pa[30000], pb[30000];
long double cb[30000];
 
class DiceThrows {
  public:
  double winProbability(int a, vector <int> sa, int b, vector <int> sb) {
    
    pa[0] = pb[0] = 1;
    for (int i = 0; i < a; i++)
      for (int j = 20000; j >= 0; j--)
        {
    for (int k = 0; k < 6; k++)
      pa[j+sa[k]] += pa[j] / 6;
    pa[j] = 0;
        }
    for (int i = 0; i < b; i++)
      for (int j = 20000; j >= 0; j--)
        {
    for (int k = 0; k < 6; k++)
      pb[j+sb[k]] += pb[j] / 6;
    pb[j] = 0;
        }
    long double cum = 0;
    for (int j = 0; j < 25000; j++)
      {
        cb[j] = cum;
        cum += pb[j];
      }
    long double ans = 0;
    for (int j = 0; j < 25000; j++)
      ans += pa[j] * cb[j];
    return (double) ans;
    
  }
};
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/