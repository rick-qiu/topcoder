/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7277
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

class TextStatistics {
public:
    double averageLength(string text);
};

double TextStatistics::averageLength(string text) {
    double ret;
    return ret;
}


int test0() {
    string text = "This is div2 easy problem.";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string text = "Hello;
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string text = "Simple";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string text = "";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string text = "a bc";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string text = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 26.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string text = "abcdefghijklmnopqrstuvwxyz";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 26.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string text = "a0a";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string text = "a;
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string text = ";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string text = "0123456789";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string text = ";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string text = "0 1 2 3 4 5 6 7 8 9";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string text = " ";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
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
    string text = " ";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string text = " ";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string text = "01234567890123456789012345678901234567890123456789";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string text = "a0a1a2a3a4a5a6a7a8a9a;
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string text = "a a bc";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3333333333333333;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string text = "a a";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string text = "a;
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string text = "w";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string text = "JD";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string text = "H1I";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string text = "rOhk";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string text = "zeu5w";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string text = "4NYuxn";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string text = "ib3YNjr";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string text = "UJtoqTEv";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string text = "WsLeMVw51";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string text = "HLD!jWmU92";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string text = "wqpZyuGrKa7";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string text = "Z1a4i3ubut2u";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string text = "xylPoNXQkF9qt";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string text = "Eaq?Argjb!G3ah";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 2.75;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string text = "s27U0W7vikUOaup";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 2.75;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string text = "lX1APDMgvGofjLm-";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string text = "T;
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string text = "9QW.iz qWUz Dl!-FQ";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string text = "G2LfEIitZtyHIYdmOO4";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 8.5;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string text = ";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string text = "7Ph!KvQFcNwvxlvcO4qhJ";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string text = "-svj56SeNLL4Zr Jq8AhQC";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 3.2;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string text = "hFLd-us9Y-Ag vss7 Cx?hA";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2857142857142856;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string text = "7-01vcntzZv!OkV7Uqnf35Wt";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string text = "XVhGBYaLbZGxOimPaUJEmQuzB";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 25.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string text = "oY!pQEnLMrXuEs587eqOgaBZ!1";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 6.666666666666667;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string text = "z1z.ew7Iy!IrcW1-7FO-6eclUtm";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5714285714285716;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string text = "FmK44e2Q2 eU!wOi7s-R99Thq?sS";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8888888888888888;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string text = "aOzAzyFJWvTaoX1-VZ7ZtJMdo4DFf";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 6.25;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string text = "0j9Wf4Fm6i7JOobPUxT;
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string text = "w84lFC1hD2ot2?43 Jnw67Kmt8KhOQn";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 2.7142857142857144;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string text = "4p?js3jmkP2B4fSivba2tqpjsNgWlZy6";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 4.166666666666667;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string text = "9iOMOcG4;
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string text = "t4-EecQ6a1K3;
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5555555555555554;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string text = " ivhHxE6!6nD.upTjLEgpnF?pHaoA3ZwOST";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 5.6;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string text = "qYIQ4sYzQkD?9ZH? 7.3OPKG8m!ANhmlen6W";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5714285714285716;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string text = "cRT1 OhA0lWkSKOq;
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 4.5;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string text = "2AHaAgWwy1t7C.6vSVfoJ06ajkx0NPs.STH5op";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string text = "GAmMGmV-NY4cgPvX?eoG7al DnvxZ4BS7OOOG1;
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 3.75;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string text = "mUrx7-kuz1DaOlW2wbvXczn;
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 3.75;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string text = "fCgvwOw?K6HpMs.2n;
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 4.125;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string text = "bc j-TElnldjec64i6yD;
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 4.714285714285714;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string text = ".q09?l4YADbNm2OgLr3;
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 3.111111111111111;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string text = "aRaWpO5N6lwilVlVEpND UJxlPpbfhAFuqZS9VlDAelN";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string text = "ZUTwCTiIOsx9P1hMfbGuVX.VqI0;
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 5.285714285714286;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string text = "69mZF6TK!x W70Wa1mDDRdo!s OzLhLNGAz zJbo;
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8181818181818183;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string text = "9DDnG?H nRz6XbuD;
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 4.875;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string text = "-MxruFgh-04GhRJS12aPUzH3y3oabiuUfXsOYaBsxqXrkOMc";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string text = "SZ!Vl4ZaUtfsgSoo;
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 4.111111111111111;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string text = "6vFPhGTGg3viQRsw?N04X!YAyaGn9L4ZCo-PFRwFM.7o5wozSN";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 3.8;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string text = "asdf2asdf";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string text = "asdf?asdf";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string text = "This is div2 easy problem.";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string text = "09326732;
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string text = "su2kiran";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string text = "This is simple";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string text = "This is div2------ easy problem.";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string text = "asge4gdhr";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string text = "a2xx";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string text = "!!!";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string text = "a;
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string text = "s........";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string text = "t l ha ";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3333333333333333;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string text = "a-a";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
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
    string text = "as23 asd21 asd3?? as ";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string text = "..";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string text = "abc.ab";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string text = "";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string text = "w.w";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string text = "a?bc";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string text = "a - - -ab a;
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3333333333333333;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string text = "i am a boy";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 1.75;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string text = "mac9mac9mac9";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string text = "aaa bb";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string text = "thisisatestcasey?tescase?";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 11.5;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string text = "a-a-a";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string text = "a9a-";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string text = "A...AA.AA.....a";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string text = "aaa ... bbb";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string text = " ";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string text = " ";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string text = "ahmed.a";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string text = ".";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string text = "a 1 2 3 4 5 6";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
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
    string text = "a2a";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string text = "the most-important thing";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 5.25;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string text = "!?41 12384 ?!;
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string text = "Hello 72 worlds!";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 5.5;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string text = "Hello;
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 5.5;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string text = "hi4 text test. challenge! . ! ?";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 4.75;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string text = "diego salas ";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string text = "diego salas";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string text = "This 3i4a3 pA7w0rd077hi7.91a9.?aa0a";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string text = "Mo!ahmed!allah";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string text = "Mohamed G";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string text = "Mohamed1F";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string text = "a!l!i!!";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string text = "a a";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string text = ";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string text = "zzz! !ZZ! AA!- - ! z .";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string text = "Hello;
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 4.571428571428571;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string text = " word word2";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string text = "a";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string text = "Challenge1989;
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 4.5;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string text = ";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string text = "absa wef newaklfn fewan dafk vkldsaj w ek k sdl fw";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 3.6363636363636362;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string text = "my name is a nkur";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string text = "a!a";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string text = "!";
    TextStatistics* pObj = new TextStatistics();
    clock_t start = clock();
    double result = pObj->averageLength(text);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22627776&rd=10012&pm=7277
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
 
using namespace std;
 
class TextStatistics {
public:
  double averageLength(string);
};
 
double TextStatistics::averageLength(string text) {
  double res = 0.0;
  
  for (int i = 0; i < text.size(); i++) {
    if (ispunct(text[i]) || isdigit(text[i]))
      text[i] = ' ';
  }
  
  istringstream iss(text);
  int tot = 0; int num = 0;
  string s; while (iss >> s) {
    cout << s.size() << " ";
    tot += s.size(); num++;
  }
  
  if (num == 0) return 0.0;
  return res = (double)tot/num;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/