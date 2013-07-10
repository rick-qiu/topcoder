/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6139
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

class PackingParts {
public:
    int pack(vector<int> partSizes, vector<int> boxSizes);
};

int PackingParts::pack(vector<int> partSizes, vector<int> boxSizes) {
    int ret;
    return ret;
}


int test0() {
    vector<int> partSizes = {3};
    vector<int> boxSizes = {3};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
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
    vector<int> partSizes = {73, 74};
    vector<int> boxSizes = {73, 74};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
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
    vector<int> partSizes = {28, 50, 72};
    vector<int> boxSizes = {28, 50, 72};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> partSizes = {2, 2, 2};
    vector<int> boxSizes = {1, 2, 2, 3};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> partSizes = {1, 5};
    vector<int> boxSizes = {2, 5};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> partSizes = {10, 10, 10, 10};
    vector<int> boxSizes = {9, 9, 9, 10, 10, 10};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> partSizes = {1, 1, 1, 1};
    vector<int> boxSizes = {1, 2, 2, 3, 6, 7};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> partSizes = {1, 1, 1, 1};
    vector<int> boxSizes = {2, 3, 6};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
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
    vector<int> partSizes = {10, 32, 46, 55, 55, 84, 100};
    vector<int> boxSizes = {15, 31, 34, 46, 59, 68, 83, 99};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> partSizes = {1};
    vector<int> boxSizes = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> partSizes = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> boxSizes = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> partSizes = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> boxSizes = {1};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> partSizes = {1, 12, 13, 15, 22, 24, 24, 26, 26, 26, 27, 28, 29, 30, 32, 33, 36, 42, 60, 64, 64, 65, 66, 67, 70, 70, 70, 72, 77, 84, 84, 86, 88, 88, 90, 91, 92, 94, 97, 99};
    vector<int> boxSizes = {18, 18, 24, 26, 27, 28, 36, 46, 51, 64, 83, 86, 100};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
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
    vector<int> partSizes = {2, 2, 3, 4, 4, 7, 11, 17, 17, 17, 18, 20, 20, 23, 24, 25, 26, 26, 29, 30, 33, 42, 44, 45, 46, 53, 54, 54, 55, 56, 59, 61, 64, 70, 71, 72, 73, 77, 81, 85, 86, 86, 88, 90, 96, 96, 97, 100};
    vector<int> boxSizes = {4, 5, 6, 8, 10, 11, 11, 13, 16, 16, 19, 21, 22, 23, 23, 34, 39, 40, 41, 42, 43, 46, 48, 48, 54, 59, 60, 61, 62, 64, 64, 64, 65, 68, 69, 69, 71, 76, 79, 83, 87, 87, 88, 89, 94, 100};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> partSizes = {4, 7, 8, 9, 10, 12, 14, 16, 16, 16, 18, 27, 30, 31, 33, 37, 38, 38, 43, 43, 44, 47, 53, 53, 53, 58, 59, 60, 60, 62, 67, 67, 71, 73, 82, 85, 87, 88, 98, 99, 99};
    vector<int> boxSizes = {1, 6, 6, 9, 11, 19, 27, 33, 40, 40, 40, 46, 47, 49, 52, 53, 59, 60, 62, 65, 67, 70, 71, 72, 72, 72, 73, 74, 74, 76, 79, 99};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> partSizes = {2, 4, 6, 7, 10, 12, 20, 23, 24, 28, 28, 29, 33, 34, 41, 45, 48, 56, 56, 60, 61, 63, 66, 67, 69, 73, 73, 74, 75, 76, 78, 82, 83, 88, 88, 92, 94, 95, 97, 97, 99, 99, 100, 100};
    vector<int> boxSizes = {3, 5, 6, 14, 21, 22, 22, 25, 26, 30, 31, 31, 32, 33, 39, 42, 43, 44, 44, 50, 52, 54, 54, 55, 56, 56, 56, 59, 65, 67, 69, 70, 72, 76, 82, 84, 86, 86, 87, 94, 99, 99};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> partSizes = {2, 3, 4, 5, 5, 5, 12, 14, 14, 14, 15, 16, 17, 18, 20, 22, 22, 29, 37, 40, 45, 47, 54, 56, 58, 59, 59, 63, 66, 66, 70, 77, 77, 78, 86, 89, 91};
    vector<int> boxSizes = {17, 26};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> partSizes = {11, 12, 15, 19, 20, 20, 27, 35, 41, 41, 42, 43, 46, 46, 47, 49, 50, 50, 52, 60, 60, 61, 63, 63, 66, 69, 69, 73, 73, 81, 88, 94};
    vector<int> boxSizes = {1, 2, 4, 14, 14, 16, 23, 24, 29, 30, 30, 30, 30, 31, 39, 39, 41, 43, 44, 50, 51, 57, 58, 61, 68, 69, 76, 77, 80, 92, 99};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> partSizes = {1, 9, 17, 19, 20, 20, 27, 29, 30, 33, 37, 39, 45, 46, 47, 48, 51, 52, 56, 61, 62, 69, 75, 76, 76, 77, 88, 97, 97};
    vector<int> boxSizes = {1, 13, 18, 18, 21, 22, 22, 36, 37, 53, 54, 55, 56, 64, 80, 84, 91};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
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
    vector<int> partSizes = {4, 5, 5, 5, 7, 7, 8, 16, 17, 18, 18, 21, 24, 26, 27, 31, 31, 32, 32, 33, 35, 35, 38, 41, 46, 47, 48, 54, 55, 56, 56, 64, 66, 67, 69, 69, 71, 72, 73, 74, 74, 76, 76, 81, 82, 84, 85, 90, 92, 100};
    vector<int> boxSizes = {5, 19, 26, 27, 29, 36, 38, 39, 39, 43, 56, 72, 77, 87, 88, 90};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> partSizes = {1, 1, 6, 7, 9, 16, 20, 23, 25, 34, 39, 40, 41, 41, 41, 42, 44, 47, 48, 54, 54, 58, 58, 61, 62, 64, 65, 67, 68, 71, 72, 75, 77, 80, 80, 82, 85, 97, 98, 99, 100, 100};
    vector<int> boxSizes = {11, 15, 18, 20, 24, 29, 33, 35, 37, 38, 44, 57, 58, 62, 66, 70, 72, 77, 86, 86, 91, 92, 95, 98, 100};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> partSizes = {5, 15, 17, 21, 37, 38, 41, 59, 64, 73, 75, 89, 92, 95, 100, 100};
    vector<int> boxSizes = {14, 22, 26, 63, 73, 78, 83, 86, 92, 96};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> partSizes = {42, 45, 46, 50, 71, 86};
    vector<int> boxSizes = {16, 21, 28, 75, 94};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> partSizes = {4, 4, 13, 14, 38, 46, 61, 69, 90};
    vector<int> boxSizes = {6, 97};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> partSizes = {3, 4, 4, 5, 6, 8, 8, 10, 12, 13, 18, 26, 28, 30, 31, 32, 33, 34, 35, 36, 42, 44, 48, 52, 57, 59, 60, 63, 64, 64, 66, 66, 68, 70, 71, 73, 77, 78, 80, 80, 89, 91, 92, 95, 95, 97, 98};
    vector<int> boxSizes = {6, 7, 7, 12, 22, 29, 39, 42, 44, 47, 58, 60, 61, 65, 75, 88, 89, 90, 91, 92, 95, 96};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> partSizes = {3, 5, 14, 14, 19, 22, 28, 33, 37, 57, 63, 64, 65, 68, 73, 74, 84, 85, 87, 90, 96};
    vector<int> boxSizes = {2, 6, 6, 7, 8, 10, 14, 17, 17, 17, 19, 20, 25, 32, 32, 32, 37, 37, 39, 41, 45, 46, 48, 49, 52, 53, 56, 60, 60, 64, 71, 71, 72, 74, 74, 74, 75, 76, 81, 82, 82, 84, 87, 92, 93, 94, 98, 99, 100};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> partSizes = {2, 6, 11, 13, 20, 22, 26, 31, 38, 42, 49, 53, 57, 59, 60, 71, 76, 94, 99, 99};
    vector<int> boxSizes = {3, 5, 14, 15, 23, 26, 36, 41, 47, 51, 51, 55, 56, 60, 67, 68, 68, 71, 75, 75, 76, 78, 80, 83, 87, 92, 96, 97};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> partSizes = {22, 24, 41, 45, 53, 68, 68, 83, 98};
    vector<int> boxSizes = {11, 13, 13, 17, 18, 20, 22, 32, 40, 47, 49, 51, 53, 54, 55, 56, 65, 68, 74, 78, 78, 79, 81, 82, 91, 95};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> partSizes = {4, 6, 12, 12, 14, 16, 16, 21, 28, 28, 31, 37, 40, 45, 46, 46, 48, 49, 52, 55, 56, 57, 57, 58, 59, 61, 62, 63, 64, 66, 68, 76, 77, 78, 87, 88, 88, 89, 94, 95, 97};
    vector<int> boxSizes = {1, 8, 19, 19, 22, 24, 24, 26, 31, 32, 35, 36, 36, 36, 37, 40, 41, 43, 49, 53, 53, 54, 56, 56, 63, 65, 66, 67, 67, 67, 71, 72, 76, 82, 83, 88, 89, 91, 94, 97, 100, 100};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> partSizes = {57, 66};
    vector<int> boxSizes = {1, 3, 9, 9, 14, 15, 16, 17, 22, 28, 29, 31, 31, 32, 33, 35, 39, 39, 45, 46, 50, 54, 54, 54, 56, 60, 61, 69, 71, 73, 75, 75, 78, 79, 83, 84, 86, 86, 93, 94, 99};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
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
    vector<int> partSizes = {2, 2, 5, 6, 10, 10, 12, 12, 14, 14, 15, 17, 20, 22, 31, 39, 43, 44, 45, 68, 76, 84, 90, 93, 93, 94, 99};
    vector<int> boxSizes = {1, 2, 2, 3, 5, 10, 15, 15, 16, 22, 22, 29, 31, 36, 47, 49, 51, 51, 53, 53, 57, 59, 60, 63, 67, 69, 70, 71, 72, 73, 79, 87, 88, 89, 91, 92, 94};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> partSizes = {1, 2, 6, 15, 24, 28, 29, 33, 34, 35, 36, 38, 45, 48, 49, 55, 61, 61, 64, 75, 76, 82, 84, 89, 93};
    vector<int> boxSizes = {3, 12, 12, 12, 16, 17, 21, 22, 27, 30, 34, 35, 36, 37, 38, 41, 48, 53, 56, 56, 58, 58, 58, 59, 62, 62, 69, 70, 72, 80, 83, 84, 85, 88, 92, 92, 99};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> partSizes = {1, 2, 3, 20, 21, 23, 25, 32, 34, 41, 55, 62, 68, 74, 77, 84, 90, 92};
    vector<int> boxSizes = {1, 2, 9, 15, 18, 23, 25, 27, 32, 40, 49, 57, 58, 60, 64, 72, 79, 90, 93, 94, 97};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> partSizes = {2, 4, 8, 15, 16, 18, 19, 20, 22, 25, 25, 27, 28, 28, 32, 36, 42, 49, 62, 64, 66, 68, 71, 72, 72, 74, 75, 77, 77, 77, 86, 87, 97};
    vector<int> boxSizes = {3, 4, 5, 5, 5, 6, 6, 7, 8, 12, 14, 16, 17, 21, 31, 34, 39, 44, 45, 45, 46, 57, 58, 58, 61, 65, 69, 73, 76, 78, 79, 86, 87, 88, 89, 93, 96};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> partSizes = {7, 7, 8, 8, 11, 11, 18, 22, 28, 37, 37, 38, 45, 46, 53, 64, 65, 70, 74, 78, 90, 90, 94, 97, 98};
    vector<int> boxSizes = {26, 63, 63, 67, 75, 96, 96};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> partSizes = {1, 16, 16, 65, 68, 85, 99};
    vector<int> boxSizes = {37, 41, 48, 63, 80, 91};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> partSizes = {2, 4, 6, 6, 9, 9, 16, 16, 17, 21, 21, 22, 22, 23, 30, 36, 39, 41, 42, 42, 43, 56, 65, 66, 66, 66, 67, 68, 69, 70, 72, 76, 79, 81, 88, 88, 89, 90, 92, 93};
    vector<int> boxSizes = {4, 6, 9, 11, 12, 20, 20, 23, 25, 28, 30, 36, 37, 39, 39, 44, 44, 48, 50, 59, 60, 61, 66, 74, 78, 82, 85, 89, 90, 93, 98};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> partSizes = {1, 3, 10, 23, 26, 27, 31, 58, 58, 66, 67, 69, 72, 84, 86, 98, 98, 99};
    vector<int> boxSizes = {1, 2, 3, 8, 18, 18, 22, 25, 32, 38, 41, 58, 73, 73, 76, 82, 84, 94};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> partSizes = {3, 3, 7, 12, 13, 14, 19, 21, 23, 27, 27, 34, 34, 36, 40, 42, 52, 54, 55, 63, 67, 71, 71, 72, 75, 79, 91, 92, 94};
    vector<int> boxSizes = {5, 8, 12, 16, 21, 22, 26, 40, 49, 50, 54, 56, 56, 58, 67, 68, 70, 76, 76, 86, 86, 88, 91, 91, 98, 99, 100};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> partSizes = {6, 15, 19, 34, 35, 38, 73, 96, 96};
    vector<int> boxSizes = {10, 15, 25, 32, 32, 37, 48, 63, 66, 89, 93, 96, 98};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> partSizes = {26, 54, 59, 65, 73, 83, 91, 93, 93};
    vector<int> boxSizes = {2, 10, 12, 13, 16, 33, 33, 33, 36, 37, 37, 40, 44, 48, 48, 50, 55, 58, 58, 59, 60, 64, 65, 65, 67, 71, 73, 76, 77, 78, 78, 82, 83, 83, 85, 85, 86, 88, 88, 89, 91, 93, 94, 95};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> partSizes = {19, 32, 67, 67, 76, 84, 85, 97};
    vector<int> boxSizes = {2, 6, 17, 19, 20, 21, 25, 27, 27, 33, 35, 36, 37, 46, 50, 52, 54, 55, 56, 56, 56, 64, 64, 72, 74, 74, 75, 84, 86, 87, 88, 89, 91, 94, 98};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> partSizes = {1, 4, 5, 11, 13, 14, 18, 21, 29, 30, 32, 35, 36, 41, 46, 47, 49, 50, 50, 51, 52, 54, 55, 58, 62, 63, 65, 65, 71, 72, 76, 78, 80, 83, 84, 84, 91, 94, 100};
    vector<int> boxSizes = {5, 6, 9, 12, 15, 22, 23, 29, 47, 50, 59, 61, 73, 74, 78, 88, 89, 90};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> partSizes = {1, 9, 14, 17, 25, 31, 34, 35, 38, 42, 45, 60, 62, 69, 71, 73, 82, 90, 91};
    vector<int> boxSizes = {3, 5, 10, 11, 11, 12, 12, 14, 17, 18, 29, 37, 38, 40, 42, 45, 48, 52, 56, 56, 62, 63, 64, 65, 68, 70, 70, 75, 79, 81, 83, 83, 84, 86, 86, 91, 93, 95, 96, 96};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> partSizes = {1, 5, 8, 11, 13, 18, 19, 23, 24, 24, 27, 27, 29, 47, 48, 53, 58, 60, 61, 65, 68, 72, 73, 77, 79, 85, 86, 88, 92, 95, 98, 99, 100};
    vector<int> boxSizes = {2, 2, 4, 9, 12, 13, 23, 26, 26, 26, 28, 39, 40, 43, 44, 47, 47, 48, 48, 52, 53, 54, 55, 59, 61, 64, 67, 68, 68, 75, 76, 79, 85, 86, 88, 89, 91, 95};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> partSizes = {4, 7, 7, 7, 12, 13, 16, 16, 16, 20, 22, 28, 28, 29, 30, 39, 40, 42, 43, 43, 45, 49, 50, 53, 55, 57, 60, 60, 61, 61, 61, 64, 66, 67, 70, 71, 71, 75, 75, 77, 81, 81, 91, 91, 95, 96, 99};
    vector<int> boxSizes = {2, 3, 4, 5, 15, 16, 19, 19, 26, 34, 38, 43, 58, 69, 69, 73, 79, 81, 86, 88, 95};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> partSizes = {1, 3, 8, 8, 9, 15, 15, 22, 26, 30, 32, 33, 34, 34, 35, 36, 36, 37, 38, 42, 46, 46, 54, 55, 62, 63, 65, 65, 66, 66, 66, 68, 75, 77, 79, 86, 86, 91, 96, 97, 97, 97, 99};
    vector<int> boxSizes = {1, 2, 6, 6, 8, 11, 11, 13, 17, 18, 22, 22, 24, 25, 26, 33, 33, 37, 38, 42, 45, 45, 52, 52, 55, 57, 59, 61, 64, 64, 67, 69, 71, 75, 81, 88, 88, 90, 93, 97, 98, 98, 99, 100, 100};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> partSizes = {6, 7, 13, 17, 22, 46, 47, 51, 52, 76, 80, 89, 90, 93, 94, 96, 96, 96};
    vector<int> boxSizes = {3, 4, 5, 6, 11, 13, 15, 19, 19, 22, 23, 27, 29, 32, 34, 36, 38, 39, 40, 41, 46, 47, 49, 53, 53, 53, 54, 57, 66, 77, 79, 79, 79, 82, 83, 89, 92, 98, 100, 100};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> partSizes = {5, 7, 9, 10, 12, 17, 20, 20, 22, 24, 25, 30, 35, 36, 38, 39, 41, 43, 46, 51, 53, 54, 54, 64, 66, 68, 69, 70, 70, 71, 72, 74, 76, 81, 81, 82, 83, 87, 88, 89, 89, 93, 96, 100};
    vector<int> boxSizes = {4, 4, 6, 7, 9, 19, 19, 20, 21, 22, 24, 24, 25, 27, 31, 32, 40, 42, 42, 45, 46, 46, 47, 47, 50, 52, 55, 57, 58, 58, 58, 59, 60, 63, 67, 68, 69, 70, 73, 78, 79, 86, 86, 88, 89, 90, 91, 95, 100};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> partSizes = {3, 4, 5, 5, 6, 9, 9, 11, 15, 17, 17, 23, 24, 26, 30, 32, 33, 34, 38, 40, 41, 44, 50, 53, 53, 55, 58, 63, 67, 75, 76, 77, 84, 84, 86, 95, 97};
    vector<int> boxSizes = {6, 10, 14, 20, 24, 36, 38, 44, 46, 47, 75, 76, 82, 86, 90, 94, 96};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> partSizes = {1, 8, 21, 22, 24, 26, 27, 32, 34, 36, 38, 41, 42, 52, 54, 58, 59, 60, 61, 66, 70, 72, 73, 77, 79, 85, 85, 99, 99};
    vector<int> boxSizes = {4, 6, 35, 75, 84};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> partSizes = {1, 4, 5, 7, 20, 24, 25, 36, 43, 50, 59, 65, 65, 71, 74, 74, 86};
    vector<int> boxSizes = {4, 9, 10, 17, 18, 22, 28, 51, 54, 57, 60, 61, 74, 78, 79, 79, 82, 83, 86, 93, 94, 97, 100};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> partSizes = {3, 3, 3, 4, 18, 25, 46, 52, 53, 55, 59, 66, 68, 69, 71, 72, 80, 82, 83};
    vector<int> boxSizes = {1, 2, 5, 8, 11, 11, 12, 12, 16, 18, 20, 22, 24, 38, 38, 50, 50, 51, 54, 61, 61, 62, 64, 65, 66, 68, 73, 76, 79, 87, 97};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> partSizes = {6, 10, 12, 17, 28, 37, 39, 39, 40, 43, 45, 55, 61, 66, 75, 80, 83, 89, 92, 97, 98};
    vector<int> boxSizes = {5, 5, 8, 9, 11, 16, 18, 20, 20, 22, 24, 27, 28, 32, 32, 33, 35, 35, 35, 38, 38, 41, 47, 47, 51, 52, 54, 57, 58, 58, 60, 65, 66, 66, 67, 80, 81, 82, 86, 89, 91, 92, 95};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> partSizes = {2, 8, 10, 12, 13, 16, 18, 19, 23, 24, 26, 26, 28, 35, 36, 37, 42, 43, 45, 61, 66, 67, 69, 70, 71, 72, 76, 84, 87, 88, 90, 92};
    vector<int> boxSizes = {17, 23, 25, 28, 33, 68, 69, 88, 88, 100};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> partSizes = {1, 2, 3, 4, 7, 7, 10, 13, 14, 14, 17, 22, 25, 29, 30, 30, 31, 36, 36, 40, 40, 44, 46, 47, 49, 53, 53, 55, 55, 57, 62, 63, 68, 69, 69, 70, 71, 72, 75, 78, 79, 80, 82, 86, 90, 92, 95, 99};
    vector<int> boxSizes = {9, 11, 18, 18, 18, 22, 39, 39, 42, 55, 57, 65, 67, 84, 93, 98};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> partSizes = {4, 5, 10, 17, 19, 29, 33, 36, 38, 42, 44, 45, 46, 49, 52, 53, 53, 56, 59, 60, 62, 63, 67, 74, 81, 83, 85, 90, 94, 94, 95, 97};
    vector<int> boxSizes = {3, 5, 5, 8, 10, 14, 18, 18, 21, 22, 29, 31, 34, 35, 39, 39, 40, 43, 45, 45, 50, 53, 57, 60, 63, 63, 67, 71, 71, 71, 72, 73, 76, 77, 79, 85, 92, 95, 96, 97};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> partSizes = {10, 10, 11, 16, 19, 19, 20, 21, 22, 24, 27, 27, 30, 30, 31, 37, 37, 38, 40, 41, 46, 47, 51, 56, 60, 69, 72, 72, 74, 75, 78, 80, 84, 96, 97, 97, 99};
    vector<int> boxSizes = {3, 3, 4, 9, 14, 15, 16, 16, 22, 31, 37, 42, 42, 44, 45, 52, 56, 66, 69, 83, 90, 90, 100};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> partSizes = {1, 3, 4, 9, 13, 13, 14, 14, 14, 17, 18, 19, 23, 28, 30, 33, 34, 40, 43, 51, 53, 53, 55, 56, 58, 59, 62, 62, 65, 73, 76, 76, 78, 85, 86, 87, 87, 91, 91};
    vector<int> boxSizes = {2, 2, 3, 3, 12, 16, 20, 25, 26, 27, 28, 30, 31, 31, 32, 34, 38, 43, 43, 43, 44, 47, 51, 58, 68, 68, 69, 69, 72, 82, 84, 85, 86, 91, 92, 93, 96, 96};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> partSizes = {1, 1, 7, 8, 11, 13, 14, 18, 20, 23, 26, 27, 30, 32, 35, 38, 39, 40, 40, 42, 43, 43, 44, 45, 47, 48, 49, 52, 57, 60, 61, 62, 62, 65, 66, 68, 72, 73, 76, 80, 81, 84, 85, 92, 93, 95, 98};
    vector<int> boxSizes = {10, 21, 52, 64, 72};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> partSizes = {4, 6, 7, 9, 11, 11, 16, 17, 18, 20, 27, 37, 42, 46, 50, 51, 55, 59, 61, 63, 67, 70, 70, 84, 86, 90, 91, 95, 96, 98, 98};
    vector<int> boxSizes = {1, 2, 7, 11, 14, 14, 26, 26, 27, 27, 29, 33, 33, 34, 36, 36, 37, 43, 43, 45, 46, 47, 55, 56, 57, 63, 66, 68, 70, 72, 73, 73, 74, 77, 77, 79, 80, 80, 81, 85, 85, 87, 93, 97, 97, 99};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> partSizes = {1, 6, 9, 14, 15, 30, 30, 35, 48, 50, 51, 53, 53, 55, 56, 58, 59, 61, 62, 66, 69, 74, 75, 81, 82, 84, 85, 85, 87, 89, 92, 94, 96};
    vector<int> boxSizes = {3, 5, 5, 5, 7, 14, 14, 17, 25, 31, 32, 36, 39, 39, 41, 41, 57, 57, 61, 64, 72, 84, 85, 88, 90, 93, 94, 95, 96};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> partSizes = {1, 1};
    vector<int> boxSizes = {1, 1};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> partSizes = {10, 32, 46, 55, 55, 84, 100};
    vector<int> boxSizes = {15, 31, 34, 46, 59, 68, 83, 99};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> partSizes = {1, 1, 1, 1};
    vector<int> boxSizes = {2, 3, 6};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> partSizes = {3};
    vector<int> boxSizes = {1, 10};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
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
    vector<int> partSizes = {10};
    vector<int> boxSizes = {100};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> partSizes = {2, 2, 2};
    vector<int> boxSizes = {3};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
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
    vector<int> partSizes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> boxSizes = {2, 2, 2};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> partSizes = {10, 10, 10, 10};
    vector<int> boxSizes = {9, 9, 9, 10, 10, 10};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
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
    vector<int> partSizes = {2, 4};
    vector<int> boxSizes = {6};
    PackingParts* pObj = new PackingParts();
    clock_t start = clock();
    int result = pObj->pack(partSizes, boxSizes);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10393569&rd=9818&pm=6139
********************************************************************************
#include <iostream> 
#include <iomanip> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <list> 
#include <queue> 
#include <map> 
#include <set> 
#include <algorithm> 
#include <cmath> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
using namespace std; 
 
#define rep(i,n) for (int i=0; i<n; i++) 
#define forr(i,l,r) for (int i=l; i<r; i++) 
#define forv(i,v) rep(i,v.size()) 
#define all(v) v.begin(),v.end() 
#define pb push_back 
#define mp make_pair 
 
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef vector<string> vs; 
typedef vector<vs> vvs; 
typedef long long lint; 
 
struct PackingParts { 
  static int pack(vector <int> partSizes, vector <int> boxSizes) 
  { 
    int res = 0; 
    int i, j; 
    i = j = 0; 
    while (i<partSizes.size() && j<boxSizes.size()) { 
      if (partSizes[i] <= boxSizes[j]) { 
        res++; i++; j++; 
      } else 
        j++; 
    } 
    return res; 
  } 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/