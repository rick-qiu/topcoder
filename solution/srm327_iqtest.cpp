/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6600
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

class IQTest {
public:
    string nextNumber(vector<int> previous);
};

string IQTest::nextNumber(vector<int> previous) {
    string ret;
    return ret;
}


int test0() {
    vector<int> previous = {1, 2, 3, 4, 5};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "6";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> previous = {3, 6, 12, 24, 48};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "96";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> previous = {1, 4, 13, 40};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "121";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> previous = {0};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> previous = {-1, 2};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> previous = {57, 57};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "57";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> previous = {16, -8, 4, -2};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> previous = {6, 5, 4, 3, 1};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> previous = {0, 0};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> previous = {-42, -42};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-42";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> previous = {4};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> previous = {-4};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> previous = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> previous = {-42, -41, -40, -39, -38, -37, -36, -35, -34, -33, -32, -31, -30, -29, -28, -27, -26, -25, -24, -23, -22, -21, -20, -19, -18, -17, -16, -15, -14, -13, -12, -11, -10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "8";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> previous = {1, -3, 9, -27, 81};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-243";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> previous = {64, 32, 16, 8, 4, 2, 1};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> previous = {3, 12, 27, 52};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> previous = {-10, -1, 2, 3};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> previous = {-20, 7, -2, 1};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> previous = {-1, -5, -25};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-125";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> previous = {57, 42, 42};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> previous = {57, -42, -42, -42};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-42";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> previous = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> previous = {1, 2, 4, 8, 16, 32, 64};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "128";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> previous = {-100, -99, 99};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "39303";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> previous = {99, 98, -99};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-38908";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> previous = {6, 7, 9, 13, 21, 37, 69};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "133";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> previous = {100, 98, 96, 94, 92, 90, 88, 86, 84, 82, 80, 78, 76, 74, 72, 70, 68, 66, 64, 62, 60, 58, 56, 54, 52, 50, 48, 46, 44, 42, 40, 38, 36, 34, 32, 30, 28, 26, 24, 22, 20, 18, 16, 14, 12, 10, 8, 6};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "4";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> previous = {-3, -6, -12, -24, -48};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-96";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> previous = {-2, 2, -6, 10, -22};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> previous = {-12, -36, -48, -54};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> previous = {-12, 12, -36, 60};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-132";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> previous = {-5, 0, 20, 100};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "420";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> previous = {-12, 24, 36, 40};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> previous = {5, 7, 9, 11};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "13";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> previous = {-2, 5, -9, 19};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-37";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> previous = {-10, 20, -40, 80};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-160";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> previous = {-99, -100, 51};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-22750";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> previous = {-8, 1, -8};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> previous = {46, -26, -98};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-170";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> previous = {-59, 64, -59};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "64";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> previous = {47, -56, -56};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-56";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> previous = {50, 48, -26};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-2764";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> previous = {-70, -92, -26};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-224";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> previous = {97, 94, -86};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-10886";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> previous = {-92, 34, 34};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "34";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> previous = {-13, -9, -97};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "1839";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> previous = {39, 34, 74};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-246";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> previous = {8, 7, 32};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-593";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> previous = {85, 52, -14};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-146";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> previous = {-18, -21, 72};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-2811";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> previous = {7, 0, 35};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-140";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> previous = {58, 57};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> previous = {1, 0};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> previous = {-41, -42};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> previous = {5};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> previous = {-3};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> previous = {0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> previous = {-42, -41, -40, -39, -38, -37, -36, -35, -34, -33, -32, -31, -30, -29, -28, -27, -26, -25, -24, -23, -22, -21, -20, -19, -18, -17, -16, -15, -14, -13, -12, -11, -10, -9, -8, -7, -6, -4, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> previous = {1, -2, 9, -27, 81};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> previous = {64, 32, 16, 8, 4, 3, 1};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> previous = {3, 13, 27, 52};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> previous = {-10, -1, 2, 4};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> previous = {-20, 8, -2, 1};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> previous = {0, -5, -25};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-105";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> previous = {58, 42, 42};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "42";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> previous = {57, -42, -42, -41};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> previous = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> previous = {1, 2, 4, 9, 16, 32, 64};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> previous = {-100, -98, 99};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> previous = {99, 98, -98};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-38514";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> previous = {6, 7, 10, 13, 21, 37, 69};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> previous = {100, 98, 96, 94, 92, 90, 88, 86, 85, 82, 80, 78, 76, 74, 72, 70, 68, 66, 64, 62, 60, 58, 56, 54, 52, 50, 48, 46, 44, 42, 40, 38, 36, 34, 32, 30, 28, 26, 24, 22, 20, 18, 16, 14, 12, 10, 8, 6};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> previous = {-3, -5, -12, -24, -48};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> previous = {-2, 3, -6, 10, -22};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> previous = {-12, -35, -48, -54};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> previous = {-11, 12, -36, 60};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> previous = {-5, 0, 21, 100};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> previous = {-12, 24, 36, 41};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> previous = {5, 7, 9, 12};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> previous = {-2, 6, -9, 19};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> previous = {-10, 20, -40, 81};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> previous = {-99, -100, 52};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-23052";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> previous = {-7, 1, -8};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> previous = {46, -26, -97};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> previous = {-59, 64, -58};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> previous = {47, -55, -56};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> previous = {50, 49, -26};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-5651";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> previous = {-69, -92, -26};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> previous = {97, 95, -86};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> previous = {-92, 35, 34};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> previous = {-13, -8, -97};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> previous = {39, 34, 75};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> previous = {9, 7, 32};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> previous = {85, 52, -13};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> previous = {-18, -20, 72};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-4160";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> previous = {8, 0, 35};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> previous = {-10, 20, -40, 80, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> previous = {0, 0, -1, -5, -25};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> previous = {-99, -100, 51, 99, 98, -99};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> previous = {39, 34, 74, 6, 7, 9, 13, 21, 37, 69};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> previous = {-2, 2, -6, 10, -22, 39, 34, 74};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> previous = {-12, -36, -48, -54, -12, -36, -48, -54};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> previous = {-2, 5, -9, 19, -12, 12, -36, 60};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> previous = {-59, 64, -59, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> previous = {6, 7, 9, 13, 21, 37, 69, 50, 48, -26};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> previous = {-70, -92, -26, 57, 57};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> previous = {39, 34, 74, -4};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> previous = {-12, 12, -36, 60, -18, -21, 72};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> previous = {-4, 64, 32, 16, 8, 4, 2, 1};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> previous = {4, -10, 20, -40, 80};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> previous = {-2, 2, -6, 10, -22, 64, 32, 16, 8, 4, 2, 1};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> previous = {0, 0, 0, 0, 0};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> previous = {4};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> previous = {4, 4, 4};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "4";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> previous = {2, 99, 2};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "99";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> previous = {1, 1, 3};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> previous = {0, 0, 0};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> previous = {0, 5, 5};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "5";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> previous = {1, 2, 3};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "4";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> previous = {55, 55, 55};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "55";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> previous = {-1, -1, -1};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-1";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> previous = {0, 0, 3};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> previous = {1, 1, 1, 1};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> previous = {10, 10, 10, 10};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "10";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> previous = {1, 1, 1, 1, 1};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> previous = {0, 0, 0, 0, 0, 0};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> previous = {0, 0, 0, 0, 0, 0, 0};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> previous = {-2, 0, 2, 4};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "6";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> previous = {0, 2, 4};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "6";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> previous = {-1, 2};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> previous = {0, 2, 3, 2};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> previous = {1, 1, 1};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> previous = {0, 1, 2, 3, 4};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "5";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> previous = {1, 100, 1};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "100";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> previous = {0};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> previous = {0, 1, 2};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "3";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> previous = {16, -8, 4, -2};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> previous = {2, 2, 4};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> previous = {57, 57, 57, 57};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "57";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> previous = {-12, 12, -36, 60};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-132";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> previous = {100, 100, 100};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "100";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> previous = {5, 5, 5, 5, 5};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "5";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> previous = {2, 1, 3};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-1";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> previous = {0, 1};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> previous = {0, -100, -100, -100, -100, -100, -100, -100, -100, -100};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-100";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> previous = {0, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-100";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> previous = {1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> previous = {40, 40};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "40";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> previous = {1, 2};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> previous = {12, 12, 34};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> previous = {0, 0};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> previous = {-100, -99, 2};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "10203";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> previous = {1, 1, 4};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> previous = {100, -100, 100};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "-100";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> previous = {1, 2, 3, 5};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> previous = {-100, 0, 100};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "200";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> previous = {57, 57, 57, 57, 57};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "57";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> previous = {5, 5, 1};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> previous = {57, 57};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "57";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> previous = {1, 1, 1, 1, 1, 1, 3};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> previous = {1, 1, 1, 1, 3};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> previous = {99, 99, 99, 99};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "99";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> previous = {13, 13, 12};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> previous = {6, 5, 4, 3, 1};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> previous = {5, 5, 5, 5, 5, 5, 5};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "5";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> previous = {2, 1, 3, -1, 7, -9};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "23";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> previous = {2, 2, 3};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> previous = {3, 2, 2, 2};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "2";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> previous = {1, 2, 2, 2, 2};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "2";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> previous = {0, 5, 10, 15};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "20";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> previous = {5, 5, 6};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> previous = {50, 50, 50};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "50";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> previous = {2, 3};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> previous = {10, 10, 10};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "10";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> previous = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> previous = {57, 57, 57, 24, 48};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> previous = {-1, 1};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> previous = {1, 1, 2, 3};
    IQTest* pObj = new IQTest();
    clock_t start = clock();
    string result = pObj->nextNumber(previous);
    clock_t end = clock();
    delete pObj;
    string expected = "BUG";
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=13391735&rd=10007&pm=6600
********************************************************************************
#include <string> 
#include <sstream> 
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <queue> 
#include <iostream> 
#include <algorithm> 
#include <cmath> 
#include <utility> 
using namespace std; 
 
const double EPS = 1e-10; 
const double PI = acos(-1.0); 
 
template<class T> string x2s(T x) { ostringstream o; o << x; return o.str(); } 
int s2i(string s) { istringstream i(s); int x; i >> x; return x; } 
long long s2ll(string s) { istringstream i(s); long long x; i >> x; return x; } 
 
class IQTest 
{ 
public: 
  string nextNumber(vector <int> a)  
  { 
    int i, x, y; 
    int n = a.size(); 
    if (n == 1) 
      return string("AMBIGUITY"); 
    if (n == 2) 
    { 
      if (a[0] == a[1]) return x2s(a[0]); 
      else return string("AMBIGUITY"); 
    } 
    if (a[0] == a[1]) 
    { 
      for (i = 2; i < n; ++i) 
        if (a[i] != a[0]) break; 
      if (i == n) return x2s(a[0]); 
      else return string("BUG"); 
    } 
    if ((a[2] - a[1]) % (a[1] - a[0]) != 0) 
    { 
      return string("BUG"); 
    } 
    else 
    { 
      x = (a[2] - a[1]) / (a[1] - a[0]); 
      y = a[1] - x * a[0]; 
      for (i = 2; i < n; ++i) 
        if (a[i] != a[i - 1] * x + y) break; 
      if (i == n) return x2s(a[n - 1] * x + y); 
      else return string("BUG"); 
    } 
    return string("FUCK"); 
  } 
   
  
}; 
 
//  Kitty 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/