/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11810
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

class FoxAndMountain {
public:
    int count(int n, string history);
};

int FoxAndMountain::count(int n, string history) {
    int ret;
    return ret;
}


int test0() {
    int n = 4;
    string history = "UUDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 4;
    string history = "DUUD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 4;
    string history = "UU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 49;
    string history = "U";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 20;
    string history = "UUUDUUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 990;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 30;
    string history = "DUDUDUDUDUDUDUDU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 3718;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 50;
    string history = "U";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 946357703;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 42;
    string history = "DDDDUUUUDDDDDUDDDDDDDUUDDUDDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 48;
    string history = "DDDDDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 11210520;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 11;
    string history = "D";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 38;
    string history = "UUUUUUUUUDUUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 657800;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 42;
    string history = "DDUUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 901366256;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 9;
    string history = "D";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 32;
    string history = "UDDDUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 11386309;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 20;
    string history = "DDDDUDUD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 715;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 30;
    string history = "D";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 9694845;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 6;
    string history = "U";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 14;
    string history = "U";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 429;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 17;
    string history = "UD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 50;
    string history = "DDDUDUDDDUUUUUUUDDUUUUDDU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 230230;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 2;
    string history = "D";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 4;
    string history = "D";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 44;
    string history = "DUDUD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 632106360;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 48;
    string history = "UDUD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 922505942;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 30;
    string history = "DUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 9678461;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 32;
    string history = "DUD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 35047098;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 22;
    string history = "DUDDDDUDDUDUUDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 32;
    string history = "UUDDUDDDUUDDUUUDUUDDUDUDUUDUUUUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 28;
    string history = "DDDDDDDDDDDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 50;
    string history = "DDDUDDDDDDDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 414926201;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 50;
    string history = "DDDDDDDUUUUDDDDDDDDDDDUDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 65780;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 14;
    string history = "DDDDDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 40;
    string history = "DDUDUDUDDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 86384698;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 28;
    string history = "DDDDDDDDDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 680;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 40;
    string history = "DDDUDUUDUUUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 20026662;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 49;
    string history = "DUDUDUUDDDDDUUDUDUDDDDDDDDDDUDDDDDDDDUDUDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 22;
    string history = "DUDUDDUUDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 495;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 12;
    string history = "DDUUUUDUUD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 32;
    string history = "DDUDUDDUUDUDDUDUD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 8007;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 14;
    string history = "UDUUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 119;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 28;
    string history = "UDDUUDDDUUDDDDDDUUDUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 34;
    string history = "UUUUUUUUUUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 100947;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 42;
    string history = "UUUUUUUUUUUUUUUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 65780;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 21;
    string history = "DDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
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
    string history = "U";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 16796;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 48;
    string history = "UDDDDDDDDDDDDUDDDDUDUUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 14950;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 3;
    string history = "D";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
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
    string history = "D";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 16796;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 34;
    string history = "DDDUDDDDDDDDDDDUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 30;
    string history = "U";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 9694845;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 4;
    string history = "U";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 32;
    string history = "UDDDDUUDUUD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 319298;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 14;
    string history = "UDDDDUD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 12;
    string history = "DDUUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 26;
    string history = "DDDDDDDDDDDDDDUDDDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 42;
    string history = "UUUUUUUUUUUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 14307150;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 30;
    string history = "UUUDUUUUUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 54263;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 42;
    string history = "UUUUUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 417819120;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 18;
    string history = "DUUD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 3347;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 46;
    string history = "DDDUDDDDDDDDDDDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 2035800;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 18;
    string history = "DDDDDDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 8;
    string history = "DUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 48;
    string history = "DDUUDDDDDDDDDDDDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 7888725;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 15;
    string history = "DUUDDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 40;
    string history = "DDDDU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 409169930;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 2;
    string history = "U";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 43;
    string history = "DUUUUDUUUDDUDUUUUDUD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 4;
    string history = "UU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 4;
    string history = "D";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 4;
    string history = "U";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
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
    int n = 38;
    string history = "DDUDUUDUDU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 51586010;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 50;
    string history = "DDUDDDDDDDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 84324081;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 42;
    string history = "DDDUUDDDDDUDDUDDUDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 100947;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 36;
    string history = "UUUUUUUUUDUUDU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 100947;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 28;
    string history = "DUUDDDUDDDUDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 4368;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 28;
    string history = "DUDDDUDDDUDDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 455;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 48;
    string history = "UUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 711407953;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 12;
    string history = "UUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 18;
    string history = "UUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 4027;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 26;
    string history = "UDU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 727389;
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
    string history = "DD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 16795;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 40;
    string history = "DDUDDDDDDDUUDDDDDDDDDDUDDDDDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 12;
    string history = "D";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 132;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 32;
    string history = "DDUD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 32676651;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 6;
    string history = "U";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 12;
    string history = "DD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 131;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 20;
    string history = "UDDDUDUDUD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 330;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int n = 20;
    string history = "UDUUDUUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 715;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int n = 26;
    string history = "DUUDDUUUUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 6188;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int n = 38;
    string history = "UUUDUUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 322543285;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int n = 8;
    string history = "U";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int n = 8;
    string history = "DDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int n = 40;
    string history = "DUUDDUDDUUUDDDDDDUUDDUUDUUDDDDDUD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int n = 25;
    string history = "DDDUUDDDDDDU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int n = 38;
    string history = "DDDUDUDDDDDDDDDUD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 26334;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int n = 36;
    string history = "DDDDDDDDDDUDDDDDDDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int n = 8;
    string history = "DU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int n = 36;
    string history = "UDUUDDUDDDDDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 490314;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int n = 38;
    string history = "DUDDDUUDDUDUUDDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 319770;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int n = 14;
    string history = "DDDUDDDDDDDDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int n = 46;
    string history = "UUUUUUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 388724757;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int n = 24;
    string history = "DUDUUDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 41036;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int n = 32;
    string history = "UD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 35357670;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int n = 26;
    string history = "DDDDDDDDDDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int n = 50;
    string history = "UD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 946357703;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int n = 5;
    string history = "U";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int n = 2;
    string history = "D";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int n = 10;
    string history = "DD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int n = 28;
    string history = "U";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 2674440;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int n = 48;
    string history = "UDDUDDDDUUDUDDDUUUDUDUUDDUDDUUUDDDUD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 286;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int n = 38;
    string history = "DDDDDUUUUUDDUUUD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 100947;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int n = 22;
    string history = "UUUUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 12310;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int n = 38;
    string history = "UDDUUD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 797662006;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int n = 20;
    string history = "UDDDDDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 286;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int n = 50;
    string history = "UDUUUUUUUUD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 820800668;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int n = 44;
    string history = "DUUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 309319711;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int n = 15;
    string history = "DDDUDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int n = 13;
    string history = "D";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int n = 36;
    string history = "DUDDUDUUDDDUDDDDUDUDDUUDDDDDDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int n = 30;
    string history = "U";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 9694845;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int n = 2;
    string history = "D";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int n = 14;
    string history = "UUUD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 302;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int n = 44;
    string history = "DDDDDDDUDDDDDUDUDUDDDDDDUUDDDUDUDDDDUUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int n = 22;
    string history = "DDU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 57762;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int n = 44;
    string history = "DUDUDUUUUUDDDDDDDUDUDDDDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 11628;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int n = 10;
    string history = "U";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int n = 24;
    string history = "DDDUUDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 12087;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int n = 38;
    string history = "DDUDUDDUDDUUDDDDDDUUDDDDUD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int n = 28;
    string history = "UUUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 1693576;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int n = 16;
    string history = "DDDDDU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int n = 35;
    string history = "UUUUUUUUUDUUUUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int n = 14;
    string history = "DDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 302;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int n = 44;
    string history = "UUUUDUUUUUDUUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 44299015;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int n = 17;
    string history = "DDDDDDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int n = 50;
    string history = "DDDDDDDDUDDDDDDDDDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 3365856;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int n = 4;
    string history = "UU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int n = 16;
    string history = "DDUDUUDUDDUDUDD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int n = 50;
    string history = "DDUUUDUDUDUDUDUD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 247555533;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int n = 50;
    string history = "UUUUDDUDUDUDUDUDUDUDUDUDUDUDUDUDUDUDUDUDUDDDDUDUD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int n = 48;
    string history = "UUDUUDDDU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 549009398;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int n = 6;
    string history = "D";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int n = 48;
    string history = "U";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 904135723;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int n = 44;
    string history = "UUDUUDUDU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 168754967;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int n = 50;
    string history = "UUDDDDUUDUUUU";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 460334997;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int n = 2;
    string history = "UD";
    FoxAndMountain* pObj = new FoxAndMountain();
    clock_t start = clock();
    int result = pObj->count(n, history);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23102112&rd=15179&pm=11810
********************************************************************************
#include <cstdio> 
#include <vector> 
#include <string> 
#include <cstring> 
#include <cassert> 
#include <map> 
#include <set> 
#include <queue> 
#include <cmath> 
#include <algorithm> 
using namespace std; 
 
typedef pair<int,int> PII; 
typedef long long LL; 
const int INF = 1000000009; 
 
#ifdef mahou_shoujo_madoka 
    #define debug(...) printf(__VA_ARGS__) 
    int main(){} 
#else 
    #define debug(...) 
#endif 
 
void add(int& x, int y){ 
    x=(x+y)%INF; 
} 
 
class TrieGraph{ 
public: 
    static const int SIZE = 55; 
    static const int LEAF = 26; 
    int next[SIZE],e[SIZE][LEAF],n; 
    int data[SIZE]; 
    void init(){ 
        static int ok=0; 
        if(!ok++) n=SIZE; 
        fill_n(next,n,0); 
        fill_n(data,n,0); 
        memset(e,-1,n*sizeof(e[0])); 
        n=1; 
    } 
    void insert(const char* s, int idx = 0){ 
        int x=0; 
        for(int i=0;s[i];i++){ 
            int c=s[i]-'A'; 
            x=~e[x][c]?e[x][c]:e[x][c]=n++; 
        } 
        data[x]|=1<<idx; 
    } 
    void make(){ 
        static int q[SIZE],m; 
        next[0]=m=0; 
        for(int c=0;c<LEAF;c++) 
            if(~e[0][c]) next[q[m++]=e[0][c]]=0; else e[0][c]=0; 
        for(int i=0;i<m;i++){ 
            int x=q[i]; 
            data[x]|=data[next[x]]; 
            for(int c=0;c<LEAF;c++){ 
                int t=e[next[x]][c]; 
                if(~e[x][c]) next[q[m++]=e[x][c]]=t; else e[x][c]=t; 
            } 
        } 
    } 
     
}ac; 
 
class FoxAndMountain{ 
public: 
    int dp[55][55][55][2]; 
    int count(int n, string s){ 
        ac.init(); 
        ac.insert(s.c_str()); 
        ac.make(); 
        dp[0][0][0][0]=1; 
        for(int i=0;i<=n;i++){ 
            for(int x=0;x<ac.n;x++) for(int h=0;h<54;h++) for(int r=0;r<2;r++){ 
                if(!dp[i][x][h][r]) continue; 
                int y=ac.e[x]['U'-'A'],yr=ac.data[y]|r; 
                int z=ac.e[x]['D'-'A'],zr=ac.data[z]|r; 
                      add(dp[i+1][y][h+1][yr],dp[i][x][h][r]); 
                if(h) add(dp[i+1][z][h-1][zr],dp[i][x][h][r]); 
            } 
        } 
        int ans=0; 
        for(int i=0;i<ac.n;i++) add(ans,dp[n][i][0][1]); 
        return ans; 
    } 
};

********************************************************************************
*******************************************************************************/