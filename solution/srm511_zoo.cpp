/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11485
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

class Zoo {
public:
    long theCount(vector<int> answers);
};

long Zoo::theCount(vector<int> answers) {
    long ret;
    return ret;
}


int test0() {
    vector<int> answers = {0, 1, 2, 3, 4};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> answers = {5, 8};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> answers = {0, 0, 0, 0, 0, 0};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> answers = {1, 0, 2, 0, 1};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> answers = {1, 0, 2, 0, 1, 3};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> answers = {1, 0, 0, 1};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> answers = {1, 1};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> answers = {0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 1048576;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> answers = {7, 6, 1, 20, 10, 14, 9, 7, 17, 4, 3, 8, 18, 5, 5, 1, 10, 0, 9, 2, 8, 12, 24, 21, 19, 12, 4, 11, 15, 11, 13, 6, 0, 2, 14, 3, 22, 16, 23, 13};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 65536;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> answers = {8, 3, 14, 6, 2, 18, 12, 9, 11, 15, 20, 0, 9, 15, 7, 14, 7, 19, 5, 10, 1, 12, 11, 16, 23, 4, 10, 0, 3, 13, 5, 6, 13, 21, 4, 1, 2, 17, 22, 8};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 131072;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> answers = {6, 15, 8, 6, 3, 2, 15, 7, 1, 17, 0, 4, 12, 16, 5, 19, 13, 9, 14, 10, 12, 2, 8, 14, 3, 20, 11, 11, 7, 10, 21, 18, 13, 1, 9, 16, 4, 5, 22, 0};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 262144;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> answers = {15, 19, 0, 11, 1, 5, 17, 2, 6, 8, 9, 15, 9, 14, 17, 4, 6, 1, 3, 0, 4, 13, 16, 21, 18, 20, 3, 5, 7, 14, 2, 12, 10, 13, 8, 12, 16, 10, 11, 7};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 524288;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> answers = {5, 10, 9, 0, 11, 13, 8, 12, 3, 11, 2, 6, 8, 6, 18, 7, 5, 4, 12, 17, 15, 18, 1, 14, 17, 14, 16, 13, 0, 1, 2, 15, 16, 4, 3, 9, 10, 7, 19, 20};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 1048576;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> answers = {19, 13, 7, 18, 15, 6, 1, 11, 10, 17, 2, 0, 19, 10, 16, 11, 18, 13, 6, 8, 1, 5, 8, 14, 3, 16, 0, 12, 7, 17, 12, 4, 14, 2, 3, 9, 15, 9, 4, 5};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 1048576;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> answers = {2, 0, 12, 6, 18, 7, 5, 17, 2, 21, 12, 9, 0, 10, 6, 11, 13, 3, 8, 1, 14, 16, 14, 22, 15, 1, 7, 20, 10, 4, 11, 4, 19, 8, 9, 23, 3, 13, 5};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 65536;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> answers = {1, 10, 10, 1, 15, 20, 22, 17, 2, 2, 0, 11, 8, 9, 4, 4, 11, 19, 7, 3, 3, 12, 15, 5, 13, 7, 5, 12, 21, 14, 13, 6, 16, 18, 9, 14, 6, 0, 8};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 131072;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> answers = {3, 1, 19, 12, 15, 10, 5, 2, 14, 17, 0, 18, 13, 13, 8, 0, 10, 5, 6, 4, 16, 21, 15, 8, 2, 3, 6, 9, 4, 7, 1, 7, 16, 12, 14, 11, 20, 11, 9};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 262144;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> answers = {1, 10, 3, 2, 4, 9, 12, 14, 18, 3, 5, 4, 11, 13, 6, 9, 15, 10, 7, 15, 19, 12, 0, 8, 1, 7, 6, 11, 17, 5, 8, 2, 17, 14, 16, 16, 0, 13, 20};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 524288;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> answers = {6, 3, 8, 15, 12, 2, 11, 19, 13, 17, 9, 8, 1, 7, 7, 17, 0, 11, 15, 6, 12, 18, 1, 14, 13, 5, 0, 4, 10, 9, 16, 2, 5, 3, 4, 16, 10, 14, 18};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 1048576;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> answers = {5, 20, 17, 29, 32, 9, 12, 26, 2, 35, 19, 1, 15, 7, 25, 13, 31, 39, 16, 34, 0, 30, 21, 23, 8, 14, 18, 33, 11, 22, 10, 36, 37, 28, 6, 3, 27, 38, 24, 4};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> answers = {34, 31, 13, 27, 2, 0, 38, 32, 25, 3, 20, 15, 29, 6, 19, 17, 7, 37, 5, 0, 8, 36, 24, 18, 4, 28, 35, 26, 16, 22, 11, 30, 9, 21, 10, 1, 33, 12, 23, 14};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> answers = {23, 2, 19, 15, 37, 34, 33, 0, 16, 22, 0, 6, 31, 35, 11, 29, 25, 7, 10, 1, 8, 14, 27, 26, 18, 20, 32, 9, 4, 3, 5, 1, 13, 17, 36, 21, 24, 12, 30, 28};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> answers = {27, 8, 36, 18, 26, 35, 23, 31, 5, 0, 0, 15, 17, 33, 11, 7, 12, 30, 28, 16, 21, 13, 25, 4, 1, 19, 1, 20, 14, 10, 2, 6, 32, 24, 2, 3, 9, 34, 29, 22};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> answers = {24, 10, 0, 4, 8, 2, 23, 1, 14, 7, 28, 22, 13, 3, 1, 11, 9, 26, 5, 19, 27, 32, 17, 29, 25, 12, 33, 20, 31, 21, 16, 3, 15, 18, 34, 30, 6, 35, 2, 0};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> answers = {32, 11, 18, 1, 12, 8, 16, 38, 10, 7, 36, 9, 0, 17, 19, 24, 35, 31, 30, 26, 23, 15, 34, 4, 3, 20, 2, 21, 5, 33, 13, 22, 25, 27, 29, 37, 14, 6, 28};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> answers = {15, 35, 7, 22, 9, 17, 13, 12, 27, 29, 24, 32, 25, 2, 0, 3, 8, 18, 20, 37, 23, 14, 34, 11, 28, 30, 5, 33, 6, 36, 1, 10, 31, 26, 4, 21, 16, 0, 19};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> answers = {26, 23, 29, 28, 1, 27, 19, 16, 5, 9, 14, 31, 21, 3, 25, 11, 30, 32, 18, 12, 33, 10, 1, 15, 2, 13, 0, 8, 0, 34, 4, 24, 6, 36, 35, 17, 7, 22, 20};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> answers = {10, 13, 35, 19, 21, 12, 34, 1, 11, 7, 5, 17, 29, 20, 23, 3, 15, 30, 2, 31, 9, 0, 1, 28, 18, 33, 25, 8, 32, 27, 0, 24, 4, 2, 26, 14, 22, 6, 16};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> answers = {23, 8, 34, 0, 6, 10, 31, 27, 12, 19, 26, 20, 1, 4, 2, 11, 21, 24, 2, 13, 29, 14, 30, 32, 5, 22, 33, 3, 0, 9, 7, 3, 18, 1, 28, 15, 17, 25, 16};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> answers = {0};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> answers = {0, 1};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> answers = {2, 1, 0};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> answers = {1, 3, 2, 0};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> answers = {0};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> answers = {0, 0};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> answers = {0, 0, 1};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> answers = {0, 0, 1, 2};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> answers = {0, 1, 0, 2, 3};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> answers = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> answers = {25, 39, 0, 34, 21, 14, 20, 5, 27, 16, 31, 8, 35, 20, 8, 25, 33, 35, 38, 2, 18, 20, 27, 11, 28, 18, 32, 20, 3, 23, 39, 29, 16, 18, 28, 26, 33, 5, 32, 4};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> answers = {9, 31, 21, 10, 12, 26, 11, 15, 23, 21, 1, 19, 22, 39, 21, 2, 6, 27, 29, 29, 12, 1, 10, 11, 17, 16, 2, 1, 40, 11, 22, 14, 34, 17, 13, 37, 18, 15, 9, 26};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> answers = {0, 19, 0, 26, 8, 10, 32, 40, 16, 20, 22, 3, 32, 5, 38, 27, 24, 13, 34, 6, 30, 40, 5, 7, 39, 19, 32, 38, 8, 17, 1, 34, 25, 40, 35, 16, 27, 29, 18, 14};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> answers = {19, 8, 9, 17, 3, 15, 5, 7, 11, 5, 13, 1, 14, 6, 15, 16, 10, 2, 11, 18, 7, 3, 1, 10, 8, 4, 9, 17, 0, 13, 0, 12, 2, 3, 16, 4, 6, 12, 14, 18};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> answers = {9, 18, 8, 1, 7, 2, 9, 3, 17, 5, 15, 13, 12, 18, 12, 1, 13, 8, 14, 11, 4, 0, 0, 11, 4, 14, 10, 3, 7, 15, 19, 6, 6, 16, 5, 16, 2, 17, 6, 10};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> answers = {11, 16, 15, 7, 16, 7, 19, 6, 5, 0, 9, 5, 6, 1, 10, 13, 8, 2, 0, 3, 17, 4, 18, 13, 8, 17, 1, 10, 12, 2, 4, 5, 9, 15, 14, 18, 14, 3, 11, 12};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> answers = {5, 0, 4, 16, 3, 15, 7, 5, 10, 0, 16, 4, 8, 15, 12, 17, 18, 10, 19, 7, 14, 13, 6, 18, 6, 11, 11, 2, 9, 1, 3, 8, 14, 17, 2, 9, 13, 19, 1};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> answers = {0, 11, 19, 6, 14, 4, 17, 12, 3, 8, 9, 17, 1, 19, 14, 1, 15, 10, 3, 15, 7, 2, 11, 16, 0, 5, 16, 13, 7, 5, 2, 13, 18, 12, 9, 8, 6, 18, 10};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> answers = {12, 16, 3, 1, 0, 7, 5, 4, 3, 2, 7, 19, 18, 15, 1, 14, 18, 10, 0, 13, 17, 17, 4, 11, 16, 9, 15, 5, 2, 9, 12, 11, 8, 10, 6, 14, 8, 6, 13};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 1048576;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> answers = {16, 9, 3, 2, 5, 12, 0, 17, 19, 1, 15, 5, 18, 9, 14, 14, 7, 1, 6, 4, 8, 8, 6, 2, 10, 4, 13, 7, 3, 11, 0};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> answers = {11, 12, 2, 10, 3, 1, 13, 17, 8, 18, 19, 5, 6, 4, 15, 9, 8, 11, 2, 16, 3, 7, 1, 5, 6, 0, 9, 0, 4, 7, 14};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> answers = {5, 1, 13, 6, 0, 6, 10, 1, 15, 5, 12, 11, 7, 3, 14, 9, 17, 8, 7, 16, 4, 4, 13, 2, 8, 9, 19, 2, 0, 18, 3};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> answers = {1, 0, 1};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> answers = {0, 1, 2, 3, 4};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> answers = {0, 0};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> answers = {0, 1, 1, 0};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> answers = {40, 40};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> answers = {0, 0, 1, 1};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> answers = {0, 1, 2, 3, 0, 1, 2, 3};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> answers = {0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 1048576;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> answers = {1, 1, 0, 0};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> answers = {0, 1, 0, 1};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> answers = {0, 1, 2, 0, 1, 2};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> answers = {0, 1, 0, 1, 2, 3, 4, 5};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> answers = {0};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> answers = {0, 0, 1, 1, 2, 2, 3, 4, 5};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> answers = {0, 0, 1, 2, 2};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> answers = {1, 0, 0, 1};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> answers = {0, 0, 2, 2};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> answers = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 524288;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> answers = {0, 1, 2, 3, 4, 5};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> answers = {14, 18, 9, 4, 19, 9, 8, 3, 1, 10, 11, 2, 13, 0, 15, 1, 6, 5, 0, 2, 3, 17, 12, 7, 16, 17, 6, 11, 14, 13, 4, 5, 7, 8, 15, 10, 16, 19, 12, 18};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 1048576;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> answers = {1, 2, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> answers = {0, 0, 1, 1, 2, 3, 4, 5, 6};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> answers = {0, 0, 0};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> answers = {0, 0, 1, 1, 2, 2, 3, 3, 4, 4};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> answers = {0, 0, 1, 1, 2, 2};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> answers = {0, 0, 1, 2, 3, 4};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> answers = {12, 1, 2, 3, 4, 3, 12, 12, 2, 3, 2, 2, 3, 2, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> answers = {1, 2, 3, 4, 5, 6, 0};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> answers = {0, 1, 2, 3, 4, 5, 5, 4, 3, 2, 1, 0};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 64;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> answers = {0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 64;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> answers = {0, 0, 1, 1, 2, 2, 3, 3};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> answers = {1, 0, 2, 0, 1};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> answers = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 1048576;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> answers = {0, 0, 1, 1, 2, 3};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> answers = {0, 1, 2, 3, 4, 0};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> answers = {0, 0, 1, 1, 1};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> answers = {1};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> answers = {0, 0, 1, 1, 2, 2, 3, 4, 4, 5, 5, 6, 7, 8};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> answers = {0, 1, 2, 3, 4, 6, 7, 8, 5, 0, 1, 2};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> answers = {0, 1, 2, 3, 0, 1, 0};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> answers = {0, 1, 5};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> answers = {0, 0, 1};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> answers = {0, 1, 2, 3, 0, 1};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> answers = {0, 0, 1, 1, 2, 2, 3, 3, 4, 5, 6};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> answers = {0, 2};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> answers = {0, 1, 0, 1, 2, 2, 3, 4, 5, 6, 7, 8, 9, 10, 3, 4, 5, 6, 7, 8, 9, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 1048576;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> answers = {0, 1, 0, 1, 2, 2};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> answers = {0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 64;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> answers = {0, 0, 2, 2, 1, 1};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> answers = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 13, 14, 15};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 131072;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> answers = {0, 0, 1, 2, 3};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> answers = {0, 0, 1, 1, 3};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> answers = {1, 1, 1};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> answers = {0, 1, 0, 1, 2, 3, 4, 5, 6, 7};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> answers = {1, 1, 0, 0, 2, 2, 3, 4, 5, 6};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> answers = {0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 512;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> answers = {0, 1, 2, 1, 2};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> answers = {3, 1, 1, 2, 0, 3, 0, 2};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> answers = {0, 0, 1, 2, 3, 3};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> answers = {0, 0, 1, 1, 2, 3, 4};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> answers = {0, 1, 2, 3, 4, 0, 1, 2, 3, 4};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> answers = {1, 1, 2, 2};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> answers = {40};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> answers = {0, 0, 1, 2, 3, 4, 5, 6, 7};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> answers = {1, 0, 2, 1, 1};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> answers = {1, 2};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> answers = {0, 0, 1, 1, 3, 2, 3, 2, 4, 4, 5, 5};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 64;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> answers = {0, 0, 1, 1, 2, 2, 3, 4, 5, 6};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> answers = {0, 0, 1, 1, 2, 2, 3, 3, 4, 5};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> answers = {0, 1, 0};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> answers = {1, 2, 3, 0, 1, 2, 3, 0, 4, 5, 6, 4, 5, 6};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 128;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> answers = {0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 19};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> answers = {0, 1, 0, 1, 3};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> answers = {1, 0, 2, 0, 1, 3, 4, 5, 3};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> answers = {4, 4, 3, 3, 2, 2, 1, 1, 0, 0};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> answers = {0, 0, 1, 1, 2, 3, 3};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> answers = {1, 0, 0, 1, 2, 2};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> answers = {0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 12};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> answers = {0, 0, 1, 1, 2, 2, 3, 3, 4, 14, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 20};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> answers = {0, 0, 1, 2, 5};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> answers = {0, 0, 1, 2};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> answers = {1, 1};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> answers = {1, 0, 2, 0, 1, 2};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> answers = {0, 0, 1, 1, 2, 3, 4, 5};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> answers = {1, 0, 1, 0};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> answers = {0, 0, 1, 1, 2, 7, 2, 3, 4, 5, 6};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> answers = {0, 1, 2, 0, 1, 2, 4};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> answers = {0, 0, 1, 2, 2, 2};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> answers = {0, 0, 0, 1, 1, 1, 3, 3};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> answers = {0, 1, 2, 2, 0, 1};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> answers = {7, 6, 5};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> answers = {0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 524288;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> answers = {3, 2, 1, 0, 2, 1, 0};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> answers = {0, 1, 3};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> answers = {3};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> answers = {0, 0, 1, 2, 3, 4, 5};
    Zoo* pObj = new Zoo();
    clock_t start = clock();
    long result = pObj->theCount(answers);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22687092&rd=14536&pm=11485
********************************************************************************
#include <functional>
#include <algorithm>
#include <iostream>
#include <utility>
#include <sstream>
#include <numeric>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <complex>
#include <climits>
#include <cassert>
#include <vector>
#include <string>
#include <limits>
#include <cstdio>
#include <cctype>
#include <bitset>
#include <stack>
#include <queue>
#include <cmath>
#include <list>
#include <set>
#include <map>
 
using namespace std;
 
typedef long long LL;
typedef pair <int, int> PII;
typedef pair <int, double> PID;
typedef pair <double, int> PDI;
 
const int INF = 0x3f3f3f3f;
const int MAXN = 100;
const int MOD = 1000000007;
const double EPS = 1e-10;
const double PI = acos(-1.0);
 
class Zoo {
public:
  long long theCount(vector <int> answer) {
    long long res = 0;
    int a = 0, b = 0;
    sort(answer.begin(), answer.end());
    for (int i = 0; i < (int)answer.size(); ++i) {
      if (answer[i] == a) {
        ++a;
      } else if (answer[i] == b) {
        ++b;
      } else {
        return 0;
      }
    }
    res = 1LL << min(a, b);
    if (a != b) {
      res <<= 1;
    }
    return res;
  }
};
 
 
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/