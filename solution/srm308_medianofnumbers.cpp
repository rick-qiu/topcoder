/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6528
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

class MedianOfNumbers {
public:
    int findMedian(vector<int> numbers);
};

int MedianOfNumbers::findMedian(vector<int> numbers) {
    int ret;
    return ret;
}


int test0() {
    vector<int> numbers = {1, 4, 2, 5, 7};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
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
    vector<int> numbers = {1, 5, 8, 3};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
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
    vector<int> numbers = {7};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> numbers = {7, 12};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> numbers = {66, 53, 47, 86, 18, 21, 97, 92, 15};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> numbers = {32, 54, 27, 4, 69, 96, 73, 1, 100, 15, 21};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> numbers = {80, 50, 60, 52, 89, 68, 91, 63, 5, 40, 4, 22, 25, 97, 76, 32, 11, 61, 54, 56, 59, 10, 96, 75, 18, 42, 86, 93, 43, 87, 9, 45, 15};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> numbers = {31, 49, 60, 80, 47, 95, 44, 21, 28, 64, 54, 56, 50, 45, 51};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> numbers = {75, 83, 55, 6, 54, 20, 90, 52, 33, 12};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
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
    vector<int> numbers = {37, 21, 86, 97, 34, 26, 54, 92, 88, 19, 63, 27, 93, 87, 30, 22, 12, 84, 41, 99, 28, 94, 68, 7, 74, 70, 62, 85, 25, 59, 67, 42};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> numbers = {15, 83, 72, 51, 89, 86, 17, 68, 26, 46, 73, 97, 90, 92, 60, 3, 100, 9, 64, 79, 4, 52, 66, 6, 8, 40, 13, 56, 32, 78, 44, 31, 98, 63, 96, 71, 76, 57, 39};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> numbers = {68, 26, 88, 37, 72, 42, 99, 82, 57, 55, 48, 31, 25, 69, 97, 1, 71, 2, 41, 15, 52, 19, 77, 12};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> numbers = {42, 98, 79, 43};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> numbers = {59, 95, 51, 12, 62, 100, 87, 40, 13, 49, 82, 67, 35, 94};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> numbers = {73, 63, 87, 60, 9, 95, 38, 28, 85, 56, 59, 24, 2, 66, 79, 92, 18, 62, 15, 43, 48, 22, 54, 16, 78, 6, 58, 86, 37};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> numbers = {1, 63, 44, 43, 85, 10, 3, 77, 99, 69, 34, 49, 15, 28, 91, 41};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
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
    vector<int> numbers = {53, 28, 1, 89, 93, 72, 60, 10, 19, 49, 61, 58, 44, 56, 23, 13, 29, 92, 94, 11, 38, 27, 97};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> numbers = {44, 35, 2, 48, 99, 47, 86, 64, 62, 82, 94, 11, 22, 75, 42};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> numbers = {39, 19, 21, 30, 11, 27, 1, 22, 84, 24, 2, 38, 33, 29, 41, 91, 99, 46, 76, 98, 5, 9, 16, 66, 18, 36, 87, 70};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
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
    vector<int> numbers = {34, 86, 78, 72, 38, 9, 66, 93, 61, 70, 88, 19, 16, 76, 25, 39, 3, 85, 65};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> numbers = {83, 7, 77, 76, 71, 25, 13, 91, 55, 57, 9, 12, 65, 80, 98, 17, 19, 95, 93, 87, 82, 6, 59, 69, 78, 99, 73, 81, 79, 100, 11, 60, 34, 39, 42, 22};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
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
    vector<int> numbers = {61, 54, 23, 76, 35, 82, 6, 7, 43, 63, 56, 64, 53, 100, 59, 25, 46, 74, 69, 26, 57, 95, 50, 65, 66, 2};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> numbers = {14, 100, 4, 50, 31, 91, 86, 55, 84, 57, 92, 40, 99, 54, 72, 90, 36, 66};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
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
    vector<int> numbers = {99, 64, 49, 1, 97, 33, 90, 7, 17, 100, 85, 46, 89, 6, 56, 58, 28, 95, 53, 60, 22, 48, 8, 24, 70, 11, 34};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> numbers = {18, 46, 91, 97, 40, 57, 80, 73, 52, 31, 6, 60, 81, 3, 29, 20, 63, 93, 84, 35, 17, 71, 5, 23, 50, 45, 30, 94, 98, 76, 19, 65, 4, 37, 43, 89, 59, 78, 77};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> numbers = {81, 74, 36, 88, 59, 12, 51, 97, 84, 11, 14, 77, 41, 8, 56, 1, 3, 75, 67, 21, 48, 94};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> numbers = {55, 44, 62, 70, 45, 18, 96, 10, 25, 90, 29, 21, 48, 63, 40, 7, 28, 33, 75, 5, 65, 61, 23, 64};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> numbers = {42, 36, 99, 83, 95, 48, 33, 19, 27, 22, 39, 23, 100, 31, 29, 34, 25, 93, 37, 63, 61, 14, 41, 8, 24, 88, 6, 62, 20, 87};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
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
    vector<int> numbers = {94, 72, 82, 89, 8, 100, 88, 40, 32, 50, 59, 46, 74, 95, 71, 28, 24, 53, 87, 17, 60};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> numbers = {97, 88, 19, 56, 75, 96, 87, 33, 44, 80, 81, 27, 17, 72, 11, 64, 99, 42, 20, 47, 86, 6, 39, 10, 52, 22, 68, 62, 58, 94, 16, 26};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
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
    vector<int> numbers = {2, 21, 3, 90, 37, 46, 80, 98, 45, 81, 19, 10, 56, 27, 16, 30, 14, 69, 57, 66, 43, 28, 22, 35, 71, 48, 13, 24, 15, 6, 18, 29, 52, 79, 17, 86, 36, 8};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
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
    vector<int> numbers = {28, 22, 89, 56, 19, 69, 18, 93, 55, 31, 29, 40, 49, 34, 88, 32, 11, 24, 75, 7, 4, 17, 16};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
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
    vector<int> numbers = {20, 38, 51};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> numbers = {16, 28, 62, 64, 56, 41, 23, 39, 57, 76, 4, 87, 99, 97};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> numbers = {10, 27, 6, 13, 40, 39, 5, 94, 48, 82, 89, 93, 81, 33, 46, 9, 66, 67, 22, 51, 80, 88, 74, 30, 50, 71, 26, 91, 79, 19};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
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
    vector<int> numbers = {36, 13, 38, 59, 74, 21, 90, 4, 71, 73, 14, 62, 12, 17, 43, 39, 19, 52, 16, 55, 47, 68, 42, 95, 83, 86, 79, 9, 5, 30, 40, 61, 65, 20};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
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
    vector<int> numbers = {75, 51, 61, 69, 63, 67, 28, 98, 16, 42, 90, 96, 41, 14, 3, 2, 4, 34, 7, 94, 93, 9, 82, 58, 81, 84, 65, 83, 77, 38, 87, 32, 15};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> numbers = {14, 60, 21, 92, 62, 50, 55, 96, 73, 74, 38, 30, 2, 95, 19, 97, 12, 6, 85, 91, 8, 54, 47};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> numbers = {19, 26, 24, 81, 43, 73, 67, 66, 53, 47, 58, 79, 49, 6, 5, 86, 29, 7, 89, 52, 65, 63, 83};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> numbers = {73, 54, 88, 24, 91, 71, 90, 46, 9, 70, 29, 27, 86, 75, 93, 47, 74, 12, 39, 50, 6, 45};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
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
    vector<int> numbers = {19, 10, 51, 22, 70, 28, 6, 54, 48, 96, 87, 46, 61, 95, 91, 99, 52, 65, 5, 50, 97, 20, 69, 60, 29, 83, 42, 24, 8, 79, 30};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> numbers = {51, 21, 15, 7, 47, 37, 70, 43, 76, 25, 3, 32, 95, 26, 2, 56, 27, 92, 46, 24, 77, 36, 68, 65, 97, 50, 81, 62, 16, 34};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> numbers = {23, 77, 18, 20, 5, 72, 62, 54, 80, 41, 24, 4, 13, 91, 15, 38, 94, 45, 83, 90, 17, 51, 9, 50, 78, 92, 58};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> numbers = {49, 30};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
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
    vector<int> numbers = {77, 96, 22, 64, 39, 93, 52, 35, 43, 13, 69, 45, 19, 89, 17, 47, 87, 1, 6, 73, 12, 15, 3, 2, 79, 27};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
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
    vector<int> numbers = {77};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> numbers = {6, 36, 88, 60, 20, 64, 86, 40, 82, 46, 75, 99, 57, 32, 97, 47, 37, 76, 16, 69, 48};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> numbers = {13, 39, 86, 32, 55, 46, 98, 84, 9, 18, 90, 33, 43, 19, 34, 94, 56, 47, 36, 16, 82, 76, 97, 69, 17, 3, 54, 75, 14, 5, 73, 77, 10, 62, 27, 53, 45};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> numbers = {24, 40, 28, 27, 61, 39, 43, 57, 77, 22, 7, 71};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> numbers = {31, 61, 33, 83, 7, 32, 82, 41, 36, 86, 16, 47, 79, 96, 11};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> numbers = {44, 24, 36, 90, 35};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> numbers = {7, 37, 85, 31, 74, 76, 38, 59, 66, 77, 57, 81, 80, 4, 10, 61, 87};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> numbers = {96, 89, 37, 58, 98, 34, 57, 73, 64, 36, 53, 52, 48};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> numbers = {68, 11, 39, 20, 70, 18, 36, 19, 43, 1, 76, 99, 8, 57, 66, 64, 79, 72, 69, 12, 14, 78, 71, 77, 30, 95, 67, 61, 73, 16, 9, 62, 83, 13};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> numbers = {12, 86, 61, 10, 18, 70, 87, 1, 80, 96, 38, 75, 49, 88, 24, 97, 95, 11, 64, 13, 89, 58};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
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
    vector<int> numbers = {18, 48, 30, 47, 3, 58, 29, 1, 12, 11, 93, 20, 79, 85, 17, 38, 60, 50, 37, 44, 76, 9, 97, 7};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
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
    vector<int> numbers = {79, 36, 40, 64, 29, 92, 57, 35, 84, 97, 8, 94, 93, 37, 10, 96, 41, 47, 21, 6, 100, 63, 75, 13, 23, 54, 39, 69, 80, 78, 87, 5, 91, 14, 67, 33, 88, 1, 58, 74, 49, 27, 68, 2, 22, 70, 59, 45, 18, 73};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> numbers = {10, 88, 92, 48, 60, 53, 95, 50, 33, 25, 2, 85, 93, 54, 89, 55, 87, 81, 99, 4, 41, 74, 5, 58, 34, 39, 66, 31, 49, 79, 63, 69, 6, 26, 32, 15, 11, 84, 59, 67, 19, 42, 37, 17, 71, 23, 73, 14, 72, 38};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> numbers = {25, 58, 4, 26, 49, 91, 52, 67, 31, 2, 16, 9, 76, 64, 79, 56, 55, 61, 69, 22, 15, 97, 70, 30, 53, 8, 98, 82, 24, 40, 60, 57, 87, 59, 71, 18, 63, 42, 37, 20, 88, 13, 39, 77, 33, 14, 32, 48, 96, 51};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
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
    vector<int> numbers = {99, 32, 70, 8, 6, 28, 40, 21, 73, 4, 61, 48, 95, 56, 37, 34, 91, 36, 52, 90, 35, 11, 84, 92, 94, 59, 24, 63, 65, 29, 86, 47, 16, 12, 76, 14, 5, 60, 81, 27, 98, 87, 97, 67, 3, 30, 42, 17, 54, 50};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> numbers = {83, 78, 9, 27, 8, 86, 24, 66, 53, 64, 31, 11, 54, 47, 87, 26, 42, 7, 57, 19, 21, 39, 72, 30, 44, 40, 55, 34, 75, 48, 73, 74, 89, 41, 80, 69, 6, 43, 22, 15, 58, 68, 38, 97, 93, 96, 85, 13, 52, 79};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> numbers = {11, 45, 96, 59, 12, 28, 31, 15, 33, 46, 65, 44, 36, 5, 94, 86, 93, 51, 39, 37, 38, 53, 17, 70, 98, 43, 77, 57, 79, 24, 100, 64, 97, 20, 22, 13, 14, 78, 1, 73, 3, 56, 82, 23, 72, 76, 71, 25, 80, 60};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> numbers = {43, 75, 47, 13, 94, 21, 41, 52, 84, 93, 15, 81, 31, 70, 16, 26, 100, 23, 46, 72, 24, 91, 18, 98, 76, 57, 48, 50, 22, 62, 95, 9, 86, 92, 68, 97, 63, 85, 30, 25, 44, 36, 8, 37, 35, 19, 3, 80, 74, 55};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> numbers = {29, 5, 63, 89, 45, 50, 48, 31, 74, 70, 88, 91, 62, 12, 75, 11, 16, 100, 92, 41, 10, 82, 42, 54, 14, 55, 46, 64, 30, 38, 47, 71, 84, 27, 72, 22, 57, 81, 77, 15, 26, 59, 53, 18, 83, 20, 94, 69, 79, 80};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> numbers = {82, 37, 99, 42, 87, 62, 24, 78, 11, 60, 89, 5, 31, 83, 40, 77, 58, 68, 97, 64, 65, 7, 94, 48, 59, 57, 73, 61, 52, 88, 36, 90, 49, 21, 92, 6, 33, 86, 71, 39, 72, 63, 16, 32, 27, 46, 96, 91, 9, 70};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> numbers = {6, 66, 55, 72, 83, 23, 90, 15, 12, 16, 36, 1, 40, 79, 44, 86, 51, 82, 24, 25, 71, 94, 20, 27, 18, 29, 59, 34, 57, 73, 47, 45, 69, 96, 95, 84, 64, 3, 75, 22, 21, 7, 81, 14, 99, 74, 8, 98, 17, 60};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> numbers = {75, 66, 41, 87, 39, 24, 49, 92, 70, 83, 81, 69, 77, 63, 52, 100, 80, 84, 76, 42, 17, 12, 65, 5, 40, 8, 1, 67, 32, 72, 59, 36, 18, 56, 55, 31, 35, 48, 54, 23, 21, 6, 90, 62, 43, 34, 4, 2, 46, 45};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> numbers = {23, 54, 6, 14, 93, 57, 58, 51, 33, 19, 42, 80, 86, 72, 99, 35, 17, 29, 2, 59, 13, 16, 26, 11, 40, 76, 91, 97, 79, 83, 38, 8, 45, 81, 73, 71, 78, 100, 88, 69, 32, 50, 1, 77, 85, 4, 66, 47, 36, 44};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> numbers = {18, 4, 86, 34, 74, 71, 43, 23, 2, 52, 45, 11, 54, 26, 75, 19, 37, 13, 85, 39, 1, 72, 73, 81, 56, 53, 90, 15, 25, 79, 44, 47, 87, 5, 67, 70, 64, 89, 30, 6, 40, 80, 35, 58, 49, 83, 21, 78, 22, 46};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> numbers = {94, 97, 35, 22, 84, 72, 74, 64, 1, 33, 24, 27, 14, 93, 69, 40, 8, 18, 92, 86, 29, 78, 30, 23, 88, 63, 2, 50, 81, 91, 54, 99, 6, 95, 59, 80, 19, 56, 46, 13, 12, 100, 90, 26, 55, 51, 75, 79, 17, 25};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> numbers = {60, 29, 84, 55, 11, 28, 94, 69, 27, 64, 12, 70, 36, 53, 16, 85, 42, 61, 65, 63, 88, 34, 3, 59, 43, 20, 78, 83, 44, 21, 15, 8, 99, 91, 32, 97, 75, 72, 49, 56, 80, 93, 1, 51, 33, 31, 57, 96, 68, 30};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> numbers = {81, 21, 91, 44, 9, 93, 97, 6, 4, 47, 22, 53, 55, 71, 87, 49, 38, 84, 70, 30, 42, 36, 86, 48, 17, 34, 90, 16, 3, 23, 35, 8, 76, 26, 89, 92, 33, 61, 56, 63, 73, 51, 43, 75, 40, 79, 58, 31, 5, 94};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> numbers = {35, 60, 31, 10, 47, 6, 63, 86, 3, 49, 44, 34, 71, 96, 79, 80, 90, 58, 29, 94, 32, 52, 59, 15, 97, 88, 23, 98, 43, 100, 76, 85, 27, 38, 84, 93, 64, 5, 66, 48, 74, 95, 56, 21, 14, 55, 16, 36, 17, 57};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> numbers = {22, 14, 18, 59, 79, 58, 65, 21, 67, 17, 46, 30, 90, 26, 29, 86, 32, 61, 88, 51, 78, 54, 80, 6, 81, 47, 53, 33, 100, 37, 3, 94, 9, 8, 96, 34, 23, 89, 25, 49, 70, 38, 71, 15, 85, 93, 48, 66, 7, 27};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> numbers = {81, 76, 73, 95, 88, 79, 92, 51, 48, 97, 47, 15, 1, 22, 38, 32, 87, 21, 16, 23, 26, 50, 78, 90, 53, 82, 24, 68, 80, 5, 67, 86, 77, 14, 39, 20, 99, 100, 75, 2, 58, 3, 36, 93, 40, 71, 63, 55, 13, 96};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> numbers = {68, 94, 100, 73, 63, 40, 25, 75, 88, 53, 57, 16, 55, 6, 65, 47, 46, 20, 50, 49, 61, 70, 11, 34, 35, 45, 10, 31, 84, 14, 52, 1, 33, 69, 77, 59, 9, 83, 93, 56, 80, 99, 76, 22, 81, 18, 41, 23, 74, 89};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> numbers = {58, 99, 40, 72, 90, 3, 16, 63, 26, 64, 33, 38, 62, 21, 50, 32, 60, 98, 76, 59, 17, 6, 44, 77, 78, 39, 45, 24, 31, 46, 96, 100, 41, 1, 11, 70, 53, 43, 47, 18, 56, 22, 23, 83, 25, 95, 67, 93, 28, 34};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> numbers = {69, 8, 99, 52, 26, 37, 31, 44, 32, 77, 33, 3, 16, 40, 54, 15, 87, 95, 65, 59, 43, 62, 55, 36, 98, 93, 2, 9, 78, 86, 39, 72, 76, 80, 41, 66, 45, 24, 84, 97, 18, 42, 4, 25, 30, 1, 90, 27, 56, 91};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> numbers = {44, 21, 82, 26, 77, 76, 46, 52, 31, 29, 84, 95, 24, 57, 13, 38, 10, 60, 68, 49, 25, 50, 75, 27, 19, 11, 79, 73, 85, 36, 53, 16, 9, 87, 8, 17, 40, 100, 1, 5, 78, 96, 67, 41, 56, 93, 90, 81, 42, 6};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> numbers = {35, 12, 57, 51, 7, 32, 43, 15, 95, 41, 30, 76, 13, 91, 65, 66, 49, 55, 10, 60, 67, 78, 92, 33, 56, 48, 86, 34, 74, 59, 94, 82, 69, 61, 14, 46, 62, 26, 23, 63, 29, 77, 6, 2, 31, 72, 3, 42, 99, 64};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> numbers = {38, 54, 40, 20, 27, 97, 89, 34, 61, 81, 25, 92, 33, 43, 45, 79, 41, 68, 17, 13, 8, 95, 15, 98, 53, 29, 11, 62, 84, 30, 90, 58, 96, 66, 55, 78, 36, 37, 76, 7, 52, 9, 21, 35, 14, 100, 51, 5, 23, 19};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> numbers = {39, 23, 65, 49, 66, 5, 68, 40, 78, 73, 97, 45, 75, 89, 35, 29, 13, 87, 44, 51, 30, 9, 36, 82, 86, 70, 58, 14, 77, 27, 17, 18, 61, 59, 56, 79, 83, 55, 50, 84, 31, 94, 53, 21, 32, 95, 42, 6, 16, 2};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
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
    vector<int> numbers = {20, 62, 82, 34, 91, 14, 3, 60, 75, 5, 6, 10, 54, 89, 66, 47, 32, 22, 85, 55, 98, 24, 70, 46, 30, 83, 84, 57, 33, 69, 28, 53, 40, 78, 56, 76, 79, 43, 21, 36, 64, 96, 92, 44, 11, 16, 52, 13, 58, 95};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
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
    vector<int> numbers = {48, 52, 70, 1, 54, 84, 2, 32, 50, 31, 26, 61, 66, 73, 79, 67, 62, 30, 23, 43, 95, 18, 96, 36, 5, 68, 85, 86, 98, 99, 76, 34, 94, 55, 65, 59, 97, 38, 75, 12, 53, 9, 21, 93, 74, 33, 71, 20, 57, 92};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
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
    vector<int> numbers = {60, 39, 27, 83, 24, 18, 54, 22, 55, 31, 37, 41, 29, 12, 28, 66, 99, 9, 98, 11, 15, 79, 91, 7, 1, 59, 43, 85, 48, 53, 49, 86, 89, 72, 8, 19, 51, 33, 10, 42, 92, 63, 76, 32, 38, 3, 58, 6, 64, 26};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
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
    vector<int> numbers = {93, 46, 71, 76, 30, 10, 36, 31, 22, 94, 29, 26, 45, 48, 72, 27, 17, 37, 25, 80, 6, 74, 19, 58, 16, 65, 44, 57, 98, 38, 63, 1, 59, 55, 11, 40, 2, 64, 18, 67, 34, 14, 77, 96, 42, 8, 70, 89, 82, 73};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
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
    vector<int> numbers = {1, 5, 8, 3};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
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
    vector<int> numbers = {1, 2, 5, 4, 3};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> numbers = {1};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> numbers = {66, 53, 47, 86, 18, 21, 97, 92, 15};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> numbers = {32, 54, 27, 4, 69, 96, 73, 1, 100, 15, 21};
    MedianOfNumbers* pObj = new MedianOfNumbers();
    clock_t start = clock();
    int result = pObj->findMedian(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=13298470&rd=9988&pm=6528
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
 
class MedianOfNumbers {
  public:
  int findMedian(vector <int> numbers) {
  int ret=-1;
  if (numbers.size()%2 == 0) return -1;
  sort(numbers.begin(), numbers.end());
  return numbers[numbers.size()/2];
 
  return ret;
  }
};
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/