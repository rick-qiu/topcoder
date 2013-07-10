/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6081
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

class BootsExchange {
public:
    int leastAmount(vector<int> left, vector<int> right);
};

int BootsExchange::leastAmount(vector<int> left, vector<int> right) {
    int ret;
    return ret;
}


int test0() {
    vector<int> left = {1, 3, 1};
    vector<int> right = {2, 1, 3};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
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
    vector<int> left = {1, 3};
    vector<int> right = {2, 2};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> left = {1, 2, 3, 4, 5, 6, 7};
    vector<int> right = {2, 4, 6, 1, 3, 7, 5};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> left = {3, 1, 4, 7, 3, 1, 4, 5, 1};
    vector<int> right = {2, 5, 2, 3, 4, 1, 4, 6, 8};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> left = {5, 2, 1, 4, 7, 9, 1, 1, 3, 4};
    vector<int> right = {2, 5, 1, 3, 4, 6, 3, 2, 2, 5};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> left = {1};
    vector<int> right = {1};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
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
    vector<int> left = {2, 2};
    vector<int> right = {2, 2};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
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
    vector<int> left = {3, 3, 3};
    vector<int> right = {2, 2, 1};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> left = {2, 3, 4, 4};
    vector<int> right = {2, 2, 4, 2};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
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
    vector<int> left = {4, 5, 3, 4, 3};
    vector<int> right = {1, 2, 4, 3, 5};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> left = {3, 3, 4, 6, 3, 4};
    vector<int> right = {1, 6, 4, 5, 3, 5};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> left = {7, 1, 2, 4, 4, 2, 4};
    vector<int> right = {2, 2, 2, 6, 6, 6, 2};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
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
    vector<int> left = {2, 7, 2, 6, 6, 4, 4, 5};
    vector<int> right = {7, 2, 6, 6, 5, 2, 4, 8};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> left = {8, 4, 5, 4, 1, 9, 2, 5, 6};
    vector<int> right = {2, 9, 9, 1, 4, 5, 3, 8, 7};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> left = {83, 123, 117, 112, 16, 102, 97, 42, 107, 27, 113, 54, 62, 122, 66, 103, 51, 74, 70, 56, 16, 23, 121, 118, 75, 39, 70, 87, 13, 87, 31, 81, 118, 4, 18, 84, 2, 76, 84, 52, 37};
    vector<int> right = {57, 51, 116, 41, 42, 3, 46, 42, 19, 113, 91, 94, 47, 106, 23, 43, 10, 103, 53, 51, 29, 14, 50, 35, 38, 92, 51, 23, 104, 117, 85, 40, 88, 28, 8, 15, 114, 62, 96, 87, 40};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> left = {61, 73, 52, 65, 45, 113, 61, 29, 73, 2, 73, 2, 6, 40, 82, 32, 34, 7, 74, 2, 59, 8, 52, 89, 35, 13, 117, 19, 60, 26, 105, 63, 123, 9, 36, 4, 45, 23, 51, 123, 69, 90};
    vector<int> right = {43, 15, 57, 76, 16, 19, 16, 104, 53, 119, 47, 63, 27, 43, 57, 45, 36, 76, 36, 69, 78, 47, 40, 65, 21, 101, 83, 59, 39, 2, 53, 56, 121, 104, 114, 67, 9, 97, 44, 41, 55, 55};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> left = {56, 12, 72, 105, 97, 122, 2, 81, 14, 54, 96, 61, 14, 129, 115, 19, 106, 60, 25, 107, 93, 119, 120, 15, 80, 6, 62, 122, 65, 52, 5, 77, 29, 75, 11, 49, 83, 73, 128, 55, 68, 97, 27};
    vector<int> right = {40, 59, 15, 102, 76, 115, 24, 13, 48, 60, 29, 81, 17, 61, 27, 110, 2, 10, 95, 28, 33, 36, 97, 91, 91, 93, 56, 56, 127, 59, 56, 54, 30, 81, 34, 61, 59, 59, 61, 38, 33, 73, 122};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> left = {17, 27, 41, 9, 120, 63, 128, 84, 25, 61, 122, 12, 82, 35, 83, 9, 66, 10, 105, 97, 86, 12, 48, 58, 68, 41, 110, 77, 51, 125, 42, 122, 113, 73, 63, 34, 48, 131, 69, 94, 22, 47, 103, 41};
    vector<int> right = {60, 36, 28, 2, 74, 65, 11, 35, 122, 10, 107, 74, 8, 31, 117, 114, 93, 7, 46, 82, 55, 53, 88, 26, 120, 112, 19, 3, 48, 82, 5, 110, 62, 92, 99, 5, 32, 28, 28, 30, 50, 20, 109, 57};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> left = {125, 79, 3, 24, 28, 17, 48, 38, 4, 109, 24, 66, 49, 77, 11, 92, 71, 1, 77, 4, 73, 33, 42, 70, 85, 25, 130, 5, 133, 30, 32, 26, 23, 86, 34, 131, 16, 45, 99, 129, 63, 15, 99, 94, 116};
    vector<int> right = {14, 126, 135, 60, 114, 8, 97, 59, 79, 96, 28, 54, 95, 129, 106, 130, 91, 78, 7, 4, 118, 62, 79, 55, 77, 125, 85, 115, 30, 12, 89, 91, 88, 94, 9, 16, 87, 126, 130, 131, 11, 127, 88, 43, 57};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> left = {25, 75, 102, 42, 83, 75, 3, 128, 49, 134, 93, 133, 8, 62, 15, 105, 83, 16, 86, 47, 84, 70, 111, 73, 103, 99, 13, 135, 44, 11, 137, 129, 128, 62, 138, 100, 107, 136, 137, 111, 3, 21, 46, 45, 103, 90};
    vector<int> right = {109, 19, 25, 49, 118, 51, 80, 105, 59, 41, 126, 61, 102, 131, 73, 105, 22, 88, 57, 135, 35, 112, 83, 35, 109, 93, 74, 34, 27, 13, 21, 116, 124, 119, 46, 138, 74, 93, 101, 1, 138, 78, 52, 124, 118, 11};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> left = {40, 54, 51, 22, 132, 35, 62, 56, 117, 41, 45, 131, 91, 107, 51, 55, 80, 31, 38, 86, 115, 101, 3, 50, 141, 108, 35, 125, 18, 78, 37, 140, 40, 139, 113, 46, 52, 11, 95, 14, 22, 53, 50, 104, 74, 71, 48};
    vector<int> right = {120, 73, 77, 54, 131, 45, 121, 47, 124, 130, 15, 7, 91, 65, 57, 123, 74, 137, 128, 19, 44, 93, 1, 139, 66, 57, 16, 40, 118, 141, 124, 67, 138, 95, 40, 66, 86, 3, 77, 44, 42, 10, 99, 137, 116, 44, 61};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> left = {88, 117, 131, 141, 30, 97, 135, 77, 46, 10, 113, 104, 131, 72, 5, 20, 15, 78, 1, 96, 96, 96, 50, 65, 43, 143, 134, 70, 53, 99, 141, 25, 17, 4, 57, 69, 67, 36, 52, 15, 51, 92, 16, 66, 14, 18, 25, 91};
    vector<int> right = {6, 132, 135, 13, 121, 84, 112, 18, 143, 31, 138, 80, 141, 123, 14, 51, 22, 109, 56, 44, 49, 69, 27, 6, 134, 103, 113, 144, 50, 22, 32, 28, 91, 94, 120, 132, 125, 62, 121, 67, 98, 129, 98, 119, 16, 56, 116, 97};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> left = {95, 36, 69, 6, 112, 27, 11, 54, 65, 90, 5, 132, 26, 9, 101, 48, 120, 139, 79, 24, 3, 99, 109, 129, 98, 132, 53, 143, 40, 74, 115, 40, 127, 88, 120, 117, 50, 109, 71, 67, 53, 95, 63, 70, 101, 74, 35, 87, 124};
    vector<int> right = {32, 40, 91, 96, 19, 65, 3, 11, 113, 122, 58, 83, 71, 87, 85, 43, 2, 55, 146, 101, 90, 41, 28, 125, 92, 58, 75, 80, 14, 82, 111, 93, 78, 133, 77, 33, 1, 127, 134, 24, 120, 116, 23, 25, 82, 64, 66, 135, 117};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> left = {1000};
    vector<int> right = {1000};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> left = {999, 983, 981, 987, 987, 995, 985, 998, 981, 998, 995};
    vector<int> right = {981, 987, 998, 981, 995, 999, 987, 985, 998, 995, 983};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> left = {988, 961, 997, 977, 977, 995, 977, 997, 998, 999, 990, 971, 971, 982, 986, 974, 967, 983, 973, 1000, 995};
    vector<int> right = {982, 997, 961, 971, 983, 973, 967, 997, 977, 982, 986, 974, 999, 977, 995, 995, 971, 988, 998, 1000, 990};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> left = {974, 945, 967, 988, 979, 964, 976, 968, 986, 987, 952, 973, 997, 939, 951, 975, 953, 960, 958, 964, 982, 966, 962, 950, 959, 967, 967, 948, 947, 954, 983};
    vector<int> right = {974, 964, 958, 982, 967, 976, 939, 954, 948, 952, 947, 959, 975, 966, 988, 950, 953, 947, 951, 975, 979, 967, 945, 967, 964, 973, 983, 962, 960, 968, 997};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> left = {946, 982, 987, 986, 908, 936, 970, 906, 945, 934, 938, 973, 986, 997, 945, 965, 934, 996, 977, 960, 954, 905, 948, 941, 995, 921, 960, 983, 981, 990, 944, 940, 939, 991, 905, 926, 939, 925, 985, 951, 960, 922, 998, 968, 917, 989, 976, 991, 914, 938};
    vector<int> right = {989, 990, 991, 960, 995, 997, 960, 996, 991, 965, 977, 917, 914, 954, 951, 981, 921, 938, 945, 934, 968, 941, 906, 970, 960, 986, 983, 944, 934, 939, 905, 985, 945, 938, 926, 982, 960, 908, 998, 905, 936, 991, 948, 940, 973, 946, 939, 922, 986, 987};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> left = {1};
    vector<int> right = {2};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> left = {114, 191, 7, 43, 98, 57, 120, 69, 41, 88, 173};
    vector<int> right = {85, 59, 15, 215, 31, 146, 171, 46, 210, 55, 156};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> left = {405, 397, 160, 356, 200, 131, 113, 187, 251, 120, 160, 262, 278, 32, 208, 312, 323, 394, 349, 247, 34};
    vector<int> right = {73, 82, 240, 188, 126, 363, 414, 86, 133, 151, 62, 202, 319, 26, 231, 6, 415, 109, 257, 373, 102};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> left = {575, 473, 550, 180, 94, 315, 550, 147, 475, 304, 38, 238, 91, 160, 355, 143, 605, 603, 151, 571, 613, 32, 277, 592, 270, 258, 229, 121, 223, 223, 317};
    vector<int> right = {487, 363, 280, 596, 80, 201, 244, 418, 132, 216, 543, 197, 199, 393, 185, 79, 9, 522, 582, 88, 401, 253, 474, 165, 373, 339, 78, 426, 619, 386, 500};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> left = {796, 36, 644, 822, 990, 909, 164, 534, 434, 681, 792, 321, 604, 872, 738, 560, 884, 368, 447, 912, 899, 444, 714, 611, 913, 251, 354, 936, 405, 350, 154, 941, 978, 147, 394, 373, 931, 695, 559, 564, 435, 977, 132, 519, 683, 889, 530, 32, 281, 847};
    vector<int> right = {204, 383, 825, 583, 48, 573, 834, 458, 312, 393, 803, 246, 834, 155, 921, 756, 816, 445, 788, 579, 907, 257, 893, 958, 319, 583, 155, 601, 799, 809, 794, 58, 85, 482, 416, 91, 571, 103, 76, 288, 70, 397, 697, 529, 612, 344, 143, 109, 101, 271};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> left = {30, 17, 10, 24, 29, 3, 20, 1, 4, 9, 15, 20, 27, 29, 1, 30, 20, 29, 24, 6, 30, 22, 3, 14, 13, 7, 14, 30, 19, 20};
    vector<int> right = {17, 1, 24, 20, 10, 25, 5, 8, 14, 14, 26, 12, 28, 4, 11, 9, 2, 19, 9, 28, 9, 2, 11, 29, 13, 3, 16, 25, 29, 13};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> left = {31, 28, 22, 2, 2, 4, 10, 19, 18, 15, 16, 13, 10, 5, 13, 10, 11, 18, 15, 12, 8, 2, 30, 8, 3, 5, 20, 25, 2, 6, 19};
    vector<int> right = {13, 11, 22, 23, 12, 12, 11, 23, 27, 5, 18, 13, 22, 2, 13, 11, 8, 26, 19, 28, 24, 20, 27, 1, 21, 14, 19, 23, 14, 16, 8};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> left = {16, 15, 23, 5, 26, 17, 18, 23, 1, 26, 28, 27, 10, 29, 32, 17, 4, 30, 24, 18, 25, 14, 21, 26, 6, 7, 25, 10, 3, 19, 20, 27};
    vector<int> right = {10, 18, 2, 22, 1, 6, 23, 31, 30, 30, 19, 18, 10, 29, 29, 14, 32, 26, 28, 30, 24, 5, 4, 18, 1, 16, 14, 26, 21, 4, 14, 5};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> left = {24, 2, 8, 21, 30, 13, 33, 16, 32, 8, 8, 12, 3, 4, 3, 33, 33, 17, 3, 3, 31, 32, 25, 30, 9, 2, 32, 18, 31, 5, 27, 11, 13};
    vector<int> right = {26, 24, 21, 20, 17, 29, 26, 32, 23, 14, 1, 18, 4, 13, 30, 14, 22, 7, 24, 18, 25, 29, 8, 15, 1, 26, 12, 4, 7, 15, 11, 4, 24};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> left = {12, 11, 31, 31, 5, 17, 5, 9, 22, 14, 8, 12, 4, 3, 12, 33, 30, 34, 28, 29, 23, 16, 8, 3, 17, 4, 34, 22, 9, 3, 4, 4, 13, 27};
    vector<int> right = {33, 24, 3, 22, 11, 11, 16, 22, 7, 33, 12, 2, 16, 8, 17, 8, 27, 12, 8, 29, 23, 1, 26, 21, 27, 33, 4, 18, 21, 14, 16, 17, 9, 16};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> left = {8, 11, 12, 32, 18, 17, 27, 1, 16, 20, 14, 12, 27, 29, 13, 7, 31, 15, 2, 12, 12, 22, 11, 30, 19, 9, 13, 11, 22, 24, 12, 8, 3, 33, 3};
    vector<int> right = {2, 9, 11, 28, 20, 31, 2, 33, 29, 5, 24, 9, 27, 32, 22, 31, 14, 33, 12, 9, 26, 33, 35, 27, 18, 8, 5, 20, 11, 30, 25, 8, 28, 16, 27};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> left = {23, 12, 24, 30, 36, 36, 3, 36, 13, 11, 7, 33, 15, 20, 27, 1, 7, 16, 18, 29, 32, 7, 33, 21, 2, 14, 3, 15, 7, 2, 15, 12, 13, 1, 5, 21};
    vector<int> right = {17, 23, 34, 15, 22, 22, 14, 3, 23, 35, 20, 30, 19, 29, 25, 16, 35, 32, 35, 24, 33, 9, 1, 12, 16, 29, 19, 35, 20, 36, 12, 2, 13, 15, 20, 31};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> left = {23, 36, 25, 8, 21, 2, 34, 14, 29, 24, 10, 3, 14, 4, 30, 4, 36, 29, 33, 21, 24, 20, 26, 20, 3, 36, 10, 19, 34, 27, 37, 2, 22, 34, 4, 25, 9};
    vector<int> right = {21, 15, 11, 5, 28, 8, 34, 13, 30, 16, 35, 30, 5, 17, 17, 24, 23, 32, 30, 18, 8, 35, 7, 35, 33, 28, 29, 19, 23, 31, 35, 10, 6, 26, 16, 29, 25};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> left = {15, 36, 36, 35, 4, 5, 17, 3, 8, 3, 32, 9, 3, 38, 6, 27, 22, 33, 5, 4, 34, 8, 30, 4, 7, 18, 29, 7, 10, 31, 35, 12, 14, 35, 9, 17, 18, 3};
    vector<int> right = {2, 21, 38, 20, 35, 38, 25, 28, 24, 17, 29, 11, 8, 6, 20, 12, 15, 33, 10, 13, 7, 20, 24, 9, 6, 28, 15, 6, 21, 23, 26, 29, 5, 25, 10, 2, 28, 38};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> left = {7, 29, 35, 38, 32, 13, 18, 32, 20, 34, 7, 16, 6, 22, 16, 19, 33, 4, 38, 3, 7, 18, 2, 3, 14, 9, 3, 32, 38, 11, 32, 2, 16, 29, 35, 1, 23, 1, 32};
    vector<int> right = {33, 14, 22, 7, 11, 8, 30, 22, 4, 16, 9, 10, 14, 2, 34, 16, 33, 22, 38, 3, 5, 20, 20, 31, 7, 35, 26, 25, 21, 34, 1, 18, 6, 29, 38, 30, 19, 15, 10};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> left = {40, 34, 4, 30, 24, 37, 4, 4, 40, 16, 33, 17, 7, 15, 39, 30, 14, 3, 26, 23, 4, 5, 23, 11, 15, 21, 25, 16, 38, 7, 15, 16, 17, 35, 10, 28, 10, 32, 13, 35};
    vector<int> right = {4, 37, 29, 7, 9, 28, 24, 36, 11, 34, 26, 38, 24, 15, 2, 30, 8, 23, 3, 32, 10, 34, 14, 28, 2, 22, 13, 7, 8, 39, 2, 22, 34, 25, 6, 23, 9, 2, 22, 35};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> left = {8, 40, 33, 35, 31, 24, 40, 32, 27, 26, 31, 29, 5, 12, 13, 35, 10, 25, 25, 32, 35, 9, 21, 37, 4, 21, 15, 13, 41, 27, 12, 38, 30, 3, 20, 37, 21, 25, 41, 9, 40};
    vector<int> right = {24, 18, 21, 12, 37, 12, 16, 31, 27, 5, 24, 38, 24, 16, 10, 36, 25, 23, 38, 40, 38, 15, 31, 16, 32, 33, 15, 2, 32, 23, 10, 37, 13, 15, 38, 26, 31, 19, 29, 31, 12};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> left = {15, 25, 34, 21, 13, 32, 31, 1, 11, 21, 10, 21, 4, 24, 24, 10, 22, 1, 34, 34, 28, 6, 37, 16, 16, 2, 36, 6, 4, 13, 34, 19, 40, 15, 7, 18, 33, 33, 41, 41, 29, 42};
    vector<int> right = {14, 33, 24, 11, 29, 16, 36, 29, 30, 33, 2, 30, 29, 41, 4, 7, 9, 26, 31, 26, 23, 31, 5, 10, 14, 28, 22, 6, 2, 16, 10, 23, 6, 31, 39, 24, 23, 12, 21, 6, 8, 26};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> left = {20, 30, 17, 1, 33, 33, 30, 15, 41, 33, 35, 26, 40, 5, 9, 5, 22, 34, 31, 8, 24, 35, 37, 32, 33, 38, 15, 30, 40, 42, 34, 6, 28, 11, 23, 35, 19, 37, 33, 39, 18, 5, 21};
    vector<int> right = {15, 37, 38, 12, 16, 43, 2, 33, 40, 6, 9, 31, 15, 12, 7, 13, 38, 36, 35, 18, 18, 24, 4, 16, 22, 31, 37, 24, 24, 24, 7, 12, 21, 12, 30, 6, 33, 1, 18, 38, 35, 3, 32};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> left = {17, 32, 27, 21, 33, 40, 33, 40, 40, 25, 17, 40, 35, 28, 27, 11, 33, 43, 26, 24, 40, 24, 19, 9, 27, 4, 23, 9, 29, 8, 6, 15, 23, 36, 28, 34, 27, 5, 10, 13, 5, 41, 22, 11};
    vector<int> right = {26, 24, 21, 20, 13, 18, 21, 10, 18, 32, 43, 28, 38, 37, 7, 8, 41, 34, 39, 12, 42, 22, 15, 23, 29, 13, 10, 23, 4, 11, 30, 36, 28, 33, 2, 34, 40, 23, 37, 16, 22, 33, 27, 4};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> left = {6, 3, 42, 30, 31, 20, 40, 30, 16, 16, 7, 29, 45, 31, 33, 9, 41, 38, 2, 44, 37, 19, 1, 28, 12, 18, 22, 43, 10, 13, 29, 44, 30, 25, 25, 28, 2, 19, 20, 4, 3, 27, 34, 6, 44};
    vector<int> right = {2, 13, 32, 32, 31, 5, 40, 3, 18, 26, 16, 43, 41, 35, 14, 40, 11, 28, 1, 20, 41, 35, 39, 13, 2, 5, 14, 16, 20, 45, 32, 10, 17, 42, 24, 14, 40, 27, 16, 6, 37, 11, 16, 36, 23};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> left = {25, 25, 8, 37, 3, 11, 43, 26, 13, 26, 5, 38, 42, 32, 7, 16, 4, 31, 43, 9, 1, 34, 36, 9, 26, 38, 15, 38, 26, 24, 27, 28, 38, 20, 2, 13, 12, 21, 26, 1, 16, 3, 45, 37, 39, 18};
    vector<int> right = {7, 39, 33, 40, 14, 41, 25, 31, 24, 43, 43, 27, 2, 36, 31, 45, 24, 33, 45, 13, 12, 32, 9, 10, 46, 21, 22, 13, 8, 35, 40, 31, 6, 44, 22, 26, 28, 29, 6, 3, 34, 28, 13, 28, 33, 11};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> left = {5, 20, 47, 11, 43, 36, 39, 18, 32, 9, 37, 37, 17, 47, 33, 8, 41, 45, 36, 5, 15, 27, 8, 27, 26, 34, 35, 16, 29, 13, 47, 33, 29, 21, 16, 12, 27, 29, 20, 9, 4, 25, 8, 46, 22, 13, 28};
    vector<int> right = {12, 41, 10, 31, 27, 41, 18, 12, 11, 34, 22, 21, 26, 1, 20, 25, 25, 25, 45, 33, 17, 1, 34, 17, 22, 6, 29, 13, 9, 13, 2, 18, 2, 1, 17, 10, 33, 9, 21, 38, 13, 29, 17, 32, 33, 12, 45};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> left = {1, 28, 24, 35, 38, 29, 8, 36, 25, 31, 14, 47, 47, 42, 27, 11, 28, 6, 33, 36, 18, 6, 10, 31, 10, 1, 40, 24, 33, 14, 40, 42, 41, 11, 16, 26, 33, 42, 23, 16, 31, 41, 4, 34, 9, 44, 46, 15};
    vector<int> right = {35, 9, 18, 37, 34, 32, 19, 48, 31, 5, 12, 48, 8, 44, 33, 37, 16, 47, 20, 42, 23, 31, 19, 43, 4, 36, 30, 36, 30, 35, 22, 23, 26, 27, 17, 10, 31, 28, 26, 11, 21, 21, 22, 32, 12, 8, 1, 31};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> left = {8, 20, 49, 35, 45, 2, 39, 26, 13, 38, 28, 35, 25, 5, 12, 32, 39, 20, 43, 43, 27, 15, 41, 9, 22, 27, 19, 12, 28, 14, 18, 15, 33, 31, 43, 28, 12, 46, 4, 28, 7, 4, 2, 35, 21, 13, 13, 35, 21};
    vector<int> right = {1, 25, 17, 33, 3, 20, 46, 9, 44, 48, 18, 8, 6, 33, 29, 31, 9, 35, 22, 49, 17, 11, 22, 25, 25, 39, 10, 1, 25, 23, 12, 21, 16, 13, 43, 20, 4, 5, 27, 37, 29, 38, 18, 22, 18, 5, 31, 7, 35};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> left = {16, 32, 37, 34, 4, 36, 26, 19, 16, 3, 42, 18, 25, 38, 40, 46, 4, 7, 39, 27, 49, 32, 2, 49, 29, 27, 42, 25, 37, 19, 32, 6, 37, 36, 1, 24, 21, 30, 1, 9, 25, 42, 26, 47, 7, 36, 37, 11, 45, 48};
    vector<int> right = {6, 35, 23, 22, 43, 21, 35, 2, 49, 40, 40, 13, 48, 20, 6, 50, 13, 27, 11, 16, 12, 12, 28, 39, 30, 4, 11, 11, 16, 49, 33, 27, 7, 19, 10, 18, 20, 19, 25, 48, 20, 14, 39, 15, 17, 21, 26, 4, 13, 48};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> left = {999};
    vector<int> right = {1000};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> left = {1000};
    vector<int> right = {999};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> left = {1, 2, 3, 4, 5, 6, 7};
    vector<int> right = {2, 4, 6, 3, 7, 5, 8};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> left = {1, 1, 3};
    vector<int> right = {2, 3, 4};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> left = {1, 1, 2};
    vector<int> right = {1, 2, 3};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> left = {1, 2, 3};
    vector<int> right = {2, 3, 4};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> left = {1, 3, 5};
    vector<int> right = {3, 5, 7};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> left = {1, 1};
    vector<int> right = {1, 2};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> left = {1, 2, 3, 4, 5};
    vector<int> right = {2, 3, 4, 5, 6};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> left = {1, 1, 2, 3};
    vector<int> right = {1, 2, 3, 4};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> left = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> right = {1, 2, 2, 2, 2, 2, 2, 2, 2};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> left = {1, 3, 1, 4};
    vector<int> right = {2, 1, 1, 1};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> left = {1, 1, 2, 2, 3, 3};
    vector<int> right = {1, 2, 3, 4, 5, 6};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> left = {1, 3};
    vector<int> right = {3, 5};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
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
    vector<int> left = {3, 1, 2};
    vector<int> right = {1, 1, 3};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> left = {1, 2, 3, 4};
    vector<int> right = {1, 1, 1, 1};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> left = {1, 1, 2, 3};
    vector<int> right = {1, 1, 3, 4};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> left = {1, 2};
    vector<int> right = {1, 1};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> left = {1, 1, 1, 1, 1, 2};
    vector<int> right = {1, 2, 3, 4, 5, 9};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> left = {2, 3, 3, 4, 5};
    vector<int> right = {1, 3, 4, 5, 7};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> left = {1, 2};
    vector<int> right = {2, 3};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> left = {1, 1, 1, 1};
    vector<int> right = {1, 1, 1, 1};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> left = {1, 2, 2, 3, 4};
    vector<int> right = {1, 2, 3, 4, 4};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> left = {1, 1, 2};
    vector<int> right = {2, 2, 3};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> left = {2, 2, 4, 5};
    vector<int> right = {1, 2, 3, 4};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> left = {3, 3, 3};
    vector<int> right = {1, 2, 1};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> left = {1, 1, 1, 3, 4};
    vector<int> right = {1, 1, 2, 2, 3};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> left = {2, 1000, 12, 111, 222, 200};
    vector<int> right = {12, 121, 111, 200, 211, 222};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> left = {999, 232};
    vector<int> right = {231, 999};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> left = {1, 1, 4, 2, 2};
    vector<int> right = {1, 3, 2, 4, 2};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> left = {999, 300, 999};
    vector<int> right = {200, 999, 300};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> left = {1, 2, 3};
    vector<int> right = {1, 2, 1};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> left = {1, 1, 1, 1, 1};
    vector<int> right = {5, 5, 5, 5, 5};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> left = {1, 3};
    vector<int> right = {2, 2};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> left = {1, 2, 2, 2};
    vector<int> right = {2, 2, 2, 1};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> left = {1, 2, 3, 4, 5, 6, 7};
    vector<int> right = {2, 4, 6, 3, 7, 5, 8};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> left = {1, 1, 3};
    vector<int> right = {2, 3, 4};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> left = {1, 1, 2};
    vector<int> right = {1, 2, 3};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
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
    vector<int> left = {1, 2, 3};
    vector<int> right = {2, 3, 4};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
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
    vector<int> left = {1, 3, 5};
    vector<int> right = {3, 5, 7};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> left = {1, 1};
    vector<int> right = {1, 2};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> left = {1, 2, 3, 4, 5};
    vector<int> right = {2, 3, 4, 5, 6};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> left = {1, 1, 2, 3};
    vector<int> right = {1, 2, 3, 4};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> left = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> right = {1, 2, 2, 2, 2, 2, 2, 2, 2};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> left = {1, 3, 1, 4};
    vector<int> right = {2, 1, 1, 1};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> left = {1, 1, 2, 2, 3, 3};
    vector<int> right = {1, 2, 3, 4, 5, 6};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> left = {1, 3};
    vector<int> right = {3, 5};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> left = {3, 1, 2};
    vector<int> right = {1, 1, 3};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> left = {1, 2, 3, 4};
    vector<int> right = {1, 1, 1, 1};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> left = {1, 1, 2, 3};
    vector<int> right = {1, 1, 3, 4};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> left = {1, 2};
    vector<int> right = {1, 1};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> left = {1, 1, 1, 1, 1, 2};
    vector<int> right = {1, 2, 3, 4, 5, 9};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> left = {2, 3, 3, 4, 5};
    vector<int> right = {1, 3, 4, 5, 7};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> left = {1, 2};
    vector<int> right = {2, 3};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> left = {1, 1, 1, 1};
    vector<int> right = {1, 1, 1, 1};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> left = {1, 2, 2, 3, 4};
    vector<int> right = {1, 2, 3, 4, 4};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> left = {1, 1, 2};
    vector<int> right = {2, 2, 3};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> left = {2, 2, 4, 5};
    vector<int> right = {1, 2, 3, 4};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> left = {3, 3, 3};
    vector<int> right = {1, 2, 1};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> left = {1, 1, 1, 3, 4};
    vector<int> right = {1, 1, 2, 2, 3};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> left = {2, 1000, 12, 111, 222, 200};
    vector<int> right = {12, 121, 111, 200, 211, 222};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> left = {999, 232};
    vector<int> right = {231, 999};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> left = {1, 1, 4, 2, 2};
    vector<int> right = {1, 3, 2, 4, 2};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
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
    vector<int> left = {999, 300, 999};
    vector<int> right = {200, 999, 300};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
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
    vector<int> left = {1, 2, 3};
    vector<int> right = {1, 2, 1};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> left = {1, 1, 1, 1, 1};
    vector<int> right = {5, 5, 5, 5, 5};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> left = {1, 3};
    vector<int> right = {2, 2};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> left = {1, 2, 2, 2};
    vector<int> right = {2, 2, 2, 1};
    BootsExchange* pObj = new BootsExchange();
    clock_t start = clock();
    int result = pObj->leastAmount(left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=13298470&rd=9987&pm=6081
********************************************************************************
/*
Don't try to challenge me.. you will see why!!
*/
#include <string>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <functional>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
using namespace std;
int v[10000];
class BootsExchange {
  public:
  int leastAmount(vector <int> left, vector <int> right) {
  int ret=0;
  int i, j;
  for (i=0; i<left.size(); i++) v[left[i]]++;
  for (j=0; j<right.size(); j++) v[right[j]]--;
  for (i=1; i<=1000; i++) if (v[i] > 0) ret+=v[i];
  
 
  return ret;
  }
};
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/