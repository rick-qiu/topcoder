/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11946
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

class ElectionFraudDiv2 {
public:
    string IsFraudulent(vector<int> percentages);
};

string ElectionFraudDiv2::IsFraudulent(vector<int> percentages) {
    string ret;
    return ret;
}


int test0() {
    vector<int> percentages = {100};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> percentages = {34, 34, 34};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> percentages = {12, 12, 12, 12, 12, 12, 12, 12};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> percentages = {13, 13, 13, 13, 13, 13, 13, 13};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> percentages = {0, 1, 100};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> percentages = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9, 3, 2, 3, 8};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 0, 34, 34, 34};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> percentages = {51, 51};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> percentages = {28, 38, 33};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> percentages = {40, 0, 33, 28};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> percentages = {30, 26, 21, 25, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> percentages = {30, 0, 24, 0, 29, 19};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> percentages = {34, 33, 29, 0, 0, 0, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> percentages = {22, 20, 0, 0, 14, 20, 21, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> percentages = {23, 0, 17, 17, 24, 0, 21, 0, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> percentages = {0, 11, 16, 13, 14, 11, 0, 15, 13, 12};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> percentages = {0, 20, 12, 0, 0, 16, 0, 0, 13, 18, 15};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> percentages = {14, 0, 9, 0, 0, 14, 10, 17, 6, 13, 9, 12};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> percentages = {0, 17, 0, 0, 0, 0, 28, 22, 0, 0, 0, 17, 18};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> percentages = {12, 0, 17, 0, 0, 13, 0, 0, 17, 17, 15, 0, 0, 13};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> percentages = {6, 6, 0, 7, 8, 13, 12, 10, 5, 6, 7, 7, 8, 7, 6};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> percentages = {6, 4, 0, 0, 7, 9, 4, 8, 9, 7, 4, 9, 5, 4, 7, 9};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> percentages = {0, 21, 0, 0, 24, 0, 26, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> percentages = {8, 0, 9, 12, 0, 4, 8, 0, 0, 12, 13, 0, 0, 8, 0, 0, 10, 8};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> percentages = {0, 0, 7, 11, 13, 0, 0, 0, 0, 0, 15, 0, 0, 10, 13, 16, 14, 5, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> percentages = {2, 0, 7, 5, 8, 8, 9, 7, 8, 0, 7, 8, 0, 0, 6, 0, 9, 5, 2, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> percentages = {5, 0, 3, 7, 6, 9, 4, 6, 7, 0, 4, 5, 6, 6, 8, 5, 2, 4, 10, 6, 7};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> percentages = {0, 4, 3, 7, 3, 6, 0, 4, 2, 4, 5, 3, 8, 5, 6, 4, 4, 5, 6, 5, 5, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> percentages = {2, 0, 7, 8, 2, 7, 6, 5, 11, 0, 3, 0, 4, 3, 4, 0, 2, 0, 6, 0, 4, 8, 7};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> percentages = {0, 0, 2, 0, 8, 0, 6, 10, 13, 0, 6, 11, 3, 0, 0, 5, 0, 5, 0, 8, 5, 0, 7, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> percentages = {0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 25, 0, 0, 0, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> percentages = {0, 0, 4, 4, 6, 0, 6, 4, 6, 8, 4, 14, 5, 6, 0, 2, 3, 6, 0, 5, 6, 0, 4, 6, 6, 5};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> percentages = {0, 0, 14, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 18, 0, 0, 0, 0, 0, 13, 8, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> percentages = {5, 3, 6, 5, 4, 4, 4, 4, 2, 4, 4, 6, 2, 5, 4, 4, 6, 6, 3, 8, 3, 3, 4, 4, 3, 5, 0, 3};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> percentages = {4, 1, 1, 3, 6, 1, 6, 3, 3, 3, 3, 5, 3, 3, 3, 4, 5, 8, 5, 5, 2, 6, 6, 2, 8, 4, 4, 3, 4};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> percentages = {0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 8, 0, 17, 11, 0, 14, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 10};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> percentages = {6, 2, 6, 0, 4, 0, 4, 6, 0, 5, 5, 1, 4, 0, 0, 4, 3, 3, 0, 4, 6, 2, 0, 7, 0, 3, 4, 5, 0, 0, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> percentages = {2, 0, 4, 2, 2, 4, 5, 4, 5, 2, 4, 2, 3, 2, 4, 2, 5, 3, 3, 3, 0, 2, 4, 4, 2, 0, 3, 1, 0, 6, 0, 2};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> percentages = {0, 0, 0, 0, 0, 7, 6, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 11, 0, 0, 9, 0, 6, 0, 0, 8, 10, 0, 0, 0, 9, 9};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> percentages = {2, 2, 0, 2, 3, 4, 2, 0, 3, 6, 4, 5, 3, 0, 3, 2, 6, 3, 4, 0, 3, 1, 0, 5, 1, 3, 0, 3, 2, 4, 4, 3, 0, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> percentages = {3, 3, 0, 4, 2, 2, 3, 2, 0, 7, 7, 2, 0, 3, 4, 5, 0, 0, 2, 0, 0, 6, 1, 2, 2, 1, 0, 4, 3, 4, 0, 0, 4, 4, 3};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> percentages = {6, 0, 6, 7, 0, 0, 4, 7, 4, 0, 0, 7, 0, 4, 0, 0, 7, 3, 0, 0, 0, 0, 6, 0, 0, 5, 0, 0, 0, 2, 3, 0, 0, 0, 7, 5};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> percentages = {2, 2, 1, 3, 3, 2, 3, 1, 3, 3, 4, 2, 4, 3, 2, 0, 0, 3, 0, 0, 3, 2, 3, 1, 0, 4, 4, 3, 0, 4, 0, 1, 2, 5, 4, 2, 3};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> percentages = {3, 6, 1, 6, 0, 3, 3, 0, 4, 3, 6, 0, 0, 7, 5, 0, 0, 0, 4, 0, 4, 3, 0, 0, 3, 2, 8, 7, 0, 6, 0, 7, 0, 0, 9, 5, 0, 6};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> percentages = {6, 0, 3, 2, 5, 4, 6, 2, 0, 0, 0, 3, 2, 3, 1, 0, 3, 2, 0, 4, 0, 0, 2, 0, 0, 2, 3, 0, 2, 3, 5, 1, 4, 0, 4, 5, 0, 3, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> percentages = {2, 5, 3, 2, 3, 3, 3, 1, 0, 2, 2, 0, 1, 4, 2, 3, 2, 2, 1, 1, 1, 2, 1, 1, 1, 2, 5, 3, 1, 1, 1, 3, 2, 3, 2, 4, 3, 1, 1, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 11, 25, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> percentages = {1, 2, 2, 0, 0, 7, 0, 5, 4, 0, 0, 0, 5, 2, 5, 5, 0, 0, 0, 0, 5, 6, 3, 5, 5, 4, 0, 5, 0, 4, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 4, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> percentages = {2, 2, 2, 0, 1, 3, 0, 2, 2, 0, 1, 0, 0, 1, 0, 2, 2, 0, 3, 1, 1, 3, 2, 2, 2, 5, 1, 2, 2, 1, 2, 2, 2, 2, 5, 1, 0, 0, 5, 3, 4, 2, 5};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 6, 10, 0, 10, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> percentages = {0, 3, 0, 3, 3, 3, 0, 0, 0, 5, 1, 3, 7, 4, 2, 0, 0, 0, 6, 3, 0, 5, 0, 3, 0, 4, 3, 0, 0, 0, 0, 0, 0, 5, 0, 4, 3, 4, 0, 0, 0, 4, 0, 0, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 15, 0, 0, 0, 17};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 16, 15, 0, 0, 0, 0, 0, 8, 0, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> percentages = {0, 11, 0, 0, 0, 0, 0, 16, 0, 0, 0, 13, 7, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 9, 0, 0, 6, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 8, 0, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> percentages = {0, 0, 4, 2, 3, 3, 5, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 1, 8, 0, 6, 2, 0, 0, 1, 0, 0, 2, 0, 0, 5, 0, 4, 0, 0, 2, 0, 0, 4, 0, 3, 0, 10, 0, 5, 3, 1, 0, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> percentages = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> percentages = {0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> percentages = {97, 4, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> percentages = {0, 1, 1, 100};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> percentages = {0, 0, 0, 1, 1, 100};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> percentages = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9, 3, 2, 3, 8};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> percentages = {0, 0, 0, 0, 0, 52, 50};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> percentages = {0, 0, 0, 0, 1, 1, 100};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> percentages = {0, 0, 0, 51, 51};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> percentages = {50, 50, 50};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> percentages = {51, 49};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> percentages = {93};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> percentages = {98, 2, 1, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> percentages = {27, 70};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> percentages = {0, 1};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> percentages = {0, 0, 99};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> percentages = {0, 0, 0, 0, 0, 52, 50, 0, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> percentages = {13, 13, 13, 13, 13, 13, 13, 13};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> percentages = {100, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> percentages = {0, 0, 0, 0, 0, 51, 51, 0, 0, 0, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> percentages = {30, 30, 30};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> percentages = {12, 12, 12, 12, 12, 12, 12, 12};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> percentages = {100, 2, 0, 0, 0, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> percentages = {0, 1, 99, 100, 0, 0, 100, 100, 59, 41, 51, 49, 0, 100, 0, 100};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> percentages = {33, 33, 35};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> percentages = {0, 0, 0, 99};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> percentages = {100, 1, 1, 0, 0, 0, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> percentages = {1, 1, 97};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> percentages = {0, 0, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> percentages = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9, 7, 2, 3, 10};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> percentages = {10, 10};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> percentages = {20, 20, 20, 20, 19};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> percentages = {20, 20, 7, 10, 10, 10};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 0, 2, 100};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 25};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> percentages = {100};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> percentages = {49, 50};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> percentages = {0, 0, 0, 0, 100, 1, 1};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> percentages = {1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9, 3, 2, 3, 8};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> percentages = {0, 0, 0, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> percentages = {1, 99};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> percentages = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> percentages = {0, 0, 0, 98};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> percentages = {100, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> percentages = {0, 0, 1, 1, 100};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> percentages = {0, 34, 34, 34};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> percentages = {50, 50};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> percentages = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 70};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> percentages = {33, 33, 33};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> percentages = {34, 34, 33};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> percentages = {100, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> percentages = {52, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> percentages = {0, 100, 3, 0, 0, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> percentages = {50, 52, 0, 0};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> percentages = {1, 1, 99};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> percentages = {100, 100, 100};
    ElectionFraudDiv2* pObj = new ElectionFraudDiv2();
    clock_t start = clock();
    string result = pObj->IsFraudulent(percentages);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23037665&rd=14736&pm=11946
********************************************************************************
#include<set> 
#include<cmath> 
#include<stack> 
#include<cstdio> 
#include<cstring> 
#include<iostream> 
#include<algorithm> 
#include<cstdlib> 
#include<numeric> 
#include<vector> 
#include<ctime> 
#include<queue> 
#include<list> 
#include<map> 
#define pi acos(-1) 
#define INF 0x7fffffff 
#define clr(x)  memset(x,0,sizeof(x)); 
#define clrto(x,siz,y)  for(int i=0;i<=siz;i++)  x[i]=y; 
#define clrset(x,siz)  for(int i=0;i<=siz;i++)  x[i]=i; 
#define clrvec(x,siz) for(int i=0;i<=siz;i++)  x[i].clear(); 
#define fop   freopen("in.txt","r",stdin);freopen("out.txt","w",stdout); 
#define myprogram By_135678942570 
using namespace std; 
class ElectionFraudDiv2 
{ 
     public: 
     string IsFraudulent(vector <int> p) 
     { 
          int low=0; 
          int maxn=0; 
          for(int i=0;i<p.size();i++) 
          { 
              if(p[i]==0) 
              low+=0; 
              else low+=p[i]*100-50; 
              maxn+=p[i]*100+50; 
          } 
          if(low<=10000&&maxn>10000) 
             return "NO"; 
          else return "YES"; 
     } 
};

********************************************************************************
*******************************************************************************/