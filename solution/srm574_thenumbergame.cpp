/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12474
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

class TheNumberGame {
public:
    string determineOutcome(int A, int B);
};

string TheNumberGame::determineOutcome(int A, int B) {
    string ret;
    return ret;
}


int test0() {
    int A = 45;
    int B = 4;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int A = 45;
    int B = 5;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int A = 99;
    int B = 123;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int A = 2356236;
    int B = 5666;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int A = 11;
    int B = 1;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int A = 12;
    int B = 21;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int A = 123;
    int B = 231;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int A = 123456789;
    int B = 987654321;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int A = 123456789;
    int B = 512346789;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int A = 446;
    int B = 646;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int A = 446;
    int B = 464;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int A = 446;
    int B = 644;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int A = 7347837;
    int B = 325;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int A = 7347837;
    int B = 837;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int A = 611;
    int B = 61;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int A = 123536363;
    int B = 363;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int A = 995432553;
    int B = 543;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int A = 995432553;
    int B = 234;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int A = 987987789;
    int B = 987;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int A = 978978789;
    int B = 879;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int A = 314159265;
    int B = 415;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int A = 314159265;
    int B = 295;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int A = 8442;
    int B = 4221;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int A = 8442;
    int B = 42;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int A = 866395753;
    int B = 6639575;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int A = 572681512;
    int B = 26;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int A = 212321312;
    int B = 33221;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int A = 212321312;
    int B = 2212;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int A = 212321312;
    int B = 213;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int A = 212321312;
    int B = 21312;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int A = 212321312;
    int B = 32131;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int A = 919244822;
    int B = 44291;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int A = 824216852;
    int B = 258612428;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int A = 258612428;
    int B = 824216852;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int A = 126;
    int B = 62;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int A = 76532791;
    int B = 52369717;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int A = 811934182;
    int B = 934818211;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int A = 8512658;
    int B = 3752381;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int A = 2179425;
    int B = 43785444;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int A = 1;
    int B = 2;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int A = 111;
    int B = 1;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int A = 44784278;
    int B = 5129525;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int A = 64844626;
    int B = 4462;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int A = 724582652;
    int B = 245826;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int A = 276464629;
    int B = 646;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int A = 276464629;
    int B = 646467;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int A = 472246289;
    int B = 64;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int A = 999999999;
    int B = 92;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int A = 999999999;
    int B = 9999;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int A = 999999999;
    int B = 99999999;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int A = 123456789;
    int B = 87654321;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int A = 12345678;
    int B = 2345678;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int A = 123456789;
    int B = 765;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int A = 12121;
    int B = 212;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int A = 12345;
    int B = 32;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int A = 1234;
    int B = 24;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int A = 123;
    int B = 321;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int A = 123;
    int B = 32;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int A = 544;
    int B = 45;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int A = 123;
    int B = 21;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int A = 123456789;
    int B = 8765;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int A = 1222;
    int B = 221;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int A = 1234;
    int B = 4321;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int A = 4321;
    int B = 1234;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int A = 321;
    int B = 123;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int A = 123;
    int B = 69;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int A = 444;
    int B = 4;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int A = 1234;
    int B = 34;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int A = 1111;
    int B = 11;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int A = 19;
    int B = 91;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int A = 41679;
    int B = 976;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int A = 12345;
    int B = 23;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int A = 11;
    int B = 111;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int A = 983625176;
    int B = 15263;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int A = 1234567;
    int B = 543;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int A = 545;
    int B = 455;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int A = 14321;
    int B = 1234;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int A = 11111122;
    int B = 21;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int A = 12345;
    int B = 54321;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int A = 1;
    int B = 11;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int A = 1221;
    int B = 2112;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int A = 234;
    int B = 432;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int A = 123445;
    int B = 344;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int A = 2345;
    int B = 43;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int A = 132;
    int B = 12;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int A = 12345;
    int B = 432;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int A = 34;
    int B = 43;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int A = 13161;
    int B = 613;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int A = 26;
    int B = 62;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int A = 31113;
    int B = 111;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int A = 1234;
    int B = 43;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int A = 4567;
    int B = 54;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int A = 325134;
    int B = 33254;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int A = 1;
    int B = 111111;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int A = 2122334;
    int B = 22233;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int A = 455;
    int B = 5;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int A = 123;
    int B = 12;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int A = 1234;
    int B = 32;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int A = 45;
    int B = 54;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int A = 1;
    int B = 99;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int A = 54321;
    int B = 12345;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int A = 1234;
    int B = 123;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int A = 245;
    int B = 45;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int A = 121213;
    int B = 1213;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int A = 1234;
    int B = 21;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int A = 3112;
    int B = 21;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int A = 12345666;
    int B = 456;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int A = 154;
    int B = 45;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int A = 32;
    int B = 23;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int A = 2;
    int B = 1;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int A = 2325;
    int B = 35;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int A = 1234;
    int B = 321;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int A = 432;
    int B = 43;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int A = 75157;
    int B = 515;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int A = 451;
    int B = 54;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int A = 123456789;
    int B = 567;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int A = 455;
    int B = 45;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int A = 165;
    int B = 65;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int A = 4588;
    int B = 45;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int A = 3212;
    int B = 123;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int A = 123;
    int B = 23;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int A = 123456789;
    int B = 23456789;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int A = 999999999;
    int B = 9;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int A = 1112111;
    int B = 11211;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int A = 123456789;
    int B = 214365879;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao loses";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int A = 999876999;
    int B = 9876;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int A = 999998999;
    int B = 9999899;
    TheNumberGame* pObj = new TheNumberGame();
    clock_t start = clock();
    string result = pObj->determineOutcome(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Manao wins";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23059622&rd=15494&pm=12474
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
 
using namespace std;
 
long long toi(string s){istringstream is(s);long long x;is>>x;return x;}
string tos(long long t){stringstream st; st<<t;return st.str();}
 
class TheNumberGame {
public:
  string determineOutcome(int A, int B) {
    string s = tos( A ) , t = tos( B );
    if( s.find(t) != -1 )  
      return "Manao wins";
    reverse( t.begin() , t.end() );
    if( s.find(t) != -1 )  
      return "Manao wins";
    return "Manao loses";
  }
};
 
 
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/