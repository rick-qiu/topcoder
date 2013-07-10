/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11945
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

class ElectionFraudDiv1 {
public:
    int MinimumVoters(vector<int> percentages);
};

int ElectionFraudDiv1::MinimumVoters(vector<int> percentages) {
    int ret;
    return ret;
}


int test0() {
    vector<int> percentages = {33, 33, 33};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> percentages = {29, 29, 43};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
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
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
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
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
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
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> percentages = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9, 3, 2, 3, 8, 4};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 97;
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
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
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
    vector<int> percentages = {100};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> percentages = {50, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> percentages = {0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> percentages = {0, 0, 0, 75, 0, 0, 0, 25, 0, 0, 0, 0, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> percentages = {0, 0, 20, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 17, 17, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 17, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 14, 0, 0, 0, 0, 29, 0, 14, 0, 0, 0, 0, 0, 0, 14};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 13, 0, 0, 25, 13, 0, 0, 13, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> percentages = {11, 0, 11, 22, 0, 0, 11, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 11, 0, 0, 0, 11, 0, 0, 0, 0, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> percentages = {10, 10, 0, 0, 10, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 10, 0, 0, 10, 0, 10, 0, 10, 0, 10, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> percentages = {0, 9, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 9, 0, 0, 9, 0, 18, 0, 0, 9, 9, 0, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> percentages = {13, 6, 0, 6, 13, 6, 0, 0, 6, 6, 0, 0, 0, 0, 0, 0, 6, 6, 0, 13, 0, 0, 6, 6, 0, 6};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> percentages = {6, 6, 6, 6, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, 6, 17, 0, 6, 0, 11, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 11, 0, 0, 0, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> percentages = {19, 5, 5, 24, 5, 5, 5, 19, 10, 5};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> percentages = {8, 4, 4, 4, 8, 4, 4, 4, 0, 0, 4, 8, 4, 16, 0, 12, 8, 4, 4};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> percentages = {11, 0, 0, 4, 0, 0, 0, 4, 0, 4, 4, 4, 0, 4, 0, 4, 0, 0, 4, 0, 4, 4, 0, 0, 0, 0, 4, 4, 0, 7, 7, 0, 4, 0, 4, 0, 7, 0, 4, 0, 0, 4, 7};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> percentages = {0, 3, 6, 13, 3, 6, 0, 3, 6, 3, 6, 3, 0, 6, 0, 3, 10, 3, 0, 0, 6, 0, 0, 3, 0, 0, 13, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> percentages = {19, 22, 22, 22, 16};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> percentages = {5, 5, 0, 0, 3, 3, 3, 8, 0, 0, 0, 5, 0, 3, 3, 3, 3, 5, 3, 0, 3, 0, 3, 3, 0, 0, 0, 3, 0, 3, 0, 0, 3, 0, 3, 0, 5, 3, 0, 5, 3, 0, 5, 0, 3, 3, 3, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> percentages = {3, 0, 3, 3, 3, 8, 3, 3, 3, 13, 5, 0, 3, 8, 0, 3, 0, 5, 5, 3, 5, 3, 0, 5, 3, 0, 3, 0, 3, 8, 0, 3};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> percentages = {0, 2, 7, 12, 14, 2, 5, 7, 5, 2, 2, 2, 2, 5, 5, 2, 7, 5, 5, 7};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> percentages = {15, 17, 11, 13, 13, 6, 13, 13};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> percentages = {8, 2, 16, 4, 12, 4, 8, 12, 8, 8, 4, 12};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> percentages = {0, 0, 6, 6, 0, 2, 0, 4, 4, 6, 0, 6, 2, 2, 2, 0, 6, 2, 4, 6, 6, 8, 2, 6, 6, 2, 4, 2, 10};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> percentages = {0, 4, 4, 0, 2, 9, 4, 6, 2, 0, 4, 2, 4, 9, 2, 4, 6, 4, 7, 9, 4, 4, 4, 0, 2, 4, 4};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> percentages = {3, 7, 5, 5, 3, 2, 3, 5, 3, 3, 3, 2, 2, 0, 0, 2, 2, 2, 3, 0, 0, 3, 0, 7, 3, 5, 3, 7, 3, 0, 0, 5, 3, 2};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> percentages = {0, 2, 0, 0, 5, 5, 2, 2, 7, 3, 0, 2, 2, 2, 2, 2, 5, 3, 3, 0, 3, 0, 0, 0, 5, 5, 3, 3, 3, 2, 3, 2, 2, 2, 2, 2, 3, 2, 2, 0, 0, 0, 3, 2, 5};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> percentages = {5, 9, 3, 11, 5, 3, 6, 11, 5, 6, 6, 8, 3, 3, 5, 9, 2};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> percentages = {3, 0, 5, 2, 5, 2, 3, 5, 0, 0, 0, 5, 5, 0, 5, 8, 3, 3, 2, 2, 2, 0, 2, 5, 2, 2, 2, 2, 3, 2, 0, 5, 3, 0, 3, 5, 2, 5, 2, 2, 2, 2};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> percentages = {1, 0, 0, 4, 4, 0, 4, 3, 4, 1, 4, 3, 3, 4, 1, 4, 0, 3, 1, 3, 1, 3, 1, 3, 4, 6, 7, 6, 0, 0, 3, 1, 1, 4, 3, 3};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> percentages = {3, 10, 4, 3, 3, 8, 7, 10, 7, 4, 6, 1, 3, 7, 4, 6, 3, 7, 4};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> percentages = {20, 24, 28, 27};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> percentages = {8, 4, 3, 1, 1, 1, 1, 5, 4, 1, 4, 5, 5, 0, 1, 6, 5, 0, 4, 1, 1, 3, 3, 4, 1, 1, 4, 5, 9, 6};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> percentages = {1, 7, 4, 2, 1, 6, 4, 9, 6, 2, 2, 6, 10, 6, 9, 10, 5, 5, 4};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> percentages = {7, 4, 5, 2, 2, 2, 8, 7, 2, 6, 7, 2, 7, 11, 5, 10, 12};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> percentages = {6, 8, 6, 8, 7, 7, 6, 4, 2, 8, 9, 4, 2, 6, 9, 9};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 89;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> percentages = {3, 1, 3, 3, 2, 3, 1, 3, 3, 1, 2, 3, 2, 3, 1, 2, 0, 1, 1, 1, 0, 2, 2, 2, 0, 3, 2, 1, 3, 5, 1, 3, 0, 1, 1, 0, 2, 3, 2, 3, 3, 1, 3, 1, 3, 2, 4, 2};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> percentages = {10, 4, 5, 5, 3, 2, 4, 4, 8, 4, 6, 5, 6, 3, 2, 4, 6, 4, 5, 4, 3};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 97;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> percentages = {4, 2, 3, 4, 2, 9, 6, 6, 3, 5, 2, 4, 5, 5, 9, 5, 5, 3, 5, 6, 5, 1, 3};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> percentages = {2, 4, 2, 3, 4, 2, 2, 0, 3, 1, 1, 3, 1, 1, 3, 0, 3, 3, 3, 2, 2, 2, 3, 2, 0, 5, 0, 2, 5, 2, 0, 1, 1, 6, 0, 7, 8, 4, 1, 2, 1, 4, 3, 1};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 105;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> percentages = {3, 1, 2, 5, 3, 2, 3, 5, 3, 2, 6, 2, 6, 6, 3, 5, 5, 2, 3, 4, 4, 3, 2, 1, 4, 5, 2, 2, 4, 5, 4, 1};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> percentages = {2, 2, 4, 2, 1, 2, 1, 3, 2, 2, 2, 4, 1, 0, 2, 3, 1, 3, 1, 5, 3, 1, 0, 2, 1, 2, 2, 3, 3, 1, 1, 2, 2, 1, 3, 3, 3, 3, 4, 3, 3, 2, 3, 2, 4, 4, 4, 4};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 113;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> percentages = {2, 3, 0, 3, 3, 2, 3, 1, 4, 3, 2, 6, 6, 4, 3, 3, 2, 1, 9, 1, 3, 2, 3, 4, 4, 3, 4, 3, 4, 2, 4, 5, 1, 3, 4};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 114;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> percentages = {2, 4, 3, 10, 3, 3, 4, 3, 3, 3, 3, 5, 1, 6, 4, 3, 3, 3, 3, 7, 4, 4, 4, 3, 0, 3};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 115;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> percentages = {11, 26, 21, 15, 16, 9};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 117;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> percentages = {8, 8, 8, 3, 8, 10, 14, 10, 14, 5, 8};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 118;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> percentages = {15, 20, 14, 20, 27, 6};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 123;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> percentages = {16, 20, 27, 20, 19};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> percentages = {22, 14, 20, 20, 26};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 133;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> percentages = {8, 15, 6, 6, 10, 4, 7, 1, 7, 6, 6, 6, 9, 5};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 139;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> percentages = {26, 16, 18, 21, 21};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 141;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> percentages = {23, 20, 15, 25, 15};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 142;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> percentages = {18, 10, 16, 8, 10, 12, 10, 10, 9};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 146;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> percentages = {11, 28, 16, 13, 19, 15};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 151;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> percentages = {19, 25, 23, 19, 12};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 154;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> percentages = {11, 22, 18, 22, 25};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 157;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> percentages = {18, 19, 16, 23, 26};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 160;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> percentages = {20, 17, 19, 27, 19};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 162;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> percentages = {5, 5, 8, 4, 7, 5, 4, 4, 10, 7, 3, 6, 9, 9, 2, 2, 5};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 164;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> percentages = {7, 8, 8, 13, 9, 7, 10, 15, 7, 7, 6, 7};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 168;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> percentages = {27, 17, 20, 24, 14};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 169;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> percentages = {20, 25, 21, 18, 14};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 173;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> percentages = {20, 18, 23, 27, 14};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 177;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> percentages = {20, 15, 25, 16, 26};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 179;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> percentages = {17, 22, 21, 26, 16};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> percentages = {15, 24, 25, 20, 14};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 181;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> percentages = {11, 26, 22, 23, 16};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 183;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> percentages = {17, 24, 19, 12, 26};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 185;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> percentages = {10, 9, 11, 12, 11, 18, 14, 18};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 188;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> percentages = {17, 16, 15, 24, 26};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 189;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> percentages = {11, 12, 9, 10, 9, 5, 12, 14, 12, 10};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 198;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> percentages = {22, 16, 20, 27, 17};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 199;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> percentages = {49, 52};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> percentages = {2, 1, 2, 2, 0, 1, 2, 2, 6, 1, 0, 3, 4, 1, 2, 2, 2, 1, 1, 0, 2, 3, 2, 3, 0, 2, 1, 2, 3, 1, 4, 1, 4, 2, 2, 1, 0, 1, 1, 3, 1, 3, 1, 0, 1, 2, 1, 1, 2};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> percentages = {50, 49};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> percentages = {38, 34, 30};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> percentages = {51, 46, 0, 0, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> percentages = {13, 8, 14, 11, 17, 9, 18, 15};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> percentages = {16, 0, 14, 16, 15, 11, 15, 10, 8};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> percentages = {10, 0, 10, 12, 10, 16, 10, 0, 12, 15};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> percentages = {4, 11, 8, 6, 11, 5, 11, 8, 6, 15, 12, 10};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> percentages = {0, 18, 0, 18, 0, 0, 0, 0, 21, 19, 14, 0, 0, 14, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> percentages = {8, 10, 6, 8, 4, 6, 3, 7, 0, 4, 7, 7, 9, 4, 7, 2};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> percentages = {0, 11, 6, 0, 0, 0, 0, 15, 6, 7, 0, 8, 15, 0, 0, 12, 0, 10, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> percentages = {0, 4, 2, 3, 6, 5, 4, 6, 2, 4, 4, 6, 5, 8, 5, 3, 0, 6, 6, 5, 5};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> percentages = {30, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> percentages = {0, 0, 0, 7, 8, 8, 4, 5, 5, 7, 0, 0, 5, 4, 0, 5, 5, 0, 8, 0, 8, 6, 11, 9, 4, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> percentages = {0, 6, 8, 0, 5, 0, 0, 7, 7, 0, 0, 0, 4, 4, 0, 10, 7, 8, 0, 6, 0, 0, 12, 7, 5, 0, 7, 6};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> percentages = {0, 0, 9, 0, 0, 0, 0, 0, 11, 0, 0, 18, 12, 8, 12, 0, 0, 8, 7, 0, 0, 0, 0, 11, 0, 10, 0, 0, 0, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> percentages = {0, 0, 13, 0, 0, 0, 0, 0, 0, 7, 10, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 9, 13, 0, 0, 0, 0, 11, 0, 12, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> percentages = {2, 6, 0, 4, 5, 4, 3, 2, 1, 2, 4, 3, 4, 3, 4, 6, 4, 0, 5, 5, 6, 3, 4, 4, 2, 4, 7, 0, 4, 6, 2, 6};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> percentages = {11, 0, 3, 0, 6, 6, 0, 3, 0, 0, 7, 0, 5, 0, 3, 0, 0, 0, 0, 5, 4, 5, 0, 0, 2, 5, 0, 4, 0, 0, 7, 6, 0, 0, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> percentages = {0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> percentages = {2, 2, 2, 2, 3, 3, 3, 4, 1, 2, 3, 3, 2, 4, 2, 3, 4, 3, 2, 2, 2, 2, 1, 0, 2, 2, 1, 2, 1, 3, 2, 2, 0, 1, 3, 2, 3};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 12, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 15, 4, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> percentages = {0, 2, 0, 4, 0, 0, 0, 0, 5, 0, 2, 6, 3, 0, 0, 3, 4, 2, 5, 8, 8, 0, 4, 0, 0, 0, 9, 6, 5, 0, 6, 0, 5, 4, 0, 0, 0, 8, 4, 6, 3};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> percentages = {2, 1, 3, 5, 0, 1, 2, 2, 3, 1, 2, 1, 3, 1, 1, 1, 1, 3, 2, 1, 0, 3, 2, 3, 1, 2, 0, 4, 2, 2, 2, 3, 2, 0, 0, 2, 2, 4, 2, 1, 2, 1, 2};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> percentages = {2, 1, 3, 1, 2, 1, 2, 2, 2, 1, 1, 2, 1, 4, 2, 1, 2, 2, 1, 1, 2, 2, 2, 1, 2, 2, 2, 1, 3, 1, 2, 2, 2, 1, 3, 1, 3, 2, 2, 1, 2, 1, 1, 1, 1};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> percentages = {0, 4, 2, 0, 0, 2, 3, 0, 4, 5, 0, 0, 0, 0, 0, 2, 2, 0, 1, 3, 0, 0, 3, 4, 0, 0, 4, 0, 0, 4, 6, 3, 2, 3, 0, 0, 2, 0, 0, 1, 2, 5, 2, 0, 3, 2, 0, 2};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> percentages = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> percentages = {0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> percentages = {1, 7, 4, 0, 9, 4, 8, 8, 2, 4, 5, 5, 1, 7, 1, 1, 5, 27};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> percentages = {0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> percentages = {0, 0, 0, 20, 11, 7, 28, 5, 6, 27};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> percentages = {49, 51};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> percentages = {0, 1, 98};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> percentages = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> percentages = {0, 0, 100};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> percentages = {100};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> percentages = {100, 2, 0, 0, 0, 0, 0, 0, 0, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> percentages = {76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 98};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 100};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> percentages = {0, 0, 99};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 10, 2, 17, 5, 1, 19, 9, 18, 10};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 172;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> percentages = {0, 0, 0, 2, 100};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> percentages = {85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> percentages = {12, 12, 12, 12, 12, 12, 12, 12};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> percentages = {0, 0, 0, 0, 51, 51};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> percentages = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 100};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> percentages = {0, 0, 1, 3, 10, 7, 63, 0, 0, 20};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 99};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> percentages = {0, 0, 51, 51};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 0, 0, 0, 99};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> percentages = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> percentages = {0, 26, 26, 50};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> percentages = {0, 1, 100};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> percentages = {50, 50, 50};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> percentages = {3, 0, 3, 1, 1, 3, 4, 2, 4, 2, 4, 3, 1, 1, 0, 0, 4, 0, 0, 4, 1, 2, 4, 0, 2, 3, 1, 1, 2, 1, 1, 0, 0, 1, 3, 3, 0, 1, 2, 0, 0, 1, 3, 1, 4, 2, 4, 3, 1, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> percentages = {0, 0, 0, 26, 6, 12, 7, 23, 20, 4};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 137;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 100};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> percentages = {0, 100};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
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

int test145() {
    vector<int> percentages = {12, 13, 13, 13, 13, 13, 13, 13};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 6, 6, 17, 18, 46};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> percentages = {55, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> percentages = {51, 8, 24, 6, 8, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> percentages = {22, 1, 6, 5, 28, 18, 17};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> percentages = {0, 0, 2, 100};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> percentages = {0, 0, 0, 0, 2, 100};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> percentages = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> percentages = {0, 0, 51, 51, 0, 0, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> percentages = {100, 2, 0, 0, 0, 0, 0, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> percentages = {13, 11, 8, 6, 14, 11, 10, 8, 5, 10};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> percentages = {0, 0, 0, 54, 48};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> percentages = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> percentages = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> percentages = {0, 0, 0, 0, 0, 98};
    ElectionFraudDiv1* pObj = new ElectionFraudDiv1();
    clock_t start = clock();
    int result = pObj->MinimumVoters(percentages);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22732328&rd=14736&pm=11945
********************************************************************************
#include <algorithm> 
#include <string> 
#include <vector> 
#include <queue> 
#include <iostream> 
#include <cmath> 
#include <sstream> 
#include <map> 
#include <set> 
using namespace std; 
#define pb push_back 
#define INF 1000000000 
#define L(s) (int)((s).size()) 
#define FOR(i,a,b) for (int _n(b), i(a); i <= _n; i++) 
#define FORD(i,a,b) for(int i=(a),_b=(b);i>=_b;i--) 
#define rep(i,n) FOR(i,1,(n)) 
#define rept(i,n) FOR(i,0,(n)-1) 
#define ll long long 
#define VI vector<int> 
 
VI p; 
class ElectionFraudDiv1  
  { 
    public: 
    inline bool check(int sum) { 
      ll smin = 0, smax = 0; 
      rept(i, L(p)) { 
        int l = p[i] * sum / 100; 
        int mn = INF, mx = -INF; 
        FOR(j, l - 1, l + 1) { 
          if (j < 0 || j > sum) continue; 
          double t = (double)j / sum * 100; 
          int r = (int)(t + 0.5 + 1e-8); 
          if (r == p[i]) { 
            mn = min(mn, j); 
            mx = max(mx, j); 
          } 
        } 
        smin += mn; smax += mx; 
      } 
      if (smin <= sum && smax >= sum) return 1; else 
      return 0; 
    } 
       int MinimumVoters( vector <int> percentages ) 
    { 
      p = percentages; 
      rep(i, 500000) { 
        if (check(i)) return i; 
      } 
 
      return -1; 
    } 
  }; 
 
 
 
// Powered by FileEdit
// Powered by moj 4.16 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/