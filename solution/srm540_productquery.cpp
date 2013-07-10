/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11870
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

class ProductQuery {
public:
    int theInput(int N, vector<int> Qfrom, vector<int> Qto, vector<int> output);
};

int ProductQuery::theInput(int N, vector<int> Qfrom, vector<int> Qto, vector<int> output) {
    int ret;
    return ret;
}


int test0() {
    int N = 3;
    vector<int> Qfrom = {0};
    vector<int> Qto = {0};
    vector<int> output = {5};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 5;
    vector<int> Qfrom = {0, 2, 0};
    vector<int> Qto = {1, 4, 4};
    vector<int> output = {3, 4, 6};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
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
    int N = 3;
    vector<int> Qfrom = {0, 1};
    vector<int> Qto = {1, 2};
    vector<int> output = {5, 8};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 8;
    vector<int> Qfrom = {2, 0, 3, 6};
    vector<int> Qto = {3, 7, 4, 6};
    vector<int> output = {2, 0, 6, 7};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 118080;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 58;
    vector<int> Qfrom = {2, 7, 1, 15, 27, 5, 34, 26, 10, 22};
    vector<int> Qto = {18, 34, 4, 29, 52, 40, 54, 36, 34, 25};
    vector<int> output = {2, 6, 3, 4, 5, 0, 7, 8, 4, 1};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
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
    int N = 63;
    vector<int> Qfrom = {10, 5, 38, 8, 6, 16, 26, 15, 6, 52, 36, 9, 5, 47, 23, 34, 54, 16, 12, 45, 16, 17, 19, 10, 18, 18, 15, 25, 16, 1, 46, 19, 7, 6, 23, 36, 46, 3, 60, 50, 1, 2, 44, 19};
    vector<int> Qto = {15, 19, 49, 30, 57, 46, 30, 44, 18, 57, 38, 19, 20, 59, 59, 45, 60, 44, 15, 55, 42, 58, 60, 61, 34, 52, 41, 30, 29, 39, 50, 56, 19, 6, 45, 55, 56, 6, 60, 55, 53, 35, 60, 22};
    vector<int> output = {3, 0, 7, 0, 0, 9, 7, 1, 0, 5, 9, 0, 0, 5, 5, 1, 5, 7, 9, 5, 3, 5, 5, 5, 1, 3, 3, 1, 3, 0, 9, 5, 0, 9, 7, 5, 5, 1, 3, 5, 0, 0, 5, 7};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 97245661;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 17;
    vector<int> Qfrom = {8, 3, 10, 6, 3, 10, 13, 5, 1, 3, 5, 2, 10, 2, 0, 0, 9, 6, 6, 0, 5, 5, 1, 3, 3, 7, 1, 0, 4};
    vector<int> Qto = {14, 8, 12, 7, 13, 15, 14, 14, 14, 4, 9, 2, 14, 7, 10, 4, 13, 13, 7, 10, 7, 15, 15, 16, 7, 13, 11, 13, 14};
    vector<int> output = {9, 7, 7, 7, 9, 9, 3, 9, 7, 3, 9, 3, 1, 9, 1, 1, 7, 1, 7, 1, 1, 1, 3, 1, 3, 1, 9, 3, 3};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 5;
    vector<int> Qfrom = {1, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 2, 1, 2, 1, 2, 0, 1, 0, 0, 1, 0, 2, 0, 0, 2, 1, 0, 0, 2, 0, 0, 0, 2, 1, 1, 3, 3, 1};
    vector<int> Qto = {4, 1, 2, 4, 1, 4, 1, 3, 3, 3, 4, 2, 2, 2, 4, 4, 1, 2, 3, 1, 2, 4, 2, 3, 3, 4, 4, 2, 1, 4, 1, 1, 1, 3, 3, 3, 4, 3, 2};
    vector<int> output = {4, 1, 4, 8, 7, 4, 7, 8, 6, 8, 8, 2, 2, 2, 4, 4, 7, 2, 6, 7, 2, 8, 2, 6, 6, 4, 4, 4, 7, 4, 7, 7, 7, 8, 8, 8, 7, 9, 2};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
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
    int N = 58;
    vector<int> Qfrom = {25, 3, 34, 26, 2, 4, 8, 8, 33, 2, 36, 6, 26, 23, 45, 17, 6, 35, 19, 21, 3, 22, 22, 4, 36, 2, 52, 3, 7, 44, 29, 45, 3, 17, 8, 37, 24, 0, 0, 25, 40, 15, 39, 45, 16, 17, 29, 5, 13};
    vector<int> Qto = {26, 49, 50, 47, 23, 16, 11, 36, 52, 43, 44, 34, 29, 31, 55, 33, 17, 49, 50, 48, 13, 47, 41, 40, 52, 43, 53, 18, 46, 55, 51, 49, 36, 54, 43, 44, 54, 33, 20, 41, 40, 27, 49, 55, 27, 47, 33, 43, 32};
    vector<int> output = {9, 6, 7, 7, 8, 1, 9, 2, 3, 6, 7, 2, 9, 7, 2, 8, 7, 3, 4, 9, 3, 1, 7, 8, 7, 6, 2, 3, 8, 8, 3, 1, 4, 4, 2, 9, 4, 8, 4, 1, 1, 8, 7, 2, 4, 4, 3, 4, 4};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 61272473;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 12;
    vector<int> Qfrom = {7, 4, 8};
    vector<int> Qto = {11, 5, 9};
    vector<int> output = {7, 1, 1};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 25600000;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 90;
    vector<int> Qfrom = {9, 40, 12, 64, 64, 47, 6, 27, 27, 35, 0, 50, 35, 77, 10, 13, 12, 13, 38, 25, 18, 34, 7, 24, 73, 60, 12, 17, 8, 28, 64, 41, 28, 14, 60, 25, 15, 65, 21, 0, 41, 53, 60, 19, 87, 62, 52, 67, 1};
    vector<int> Qto = {59, 70, 72, 77, 87, 47, 36, 75, 88, 51, 40, 70, 44, 85, 51, 79, 12, 78, 48, 26, 86, 71, 55, 28, 82, 79, 49, 33, 67, 29, 76, 86, 60, 30, 75, 59, 57, 76, 46, 40, 48, 89, 72, 61, 89, 81, 87, 88, 11};
    vector<int> output = {1, 1, 3, 3, 7, 7, 9, 1, 7, 9, 3, 3, 9, 3, 1, 3, 7, 9, 7, 1, 1, 9, 3, 1, 9, 3, 3, 1, 1, 7, 9, 7, 3, 7, 3, 7, 1, 3, 3, 3, 7, 7, 9, 9, 7, 1, 3, 3, 1};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 140130951;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 41;
    vector<int> Qfrom = {3, 0, 6, 1, 1, 2, 4, 2, 25, 8, 13, 5, 29, 28, 26, 3, 16, 8, 19, 16, 19, 6, 17, 20, 2, 23, 10, 19, 11, 10, 20, 2, 32, 16, 25, 29, 21, 13, 0, 16, 16, 8, 31};
    vector<int> Qto = {16, 26, 37, 27, 31, 20, 6, 19, 36, 36, 33, 7, 32, 35, 30, 19, 21, 24, 20, 32, 37, 38, 28, 39, 29, 24, 13, 33, 19, 11, 23, 37, 40, 34, 32, 34, 23, 18, 22, 26, 38, 19, 36};
    vector<int> output = {0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 4, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 2, 0, 0, 0, 0, 2, 2, 0, 5, 0, 0, 0, 0, 0};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 383485046;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 88;
    vector<int> Qfrom = {33, 48, 30, 1, 9, 71, 7, 42, 51, 35, 10, 12, 47, 16, 32, 57, 39, 48, 1, 21, 27, 8, 35, 5, 28, 2, 6, 17, 21, 3, 31, 48, 33, 47, 42, 48, 33, 73, 6, 55, 33, 23};
    vector<int> Qto = {75, 82, 81, 54, 61, 86, 52, 59, 58, 84, 37, 59, 55, 48, 65, 78, 66, 51, 43, 58, 61, 54, 75, 49, 35, 85, 80, 80, 41, 57, 77, 48, 36, 71, 66, 58, 49, 81, 79, 79, 81, 77};
    vector<int> output = {0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 6, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 3, 0, 0, 2, 0, 0, 0, 0, 0, 0};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 870392260;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 71;
    vector<int> Qfrom = {33, 32, 33, 0, 18, 29, 26, 27, 3, 1, 14, 9, 47, 1, 5, 66, 18, 33, 48, 44, 34, 7, 47, 12, 61, 32, 40};
    vector<int> Qto = {59, 36, 48, 56, 51, 46, 53, 43, 59, 62, 46, 15, 61, 23, 60, 69, 39, 45, 70, 67, 58, 18, 49, 68, 63, 45, 44};
    vector<int> output = {4, 6, 6, 0, 0, 4, 8, 8, 0, 0, 0, 7, 2, 0, 0, 0, 0, 8, 0, 0, 8, 2, 6, 0, 4, 4, 8};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 797550222;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 77;
    vector<int> Qfrom = {1, 5, 9, 18, 17, 16, 16, 60, 1, 53, 52, 4, 14, 56, 14, 37, 42, 14, 67, 33, 14, 18};
    vector<int> Qto = {22, 57, 19, 23, 42, 67, 48, 66, 32, 57, 69, 64, 63, 56, 76, 39, 61, 39, 69, 39, 59, 58};
    vector<int> output = {6, 0, 6, 8, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 7, 0, 0, 0, 7, 0, 0};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 124216283;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 100;
    vector<int> Qfrom = {8, 43, 74, 80, 25, 22, 38, 34, 11, 15, 63, 82, 45, 58, 62, 16, 75, 38, 27, 7, 7, 45, 7, 16, 21, 13, 13, 48, 43, 66, 7, 2, 6, 4, 21, 73, 0, 23, 24, 19, 57, 13, 67, 8, 7, 46, 16, 3, 9, 43};
    vector<int> Qto = {99, 47, 95, 93, 45, 50, 42, 48, 23, 72, 88, 99, 67, 69, 94, 22, 91, 76, 96, 38, 59, 79, 19, 85, 84, 85, 71, 57, 96, 88, 60, 88, 7, 75, 34, 92, 94, 39, 87, 69, 60, 60, 75, 95, 57, 86, 95, 82, 91, 68};
    vector<int> output = {7, 9, 1, 7, 9, 1, 9, 3, 1, 9, 3, 3, 3, 7, 7, 9, 3, 3, 9, 1, 3, 1, 3, 1, 3, 9, 3, 9, 9, 7, 7, 1, 1, 3, 1, 9, 1, 3, 7, 3, 9, 3, 9, 7, 9, 3, 7, 9, 3, 9};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 976371285;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 100;
    vector<int> Qfrom = {14, 74, 56, 15, 1, 21, 32, 5, 45, 25, 11, 55, 5, 18, 28, 2, 27, 25, 46, 20, 4, 58, 43, 5, 3, 24, 47, 48, 42, 11, 6, 14, 17, 3, 37, 1, 34, 77, 12, 62, 22, 34, 62, 3, 86, 27, 32, 8, 59, 39};
    vector<int> Qto = {79, 93, 86, 37, 90, 51, 70, 57, 75, 67, 24, 74, 55, 22, 41, 10, 83, 99, 65, 94, 21, 98, 50, 20, 32, 29, 87, 90, 55, 39, 14, 16, 29, 7, 84, 58, 41, 91, 35, 63, 73, 91, 99, 29, 96, 69, 98, 10, 89, 48};
    vector<int> output = {0, 9, 3, 0, 0, 0, 6, 0, 8, 6, 0, 7, 0, 9, 9, 0, 2, 2, 2, 0, 0, 3, 1, 0, 0, 1, 6, 8, 6, 0, 0, 8, 0, 0, 8, 0, 7, 1, 0, 3, 0, 4, 3, 0, 3, 2, 2, 1, 7, 3};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 76232588;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 100;
    vector<int> Qfrom = {66, 61, 56, 14, 49, 85, 24, 97, 29, 13, 10, 15, 48, 60, 57, 69, 30, 86, 34, 12, 1, 44, 7, 6, 19, 48, 75, 11, 2, 27, 22, 24, 25, 61, 23, 15, 18, 21, 34, 29, 49, 59, 31, 14, 42, 59, 61, 50, 14, 23};
    vector<int> Qto = {96, 84, 83, 73, 65, 87, 76, 99, 45, 69, 16, 63, 72, 65, 69, 72, 38, 93, 57, 59, 66, 64, 8, 87, 82, 95, 81, 24, 11, 64, 58, 57, 37, 62, 60, 61, 77, 89, 39, 58, 80, 90, 62, 70, 58, 68, 87, 67, 40, 53};
    vector<int> output = {0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 8, 0, 0, 5, 0, 5, 8, 0, 0, 0, 0, 0, 1, 0, 0, 0, 3, 4, 2, 0, 0, 0, 4, 7, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 541939092;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 100;
    vector<int> Qfrom = {58, 23, 5, 22, 40, 7, 30, 29, 12, 18, 63, 69, 27, 52, 34, 83, 3, 50, 19, 39, 33, 5, 12, 56, 18, 8, 26, 23, 41, 55, 20, 22, 0, 34, 46, 13, 45, 54, 2, 32, 31, 38, 51, 41, 16, 22, 40, 19, 28, 5};
    vector<int> Qto = {67, 41, 76, 22, 62, 67, 83, 53, 47, 25, 79, 87, 58, 68, 51, 98, 30, 99, 20, 55, 67, 44, 34, 63, 84, 95, 92, 44, 75, 96, 54, 97, 73, 99, 65, 17, 58, 75, 32, 89, 35, 76, 57, 71, 92, 78, 76, 38, 34, 66};
    vector<int> output = {0, 0, 0, 8, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 7, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 6, 0};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 688853839;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 100;
    vector<int> Qfrom = {36, 64, 39, 52, 13, 3, 26, 11, 33, 2, 68, 83, 43, 34, 60, 13, 55, 20, 10, 26, 32, 39, 36, 34, 4, 25, 5, 26, 13, 22, 27, 8, 64, 13, 21, 82, 82, 21, 50, 20, 2, 36, 86, 54, 62, 2, 22, 51, 60, 4};
    vector<int> Qto = {89, 95, 88, 68, 65, 80, 72, 90, 39, 27, 76, 88, 54, 45, 73, 23, 96, 93, 39, 70, 92, 52, 50, 54, 51, 79, 15, 52, 72, 49, 71, 25, 76, 76, 76, 85, 85, 23, 73, 34, 92, 39, 92, 93, 85, 29, 29, 97, 86, 79};
    vector<int> output = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 4, 0, 0, 0};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 391463763;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 100;
    vector<int> Qfrom = {47, 12, 77, 15, 34, 79, 24, 9, 14, 32, 13, 32, 41, 14, 71, 15, 61, 93, 16, 26, 1, 34, 12, 79, 17, 25, 7, 16, 12, 60, 8, 21, 50, 16, 23, 48, 10, 14, 43, 6, 6, 46, 35, 43, 7, 4, 43, 36, 19, 14};
    vector<int> Qto = {95, 98, 80, 37, 68, 92, 92, 96, 26, 80, 46, 85, 64, 28, 97, 21, 81, 96, 32, 74, 38, 74, 91, 83, 38, 26, 63, 41, 37, 88, 88, 66, 76, 22, 71, 90, 50, 53, 53, 87, 82, 72, 81, 95, 98, 80, 89, 57, 78, 42};
    vector<int> output = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 745984555;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 100;
    vector<int> Qfrom = {37, 5, 15, 60, 5, 69, 90, 21, 6, 67, 15, 4, 45, 23, 32, 51, 42, 12, 55, 43, 3, 79, 67, 45, 37, 8, 30, 37, 2, 60, 18, 50, 66, 63, 60, 89, 9, 87, 23, 85, 26, 16, 41, 0, 19, 3, 7, 11, 6, 0};
    vector<int> Qto = {88, 39, 18, 85, 8, 70, 99, 86, 28, 79, 42, 41, 65, 84, 91, 93, 74, 24, 94, 58, 67, 94, 94, 90, 43, 75, 80, 70, 57, 86, 48, 75, 94, 72, 72, 92, 13, 93, 66, 94, 93, 39, 71, 62, 41, 9, 20, 14, 17, 31};
    vector<int> output = {0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 735272207;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 100;
    vector<int> Qfrom = {2, 29, 22, 21, 58, 55, 52, 45, 4, 5, 23, 27, 3, 18, 4, 0, 59, 75, 44, 46, 48, 5, 19, 8, 33, 31, 53, 24, 28, 24, 26, 27, 54, 16, 66, 19, 35, 13, 22, 7, 4, 74, 15, 36, 36, 52, 17, 5, 4, 10};
    vector<int> Qto = {25, 85, 82, 43, 69, 58, 68, 47, 26, 33, 34, 56, 9, 41, 19, 88, 92, 92, 51, 69, 67, 55, 95, 25, 63, 48, 65, 82, 65, 62, 31, 87, 55, 90, 72, 55, 71, 66, 81, 14, 39, 85, 43, 85, 65, 96, 40, 95, 75, 28};
    vector<int> output = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 763286431;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 100;
    vector<int> Qfrom = {59, 58, 24, 48, 64, 17, 82, 13, 3, 4, 68, 52, 54, 20, 31, 87, 45, 1, 0, 37, 48, 26, 72, 10, 30, 45, 15, 39, 11, 42, 21, 18, 41, 29, 32, 56, 29, 80, 37, 19, 36, 10, 19, 57, 48, 38, 92, 4, 61, 28};
    vector<int> Qto = {62, 72, 99, 57, 81, 75, 92, 42, 71, 20, 72, 69, 60, 62, 48, 99, 71, 9, 90, 43, 86, 45, 74, 30, 94, 78, 43, 83, 95, 54, 65, 85, 91, 59, 69, 88, 92, 82, 66, 65, 79, 17, 75, 97, 67, 55, 99, 28, 87, 70};
    vector<int> output = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 556369222;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 100;
    vector<int> Qfrom = {6, 25, 21, 51, 88, 50, 47, 32, 9, 58, 10, 33, 7, 28, 73, 41, 8, 17, 25, 12, 70, 20, 0, 60, 48, 65, 50, 68, 67, 16, 49, 43, 38, 18, 36, 28, 23, 11, 72, 16, 10, 5, 56, 36, 31, 3, 10, 38, 29, 27};
    vector<int> Qto = {56, 63, 38, 61, 89, 83, 86, 97, 64, 93, 63, 69, 86, 47, 90, 45, 26, 45, 41, 93, 93, 86, 50, 97, 84, 95, 53, 82, 78, 95, 74, 77, 70, 79, 41, 60, 47, 20, 74, 41, 54, 49, 66, 51, 54, 82, 52, 49, 86, 36};
    vector<int> output = {0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 318628276;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 100;
    vector<int> Qfrom = {48, 8, 57, 81, 26, 67, 7, 32, 10, 25, 63, 14, 6, 36, 54, 36, 54, 16, 9, 1, 54, 25, 3, 9, 41, 15, 44, 16, 22, 50, 31, 53, 56, 38, 14, 69, 43, 0, 48, 32, 44, 12, 55, 30, 4, 81, 76, 10, 51, 27};
    vector<int> Qto = {61, 85, 61, 84, 30, 79, 51, 37, 57, 78, 71, 74, 94, 86, 57, 94, 75, 34, 27, 17, 83, 52, 14, 36, 46, 24, 99, 46, 55, 73, 65, 83, 86, 59, 57, 92, 75, 87, 96, 93, 57, 47, 81, 50, 75, 86, 97, 22, 54, 82};
    vector<int> output = {0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 440364362;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 63;
    vector<int> Qfrom = {10, 5, 38, 8, 6, 16, 26, 15, 6, 52, 36, 9, 5, 47, 23, 34, 54, 16, 12, 45, 16, 17, 19, 10, 18, 18, 15, 25, 16, 1, 46, 19, 7, 6, 23, 36, 46, 3, 60, 50, 1, 2, 44, 19};
    vector<int> Qto = {15, 19, 49, 30, 57, 46, 30, 44, 18, 57, 38, 19, 20, 59, 59, 45, 60, 44, 15, 55, 42, 58, 60, 61, 34, 52, 41, 30, 29, 39, 50, 56, 19, 6, 45, 55, 56, 6, 60, 55, 53, 35, 60, 22};
    vector<int> output = {3, 0, 7, 0, 0, 9, 7, 1, 0, 5, 9, 0, 0, 5, 5, 1, 5, 7, 9, 5, 3, 5, 5, 5, 1, 3, 3, 1, 3, 0, 9, 5, 0, 9, 7, 5, 5, 1, 3, 5, 0, 8, 5, 7};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 98;
    vector<int> Qfrom = {17, 8, 14, 59, 6, 43, 29, 27, 44, 54, 0, 10, 0, 53, 64, 35, 9, 27, 40, 46, 7, 60, 8, 48, 67, 41, 32, 45, 37, 49, 11, 49, 43, 13, 29, 2, 30, 11, 44, 12, 1, 0, 55};
    vector<int> Qto = {27, 91, 66, 64, 87, 45, 87, 84, 85, 77, 89, 24, 54, 60, 66, 38, 81, 59, 93, 46, 91, 70, 67, 96, 89, 62, 67, 55, 57, 93, 94, 91, 57, 23, 79, 87, 58, 60, 77, 34, 75, 85, 89};
    vector<int> output = {0, 0, 0, 7, 0, 4, 0, 0, 0, 6, 0, 0, 0, 2, 6, 2, 0, 0, 0, 6, 0, 2, 4, 0, 6, 0, 0, 0, 0, 4, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 61;
    vector<int> Qfrom = {20, 25, 21, 2, 9, 4, 2, 25, 7, 6, 36, 21, 18, 0, 20, 27, 0, 35, 15, 2, 7, 20, 37, 15, 18, 5, 44, 20, 2, 46, 10, 4, 16, 15, 12, 32, 6, 4, 8, 15, 19, 15, 28};
    vector<int> Qto = {21, 49, 27, 48, 36, 6, 20, 39, 19, 37, 51, 27, 23, 51, 52, 32, 5, 39, 16, 6, 28, 46, 47, 22, 47, 44, 53, 42, 53, 60, 24, 14, 47, 31, 18, 39, 26, 31, 31, 37, 40, 55, 44};
    vector<int> output = {3, 0, 0, 0, 0, 6, 6, 0, 3, 0, 8, 0, 9, 0, 0, 1, 4, 3, 9, 2, 0, 0, 2, 3, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 7, 2, 0, 0, 0, 0, 0, 0, 6};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 34;
    vector<int> Qfrom = {5, 12, 3, 1, 1, 9, 17, 5, 11, 3, 12, 3, 5, 11, 6, 5};
    vector<int> Qto = {6, 23, 13, 26, 16, 17, 18, 30, 25, 9, 30, 18, 29, 14, 32, 30};
    vector<int> output = {3, 0, 1, 0, 8, 9, 0, 0, 0, 1, 0, 0, 0, 1, 4, 0};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 18;
    vector<int> Qfrom = {4, 3, 0, 5, 17, 0, 1, 15, 8, 15, 13, 1, 8, 3, 2, 12, 4, 7, 11, 12, 0, 0, 2, 4, 0, 3, 11, 8, 14, 10, 1, 4, 2, 10, 0, 3, 3, 9, 11, 8, 8, 3, 3, 13, 11, 1, 12, 9};
    vector<int> Qto = {11, 10, 4, 12, 17, 6, 7, 17, 9, 16, 16, 11, 10, 14, 11, 15, 6, 16, 12, 13, 16, 17, 6, 9, 15, 8, 15, 13, 16, 16, 3, 10, 4, 14, 14, 4, 7, 14, 15, 12, 16, 15, 7, 15, 15, 14, 14, 10};
    vector<int> output = {9, 7, 3, 3, 7, 7, 1, 3, 1, 9, 7, 1, 9, 3, 3, 1, 9, 9, 3, 9, 3, 1, 3, 9, 7, 1, 9, 9, 1, 6, 9, 1, 7, 1, 7, 7, 3, 3, 9, 7, 9, 3, 3, 3, 9, 1, 1, 7};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
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
    int N = 50;
    vector<int> Qfrom = {14, 5, 16, 4, 30, 30, 21, 3, 14, 31, 13, 20, 39, 42, 29, 12, 33, 14, 10, 39, 7, 1, 15, 24, 28, 15, 15, 44, 16, 38, 27, 29};
    vector<int> Qto = {43, 47, 37, 12, 41, 46, 27, 23, 29, 42, 48, 29, 47, 49, 45, 27, 39, 25, 16, 45, 8, 43, 16, 29, 32, 36, 17, 46, 36, 45, 49, 41};
    vector<int> output = {3, 7, 3, 1, 7, 1, 7, 1, 1, 3, 1, 9, 1, 7, 7, 9, 9, 3, 3, 9, 7, 7, 2, 7, 1, 9, 7, 7, 1, 1, 1, 1};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
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
    int N = 71;
    vector<int> Qfrom = {40, 35, 2, 46, 27, 17, 10, 33, 1, 11, 8, 2, 9, 35, 17, 21, 43, 0, 16, 7};
    vector<int> Qto = {60, 59, 4, 58, 41, 68, 52, 47, 67, 19, 20, 13, 65, 37, 66, 49, 61, 25, 35, 58};
    vector<int> output = {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 4, 0, 0, 0, 0, 0, 0};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 11916467;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 27;
    vector<int> Qfrom = {11, 7, 20, 10, 6, 8, 18, 16, 3, 2, 0, 8, 8, 2, 2, 9, 6, 5, 9, 4, 4, 0, 4, 7, 6, 22, 3, 2};
    vector<int> Qto = {24, 13, 22, 19, 26, 14, 20, 22, 15, 21, 10, 18, 23, 21, 25, 17, 17, 13, 24, 5, 5, 7, 11, 14, 18, 23, 12, 16};
    vector<int> output = {4, 0, 3, 8, 0, 0, 1, 7, 0, 0, 5, 2, 0, 0, 0, 8, 0, 0, 2, 7, 7, 5, 5, 0, 0, 1, 5, 0};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 99;
    vector<int> Qfrom = {63, 0, 17, 76, 32, 28, 13, 33, 23};
    vector<int> Qto = {94, 96, 70, 76, 68, 38, 32, 85, 74};
    vector<int> output = {4, 0, 0, 7, 1, 0, 0, 0, 0};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
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
    int N = 17;
    vector<int> Qfrom = {12, 9, 15, 14, 2, 8, 1, 11, 8, 3, 9, 2, 10, 13, 0, 5, 1, 0, 8, 14, 9, 4, 0, 11, 2, 0, 6, 6, 13, 10, 3, 1, 4, 3, 12, 0, 1, 1, 8, 10, 12, 5, 7, 6, 0, 2, 7, 11, 7};
    vector<int> Qto = {14, 10, 15, 14, 3, 11, 15, 14, 13, 11, 9, 12, 14, 16, 10, 12, 16, 16, 10, 14, 14, 7, 10, 15, 14, 11, 8, 9, 14, 13, 6, 6, 8, 15, 15, 15, 11, 8, 14, 12, 16, 16, 9, 14, 0, 9, 7, 11, 15};
    vector<int> output = {4, 2, 0, 8, 6, 8, 0, 4, 4, 0, 3, 0, 6, 0, 0, 0, 0, 0, 8, 8, 8, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 6, 0, 0, 0, 0, 0, 0, 2, 8, 0, 0, 0, 0, 0, 0, 0, 2, 0};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 100;
    vector<int> Qfrom = {19, 60, 13, 60, 8, 57, 7, 16, 3, 82, 9, 39, 57, 19, 33, 53, 4, 89, 0, 9, 1, 6, 41, 8, 28, 71, 18, 67, 3, 9, 39, 17, 39, 67, 2, 9, 55, 48, 50, 30, 19, 50, 27, 49, 74, 23, 30, 4, 24, 78};
    vector<int> Qto = {24, 69, 57, 67, 75, 95, 46, 86, 95, 91, 43, 68, 65, 94, 37, 74, 50, 94, 71, 34, 50, 62, 78, 28, 92, 76, 51, 76, 49, 31, 41, 66, 72, 93, 97, 43, 74, 94, 71, 95, 76, 93, 37, 69, 86, 64, 47, 80, 96, 81};
    vector<int> output = {7, 7, 7, 7, 3, 9, 7, 7, 3, 7, 9, 3, 1, 9, 9, 1, 1, 8, 7, 9, 7, 9, 7, 1, 9, 7, 1, 9, 7, 7, 9, 1, 9, 7, 9, 9, 7, 3, 1, 9, 9, 1, 9, 3, 1, 7, 9, 9, 7, 3};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
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
    int N = 100;
    vector<int> Qfrom = {62, 3, 86, 27, 32, 8, 59, 39, 53, 18, 20, 77, 4, 68, 75, 33, 28, 71, 21, 12, 13, 69, 12, 87, 48, 13, 42, 28, 42, 4, 11, 1, 1, 20, 47, 47, 50, 61, 38, 76, 28, 62, 61, 1, 56, 15, 61, 8, 46, 0};
    vector<int> Qto = {99, 29, 96, 69, 98, 10, 89, 48, 67, 20, 83, 80, 15, 99, 92, 59, 51, 84, 28, 25, 30, 79, 60, 99, 62, 13, 64, 78, 67, 93, 65, 91, 92, 41, 84, 67, 90, 86, 54, 91, 82, 87, 63, 19, 69, 93, 98, 33, 92, 48};
    vector<int> output = {0, 6, 0, 6, 0, 9, 0, 9, 3, 1, 0, 9, 9, 0, 0, 3, 6, 0, 4, 9, 4, 0, 2, 0, 7, 9, 1, 0, 3, 0, 6, 0, 0, 6, 0, 3, 0, 5, 1, 0, 0, 0, 3, 9, 3, 0, 0, 8, 0, 4};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 100;
    vector<int> Qfrom = {14, 23, 0, 4, 86, 60, 54, 35, 3, 1, 20, 33, 90, 40, 5, 19, 43, 44, 9, 25, 29, 9, 20, 9, 87, 17, 2, 72, 29, 6, 58, 25, 27, 49, 32, 14, 15, 15, 6, 50, 45, 19, 13, 3, 44, 46, 82, 15, 82, 64};
    vector<int> Qto = {50, 40, 53, 71, 96, 91, 78, 77, 82, 51, 26, 56, 97, 94, 14, 59, 71, 87, 97, 51, 51, 16, 25, 26, 99, 86, 71, 81, 73, 93, 88, 45, 46, 90, 38, 83, 74, 88, 67, 65, 73, 77, 77, 81, 45, 84, 88, 67, 97, 72};
    vector<int> output = {0, 0, 0, 0, 6, 8, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 5, 6, 0, 6, 0, 0, 8, 0, 0, 4, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 8, 0, 6, 2};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 159967581;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 100;
    vector<int> Qfrom = {67, 81, 51, 10, 5, 50, 59, 77, 10, 30, 56, 19, 21, 39, 32, 51, 77, 80, 27, 24, 2, 42, 12, 16, 34, 1, 6, 45, 23, 40, 37, 1, 12, 22, 46, 44, 25, 36, 66, 44, 7, 0, 16, 46, 11, 27, 34, 86, 87, 35};
    vector<int> Qto = {88, 86, 88, 52, 27, 52, 61, 99, 60, 65, 91, 32, 66, 50, 94, 82, 85, 96, 54, 49, 42, 90, 47, 43, 43, 33, 91, 63, 49, 94, 46, 11, 27, 98, 75, 80, 45, 99, 85, 57, 28, 25, 19, 95, 18, 54, 92, 99, 97, 66};
    vector<int> output = {0, 5, 0, 0, 2, 9, 8, 0, 0, 0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 2, 0, 0, 0, 0, 0, 0, 0, 0, 6, 2, 0, 9, 0, 0, 0, 0, 0};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 100;
    vector<int> Qfrom = {37, 35, 6, 82, 13, 12, 59, 21, 0, 46, 23, 21, 24, 18, 75, 9, 53, 5, 24, 20, 15, 6, 30, 49, 38, 8, 14, 45, 13, 29, 75, 58, 21, 18, 31, 1, 57, 43, 31, 7, 64, 21, 13, 25, 30, 47, 61, 6, 57, 16};
    vector<int> Qto = {62, 60, 62, 99, 42, 14, 63, 85, 57, 85, 25, 56, 25, 58, 85, 27, 59, 89, 48, 88, 68, 12, 40, 93, 85, 11, 89, 76, 53, 32, 81, 59, 71, 73, 51, 11, 70, 82, 82, 20, 86, 39, 42, 81, 86, 55, 82, 8, 85, 59};
    vector<int> output = {0, 0, 0, 0, 0, 4, 0, 0, 6, 0, 6, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 100;
    vector<int> Qfrom = {2, 64, 48, 33, 34, 6, 22, 43, 26, 39, 86, 5, 84, 23, 13, 37, 3, 18, 12, 39, 31, 92, 21, 76, 90, 30, 21, 5, 34, 38, 37, 19, 23, 19, 39, 3, 7, 4, 85, 1, 9, 57, 4, 1, 9, 33, 33, 59, 79, 40};
    vector<int> Qto = {21, 98, 73, 88, 75, 43, 80, 99, 90, 50, 98, 43, 93, 36, 55, 40, 61, 68, 93, 82, 59, 92, 77, 81, 98, 99, 32, 11, 91, 66, 77, 98, 83, 39, 81, 44, 52, 26, 89, 96, 80, 69, 65, 93, 60, 60, 48, 86, 80, 96};
    vector<int> output = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 9, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 100;
    vector<int> Qfrom = {29, 65, 53, 18, 12, 56, 6, 17, 85, 8, 35, 60, 24, 46, 13, 58, 36, 44, 62, 15, 11, 79, 35, 23, 7, 31, 13, 32, 10, 33, 6, 23, 73, 29, 35, 79, 66, 60, 44, 35, 42, 74, 4, 64, 71, 19, 44, 66, 27, 80};
    vector<int> Qto = {60, 75, 83, 88, 15, 64, 49, 42, 93, 72, 76, 61, 57, 97, 89, 86, 88, 77, 82, 67, 83, 88, 79, 98, 98, 95, 62, 68, 24, 95, 20, 62, 78, 69, 50, 93, 96, 87, 81, 56, 70, 80, 81, 76, 89, 82, 75, 83, 31, 86};
    vector<int> output = {0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 100;
    vector<int> Qfrom = {16, 93, 88, 15, 32, 43, 16, 72, 7, 23, 83, 38, 4, 27, 23, 49, 28, 33, 19, 38, 52, 50, 0, 32, 48, 29, 22, 10, 20, 8, 2, 6, 29, 62, 2, 22, 42, 30, 38, 59, 29, 61, 14, 36, 52, 46, 7, 64, 4, 17};
    vector<int> Qto = {88, 95, 90, 57, 81, 47, 87, 81, 62, 28, 86, 98, 59, 33, 63, 59, 39, 53, 57, 94, 68, 89, 28, 93, 66, 67, 41, 81, 43, 78, 4, 6, 33, 82, 77, 39, 57, 77, 42, 64, 36, 73, 81, 61, 74, 49, 71, 83, 35, 37};
    vector<int> output = {0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 8, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 100;
    vector<int> Qfrom = {35, 91, 9, 20, 55, 0, 51, 4, 68, 9, 73, 26, 40, 7, 71, 64, 21, 0, 21, 79, 23, 87, 2, 14, 18, 49, 18, 39, 28, 26, 3, 74, 30, 46, 17, 10, 21, 57, 44, 3, 57, 57, 67, 36, 28, 77, 39, 13, 40, 90};
    vector<int> Qto = {49, 93, 79, 50, 58, 36, 61, 83, 69, 65, 86, 81, 82, 9, 74, 78, 22, 12, 41, 99, 86, 93, 52, 71, 59, 83, 62, 99, 77, 87, 98, 99, 58, 72, 50, 76, 30, 92, 75, 40, 63, 80, 73, 58, 63, 78, 67, 88, 40, 93};
    vector<int> output = {0, 0, 6, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 8, 0};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 100;
    vector<int> Qfrom = {47, 50, 80, 54, 78, 50, 80, 41, 24, 12, 56, 95, 32, 4, 54, 22, 17, 38, 25, 9, 95, 3, 14, 33, 32, 60, 63, 31, 15, 51, 43, 18, 32, 14, 20, 8, 76, 76, 61, 26, 3, 1, 24, 1, 52, 47, 1, 49, 72, 20};
    vector<int> Qto = {79, 73, 90, 65, 91, 94, 88, 88, 70, 92, 74, 96, 48, 73, 68, 43, 44, 57, 69, 24, 98, 80, 42, 57, 55, 87, 71, 40, 70, 53, 96, 29, 68, 46, 82, 47, 76, 96, 65, 40, 60, 18, 37, 40, 55, 75, 96, 85, 93, 76};
    vector<int> output = {0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 6, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 463140413;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 100;
    vector<int> Qfrom = {19, 10, 81, 22, 44, 56, 55, 13, 5, 12, 61, 8, 39, 0, 0, 29, 2, 7, 20, 2, 46, 9, 13, 17, 24, 13, 70, 14, 36, 76, 45, 60, 63, 0, 31, 0, 31, 56, 30, 17, 52, 44, 5, 1, 71, 56, 42, 18, 16, 18};
    vector<int> Qto = {54, 79, 90, 81, 48, 66, 80, 20, 25, 52, 99, 65, 61, 71, 82, 53, 96, 72, 43, 88, 67, 53, 81, 88, 48, 58, 72, 47, 74, 89, 59, 60, 86, 45, 97, 8, 73, 85, 79, 34, 80, 86, 90, 63, 71, 61, 56, 86, 70, 36};
    vector<int> output = {0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 681971328;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 51;
    vector<int> Qfrom = {8, 2, 18, 29, 25, 5, 33, 22, 33, 19, 4, 18, 24, 33, 10, 16, 0, 20, 3, 26, 11, 28, 1, 13, 18, 33, 2, 22, 10, 45, 34, 11};
    vector<int> Qto = {34, 43, 40, 40, 39, 49, 49, 24, 39, 46, 23, 47, 44, 44, 40, 32, 30, 28, 47, 34, 32, 41, 37, 48, 46, 46, 10, 47, 22, 50, 49, 34};
    vector<int> output = {0, 1, 1, 5, 9, 7, 7, 1, 0, 3, 6, 3, 2, 1, 7, 0, 3, 4, 0, 9, 4, 1, 5, 3, 6, 2, 7, 7, 3, 8, 5, 3};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 96;
    vector<int> Qfrom = {33, 3, 6, 26, 55, 90, 5, 25, 9, 25, 37, 73, 12, 81, 30};
    vector<int> Qto = {50, 4, 52, 58, 91, 93, 29, 41, 17, 66, 95, 81, 65, 86, 51};
    vector<int> output = {1, 4, 7, 5, 0, 7, 5, 2, 6, 5, 6, 3, 1, 7, 9};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 93;
    vector<int> Qfrom = {8, 50, 9, 28, 6, 62, 69, 6, 57, 11, 23, 43, 38, 23, 62, 4, 41, 65, 47, 13, 65, 3, 20, 1, 15, 76, 35, 32, 10, 82, 9, 16, 70, 62, 1, 10, 9, 39, 59, 10, 38};
    vector<int> Qto = {92, 61, 45, 84, 81, 91, 70, 27, 84, 73, 30, 83, 87, 61, 68, 45, 47, 85, 70, 85, 85, 63, 63, 73, 88, 82, 81, 79, 52, 83, 57, 30, 82, 62, 15, 80, 71, 63, 59, 35, 78};
    vector<int> output = {5, 4, 9, 1, 7, 6, 2, 5, 6, 2, 0, 4, 8, 4, 5, 5, 6, 3, 7, 9, 9, 9, 5, 8, 1, 2, 2, 4, 5, 4, 7, 0, 4, 4, 3, 5, 2, 1, 0, 4, 7};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 44;
    vector<int> Qfrom = {12, 11, 20, 15, 3, 4, 12, 16, 31, 10, 20, 7, 12, 11, 34, 9, 22, 9, 15, 33, 5, 4, 22, 25, 20, 8, 13, 8, 18, 32, 20, 17, 33, 9, 13};
    vector<int> Qto = {34, 36, 35, 30, 4, 9, 12, 38, 40, 29, 35, 31, 33, 26, 38, 34, 40, 28, 30, 37, 32, 33, 25, 42, 41, 24, 26, 8, 28, 33, 37, 23, 43, 41, 32};
    vector<int> output = {4, 4, 8, 7, 5, 4, 5, 3, 3, 7, 7, 4, 5, 7, 7, 2, 3, 2, 5, 8, 3, 9, 9, 4, 4, 1, 2, 5, 8, 8, 8, 3, 6, 2, 8};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 84;
    vector<int> Qfrom = {24, 68, 31, 26, 60, 5, 12};
    vector<int> Qto = {39, 70, 51, 67, 63, 60, 68};
    vector<int> output = {6, 9, 2, 1, 4, 8, 3};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 100;
    vector<int> Qfrom = {48, 30, 45, 10, 4, 41, 3, 15, 20, 2, 28, 31, 51, 7, 46, 6, 68, 21, 24, 42, 73, 61, 27, 38, 30, 46, 83, 46, 52, 25, 21, 45, 56, 22, 58, 6, 43, 19, 50, 76, 5, 11, 49, 40, 13, 11, 8, 11, 12, 11};
    vector<int> Qto = {55, 48, 66, 43, 37, 47, 99, 79, 60, 42, 41, 70, 63, 66, 90, 95, 85, 29, 32, 68, 80, 93, 76, 47, 59, 94, 91, 60, 70, 89, 69, 63, 59, 86, 92, 40, 58, 30, 71, 89, 77, 24, 62, 48, 46, 85, 48, 18, 27, 62};
    vector<int> output = {5, 4, 3, 7, 0, 8, 7, 9, 1, 3, 7, 4, 9, 4, 2, 6, 8, 8, 5, 1, 6, 0, 2, 6, 3, 0, 1, 2, 3, 0, 7, 2, 7, 7, 4, 3, 1, 6, 7, 9, 2, 6, 0, 5, 8, 2, 8, 7, 8, 2};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 100;
    vector<int> Qfrom = {61, 26, 56, 53, 18, 53, 48, 40, 21, 50, 15, 26, 38, 38, 52, 18, 91, 36, 38, 51, 69, 49, 34, 46, 51, 2, 21, 32, 13, 15, 11, 14, 2, 6, 18, 25, 8, 34, 58, 32, 19, 16, 26, 3, 32, 58, 43, 27, 5, 46};
    vector<int> Qto = {97, 38, 62, 79, 99, 94, 82, 42, 43, 77, 48, 54, 80, 72, 89, 43, 95, 72, 66, 77, 70, 75, 63, 70, 62, 22, 87, 69, 64, 92, 96, 76, 25, 23, 83, 37, 78, 75, 79, 99, 46, 44, 65, 52, 33, 88, 58, 88, 26, 48};
    vector<int> output = {0, 5, 0, 8, 0, 5, 9, 4, 2, 2, 8, 3, 3, 4, 5, 8, 1, 9, 0, 3, 2, 1, 5, 1, 7, 7, 0, 9, 9, 5, 7, 0, 5, 2, 3, 9, 1, 6, 5, 9, 9, 1, 0, 6, 9, 1, 8, 5, 5, 5};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 100;
    vector<int> Qfrom = {18, 66, 45, 47, 82, 86, 5, 27, 34, 76, 56, 80, 43, 23, 7, 6, 1, 22, 2, 45, 64, 94, 0, 1, 9, 41, 6, 15, 66, 33, 87, 57, 20, 79, 2, 41, 6, 9, 33, 11, 12, 35, 45, 7, 19, 50, 16, 13, 23, 58};
    vector<int> Qto = {90, 99, 61, 87, 83, 95, 97, 31, 90, 88, 88, 89, 53, 61, 33, 94, 58, 72, 42, 86, 66, 96, 64, 38, 18, 41, 67, 50, 94, 89, 91, 69, 80, 92, 55, 91, 25, 53, 78, 84, 42, 79, 74, 13, 23, 92, 84, 18, 81, 99};
    vector<int> output = {3, 0, 7, 7, 8, 9, 3, 2, 0, 6, 2, 8, 9, 4, 4, 6, 1, 6, 6, 8, 1, 5, 4, 7, 6, 6, 8, 5, 7, 2, 6, 5, 9, 6, 1, 1, 2, 3, 1, 3, 6, 5, 2, 9, 3, 0, 0, 2, 0, 8};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 100;
    vector<int> Qfrom = {42, 41, 6, 35, 69, 67, 5, 95, 16, 31, 46, 33, 86, 42, 26, 17, 35, 5, 41, 28, 8, 0, 30, 15, 70, 9, 37, 48, 42, 9, 27, 1, 6, 14, 0, 62, 59, 33, 13, 45, 84, 16, 11, 2, 56, 1, 73, 4, 30, 37};
    vector<int> Qto = {86, 58, 16, 65, 86, 88, 21, 96, 90, 89, 95, 95, 93, 58, 75, 68, 66, 30, 72, 58, 86, 19, 85, 91, 71, 32, 69, 75, 72, 71, 63, 88, 16, 91, 89, 83, 90, 43, 90, 71, 94, 96, 71, 90, 93, 47, 82, 68, 52, 99};
    vector<int> output = {5, 3, 1, 5, 1, 2, 0, 4, 0, 3, 1, 5, 8, 6, 9, 5, 1, 0, 6, 2, 0, 5, 4, 9, 3, 5, 0, 6, 8, 1, 9, 0, 9, 4, 5, 0, 9, 9, 7, 8, 7, 6, 0, 7, 4, 7, 7, 5, 2, 7};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 100;
    vector<int> Qfrom = {35, 53, 13, 17, 26, 37, 35, 35, 18, 21, 52, 8, 51, 9, 43, 33, 23, 27, 46, 10, 62, 20, 59, 58, 55, 54, 76, 15, 15, 14, 83, 57, 28, 12, 39, 6, 35, 49, 59, 4, 4, 95, 58, 10, 12, 23, 8, 35, 19, 87};
    vector<int> Qto = {37, 86, 40, 37, 70, 92, 87, 36, 71, 51, 60, 61, 56, 90, 61, 65, 78, 60, 75, 20, 96, 62, 62, 75, 71, 73, 77, 81, 39, 74, 97, 97, 62, 23, 44, 29, 69, 84, 59, 16, 36, 99, 93, 35, 98, 31, 97, 55, 71, 95};
    vector<int> output = {8, 7, 8, 0, 1, 3, 1, 5, 1, 3, 7, 1, 7, 2, 6, 7, 8, 0, 4, 1, 5, 6, 2, 6, 6, 4, 6, 1, 0, 4, 5, 2, 9, 6, 5, 6, 7, 5, 8, 9, 6, 0, 5, 5, 3, 4, 2, 4, 5, 4};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 100;
    vector<int> Qfrom = {0};
    vector<int> Qto = {99};
    vector<int> output = {0};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 257145574;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 100;
    vector<int> Qfrom = {0};
    vector<int> Qto = {99};
    vector<int> output = {1};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 124861268;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 10;
    vector<int> Qfrom = {0, 0, 0, 2, 1, 0, 1, 7, 1, 0, 4, 0, 6, 3, 0, 0, 2, 2, 0, 5, 5, 7, 4, 6, 4, 3, 6, 4, 2, 3, 0, 0, 5, 1, 2, 6, 1, 0, 1, 1, 4, 5, 1, 7, 1, 3, 0, 0, 2, 3};
    vector<int> Qto = {4, 5, 4, 4, 3, 6, 6, 9, 5, 4, 5, 9, 7, 4, 4, 9, 6, 3, 9, 9, 9, 9, 7, 9, 6, 5, 7, 9, 5, 8, 1, 7, 6, 3, 7, 8, 2, 0, 8, 4, 7, 7, 8, 8, 7, 9, 5, 3, 4, 7};
    vector<int> output = {9, 1, 9, 7, 1, 7, 9, 9, 7, 9, 7, 3, 1, 3, 9, 3, 1, 9, 3, 7, 7, 9, 7, 3, 9, 7, 1, 1, 3, 3, 7, 1, 3, 1, 3, 9, 1, 3, 3, 3, 7, 9, 3, 7, 7, 1, 1, 3, 7, 7};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
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
    int N = 10;
    vector<int> Qfrom = {0, 0, 0, 2, 0, 1, 6, 0, 5, 2, 1, 2, 0, 3, 6, 0, 2, 3, 0, 3, 0, 5, 4, 3, 0, 1, 3, 0, 5, 9, 0, 5, 3, 5, 2, 3, 3, 5, 6, 6, 4, 2, 1, 0, 1, 0, 4, 7, 4, 2};
    vector<int> Qto = {2, 5, 6, 5, 7, 4, 8, 9, 5, 4, 6, 8, 5, 8, 9, 9, 5, 4, 5, 5, 5, 5, 8, 3, 4, 6, 4, 7, 9, 9, 7, 7, 7, 6, 2, 5, 3, 7, 7, 7, 9, 8, 5, 6, 4, 0, 6, 9, 9, 5};
    vector<int> output = {3, 3, 7, 3, 1, 7, 1, 1, 7, 9, 1, 3, 3, 1, 7, 1, 3, 3, 3, 1, 3, 7, 7, 3, 9, 1, 3, 1, 9, 7, 1, 9, 7, 3, 3, 1, 3, 9, 7, 7, 9, 3, 9, 7, 7, 7, 3, 3, 9, 3};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
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
    int N = 10;
    vector<int> Qfrom = {1, 1, 2, 4, 1, 5, 2, 7, 2, 3, 5, 6, 2, 3, 0, 1, 7, 7, 0, 0, 1, 3, 3, 0, 3, 1, 1, 4, 3, 5, 7, 1, 3, 5, 8, 3, 1, 4, 2, 1, 2, 2, 1, 4, 2, 1, 3, 6, 6, 3};
    vector<int> Qto = {9, 2, 7, 5, 3, 8, 6, 8, 7, 4, 9, 7, 7, 5, 8, 6, 7, 8, 9, 0, 6, 9, 8, 4, 9, 8, 2, 4, 5, 9, 8, 8, 9, 9, 9, 4, 1, 6, 7, 5, 2, 3, 4, 7, 4, 3, 5, 9, 6, 9};
    vector<int> output = {4, 9, 8, 6, 1, 4, 4, 3, 8, 9, 4, 1, 8, 4, 2, 8, 7, 3, 2, 3, 8, 6, 6, 3, 6, 4, 9, 1, 4, 4, 3, 4, 6, 4, 9, 9, 7, 8, 8, 6, 7, 3, 1, 6, 3, 1, 4, 9, 3, 6};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
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
    int N = 10;
    vector<int> Qfrom = {8, 8, 5, 3, 6, 6, 0, 0, 1, 1, 0, 3, 3, 1, 5, 7, 6, 2, 4, 7, 0, 2, 0, 0, 2, 4, 7, 5, 0, 2, 1, 2, 0, 7, 0, 1, 0, 2, 6, 6, 4, 3, 1, 3, 1, 2, 2, 0, 8, 2};
    vector<int> Qto = {8, 8, 9, 9, 9, 6, 2, 4, 5, 9, 6, 6, 5, 8, 9, 7, 7, 7, 6, 9, 1, 6, 3, 6, 6, 5, 7, 8, 3, 4, 4, 5, 1, 9, 1, 5, 6, 8, 8, 8, 8, 3, 2, 8, 7, 9, 2, 3, 9, 2};
    vector<int> output = {1, 1, 2, 2, 2, 3, 1, 1, 8, 6, 8, 8, 6, 8, 2, 7, 1, 4, 6, 4, 9, 2, 3, 8, 2, 2, 7, 6, 3, 9, 3, 4, 9, 4, 9, 8, 8, 4, 1, 1, 2, 3, 3, 6, 8, 8, 9, 3, 2, 9};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
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
    int N = 10;
    vector<int> Qfrom = {2, 1, 1, 1, 2, 3, 5, 0, 7, 1, 6, 4, 0, 7, 1, 6, 0, 2, 6, 1, 6, 2, 7, 4, 0, 9, 1, 1, 6, 3, 3, 1, 3, 3, 5, 4, 1, 3, 5, 6, 5, 0, 2, 2, 0, 0, 2, 5, 6, 5};
    vector<int> Qto = {6, 7, 2, 4, 7, 5, 8, 8, 9, 8, 7, 8, 9, 8, 6, 8, 0, 4, 8, 8, 7, 8, 7, 8, 3, 9, 4, 4, 8, 5, 7, 4, 9, 4, 6, 8, 2, 9, 5, 7, 9, 3, 8, 9, 6, 6, 3, 8, 7, 9};
    vector<int> output = {5, 5, 3, 1, 5, 3, 5, 5, 1, 5, 5, 5, 5, 9, 5, 5, 7, 7, 5, 5, 5, 5, 7, 5, 7, 9, 1, 1, 5, 3, 5, 1, 5, 7, 5, 5, 3, 5, 9, 5, 5, 7, 5, 5, 5, 5, 7, 5, 5, 5};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
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
    int N = 15;
    vector<int> Qfrom = {6, 5, 9, 0, 11, 3, 9, 5, 1, 7, 10, 0, 0, 4, 2, 6, 11, 0, 7, 14};
    vector<int> Qto = {10, 9, 10, 9, 12, 4, 10, 14, 2, 8, 14, 14, 14, 12, 14, 9, 14, 3, 11, 14};
    vector<int> output = {7, 0, 3, 0, 0, 5, 3, 0, 2, 1, 0, 0, 0, 0, 0, 1, 0, 4, 9, 7};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 3840;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 20;
    vector<int> Qfrom = {0, 12, 10, 9, 5, 7, 17, 4, 9, 4, 5, 6, 12, 3, 1};
    vector<int> Qto = {16, 12, 13, 19, 15, 9, 19, 16, 16, 13, 7, 9, 14, 5, 18};
    vector<int> output = {0, 0, 0, 0, 0, 9, 9, 0, 0, 0, 0, 1, 0, 0, 0};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 999820807;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 20;
    vector<int> Qfrom = {9, 6, 2, 3, 1, 3, 12, 3, 4, 6, 10, 18, 10, 11, 15, 5};
    vector<int> Qto = {12, 12, 4, 13, 7, 14, 17, 10, 5, 13, 11, 19, 17, 14, 17, 8};
    vector<int> output = {7, 5, 7, 5, 0, 5, 8, 5, 3, 5, 3, 9, 4, 1, 6, 5};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 276398080;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 58;
    vector<int> Qfrom = {5, 5};
    vector<int> Qto = {8, 8};
    vector<int> output = {1, 2};
    ProductQuery* pObj = new ProductQuery();
    clock_t start = clock();
    int result = pObj->theInput(N, Qfrom, Qto, output);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=14732&pm=11870
********************************************************************************
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <queue> 
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
#include <cctype> 
#include <string> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
 
using namespace std; 
 
#define SIZE(X) ((int)(X.size())) 
#define MP(X,Y) make_pair(X,Y) 
typedef long long int64; 
template<class T> inline void checkmin(T &a,T b){if(b<a) a=b;} 
typedef pair<int,int> ipair; 
 
const int MOD=1000000007; 
 
#define MUL(a,b) ((int)((int64)(a)*(int64)(b)%MOD)) 
 
const int maxsize=110; 
 
int f[maxsize][maxsize]; 
 
class ProductQuery 
{ 
public: 
  inline void addto(int &a,int b) 
  { 
    a+=b; 
    if (a>=MOD) a-=MOD; 
  } 
  int theInput(int n, vector <int> S, vector <int> T, vector <int> G,int M=-1) 
  { 
    if (M<0) return MUL(theInput(n,S,T,G,2),theInput(n,S,T,G,5)); 
    int inv[10]; 
    for (int i=0;i<M;i++) for (int j=0;j<M;j++) if ((i*j)%M==1) inv[i]=j; 
    int m=SIZE(S); 
    int rs[maxsize],rt[maxsize],rg[maxsize]; 
    int h[maxsize],q[maxsize]; 
    for (int i=0;i<m;i++) rs[i]=S[i],rt[i]=T[i],rg[i]=G[i]%M; 
    bool can_zero[maxsize]; 
    memset(can_zero,true,sizeof(can_zero)); 
    for (int i=0;i<m;i++) if (rg[i]>0)  
      for (int j=rs[i];j<=rt[i];j++)  
        can_zero[j]=false; 
    for (int s=0;s<=n;s++) for (int t=s;t<=n;t++) 
    { 
      int R=1; 
      for (int i=0;i<m;i++) if (rs[i]>=s && rt[i]<=t && rg[i]==0) R=0; 
      if (R>0) 
      { 
        int size=t-s+2; 
        vector<ipair> g[maxsize]; 
        for (int i=0;i<m;i++) if (rs[i]>=s && rt[i]<=t) 
        { 
          int a=rs[i]-s; 
          int b=rt[i]+1-s; 
          g[a].push_back(MP(b,rg[i])); 
          g[b].push_back(MP(a,inv[rg[i]])); 
        } 
        memset(h,255,sizeof(h)); 
        for (int i=0;i<size;i++) if (h[i]<0) 
        { 
          if (i>0) R=MUL(R,M-1); 
          int sizeq=0; 
          h[i]=1; 
          q[sizeq++]=i; 
          for (int cl=0;cl<sizeq;cl++) for (int key=q[cl],i=SIZE(g[key])-1;i>=0;i--) 
          { 
            int other=g[key][i].first; 
            int new_val=(h[key]*g[key][i].second)%M; 
            if (h[other]<0) 
            { 
              h[other]=new_val; 
              q[sizeq++]=other; 
            } 
            else if (new_val!=h[other]) R=0; 
          } 
        } 
      } 
      f[s][t]=R; 
    } 
    int g[maxsize]; 
    memset(g,0,sizeof(g)); 
    for (int s=-1;s<n;s++) if (s<0 || g[s]>0) 
    { 
      int cnt=(s<0)?1:g[s]; 
      int next=n; 
      for (int i=0;i<m;i++) if (rg[i]==0 && rs[i]>s) checkmin(next,rt[i]); 
      for (int k=s+1;k<=next;k++) if (can_zero[k]) 
      { 
        int md=(s+1>k-1)?1:f[s+1][k-1]; 
        addto(g[k],MUL(cnt,md)); 
      } 
    } 
    return g[n]; 
  } 
};

********************************************************************************
*******************************************************************************/