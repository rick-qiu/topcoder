/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2267
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

class Measures {
public:
    int beatsPerM(vector<int> loudness);
};

int Measures::beatsPerM(vector<int> loudness) {
    int ret;
    return ret;
}


int test0() {
    vector<int> loudness = {3, 9, 3, 0, 9, 3, 1, 9, 11};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
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
    vector<int> loudness = {3, 9, 3, 0, 9, 3, 1, 9, 11, 1};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> loudness = {5, 2, 5, 2, 8, 6, 3, 5, 5, 1, 9, 0, 2};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
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
    vector<int> loudness = {7, 7, 9, 7, 7, 7, 7, 7, 7};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> loudness = {3, 8, 6, 4, 9, 5, 8, 6, 4, 6, 5, 8, 6, 4, 6, 5, 8, 6, 4, 6, 5, 8, 6, 4, 6, 5, 8, 6, 4, 6, 5, 8, 6, 4, 6, 5, 22, 1, 23, 24};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
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
    vector<int> loudness = {3, 9, 65, 2, 8, 7, 66, 22, 11, 43, 26, 77, 78, 79, 80, 81, 82, 83, 3, 5, 8, 9, 4, 20, 21, 22, 23};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> loudness = {1, 6, 9};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
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
    vector<int> loudness = {89, 34, 100, 49, 26, 79, 72, 26, 55, 39, 16, 97, 98, 57, 60, 39, 92, 68, 79, 78, 77, 75, 74, 60, 14, 10, 61, 60, 26, 13, 29, 1, 69, 59, 87, 42, 11, 24, 6, 4, 23, 100, 87, 84, 84, 74, 96, 27, 31};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> loudness = {38, 90, 85, 54, 87, 87, 88, 18, 65, 53, 68, 36, 43, 6, 88, 74, 90, 66, 80, 80, 82, 18, 77, 74, 67, 32, 37, 10, 33, 55, 69, 5, 86, 85, 13, 6, 86, 69, 33, 21, 63, 15, 70, 2, 96, 50, 12, 30, 21};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
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
    vector<int> loudness = {5, 64, 74, 32, 93, 26, 95, 56, 68, 3, 88, 39, 26, 24, 94, 70, 44, 32, 61, 23, 96, 41, 9, 64, 14, 26, 99, 58, 99, 48, 99, 74, 59, 17, 81, 15, 64, 25, 72, 13, 63, 48, 45, 11, 92, 25, 29, 92, 22};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
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
    vector<int> loudness = {0, 30, 68, 65, 26, 65, 2, 98, 78, 93, 7, 30, 23, 0, 26, 52, 9, 86, 83, 51, 13, 95, 30, 56, 30, 73, 41, 85, 74, 9, 36, 77, 45, 68, 65, 73, 85, 83, 1, 97, 14, 77, 60, 55, 37, 20, 18, 78, 67};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> loudness = {45, 8, 64, 52, 50, 39, 95, 4, 20, 6, 70, 62, 39, 13, 80, 34, 71, 33, 79, 49, 79, 83, 29, 27, 18, 45, 49, 41, 61, 90, 7, 19, 88, 6, 54, 13, 50, 39, 83, 82, 82, 79, 91, 16, 80, 78, 77, 9, 99};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> loudness = {9, 83, 21, 60, 42, 98, 5, 98, 87, 24, 23, 47, 8, 91, 40, 43, 11, 65, 12, 48, 12, 31, 12, 28, 12, 69, 63, 29, 20, 2, 97, 99, 21, 76, 43, 97, 67, 4, 38, 77, 41, 56, 71, 86, 78, 99, 91, 96, 77};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> loudness = {68, 10, 71, 71, 33, 74, 70, 63, 1, 21, 4, 85, 16, 33, 29, 19, 2, 41, 17, 47, 66, 99, 85, 33, 4, 49, 20, 51, 45, 97, 50, 83, 93, 90, 41, 53, 12, 54, 42, 81, 18, 93, 60, 40, 2, 68, 12, 91, 96};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> loudness = {91, 87, 23, 50, 27, 17, 79, 39, 76, 70, 23, 71, 88, 54, 73, 45, 44, 40, 80, 47, 89, 38, 48, 14, 68, 29, 40, 78, 91, 7, 97, 8, 73, 57, 34, 19, 25, 19, 95, 45, 65, 49, 33, 94, 98, 41, 47, 96, 96, 17};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> loudness = {69, 12, 44, 90, 64, 85, 64, 46, 54, 68, 30, 45, 21, 35, 14, 62, 79, 59, 15, 97, 1, 77, 29, 46, 28, 40, 30, 73, 54, 57, 97, 90, 67, 98, 78, 88, 20, 74, 73, 53, 8, 98, 15, 54, 50, 98, 81, 44, 20, 11};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> loudness = {58, 78, 65, 83, 17, 68, 52, 89, 27, 76, 60, 79, 71, 83, 52, 55, 80, 82, 35, 61, 29, 79, 68, 98, 59, 98, 38, 2, 9, 36, 23, 62, 43, 98, 19, 10, 5, 96, 99, 80, 50, 79, 37, 42, 21, 93, 51, 50, 94, 61};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
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
    vector<int> loudness = {52, 27, 66, 7, 64, 83, 19, 49, 32, 6, 91, 87, 76, 75, 79, 78, 76, 10, 19, 93, 71, 49, 47, 57, 10, 7, 41, 2, 80, 54, 24, 39, 66, 36, 56, 28, 71, 24, 98, 13, 56, 12, 52, 10, 85, 20, 30, 23, 68, 68};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> loudness = {3, 57, 26, 71, 1, 86, 86, 48, 10, 14, 34, 51, 21, 95, 38, 62, 43, 76, 17, 91, 95, 65, 17, 98, 85, 24, 99, 88, 78, 97, 88, 35, 8, 73, 21, 96, 76, 83, 30, 20, 16, 51, 8, 93, 12, 45, 96, 54, 37, 32};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> loudness = {26, 74, 53, 56, 5, 93, 42, 77, 69, 63, 32, 93, 79, 29, 49, 81, 56, 15, 88, 66, 5, 89, 52, 86, 1, 45, 83, 33, 21, 3, 39, 97, 68, 77, 25, 36, 26, 84, 0, 89, 78, 35, 11, 97, 76, 98, 93, 40, 2, 21};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> loudness = {26, 77, 43, 66, 56, 7, 47, 33, 82, 65, 57, 39, 71, 58, 58, 11, 95, 83, 85, 19, 80, 25, 83, 49, 41, 13, 85, 10, 56, 89, 12, 27, 98, 91, 14, 95, 66, 33, 63, 39, 95, 91, 70, 16, 35, 23, 28, 18, 70, 44};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> loudness = {14, 21, 55, 85, 99, 46, 23, 94, 10, 54, 62, 8, 49, 66, 55, 46, 85, 16, 37, 99, 50, 40, 94, 32, 92, 72, 19, 67, 98, 25, 4, 25, 59, 5, 47, 24, 32, 78, 4, 21, 85, 62, 5, 44, 56};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> loudness = {49, 18, 42, 82, 27, 0, 93, 13, 88, 80, 75, 14, 97, 60, 81, 25, 16, 27, 83, 97, 49, 47, 81, 98, 87, 26, 65, 77, 20, 69, 98, 19, 21, 82, 48, 75, 80, 36, 45, 77, 64, 42, 56, 18, 41};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> loudness = {72, 65, 94, 59, 78, 93, 38, 69, 82, 53, 62, 82, 11, 27, 100, 46, 70, 72, 49, 71, 37, 37, 37, 60, 21, 86, 13, 90, 24, 81, 78, 68, 72, 60, 60, 59, 24, 13, 74, 11, 21, 81, 3, 11, 19, 76};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> loudness = {68, 93, 41, 44, 58, 1, 13, 84, 91, 59, 15, 11, 26, 73, 25, 53, 87, 51, 37, 99, 30, 37, 95, 12, 96, 59, 33, 43, 84, 38, 26, 47, 7, 40, 83, 61, 66, 99, 95, 46, 98, 53, 64, 94, 42, 47};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> loudness = {35, 63, 33, 54, 98, 7, 16, 65, 17, 29, 74, 22, 10, 86, 85, 44, 31, 21, 47, 26, 23, 19, 0, 31, 30, 43, 33, 30, 55, 5, 30, 100, 22, 13, 79, 30, 1, 59, 23, 30, 43, 27, 4, 32, 0, 46, 70};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> loudness = {100, 84, 84, 77, 25, 49, 55, 38, 13, 97, 30, 41, 52, 65, 70, 48, 82, 15, 77, 46, 83, 69, 57, 45, 93, 82, 83, 98, 10, 25, 96, 48, 92, 94, 84, 20, 90, 64, 68, 50, 40, 17, 73, 20, 38, 52, 35};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> loudness = {62, 9, 86, 89, 35, 7, 90, 58, 84, 81, 25, 12, 88, 71, 38, 64, 60, 35, 63, 52, 1, 73, 69, 4, 62, 46, 3, 69, 26, 79, 84, 79, 47, 84, 11, 40, 77, 47, 29, 26, 28, 72, 61, 40, 30, 74, 23, 59};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> loudness = {6, 62, 49, 96, 54, 29, 50, 92, 19, 49, 72, 22, 41, 60, 24, 23, 62, 54, 58, 7, 51, 11, 85, 23, 63, 50, 40, 15, 100, 5, 84, 56, 75, 24, 76, 35, 5, 98, 20, 97, 99, 2, 72, 66, 65, 12, 62, 40};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> loudness = {5, 17, 71, 9, 65, 83, 18, 64, 100, 89, 21, 70, 66, 63, 11, 37, 75, 55, 76, 94, 91, 44, 58, 38, 32, 18, 96, 78, 23, 96, 21, 48, 65, 64, 63, 73, 12, 69, 62, 5, 24, 62, 3, 42, 75, 99, 61, 85, 24};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> loudness = {43, 28, 70, 37, 37, 84, 57, 41, 55, 36, 35, 96, 90, 24, 90, 98, 94, 60, 55, 39, 75, 4, 33, 95, 18, 42, 90, 61, 17, 74, 17, 10, 67, 11, 37, 63, 90, 43, 32, 36, 65, 86, 51, 28, 48, 48, 3, 34, 52};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> loudness = {86, 39, 61, 41, 6, 99, 12, 79, 11, 76, 31, 87, 67, 65, 91, 0, 85, 82, 29, 22, 100, 19, 69, 100, 79, 68, 91, 75, 55, 85, 43, 38, 87, 2, 39, 86, 9, 83, 73, 67, 46, 35, 34, 40, 66, 53, 2, 55, 80, 27};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> loudness = {55, 77, 56, 6, 16, 79, 38, 2, 77, 55, 48, 30, 23, 43, 23, 11, 23, 20, 93, 61, 58, 15, 38, 41, 61, 25, 95, 83, 31, 77, 76, 49, 82, 42, 12, 73, 19, 64, 80, 79, 34, 68, 43, 49, 82, 59, 58, 78, 32, 11};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> loudness = {49, 51, 86, 15, 66, 67, 62, 54, 78, 83, 12, 76, 18, 16, 79, 18, 31, 3, 35, 75, 64, 27, 38, 34, 40, 59, 51, 32, 7, 94, 0, 41, 71, 91, 27, 9, 75, 21, 43, 79, 15, 72, 52, 26, 1};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> loudness = {81, 62, 15, 81, 38, 39, 9, 63, 57, 99, 47, 63, 31, 12, 14, 32, 78, 76, 10, 99, 73, 11, 17, 18, 54, 49, 79, 34, 53, 95, 93, 59, 18, 18, 52, 5, 59, 93, 47, 65, 73, 22, 7, 4, 50};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> loudness = {32, 57, 3, 69, 59, 61, 14, 24, 4, 95, 16, 73, 12, 65, 24, 3, 41, 60, 51, 98, 1, 42, 86, 23, 47, 13, 67, 64, 53, 97, 77, 96, 36, 58, 14, 49, 89, 78, 35, 43, 50, 57, 4, 0, 98, 67};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> loudness = {80, 78, 28, 14, 85, 80, 45, 97, 58, 2, 61, 19, 75, 39, 51, 91, 2, 96, 91, 41, 92, 84, 5, 8, 90, 61, 28, 92, 22, 22, 79, 83, 40, 89, 56, 36, 92, 28, 7, 62, 94, 37, 13, 32, 10, 6};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> loudness = {79, 77, 100, 51, 48, 89, 100, 17, 71, 85, 58, 91, 24, 9, 59, 53, 94, 79, 53, 93, 84, 28, 46, 43, 11, 40, 92, 27, 82, 2, 39, 25, 88, 19, 92, 33, 88, 17, 23, 60, 34, 18, 0, 27, 25, 55, 11};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> loudness = {20, 28, 91, 6, 62, 80, 43, 70, 92, 87, 57, 35, 1, 81, 54, 46, 51, 20, 100, 60, 38, 45, 70, 31, 22, 84, 71, 38, 99, 6, 21, 53, 60, 35, 32, 98, 81, 62, 11, 88, 16, 52, 64, 32, 91, 14, 30};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> loudness = {35, 26, 87, 77, 26, 62, 35, 81, 83, 11, 66, 27, 93, 55, 75, 2, 22, 46, 0, 68, 87, 47, 94, 73, 8, 71, 87, 82, 40, 54, 9, 77, 99, 80, 94, 95, 69, 38, 34, 24, 29, 86, 70, 59, 83, 38, 59, 73};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> loudness = {27, 63, 7, 53, 58, 58, 70, 13, 9, 96, 49, 40, 17, 52, 37, 26, 96, 59, 57, 92, 42, 28, 31, 23, 16, 68, 77, 75, 11, 68, 30, 37, 32, 47, 43, 66, 54, 59, 28, 45, 77, 85, 46, 82, 74, 10, 98, 70};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> loudness = {6, 42, 5, 41, 56, 91, 46, 86, 86, 30, 47, 83, 86, 42, 26, 94, 69, 87, 24, 71, 25, 30, 77, 92, 89, 96, 41, 54, 4, 29, 44, 65, 86, 92, 68, 96, 74, 30, 17, 84, 56, 78, 3, 21, 61, 96, 32, 79, 24};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> loudness = {57, 79, 59, 58, 79, 22, 25, 6, 0, 76, 44, 97, 87, 78, 35, 10, 90, 61, 83, 28, 35, 98, 86, 52, 50, 4, 58, 59, 64, 60, 50, 100, 77, 70, 4, 68, 22, 42, 79, 28, 49, 85, 58, 51, 84, 4, 42, 51, 79};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> loudness = {82, 43, 97, 32, 65, 8, 2, 90, 82, 68, 19, 68, 75, 75, 6, 66, 21, 85, 44, 46, 60, 48, 77, 82, 23, 32, 34, 87, 10, 81, 16, 0, 81, 67, 61, 3, 37, 88, 21, 30, 22, 29, 39, 48, 84, 71, 44, 2, 0, 84};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> loudness = {70, 40, 8, 29, 18, 55, 16, 29, 11, 32, 39, 64, 90, 95, 68, 12, 97, 78, 63, 55, 88, 88, 61, 76, 25, 28, 32, 62, 39, 55, 98, 66, 69, 94, 3, 51, 39, 23, 95, 86, 84, 69, 54, 19, 13, 48, 15, 41, 46, 49};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> loudness = {52, 55, 96, 87, 2, 68, 50, 67, 57, 72, 69, 88, 48, 13, 95, 2, 83, 52, 46, 41, 41, 71, 25, 98, 74, 63, 63, 59, 10, 69, 32, 82, 43, 59, 3, 89};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> loudness = {46, 68, 39, 45, 6, 92, 2, 78, 49, 60, 19, 85, 17, 42, 32, 7, 24, 27, 68, 60, 38, 79, 71, 74, 39, 10, 2, 26, 9, 73, 16, 4, 52, 85, 41};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> loudness = {62, 86, 68, 33, 68, 1, 25, 3, 78, 0, 33, 17, 98, 11, 34, 8, 90, 48, 60, 60, 86, 40, 78, 64, 59, 55, 31, 99, 9, 52, 93, 91, 90, 52, 83};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> loudness = {57, 85, 62, 70, 30, 96, 11, 92, 17, 83, 80, 97, 55, 67, 32, 87, 59, 93, 26, 65, 2, 10, 1, 59, 50, 63, 81, 64, 49, 59, 77, 14, 9, 33, 33, 51};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> loudness = {62, 95, 17, 67, 47, 68, 34, 86, 53, 58, 22, 91, 84, 98, 21, 81, 63, 66, 5, 40, 34, 30, 21, 21, 75, 15, 32, 63, 52, 37, 10, 1, 96, 78, 42, 44, 21, 93, 15, 22, 9, 65};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> loudness = {100, 10, 50, 14, 72, 11, 37, 9, 90, 26, 23, 55, 5, 5, 73, 8, 59, 39, 98, 31, 41, 39, 99, 76, 0, 31, 78, 17, 90, 0, 57, 16, 36, 54, 33, 27, 69, 60};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
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
    vector<int> loudness = {52, 86, 52, 82, 83, 61, 32, 80, 49, 71, 34, 52, 32, 66, 35, 29, 66, 63, 37, 98, 69, 60, 85, 46, 34, 88, 36, 85, 41, 37, 35, 19, 45, 14, 86};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> loudness = {91, 37, 39, 89, 75, 64, 97, 72, 25, 53, 77, 11, 66, 14, 56, 67, 62, 30, 85, 78, 53, 66, 24, 19, 100, 39, 14, 96, 75, 36, 88, 3, 1, 100, 24};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> loudness = {72, 79, 64, 13, 47, 5, 73, 58, 79, 28, 49, 88, 69, 79, 74, 36, 38, 80, 46, 8, 79, 59, 95, 70, 27, 29, 36, 25, 30, 94, 16, 49, 98, 95, 9};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> loudness = {83, 53, 34, 62, 51, 57, 39, 13, 73, 74, 7, 53, 90, 77, 16, 82, 70, 69, 89, 10, 34, 82, 27, 37, 10, 48, 20, 80, 61, 36, 79, 6, 16, 6, 66};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> loudness = {7, 95, 34, 57, 88, 11, 62, 95, 66, 26, 53, 39, 35, 82, 29, 68, 68, 65, 29, 56, 38, 0, 92, 11, 4, 31, 7, 50, 95, 92, 58, 64, 31, 34, 23, 78, 81, 74, 55, 64, 69, 46, 46};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> loudness = {5, 78, 7, 16, 89, 8, 81, 49, 33, 7, 90, 43, 84, 28, 18, 32, 68, 50, 65, 71, 68, 90, 62, 45, 34, 18, 12, 10, 99, 28, 75, 49, 48, 47, 92, 33, 3, 73, 27, 57};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> loudness = {35, 46, 76, 10, 29, 71, 9, 37, 30, 54, 85, 63, 85, 39, 82, 82, 4, 54, 71, 50, 5, 71, 95, 88, 42, 21, 70, 1, 10, 70, 98, 27, 96, 80, 35, 27, 45};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> loudness = {67, 47, 34, 64, 49, 32, 19, 22, 66, 65, 27, 38, 78, 12, 21, 58, 84, 78, 48, 65, 55, 42, 68, 96, 96, 14, 63, 0, 89, 41, 63, 11, 53, 18, 41, 51, 56, 12, 7, 21, 99, 11, 38, 16};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> loudness = {42, 90, 64, 24, 2, 17, 13, 60, 65, 45, 68, 69, 52, 36, 60, 68, 22, 62, 58, 40, 64, 69, 83, 94, 26, 44, 2, 69, 48, 38, 14, 83, 61, 34, 51, 90, 10, 19, 26, 92, 62, 89, 44, 35, 73, 70};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> loudness = {21, 53, 30, 68, 58, 99, 89, 46, 5, 44, 25, 92, 3, 3, 11, 97, 97, 4, 70, 82, 50, 3, 81, 86, 28, 73, 65, 74, 67, 26, 7, 97, 34, 5, 90, 83, 4, 6, 80, 37, 63, 51, 82};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> loudness = {45, 72, 87, 58, 32, 4, 0, 89, 29, 4, 66, 93, 65, 3, 33, 1, 20, 7, 81, 94, 25, 69, 22, 73, 39, 54, 62, 68, 53, 37, 42, 91, 63, 69, 23, 22};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> loudness = {93, 22, 76, 61, 13, 48, 12, 95, 59, 67, 60, 66, 53, 28, 55, 92, 62, 74, 23, 96, 96, 42, 0, 90, 83, 10, 32, 96, 24, 11, 52, 24, 44, 41, 26, 92, 1, 80, 49, 7, 3, 86, 1, 6, 16, 41};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> loudness = {0, 60, 84, 61, 56, 58, 77, 93, 2, 18, 37, 52, 96, 14, 77, 78, 23, 85, 5, 80, 18, 2, 92, 51, 59, 78, 29, 70, 94, 70, 45, 78, 100, 44, 1, 80, 11, 65, 71, 7, 25};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> loudness = {77, 52, 5, 27, 67, 59, 28, 33, 15, 45, 99, 90, 45, 54, 22, 50, 5, 35, 25, 40, 86, 47, 67, 51, 26, 93, 32, 16, 88, 42, 77, 52, 95, 15, 7, 68, 95, 60};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> loudness = {13, 61, 92, 31, 82, 9, 60, 54, 9, 79, 76, 67, 2, 30, 85, 78, 52, 5, 51, 73, 63, 48, 29, 66, 17, 57, 32, 93, 54, 86, 10, 3, 74, 71, 27, 21, 44, 25};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> loudness = {84, 17, 97, 1, 94, 8, 32, 9, 68, 100, 82, 18, 72, 17, 83, 51, 38, 8, 52, 49, 3, 19, 62, 31, 50, 9, 6, 40, 1, 73, 67, 13, 49, 14, 1, 37, 22, 37};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> loudness = {52, 80, 18, 51, 94, 91, 67, 90, 40, 84, 44, 76, 32, 81, 85, 41, 15, 11, 38, 79, 45, 57, 65, 62, 72, 54, 40, 44, 55, 60, 53, 24, 17, 66, 32, 21};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> loudness = {79, 66, 27, 45, 28, 42, 23, 27, 42, 98, 91, 38, 35, 45, 19, 16, 34, 37, 89, 88, 56, 85, 60, 94, 93, 3, 77, 25, 98, 57, 79, 4, 55, 68, 40, 56, 27, 1, 16, 80};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> loudness = {69, 98, 97, 17, 89, 85, 19, 99, 0, 85, 84, 14, 79, 79, 82, 63, 53, 12, 55, 94, 2, 26, 13, 84, 81, 61, 16, 9, 29, 32, 54, 4, 44, 4, 48, 30};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> loudness = {100, 72, 71, 97, 55, 3, 77, 68, 81, 88, 34, 89, 97, 35, 95, 65, 31, 63, 17, 20, 10, 87, 56, 51, 76, 48, 14, 91, 26, 46, 30, 16, 3, 89, 24, 5, 66};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> loudness = {11, 25, 23, 90, 61, 60, 31, 24, 37, 82, 18, 13, 24, 22, 45, 50, 94, 87, 41, 60, 53, 86, 70, 1, 8, 60, 67, 93, 63, 48, 80, 49, 5, 16, 73, 53, 67};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> loudness = {40, 3, 87, 78, 51, 93, 3, 42, 37, 61, 91, 100, 49, 44, 46, 9, 50, 96, 65, 4, 64, 29, 85, 9, 65, 19, 2, 100, 7, 82, 45, 4, 42, 68, 48, 88, 77, 47, 54, 75, 80, 14};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> loudness = {86, 28, 37, 27, 52, 83, 31, 25, 2, 33, 7, 39, 20, 16, 16, 30, 33, 41, 59, 65, 4, 8, 20, 92, 92, 74, 71, 76, 57, 100, 6, 60, 24, 26, 84, 49, 2};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> loudness = {70, 51, 35, 51, 4, 84, 51, 55, 77, 11, 42, 88, 19, 38, 25, 84, 54, 87, 41, 52, 8, 7, 86, 34, 99, 98, 34, 56, 86, 92, 73, 29, 71, 90, 31, 75, 39, 2, 48, 28, 46, 65, 1, 0, 10, 1};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> loudness = {56, 39, 64, 81, 94, 99, 81, 36, 63, 0, 40, 23, 64, 76, 56, 93, 13, 14, 76, 19, 74, 40, 48, 48, 25, 4, 5, 83, 11, 45, 46, 74, 43, 76, 89, 45, 51, 51, 55, 83, 86};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> loudness = {81, 12, 36, 38, 47, 40, 19, 91, 86, 93, 44, 16, 41, 37, 92, 10, 46, 21, 74, 63, 30, 95, 57, 78, 83, 80, 65, 16, 75, 37, 18, 66, 9, 74, 17, 32, 93, 90, 22};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> loudness = {31, 94, 25, 0, 51, 63, 52, 0, 59, 7, 24, 37, 100, 99, 92, 97, 44, 51, 85, 84, 2, 21, 97, 59, 5, 62, 97, 33, 13, 81, 76, 96, 38, 88, 77, 59, 82, 59, 20, 1, 28, 40, 54};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> loudness = {73, 80, 2, 97, 89, 64, 83, 48, 36, 39, 88, 61, 66, 8, 70, 53, 17, 96, 29, 94, 53, 59, 54, 7, 83, 19, 4, 65, 7, 56, 9, 79, 23, 69, 2, 64, 31, 45};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> loudness = {94, 27, 19, 88, 99, 9, 66, 54, 73, 40, 46, 13, 23, 10, 89, 8, 54, 9, 98, 63, 17, 74, 97, 70, 47, 98, 11, 63, 19, 92, 49, 0, 96, 27, 87, 91, 45, 78, 82, 28, 1, 76, 98, 23, 92};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> loudness = {1, 18, 3, 39, 13, 65, 99, 82, 8, 86, 94, 54, 51, 26, 43, 31, 2, 72, 80, 92, 97, 79, 11, 32, 81, 16, 1, 99, 79, 47, 99, 29, 1, 96, 89, 9, 17, 39, 81, 45, 15, 32, 38, 18, 97};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> loudness = {29, 74, 9, 69, 62, 61, 47, 47, 25, 36, 36, 6, 90, 27, 2, 38, 19, 58, 73, 2, 39, 40, 82, 42, 65, 4, 7, 31, 96, 68, 38, 7, 47, 23, 19, 64, 73, 14, 11, 30, 24, 58, 58, 69, 23};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> loudness = {25, 59, 57, 99, 89, 72, 7, 96, 75, 58, 49, 79, 64, 37, 52, 95, 38, 81, 67, 7, 14, 8, 0, 82, 46, 19, 5, 38, 79, 14, 36, 85, 40, 94, 15, 82, 28};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> loudness = {92, 23, 6, 94, 51, 48, 34, 28, 77, 88, 32, 81, 57, 11, 67, 46, 25, 17, 3, 62, 6, 56, 90, 26, 57, 92, 99, 97, 58, 49, 83, 89, 92, 22, 97, 82, 32, 50, 66, 9, 6, 8, 26};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> loudness = {11, 35, 65, 82, 54, 27, 30, 32, 31, 14, 37, 76, 59, 69, 49, 29, 76, 46, 47, 94, 68, 27, 32, 91, 67, 45, 0, 94, 74, 57, 86, 5, 82, 61, 61, 79, 24, 3, 59, 14, 31};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> loudness = {69, 4, 19, 24, 9, 25, 64, 13, 99, 81, 3, 32, 43, 9, 31, 79, 86, 65, 11, 32, 56, 19, 86, 28, 60, 23, 44, 33, 27, 93, 42, 53, 91, 83, 14, 46, 57, 46, 7, 57, 29, 90, 62, 0, 80, 61, 60};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> loudness = {76, 54, 9, 5, 42, 46, 87, 93, 32, 42, 8, 23, 93, 22, 46, 88, 28, 58, 53, 3, 67, 67, 44, 96, 56, 76, 32, 8, 3, 81, 10, 57, 22, 62, 34, 77, 16, 62};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> loudness = {1, 90, 42, 52, 29, 21, 49, 16, 85, 4, 18, 37, 64, 84, 73, 46, 23, 100, 49, 73, 54, 81, 53, 21, 48, 72, 89, 74, 48, 2, 63, 28, 56, 49, 21, 5, 65, 41, 18, 44, 42, 100};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> loudness = {71, 23, 74, 22, 73, 92, 55, 33, 36, 12, 1, 21, 50, 66, 79, 57, 15, 62, 33, 10, 61, 63, 17, 100, 1, 88, 61, 87, 57, 0, 68, 73, 67, 29, 86, 99, 33};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> loudness = {64, 95, 59, 53, 73, 31, 12, 73, 20, 11, 95, 46, 89, 44, 53, 67, 27, 51, 56, 79, 4, 44, 22, 75, 2, 62, 19, 53, 60, 31, 3, 37, 62, 5, 44, 58, 61, 100, 38, 39, 95, 1, 60, 47, 16, 78, 76, 77, 68, 89};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> loudness = {23, 70, 96, 70, 90, 88, 100, 30, 33, 99, 66, 32, 69, 60, 86, 84, 27, 32, 55, 66, 12, 62, 36, 46, 96, 10, 0, 17, 57, 48, 20, 39, 23, 49, 85, 30, 71};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> loudness = {86, 95, 6, 23, 65, 69, 20, 10, 47, 54, 54, 33, 28, 47, 76, 58, 25, 18, 2, 52, 12, 70, 40, 90, 85, 8, 52, 63, 5, 31, 68, 31, 20, 99, 37, 72, 100};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> loudness = {99, 44, 74, 72, 62, 94, 73, 41, 75, 51, 21, 62, 65, 43, 93, 65, 77, 65, 55, 83, 17, 22, 85, 95, 76, 39, 68, 40, 13, 51, 36, 43, 62, 86, 0, 18, 82, 19, 81, 25};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> loudness = {30, 30, 30, 1, 25, 94, 72, 2, 32, 81, 60, 6, 80, 62, 1, 78, 3, 0, 61, 73, 55, 46, 43, 27, 28, 94, 8, 43, 52, 28, 51, 25, 45, 22, 10, 58, 82, 18, 69, 38, 76, 85, 98};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> loudness = {37, 9, 58, 0, 79, 57, 55, 66, 72, 69, 1, 44, 75, 65, 99, 50, 98, 39, 20, 47, 3, 38, 70, 36, 91, 11, 16, 14, 7, 64, 31, 37, 18, 36, 42, 24, 28};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> loudness = {0, 82, 82, 39, 15, 51, 26, 58, 9, 10, 35, 54, 94, 56, 2, 79, 89, 17, 24, 18, 80, 70, 97, 95, 90, 15, 54, 2, 31, 20, 78, 97, 92, 41, 16, 93, 58};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> loudness = {21, 92, 5, 4, 18, 58, 29, 50, 67, 95, 60, 5, 14, 0, 41, 34, 65, 83, 65, 100, 74, 49, 5, 53, 59, 49, 100, 51, 11, 65, 62, 59, 92, 42, 83, 21, 61};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> loudness = {17, 81, 53, 100, 16, 3, 79, 62, 37, 96, 88, 67, 73, 8, 12, 23, 64, 91, 36, 95, 2, 57, 53, 17, 52, 13, 41, 17, 2, 22, 16, 11, 34, 40, 55, 56, 10, 11};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> loudness = {58, 42, 54, 61, 73, 33, 79, 43, 12, 25, 29, 35, 70, 31, 26, 8, 95, 77, 60, 65, 40, 70, 47, 33, 9, 10, 87, 84, 82, 19, 14, 60, 70, 56, 84, 58, 29, 23, 63, 99, 98, 36, 12};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> loudness = {3, 9, 3, 0, 9, 3, 1, 9, 11, 1};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> loudness = {9, 8, 7, 6, 5, 4, 9, 8, 5, 6, 4, 1, 8, 9, 5, 6, 1, 4};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> loudness = {3, 9, 65, 2, 8, 7, 66, 22, 11, 43, 26, 77, 78, 79, 89, 81, 82, 83, 13, 5, 8, 9};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> loudness = {5, 2, 5, 2, 5, 2, 5, 2, 15, 20};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> loudness = {3, 2, 4, 5, 6, 3, 8, 2, 9, 1};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> loudness = {1, 6, 2};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> loudness = {5, 2, 5, 2, 8, 6, 3, 5, 5, 1, 9, 0, 2};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> loudness = {3, 2, 2, 1, 7, 6, 5, 4, 2, 6};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
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
    vector<int> loudness = {5, 1, 3, 9, 7, 6, 5, 4, 3, 0, 9, 8, 7, 6, 4, 3, 1, 9, 7, 6, 5, 4, 2, 1, 9, 8, 7, 6, 5, 9, 4, 3, 7, 0, 2};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> loudness = {100, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> loudness = {99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 65, 64, 63, 62, 61, 55, 56, 54};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> loudness = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
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
    vector<int> loudness = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> loudness = {100, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> loudness = {9, 7, 4, 5, 11};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> loudness = {9, 2, 9, 2, 9, 2, 1, 9, 9, 2};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
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
    vector<int> loudness = {1, 2, 1, 2, 1, 2, 1};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> loudness = {15, 1, 2, 3, 4, 5, 6, 7, 8, 9, 15, 1, 2, 3, 4, 5, 6, 7, 8, 9, 15, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> loudness = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> loudness = {1, 1, 1, 2, 3};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> loudness = {15, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 15, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 15, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> loudness = {9, 2, 9, 2, 9, 2, 9, 2, 2, 9};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
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
    vector<int> loudness = {9, 9, 9, 8, 9, 8, 9, 8, 9, 8, 9, 8, 9, 8, 9, 8, 9, 8, 9, 8, 9, 8, 9, 8, 9, 8};
    Measures* pObj = new Measures();
    clock_t start = clock();
    int result = pObj->beatsPerM(loudness);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=8415268&rd=8081&pm=2267
********************************************************************************
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
 
class Measures {
public:
bool test(vector<int> L, int b)
{
  int n = L.size();
  for (int s = 0; s < b; s++)
  {
    int tc = 0, lc = 0;
    for (int i = s; i + b <= n; i += b)
    {
      tc++;
      bool all = true;
      for (int j = i; j < i+b; j++)
      {
        if (!(L[i] >= L[j]))
        {
          all = false;
          break;
        }
      }
      if (all)
        lc++;
    }
    if (tc >= 1 && lc*10>= 8*tc)
    {
      return true;
    }    
  }
  return false;
}
 
int beatsPerM(vector <int> L) 
{
  for (int bpm = 2; bpm <= 10; bpm++)
  {
    if (test(L, bpm))
      return bpm;
  }
  return -1;
  
}
};
 
 
//Powered by [KawigiEdit]

********************************************************************************
*******************************************************************************/