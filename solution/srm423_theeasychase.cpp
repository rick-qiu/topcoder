/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9977
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

class TheEasyChase {
public:
    string winner(int n, int rowWhite, int colWhite, int rowBlack, int colBlack);
};

string TheEasyChase::winner(int n, int rowWhite, int colWhite, int rowBlack, int colBlack) {
    string ret;
    return ret;
}


int test0() {
    int n = 2;
    int rowWhite = 1;
    int colWhite = 1;
    int rowBlack = 2;
    int colBlack = 2;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 2";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 2;
    int rowWhite = 2;
    int colWhite = 2;
    int rowBlack = 1;
    int colBlack = 2;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "WHITE 1";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 3;
    int rowWhite = 1;
    int colWhite = 1;
    int rowBlack = 3;
    int colBlack = 3;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 6";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 3;
    int rowWhite = 3;
    int colWhite = 2;
    int rowBlack = 1;
    int colBlack = 1;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 8";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 3;
    int rowWhite = 1;
    int colWhite = 2;
    int rowBlack = 3;
    int colBlack = 1;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 8";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 3;
    int rowWhite = 2;
    int colWhite = 2;
    int rowBlack = 3;
    int colBlack = 1;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 6";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 8;
    int rowWhite = 5;
    int colWhite = 4;
    int rowBlack = 1;
    int colBlack = 1;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 22";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 8;
    int rowWhite = 5;
    int colWhite = 1;
    int rowBlack = 7;
    int colBlack = 3;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 14";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 8;
    int rowWhite = 6;
    int colWhite = 4;
    int rowBlack = 6;
    int colBlack = 5;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "WHITE 1";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 4;
    int rowWhite = 3;
    int colWhite = 2;
    int rowBlack = 1;
    int colBlack = 3;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 8";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 16;
    int rowWhite = 9;
    int colWhite = 13;
    int rowBlack = 5;
    int colBlack = 1;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 42";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 15;
    int rowWhite = 13;
    int colWhite = 12;
    int rowBlack = 6;
    int colBlack = 13;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 36";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 15;
    int rowWhite = 7;
    int colWhite = 5;
    int rowBlack = 7;
    int colBlack = 11;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 30";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 12;
    int rowWhite = 7;
    int colWhite = 1;
    int rowBlack = 6;
    int colBlack = 7;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 20";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 16;
    int rowWhite = 3;
    int colWhite = 9;
    int rowBlack = 12;
    int colBlack = 5;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 36";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 15;
    int rowWhite = 10;
    int colWhite = 4;
    int rowBlack = 4;
    int colBlack = 8;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 30";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 14;
    int rowWhite = 1;
    int colWhite = 7;
    int rowBlack = 3;
    int colBlack = 1;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 28";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 11;
    int rowWhite = 5;
    int colWhite = 4;
    int rowBlack = 9;
    int colBlack = 4;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 24";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 18;
    int rowWhite = 1;
    int colWhite = 1;
    int rowBlack = 9;
    int colBlack = 9;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 30";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 10;
    int rowWhite = 9;
    int colWhite = 7;
    int rowBlack = 7;
    int colBlack = 10;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 20";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 17;
    int rowWhite = 2;
    int colWhite = 2;
    int rowBlack = 1;
    int colBlack = 1;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 34";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 15;
    int rowWhite = 2;
    int colWhite = 2;
    int rowBlack = 1;
    int colBlack = 1;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 30";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 19;
    int rowWhite = 2;
    int colWhite = 2;
    int rowBlack = 1;
    int colBlack = 1;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 38";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 20;
    int rowWhite = 19;
    int colWhite = 2;
    int rowBlack = 20;
    int colBlack = 1;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 40";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 20;
    int rowWhite = 1;
    int colWhite = 20;
    int rowBlack = 20;
    int colBlack = 1;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 56";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 19;
    int rowWhite = 1;
    int colWhite = 19;
    int rowBlack = 19;
    int colBlack = 1;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 54";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 20;
    int rowWhite = 1;
    int colWhite = 1;
    int rowBlack = 19;
    int colBlack = 20;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 56";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 20;
    int rowWhite = 11;
    int colWhite = 11;
    int rowBlack = 1;
    int colBlack = 1;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 58";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 20;
    int rowWhite = 20;
    int colWhite = 19;
    int rowBlack = 1;
    int colBlack = 1;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 58";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 20;
    int rowWhite = 1;
    int colWhite = 17;
    int rowBlack = 5;
    int colBlack = 9;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 46";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 20;
    int rowWhite = 8;
    int colWhite = 12;
    int rowBlack = 11;
    int colBlack = 13;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 42";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 20;
    int rowWhite = 7;
    int colWhite = 5;
    int rowBlack = 17;
    int colBlack = 11;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 46";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 20;
    int rowWhite = 19;
    int colWhite = 9;
    int rowBlack = 14;
    int colBlack = 11;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 28";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 20;
    int rowWhite = 1;
    int colWhite = 2;
    int rowBlack = 1;
    int colBlack = 20;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 58";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 19;
    int rowWhite = 1;
    int colWhite = 2;
    int rowBlack = 19;
    int colBlack = 19;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 56";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 18;
    int rowWhite = 1;
    int colWhite = 1;
    int rowBlack = 1;
    int colBlack = 18;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 52";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 20;
    int rowWhite = 1;
    int colWhite = 1;
    int rowBlack = 10;
    int colBlack = 10;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 34";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 20;
    int rowWhite = 1;
    int colWhite = 1;
    int rowBlack = 20;
    int colBlack = 20;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 56";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 20;
    int rowWhite = 7;
    int colWhite = 14;
    int rowBlack = 19;
    int colBlack = 2;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 54";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 5;
    int rowWhite = 5;
    int colWhite = 5;
    int rowBlack = 4;
    int colBlack = 4;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 2";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 20;
    int rowWhite = 1;
    int colWhite = 1;
    int rowBlack = 20;
    int colBlack = 19;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 56";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 19;
    int rowWhite = 1;
    int colWhite = 1;
    int rowBlack = 17;
    int colBlack = 18;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 50";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 20;
    int rowWhite = 1;
    int colWhite = 2;
    int rowBlack = 20;
    int colBlack = 18;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 54";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 19;
    int rowWhite = 2;
    int colWhite = 9;
    int rowBlack = 19;
    int colBlack = 1;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 56";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 20;
    int rowWhite = 5;
    int colWhite = 7;
    int rowBlack = 17;
    int colBlack = 19;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 54";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 19;
    int rowWhite = 1;
    int colWhite = 3;
    int rowBlack = 17;
    int colBlack = 17;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 50";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 20;
    int rowWhite = 2;
    int colWhite = 2;
    int rowBlack = 4;
    int colBlack = 3;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 40";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 20;
    int rowWhite = 1;
    int colWhite = 20;
    int rowBlack = 1;
    int colBlack = 2;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 56";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 20;
    int rowWhite = 10;
    int colWhite = 10;
    int rowBlack = 10;
    int colBlack = 12;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 40";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 20;
    int rowWhite = 2;
    int colWhite = 5;
    int rowBlack = 11;
    int colBlack = 17;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 44";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 19;
    int rowWhite = 2;
    int colWhite = 5;
    int rowBlack = 5;
    int colBlack = 7;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 36";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 20;
    int rowWhite = 2;
    int colWhite = 3;
    int rowBlack = 20;
    int colBlack = 20;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 58";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 20;
    int rowWhite = 18;
    int colWhite = 19;
    int rowBlack = 2;
    int colBlack = 1;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 56";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 5;
    int rowWhite = 2;
    int colWhite = 1;
    int rowBlack = 5;
    int colBlack = 3;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 8";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 10;
    int rowWhite = 1;
    int colWhite = 1;
    int rowBlack = 3;
    int colBlack = 2;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 20";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 6;
    int rowWhite = 6;
    int colWhite = 3;
    int rowBlack = 2;
    int colBlack = 2;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 12";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 20;
    int rowWhite = 1;
    int colWhite = 1;
    int rowBlack = 19;
    int colBlack = 17;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 54";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 20;
    int rowWhite = 1;
    int colWhite = 1;
    int rowBlack = 10;
    int colBlack = 20;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 48";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 20;
    int rowWhite = 4;
    int colWhite = 7;
    int rowBlack = 18;
    int colBlack = 17;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 52";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 20;
    int rowWhite = 1;
    int colWhite = 1;
    int rowBlack = 2;
    int colBlack = 3;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 40";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 20;
    int rowWhite = 5;
    int colWhite = 6;
    int rowBlack = 3;
    int colBlack = 4;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 46";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 19;
    int rowWhite = 3;
    int colWhite = 4;
    int rowBlack = 19;
    int colBlack = 18;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 52";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 20;
    int rowWhite = 1;
    int colWhite = 1;
    int rowBlack = 2;
    int colBlack = 4;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 40";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 20;
    int rowWhite = 2;
    int colWhite = 2;
    int rowBlack = 1;
    int colBlack = 1;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 40";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 6;
    int rowWhite = 1;
    int colWhite = 1;
    int rowBlack = 5;
    int colBlack = 6;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 14";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 20;
    int rowWhite = 19;
    int colWhite = 20;
    int rowBlack = 1;
    int colBlack = 1;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 58";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 20;
    int rowWhite = 1;
    int colWhite = 1;
    int rowBlack = 10;
    int colBlack = 19;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 48";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 20;
    int rowWhite = 1;
    int colWhite = 1;
    int rowBlack = 17;
    int colBlack = 19;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 54";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 3;
    int rowWhite = 1;
    int colWhite = 1;
    int rowBlack = 3;
    int colBlack = 2;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 6";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 20;
    int rowWhite = 1;
    int colWhite = 1;
    int rowBlack = 1;
    int colBlack = 4;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 40";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 20;
    int rowWhite = 20;
    int colWhite = 20;
    int rowBlack = 17;
    int colBlack = 18;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 40";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 19;
    int rowWhite = 1;
    int colWhite = 8;
    int rowBlack = 10;
    int colBlack = 17;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 40";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 20;
    int rowWhite = 2;
    int colWhite = 20;
    int rowBlack = 20;
    int colBlack = 19;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 54";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 20;
    int rowWhite = 1;
    int colWhite = 1;
    int rowBlack = 3;
    int colBlack = 2;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 40";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 20;
    int rowWhite = 2;
    int colWhite = 6;
    int rowBlack = 11;
    int colBlack = 19;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 46";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 20;
    int rowWhite = 2;
    int colWhite = 3;
    int rowBlack = 18;
    int colBlack = 17;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 52";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 20;
    int rowWhite = 1;
    int colWhite = 1;
    int rowBlack = 19;
    int colBlack = 18;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 54";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 20;
    int rowWhite = 4;
    int colWhite = 15;
    int rowBlack = 4;
    int colBlack = 5;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 48";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 20;
    int rowWhite = 17;
    int colWhite = 3;
    int rowBlack = 1;
    int colBlack = 8;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 50";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 20;
    int rowWhite = 1;
    int colWhite = 1;
    int rowBlack = 3;
    int colBlack = 3;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 6";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 20;
    int rowWhite = 20;
    int colWhite = 20;
    int rowBlack = 20;
    int colBlack = 19;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "WHITE 1";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 9;
    int rowWhite = 4;
    int colWhite = 4;
    int rowBlack = 6;
    int colBlack = 4;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 18";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 20;
    int rowWhite = 2;
    int colWhite = 3;
    int rowBlack = 13;
    int colBlack = 19;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 48";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 20;
    int rowWhite = 2;
    int colWhite = 3;
    int rowBlack = 19;
    int colBlack = 20;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 56";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 3;
    int rowWhite = 1;
    int colWhite = 1;
    int rowBlack = 2;
    int colBlack = 3;
    TheEasyChase* pObj = new TheEasyChase();
    clock_t start = clock();
    string result = pObj->winner(n, rowWhite, colWhite, rowBlack, colBlack);
    clock_t end = clock();
    delete pObj;
    string expected = "BLACK 6";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14970299&rd=13514&pm=9977
********************************************************************************
#include <algorithm> 
#include <bitset> 
#include <cassert> 
#include <cctype> 
#include <cmath> 
#include <complex> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <ctime> 
#include <deque> 
#include <fstream> 
#include <iostream> 
#include <iterator> 
#include <list> 
#include <map> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <string> 
#include <utility> 
#include <valarray> 
#include <vector> 
 
using namespace std; 
 
//Macroses 
#define all(v) (v).begin(), (v).end() 
 
//Types 
typedef long long ll; 
typedef pair <int, int> pii; 
typedef vector <int> vi; 
typedef vector <bool> vb; 
typedef vector <pii> vp; 
typedef vector <double> vd; 
typedef queue <pii> qp; 
 
//Constants 
const int INF = 1000000000; 
const double EPS = 1e-10; 
const double PI = 3.1415926535897932384626433832795; 
const int dx[] = {1, 0, -1, 0}; 
const int dy[] = {0, 1, 0, -1}; 
 
//Global 
int answ[20][20][20][20]; 
int ansb[20][20][20][20]; 
 
//Functions 
inline int sign(int a) { 
  return a ? (a > 0 ? 1 : -1) : 0; 
} 
 
//Main class 
class TheEasyChase { 
public: 
  string winner(int n, int a, int b, int c, int d) { 
    string res; 
    memset(answ, sizeof(answ), 0); 
    memset(ansb, sizeof(ansb), 0); 
    for (int i = 0; i < n; ++i) { 
      for (int j = 0; j < n; ++j) { 
        answ[i][j][i][j] = -INF; 
        ansb[i][j][i][j] = INF; 
      } 
    } 
    while (true) { 
      if (answ[a - 1][b - 1][c - 1][d - 1]) { 
        int ans = answ[a - 1][b - 1][c - 1][d - 1]; 
        if (ans > 0) { 
          ostringstream out; 
          out << "WHITE " << INF - ans; 
          return out.str(); 
        } else { 
          ostringstream out; 
          out << "BLACK " << INF + ans; 
          return out.str(); 
        } 
      } 
      for (int i = 0; i < n; ++i) { 
        for (int j = 0; j < n; ++j) { 
          for (int k = 0; k < n; ++k) { 
            for (int t = 0; t < n; ++t) { 
              if (!answ[i][j][k][t]) { 
                int c = -INF; 
                for (int d = 0; d < 4; ++d) { 
                  int ni = i + dx[d]; 
                  int nj = j + dy[d]; 
                  if (ni >= n || nj >= n || ni < 0 || nj < 0) { 
                    continue; 
                  } 
                  int cc = ansb[ni][nj][k][t]; 
                  c >?= cc - sign(cc); 
                } 
                if (c) { 
                  answ[i][j][k][t] = c; 
                } 
              } 
            } 
          } 
        } 
      } 
      for (int i = 0; i < n; ++i) { 
        for (int j = 0; j < n; ++j) { 
          for (int k = 0; k < n; ++k) { 
            for (int t = 0; t < n; ++t) { 
              if (!ansb[i][j][k][t]) { 
                int c = INF; 
                for (int d = 0; d < 4; ++d) { 
                  for (int s = 1; s < 3; ++s) { 
                    int nk = k + dx[d] * s; 
                    int nt = t + dy[d] * s; 
                    if (nk >= n || nt >= n || nk < 0 || nt < 0) { 
                      continue; 
                    } 
                    int cc = answ[i][j][nk][nt]; 
                    c <?= cc - sign(cc); 
                  } 
                } 
                if (c) { 
                  ansb[i][j][k][t] = c; 
                } 
              } 
            } 
          } 
        } 
      } 
    } 
    return res; 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/