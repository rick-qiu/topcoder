/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2383
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

class SimpleIO {
public:
    int worstCase(string pattern, int targetState);
};

int SimpleIO::worstCase(string pattern, int targetState) {
    int ret;
    return ret;
}


int test0() {
    string pattern = "BNB";
    int targetState = 0;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string pattern = "BNBNBNBN";
    int targetState = 3;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string pattern = "BBNNBNBBBBNBBBBBB";
    int targetState = 3;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string pattern = "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBN";
    int targetState = 48;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string pattern = "BNNBNNBNNBNNB";
    int targetState = 6;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string pattern = "BNBBNBBBNBBBBNBBBBBNBBBBBBN";
    int targetState = 15;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string pattern = "BBBBNNNBBNBBBNNNNNBNBBNBBBBBNNNBBNBBBNNNNNBNBBNB";
    int targetState = 4;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string pattern = "BBBBNNBBBBNNBBBBNNBBBBNNBBBBNN";
    int targetState = 21;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string pattern = "NBBBBNNBNNBNNBNBBBBNNBNNBNNBNBBBBNNBNNBNNB";
    int targetState = 28;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string pattern = "NBBNBBBBBNNBBBBBNBNNN";
    int targetState = 13;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string pattern = "NNNNNNBNNNNNNN";
    int targetState = 0;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string pattern = "BBNBBNBBBBNBNNNNNBBBBBBNBBBB";
    int targetState = 0;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string pattern = "BNNBNNNNNNNNBBNNNBNNNNNBNBBB";
    int targetState = 4;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string pattern = "NNBNNBBNNBNNBNBNBBBBNBBNBN";
    int targetState = 4;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string pattern = "BNBBNNNNNBB";
    int targetState = 1;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string pattern = "BBNBBBNBBNBBBNBBNBBBNBBNBBBN";
    int targetState = 16;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string pattern = "NBBBNNNBNBNNNBBNNBBNNNB";
    int targetState = 6;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string pattern = "NBBBNBNN";
    int targetState = 2;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string pattern = "NBNNNBBNBBNNNBNNNNBNNNBBNBBNNNBNNN";
    int targetState = 23;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string pattern = "NNBNBNNBBBNNBNBBNNBNBNNBBBNNBNBBNNBNBNNBBBNNBNBB";
    int targetState = 25;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string pattern = "NNBBNNNNNBBBBBNNNNNNBBNNNNNBBBBBNNNN";
    int targetState = 28;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string pattern = "NBBNNBNNBBNBNNNNNBNNNBBBBNNNNBNNBNBNBNNBNNNNN";
    int targetState = 35;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string pattern = "BBNNBBNNBBNNBBNNBBNNBBNNBBNNBBNNBBNN";
    int targetState = 1;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string pattern = "BBNBNBNNNBBBNBBNNNNBBNNBNBBNBNNBBNNBBBNB";
    int targetState = 7;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string pattern = "BNNNNBNB";
    int targetState = 7;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string pattern = "BNNBNNBNBNBBNNNNBNBBNBBBBBBNBNNNNNBBBBBBBNNBN";
    int targetState = 40;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string pattern = "NNNNBBBBBNNNBNBBBNNNBN";
    int targetState = 19;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string pattern = "NNBNNBBBBNNNNNBNNBBBBNNN";
    int targetState = 0;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string pattern = "BNBNNBNBNBBBNBBNBBNNBNNBNBNNBNBNBBBNBBNBBNNBNN";
    int targetState = 18;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string pattern = "NNBBNBNNBNNNBBNBNNBNNNBBNBNNBNNNBBNBNNBN";
    int targetState = 13;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string pattern = "BNBBBBNBBNNNBNBBBBNBBNNNBNBBBBNBBNNNBNBBBBNBBNNN";
    int targetState = 19;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string pattern = "NNNBNNNNNBNNNNNBNN";
    int targetState = 5;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string pattern = "BBNNBNBNNNBBBBBBNNBBNNBNBNNNBBBBBBNN";
    int targetState = 12;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string pattern = "BBNN";
    int targetState = 1;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string pattern = "NBNNBNNBNBNNBNNBNBNNBNNBNBNNBNNBNBNNBNNB";
    int targetState = 0;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string pattern = "BNBNNNBNBNBNNNBNBNBNNNBNBNBNNNBN";
    int targetState = 31;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string pattern = "NNNNNNBNNBBNNBBNB";
    int targetState = 12;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string pattern = "BNBBBNBBNNBNNBBNBNNNBNNBBBNBBBNNBNNNBBBNN";
    int targetState = 30;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string pattern = "NNBNNBNNNBNBNNBBNNBNBNNNBNNBNNNBNBNNBBNNBNBN";
    int targetState = 42;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string pattern = "BBBNNNNNNBBBNNNNNNBBBNNNNNNBBBNNNNNN";
    int targetState = 13;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string pattern = "NNBBNBNBN";
    int targetState = 7;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string pattern = "NBBNNBBBNNBBNBBNNBNBBBBBNBBB";
    int targetState = 19;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string pattern = "BNNBBNBBNBBNBNNBBNNBBBB";
    int targetState = 22;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string pattern = "NBNNNNBNBBNBBBNBBBNNNBNNBNNNNBNBBNBBBNBBBNNNBN";
    int targetState = 27;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string pattern = "BNNNBBBBNBNNNNNNNNNBNBNNNBBBBNBNNNNNNNNNBN";
    int targetState = 20;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string pattern = "BBBBBBBBBBBB";
    int targetState = 8;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string pattern = "NNNNNNNNNBBBNNNNNNNNNBBB";
    int targetState = 18;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string pattern = "NBNBBNNNBNBBNNBNNNNBNNBNBBBNNBNBBNNNBBBBNB";
    int targetState = 31;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string pattern = "NNBNNNBBNNBBNNBBBBNNBNBBNBBNBNNBBNBN";
    int targetState = 20;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string pattern = "NBBBNBBNBNBBBNBBNBNBBBNBBNBNBBBNBBNBNBBBNBBNB";
    int targetState = 37;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string pattern = "BBBNBBBNBBNNNBNBBNBNNBBBNBNN";
    int targetState = 27;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string pattern = "NBNNBBBBBBNBBBNNNNNNNNNBNNBBBBBBNBBBNNNNNNNN";
    int targetState = 10;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string pattern = "NNBBNNBBNNBNBNBNNBBNNBBNNBNBNBNNBBNNBBNNBNBNB";
    int targetState = 22;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string pattern = "BBBNBNBNBN";
    int targetState = 3;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string pattern = "BBNNNBBBBBNBNNNBBNBBNNNBBBBBNBNNNBBN";
    int targetState = 4;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string pattern = "BNBNBNBNBNBNBNBNBNBN";
    int targetState = 17;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string pattern = "NBNBNNB";
    int targetState = 1;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string pattern = "BBNBNBBBBNNBNBBBNBNBNBNBBBBBBBBBNNNNBNBNBBBBBBBBNN";
    int targetState = 44;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string pattern = "BNNBNNBNN";
    int targetState = 3;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string pattern = "BN";
    int targetState = 0;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string pattern = "BBBBBBBBBNBB";
    int targetState = 0;
    SimpleIO* pObj = new SimpleIO();
    clock_t start = clock();
    int result = pObj->worstCase(pattern, targetState);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=5070&pm=2383
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
#include <map> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
map<i64, int> seen; 
int sz; 
i64 goal; 
i64 bp, np; 
int doit(i64 s) { 
  if( s == goal || !s ) return 0; 
  int &ret = seen[s]; 
  if( ret ) return ret; 
  ret = -1; 
  s = (s<<1) + (s>>(sz-1)); 
  int ret1 = doit(s&bp); 
  if( ret1 == -1 ) return -1; 
  int ret2 = doit(s&np); 
  if( ret2 == -1 ) return -1; 
  return ret = (ret1 >? ret2) + 1; 
} 
 
class SimpleIO { 
public: 
int worstCase(string pattern, int targetState) { 
  sz = pattern.size(); 
  int i, j, k, x, y, z, n; 
  for( i = 0; i < pattern.size(); i++ ) 
    if( pattern[i] == 'B' ) 
      bp += (1ll<<i); 
    else 
      np += (1ll<<i); 
  goal = (1ll<<targetState); 
  return doit((1ll<<pattern.size())-1); 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/