/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4510
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

class ComputationalComplexity {
public:
    int fastestAlgo(vector<int> constant, vector<int> power, vector<int> logPower, int N);
};

int ComputationalComplexity::fastestAlgo(vector<int> constant, vector<int> power, vector<int> logPower, int N) {
    int ret;
    return ret;
}


int test0() {
    vector<int> constant = {5, 50, 45};
    vector<int> power = {2, 1, 1};
    vector<int> logPower = {0, 1, 1};
    int N = 400;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> constant = {5, 50, 45};
    vector<int> power = {2, 1, 1};
    vector<int> logPower = {0, 1, 1};
    int N = 10;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
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
    vector<int> constant = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> power = {3, 3, 3, 3, 3, 3, 3, 3, 3};
    vector<int> logPower = {2, 2, 2, 3, 3, 3, 4, 4, 4};
    int N = 300;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> constant = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> power = {3, 3, 3, 3, 3, 3, 3, 3, 3};
    vector<int> logPower = {2, 2, 2, 3, 3, 3, 4, 4, 4};
    int N = 10;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
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
    vector<int> constant = {100};
    vector<int> power = {5};
    vector<int> logPower = {5};
    int N = 1000;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> constant = {1, 3, 9, 27, 81};
    vector<int> power = {5, 4, 3, 2, 1};
    vector<int> logPower = {5, 5, 5, 5, 5};
    int N = 3;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> constant = {1, 4, 16, 64};
    vector<int> power = {3, 2, 1, 0};
    vector<int> logPower = {4, 4, 4, 4};
    int N = 4;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> constant = {1, 2, 4, 8, 16, 32};
    vector<int> power = {5, 4, 3, 2, 1, 0};
    vector<int> logPower = {4, 4, 4, 4, 4, 4};
    int N = 2;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
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
    vector<int> constant = {45, 34, 69, 61, 55, 96, 86, 58, 25, 21, 22, 93, 68, 92, 8, 39, 50, 10};
    vector<int> power = {5, 0, 3, 0, 2, 4, 4, 4, 5, 1, 2, 5, 1, 3, 3, 0, 2, 3};
    vector<int> logPower = {4, 2, 3, 4, 1, 5, 5, 1, 4, 3, 4, 1, 1, 0, 1, 4, 3, 5};
    int N = 958;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> constant = {53, 52, 76, 14, 65, 73, 57, 32, 68, 38, 55, 51, 25, 37, 29, 26, 62, 10, 13, 53, 70, 49};
    vector<int> power = {1, 3, 0, 0, 0, 5, 4, 0, 3, 1, 2, 1, 1, 3, 4, 1, 2, 2, 3, 3, 1, 3};
    vector<int> logPower = {3, 1, 4, 5, 2, 0, 3, 4, 0, 0, 5, 1, 4, 0, 2, 1, 1, 2, 4, 2, 5, 3};
    int N = 21;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> constant = {73, 76, 17, 39, 81, 29, 69, 5, 28, 34, 16, 21, 6, 20, 53, 43, 27, 91, 69, 13, 63, 94, 73, 9, 38, 84, 90, 49, 93, 58, 69, 9, 6, 59, 16, 2, 84, 33, 60, 83, 43, 78, 77, 85, 2, 15};
    vector<int> power = {2, 4, 2, 1, 4, 4, 0, 5, 4, 3, 3, 4, 5, 2, 4, 0, 0, 4, 0, 1, 3, 1, 3, 3, 3, 3, 1, 5, 3, 2, 1, 4, 5, 0, 0, 1, 5, 5, 5, 0, 1, 1, 1, 5, 2, 4};
    vector<int> logPower = {3, 2, 2, 5, 4, 5, 2, 2, 3, 0, 4, 3, 5, 5, 0, 4, 4, 2, 2, 2, 3, 1, 5, 3, 1, 0, 2, 1, 2, 1, 3, 0, 0, 2, 3, 5, 1, 2, 5, 3, 2, 2, 2, 3, 4, 1};
    int N = 927;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> constant = {28, 63, 24, 27, 20, 39, 71, 39, 56, 98, 84, 59, 64, 94, 29, 57, 72, 94, 58, 2, 38, 78, 34, 16, 35, 15, 70, 84, 51, 35, 100};
    vector<int> power = {3, 3, 3, 0, 4, 3, 0, 2, 0, 2, 5, 2, 1, 5, 5, 5, 3, 0, 5, 4, 4, 4, 0, 4, 1, 4, 0, 1, 3, 4, 1};
    vector<int> logPower = {4, 1, 4, 4, 2, 0, 3, 4, 4, 3, 4, 2, 2, 3, 5, 2, 2, 4, 0, 1, 3, 0, 4, 0, 5, 3, 1, 0, 4, 2, 4};
    int N = 410;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> constant = {53, 34, 50, 49, 51, 11, 14, 81, 42, 93, 77, 29, 12, 19, 84};
    vector<int> power = {1, 5, 2, 1, 2, 1, 4, 4, 4, 5, 4, 3, 1, 0, 5};
    vector<int> logPower = {4, 3, 5, 4, 1, 2, 2, 1, 1, 2, 2, 0, 3, 2, 2};
    int N = 748;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> constant = {42, 49, 9, 27, 29, 80, 43, 61, 46, 91, 47, 77, 9, 25, 96, 1, 85, 48, 56, 54, 56, 93, 96, 39, 97, 72, 34};
    vector<int> power = {2, 5, 0, 5, 1, 0, 5, 0, 1, 5, 5, 1, 1, 2, 2, 0, 5, 0, 4, 2, 4, 3, 4, 1, 1, 1, 1};
    vector<int> logPower = {3, 1, 0, 5, 3, 2, 1, 3, 3, 4, 3, 5, 1, 1, 4, 1, 1, 0, 1, 5, 3, 5, 2, 2, 4, 3, 3};
    int N = 48;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> constant = {86, 19, 33, 64, 42, 21, 100, 90, 87, 83, 42, 40, 75, 40, 19, 2, 11, 38, 60, 53, 2, 7, 79, 6, 52, 37, 76, 42, 100, 13, 48, 68, 57, 19, 84, 13, 62, 83, 88, 31, 83, 91, 88, 49, 90, 75, 51, 94, 77, 85};
    vector<int> power = {2, 5, 4, 1, 5, 5, 5, 0, 3, 2, 3, 4, 1, 3, 5, 5, 0, 0, 0, 5, 5, 3, 0, 5, 3, 1, 5, 4, 4, 4, 3, 3, 3, 5, 3, 5, 1, 1, 4, 4, 5, 2, 4, 3, 0, 0, 3, 3, 4, 4};
    vector<int> logPower = {2, 5, 2, 5, 3, 5, 3, 5, 4, 3, 5, 1, 5, 4, 2, 0, 5, 2, 0, 2, 5, 2, 1, 0, 2, 5, 0, 0, 5, 0, 5, 4, 1, 1, 1, 2, 0, 4, 5, 5, 3, 3, 1, 5, 2, 0, 3, 0, 2, 1};
    int N = 692;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> constant = {7, 2, 88, 59, 67, 3, 94, 5, 16, 17, 58, 48, 61, 57, 58, 64, 71, 29, 98, 46, 31, 46, 21, 88, 64, 66, 90, 43, 35, 40, 89};
    vector<int> power = {0, 2, 2, 4, 5, 3, 2, 5, 3, 3, 0, 1, 2, 4, 0, 0, 4, 1, 0, 0, 5, 1, 2, 4, 2, 3, 4, 2, 2, 0, 4};
    vector<int> logPower = {2, 1, 0, 5, 2, 4, 1, 4, 2, 2, 2, 4, 1, 3, 1, 1, 2, 2, 5, 4, 5, 4, 2, 4, 3, 4, 1, 5, 2, 5, 3};
    int N = 25;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> constant = {40, 19, 68, 36, 21, 91, 23, 44, 63, 34, 12, 8, 88, 59, 88, 42, 72, 9, 21, 8, 41, 23, 77, 82, 91, 40, 24};
    vector<int> power = {1, 2, 5, 0, 3, 5, 4, 0, 1, 2, 3, 2, 3, 0, 4, 4, 0, 4, 1, 2, 3, 2, 1, 4, 0, 0, 0};
    vector<int> logPower = {2, 0, 5, 5, 4, 4, 0, 4, 1, 0, 3, 5, 2, 5, 4, 3, 0, 2, 1, 0, 0, 0, 3, 3, 5, 0, 4};
    int N = 59;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> constant = {75, 34, 38, 63, 33};
    vector<int> power = {2, 2, 4, 0, 4};
    vector<int> logPower = {3, 5, 0, 0, 0};
    int N = 368;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> constant = {82, 66, 13, 45, 87, 3, 71, 67, 75, 48, 1, 29, 18, 84, 81, 45, 83, 74, 51, 64, 21, 94, 19, 22, 30, 81, 18, 74, 95};
    vector<int> power = {0, 4, 4, 3, 2, 0, 2, 3, 2, 2, 4, 4, 5, 5, 3, 4, 2, 2, 2, 2, 2, 0, 1, 4, 5, 2, 1, 2, 5};
    vector<int> logPower = {5, 5, 2, 0, 5, 1, 3, 4, 0, 4, 5, 3, 3, 2, 2, 4, 2, 5, 3, 0, 5, 0, 0, 3, 1, 1, 5, 3, 1};
    int N = 235;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> constant = {45, 74, 59, 44, 41, 82, 1, 100, 22, 85, 47, 15, 55, 33, 16, 10, 6, 70, 26, 12, 91, 28, 6, 19, 78, 56, 45, 13, 100, 76, 16, 6, 93, 70, 17, 70, 55, 7, 72, 73, 1, 34, 37, 55, 18, 92, 66, 89, 84, 17};
    vector<int> power = {0, 2, 1, 4, 3, 3, 1, 5, 4, 3, 5, 1, 1, 5, 4, 1, 2, 2, 3, 1, 2, 5, 0, 5, 1, 2, 4, 5, 0, 2, 0, 1, 1, 3, 4, 1, 3, 3, 5, 0, 3, 3, 4, 3, 5, 2, 0, 5, 2, 3};
    vector<int> logPower = {0, 2, 2, 4, 5, 4, 4, 1, 2, 4, 1, 4, 2, 2, 2, 5, 1, 5, 3, 3, 1, 2, 0, 0, 3, 1, 0, 3, 2, 2, 4, 2, 5, 5, 3, 5, 4, 4, 3, 5, 4, 2, 5, 0, 2, 3, 1, 5, 1, 1};
    int N = 532;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> constant = {44, 62, 54, 45, 47, 60, 14, 38, 91, 11, 29, 45, 24, 12, 2, 34, 45, 16, 89, 88, 74, 26, 86, 72, 28, 90, 14, 13, 25, 45, 51, 89, 10, 18, 99, 91, 51, 54, 68, 18, 38, 3};
    vector<int> power = {5, 4, 3, 3, 1, 4, 3, 1, 5, 1, 3, 4, 5, 2, 1, 4, 3, 2, 4, 0, 4, 5, 3, 4, 4, 1, 3, 2, 5, 5, 5, 3, 3, 3, 5, 1, 2, 1, 0, 0, 3, 1};
    vector<int> logPower = {1, 1, 3, 0, 1, 1, 2, 0, 5, 3, 1, 2, 0, 5, 5, 5, 4, 2, 0, 4, 4, 1, 2, 0, 3, 4, 4, 1, 0, 5, 2, 4, 4, 1, 1, 2, 2, 5, 2, 2, 0, 0};
    int N = 287;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> constant = {94, 96, 84, 58, 19, 41, 41, 83, 2, 29, 49, 69, 45, 57, 96, 32, 26, 70, 27, 10, 59, 46, 74, 8, 61, 15, 90, 98, 84, 56, 72, 82, 50, 1, 12, 74, 20, 51, 18, 5, 74};
    vector<int> power = {2, 5, 0, 3, 5, 1, 2, 4, 0, 5, 5, 4, 5, 0, 4, 2, 2, 1, 5, 0, 1, 4, 0, 2, 5, 1, 4, 4, 5, 2, 4, 0, 1, 2, 3, 1, 3, 2, 1, 5, 5};
    vector<int> logPower = {5, 3, 0, 0, 2, 5, 5, 0, 0, 1, 0, 5, 0, 1, 5, 2, 4, 2, 4, 1, 3, 3, 0, 4, 0, 5, 3, 2, 5, 5, 5, 4, 3, 1, 1, 1, 5, 5, 3, 4, 4};
    int N = 961;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> constant = {32, 33, 58, 93, 8, 27, 43, 69, 95, 77, 57, 73, 87, 87, 50, 92, 67, 20, 2, 46, 73, 48, 25, 90, 48, 18, 28, 26, 20, 33, 59, 48, 69, 4, 19, 13, 10, 78, 55, 90};
    vector<int> power = {5, 0, 1, 4, 0, 3, 5, 4, 3, 3, 0, 5, 0, 5, 5, 3, 0, 4, 1, 1, 4, 0, 2, 4, 0, 0, 3, 2, 0, 0, 4, 3, 5, 0, 2, 4, 3, 4, 3, 0};
    vector<int> logPower = {2, 2, 2, 0, 4, 5, 2, 3, 4, 5, 0, 0, 1, 4, 2, 5, 2, 4, 5, 0, 5, 4, 3, 0, 4, 1, 1, 3, 3, 0, 1, 5, 2, 1, 1, 4, 0, 0, 2, 3};
    int N = 1000;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> constant = {86, 22, 69, 77, 51, 2, 9, 6, 30, 15, 58, 74, 80, 82, 51, 18, 100, 32, 98, 73, 46, 15, 59, 52, 96, 28};
    vector<int> power = {0, 5, 5, 4, 3, 3, 5, 0, 4, 4, 0, 3, 1, 0, 4, 1, 0, 4, 2, 1, 1, 2, 4, 0, 0, 0};
    vector<int> logPower = {5, 3, 2, 2, 2, 1, 5, 5, 4, 0, 3, 3, 1, 0, 5, 0, 5, 3, 4, 2, 5, 5, 5, 2, 0, 3};
    int N = 383;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> constant = {14, 2, 42, 27, 84, 56, 11, 45, 33, 80, 41, 62, 69, 43, 18, 41, 37, 64, 16, 43, 27, 43, 83, 13, 30, 23, 12, 63, 53, 19, 7, 63, 76, 11, 68, 38, 34, 59};
    vector<int> power = {0, 3, 5, 4, 5, 0, 0, 2, 5, 3, 1, 0, 0, 1, 0, 3, 0, 4, 1, 1, 5, 2, 5, 1, 0, 0, 3, 3, 4, 0, 0, 0, 2, 2, 1, 4, 5, 2};
    vector<int> logPower = {0, 0, 2, 1, 3, 5, 0, 5, 0, 5, 0, 2, 2, 0, 2, 0, 4, 4, 1, 1, 2, 4, 5, 0, 0, 2, 0, 1, 4, 5, 0, 4, 0, 1, 1, 2, 4, 0};
    int N = 815;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> constant = {98, 52, 45, 58, 76, 27, 36, 54, 5, 51, 82, 94, 92, 38, 62, 8, 51, 6, 38, 38, 51, 58, 71, 26};
    vector<int> power = {1, 5, 1, 3, 2, 0, 0, 1, 1, 2, 3, 0, 2, 3, 3, 1, 0, 3, 1, 3, 3, 3, 1, 4};
    vector<int> logPower = {5, 3, 0, 4, 3, 3, 4, 2, 3, 0, 2, 2, 0, 1, 1, 0, 3, 4, 2, 1, 0, 3, 2, 3};
    int N = 503;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> constant = {86, 11, 42, 11, 66, 60, 64, 80, 78, 30, 52, 20, 43, 55, 21, 5, 77, 97, 31, 75, 91, 55, 95, 35, 94, 91, 24, 94, 9, 33, 79, 31, 64, 79, 2, 59, 56, 69, 42, 44, 41, 34, 79, 44};
    vector<int> power = {0, 0, 0, 5, 5, 3, 0, 5, 4, 4, 2, 4, 2, 4, 4, 3, 0, 5, 5, 0, 4, 2, 4, 3, 5, 5, 4, 5, 1, 3, 0, 3, 3, 0, 0, 5, 5, 4, 3, 2, 5, 2, 5, 0};
    vector<int> logPower = {4, 3, 2, 0, 2, 3, 2, 2, 3, 4, 2, 3, 3, 5, 4, 1, 1, 0, 5, 5, 3, 3, 2, 4, 0, 2, 2, 3, 3, 3, 0, 4, 3, 2, 1, 5, 0, 1, 1, 2, 3, 5, 1, 4};
    int N = 195;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> constant = {62, 84, 41, 1, 50, 16, 20, 32, 43, 60, 35, 28, 82, 19, 61, 73, 3, 39, 12, 83, 59, 13, 52, 17, 72, 6, 65, 94, 10, 29, 59, 53, 85, 44, 23, 15, 43};
    vector<int> power = {3, 1, 4, 4, 0, 5, 4, 5, 4, 3, 2, 0, 0, 1, 3, 1, 4, 5, 5, 1, 5, 4, 5, 5, 1, 3, 5, 2, 1, 0, 5, 0, 4, 1, 3, 3, 1};
    vector<int> logPower = {5, 5, 2, 4, 5, 4, 0, 2, 3, 5, 3, 5, 3, 0, 2, 3, 3, 0, 3, 2, 5, 2, 2, 5, 4, 2, 1, 5, 2, 1, 0, 0, 5, 3, 5, 4, 4};
    int N = 368;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> constant = {1, 25, 50, 72, 99, 100};
    vector<int> power = {4, 3, 2, 1, 0, 5};
    vector<int> logPower = {3, 3, 3, 3, 3, 5};
    int N = 1000;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> constant = {1, 1, 1};
    vector<int> power = {1, 1, 1};
    vector<int> logPower = {2, 1, 0};
    int N = 3;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> constant = {100};
    vector<int> power = {5};
    vector<int> logPower = {1};
    int N = 1000;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> constant = {3, 96};
    vector<int> power = {5, 4};
    vector<int> logPower = {4, 5};
    int N = 163;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> constant = {32, 33, 58, 93, 8, 27, 43, 69, 95, 77, 57, 73, 87, 87, 50, 92, 67, 20, 2, 46, 73, 48, 25, 90, 48, 18, 28, 26, 20, 33, 59, 48, 69, 4, 19, 13, 10, 78, 55, 90};
    vector<int> power = {5, 0, 1, 4, 0, 3, 5, 4, 3, 3, 0, 5, 0, 5, 5, 3, 0, 4, 1, 1, 4, 0, 2, 4, 0, 0, 3, 2, 0, 0, 4, 3, 5, 0, 2, 4, 3, 4, 3, 0};
    vector<int> logPower = {2, 2, 2, 0, 4, 5, 2, 3, 4, 5, 0, 0, 1, 4, 2, 5, 2, 4, 5, 0, 5, 4, 3, 0, 4, 1, 1, 3, 3, 0, 1, 5, 2, 1, 1, 4, 0, 0, 2, 3};
    int N = 1000;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> constant = {44, 33, 45};
    vector<int> power = {0, 0, 0};
    vector<int> logPower = {0, 0, 0};
    int N = 50;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> constant = {50, 50, 50};
    vector<int> power = {2, 2, 2};
    vector<int> logPower = {0, 0, 0};
    int N = 400;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> constant = {100, 99};
    vector<int> power = {5, 5};
    vector<int> logPower = {5, 5};
    int N = 1000;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> constant = {100};
    vector<int> power = {5};
    vector<int> logPower = {2};
    int N = 1000;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> constant = {32, 33, 58, 93, 8, 27, 43, 69, 95, 77, 57, 73, 87, 87, 50, 92, 67, 20, 2, 46, 73, 48, 25, 90, 48, 18, 28, 26, 20, 33, 59, 48, 69, 4, 19, 13, 10, 78, 55, 90, 1};
    vector<int> power = {5, 0, 1, 4, 0, 3, 5, 4, 3, 3, 0, 5, 0, 5, 5, 3, 0, 4, 1, 1, 4, 0, 2, 4, 0, 0, 3, 2, 0, 0, 4, 3, 5, 0, 2, 4, 3, 4, 3, 0, 1};
    vector<int> logPower = {2, 2, 2, 0, 4, 5, 2, 3, 4, 5, 0, 0, 1, 4, 2, 5, 2, 4, 5, 0, 5, 4, 3, 0, 4, 1, 1, 3, 3, 0, 1, 5, 2, 1, 1, 4, 0, 0, 2, 3, 1};
    int N = 1000;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> constant = {100, 100};
    vector<int> power = {5, 4};
    vector<int> logPower = {1, 1};
    int N = 1000;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> constant = {100, 100, 100};
    vector<int> power = {5, 4, 5};
    vector<int> logPower = {1, 1, 1};
    int N = 1000;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> constant = {1, 1};
    vector<int> power = {0, 0};
    vector<int> logPower = {2, 3};
    int N = 2;
    ComputationalComplexity* pObj = new ComputationalComplexity();
    clock_t start = clock();
    int result = pObj->fastestAlgo(constant, power, logPower, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10190099&rd=7218&pm=4510
********************************************************************************
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h> 
#include <algorithm> 
#include <vector> 
#include <string> 
#include <stack> 
#include <queue> 
#include <map> 
#include <set> 
#include <iterator> 
#include <iostream> 
#include <functional> 
#include <sstream> 
 
using namespace std; 
 
class node 
{ 
public: 
  double x; 
  int pos; 
}; 
 
vector<node> arr; 
node tmp; 
 
bool cmp( node a, node b) 
{ 
  if(a.x != b.x) 
    return a.x < b.x; 
  return a.pos < b.pos; 
} 
class ComputationalComplexity  
{ 
  public: 
  int fastestAlgo(vector <int> con, vector <int> pwr, vector <int> lp, int N)  
  { 
    int i; 
    int ret; 
 
    arr.resize(0); 
 
    for(i=0;i<con.size();i++) 
    { 
      tmp.pos = i; 
      tmp.x = con[i] * pow( (double)N , (double) pwr[i] ) * pow( log((double)N) , (double)lp[i] ); 
 
      arr.push_back(tmp); 
 
    } 
 
    sort(arr.begin() , arr.end(),cmp); 
 
    ret = arr[0].pos; 
 
    return ret; 
  } 
     
 
   
 
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/