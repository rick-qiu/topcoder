/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10421
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

class TheProduct {
public:
    long maxProduct(vector<int> numbers, int k, int maxDist);
};

long TheProduct::maxProduct(vector<int> numbers, int k, int maxDist) {
    long ret;
    return ret;
}


int test0() {
    vector<int> numbers = {7, 4, 7};
    int k = 2;
    int maxDist = 1;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 28;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> numbers = {7, 4, 7};
    int k = 2;
    int maxDist = 50;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 49;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> numbers = {-3, -5, -8, -9, -1, -2};
    int k = 3;
    int maxDist = 3;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = -10;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> numbers = {3, 0, -2, 10, 0, 0, 3, -8, 0, 2};
    int k = 2;
    int maxDist = 2;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> numbers = {27, 42, 1, 31, -23, 19, 25, -32, 46, -3, -46, 5, -26, 45, 8, -48, -15, -20, 43, 15, 39, -50, 29, 25, -14, -1, -43, 21, 38, 32, -23, 9, 49, 9, -7, 49, 20, -19, 47, -33, 1, 18, 23, -46, 5, -28, 5, 47};
    int k = 1;
    int maxDist = 7;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 49;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> numbers = {12, -1, -26, 21, -24, 31, 13, 6, -9, -34, -44, 40, 10};
    int k = 1;
    int maxDist = 13;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 40;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> numbers = {12, -14, -12, 37, -25, -8, -16, -10, 36, 24, 0, -33, 9, -28, 48, 13, 44, -8, -44, 28, -37, 49, 50, -34, 45, 41, -8, -42, 3, -7, 11};
    int k = 8;
    int maxDist = 10;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 17642427264000;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> numbers = {-33, -12, 45, -43, 10, 13, 48, -36, 38, -38, -50, -5, -10, -30, 19, 17, -21, -16, 27, 17, -49, -17, -44, 39, -12, 33, 1, -34, 28, -23, -13, 20, 11, -1, 37, 36};
    int k = 1;
    int maxDist = 15;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 48;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> numbers = {1, 27, 48, -9, -49, -35, 11, 37, 7, 7, -50, -38, -34, -2, -50, 46, -41, 24, 6};
    int k = 10;
    int maxDist = 16;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 14734525125600000;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> numbers = {7, -15, 31, 49, -44, 35, 44, -47, -23, 15, -11, 10, -21, 10, -13, 0, -20, -36, 22, -13, -39, -39, -31, -13, -27, -43, -6, 40, 5, -47, 35, -8, 24, -31, -24, -1};
    int k = 3;
    int maxDist = 31;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 108241;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> numbers = {-14, -37, 26, -11, 4, 50, 9, -16, -50, -25, 15, 13, 19, 45, 5, -35, 30, 38, -15, 29, 34, 17, -20, -36, 7, -32, 26, 8, -22, 29, 18, -42, -29, 24, 35};
    int k = 1;
    int maxDist = 11;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 50;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> numbers = {-41, -23, 30, -41, 22, 5, -50, 33, 18, 12, -45, 43, -35, -45, -31, 28, 50, 33, 25, 32, 43, -10, -50, -23, 16, -3, 9};
    int k = 3;
    int maxDist = 6;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 112500;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> numbers = {29};
    int k = 1;
    int maxDist = 13;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 29;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> numbers = {-11, 16, -6, -10, -42, -30, -28, 36, -48, -39, 39, 33, -11, -35, 49, -9, 3, -47, -47, 41, -10, 32, 38, -27, 35, -46, 31, 27, 29, 8, 11, 49, 29, 48, 24, -12, 46, -21, -37, -24, 33, -41, 49, -36, 11};
    int k = 1;
    int maxDist = 1;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 49;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> numbers = {40, 48, -43, 32, -49, 4, -13, -38, -8, -40, -37, -14, -4, -37, 9, 26, -34, -39, -4, 30, -14};
    int k = 1;
    int maxDist = 31;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 48;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> numbers = {-2, -33, -1, -23, -48, -9, -29, -44};
    int k = 1;
    int maxDist = 7;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> numbers = {-43, -50, -23, -38, -33, -50, -41};
    int k = 5;
    int maxDist = 7;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = -50848446;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> numbers = {-33, -7, -26, -41, -50, -40, -12};
    int k = 3;
    int maxDist = 2;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = -6006;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> numbers = {-4};
    int k = 1;
    int maxDist = 1;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = -4;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> numbers = {-5};
    int k = 1;
    int maxDist = 1;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = -5;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> numbers = {-44, -3, -12, -14, -6, -45, -17, -50, -8, -2, -32, -17, -5, -28, -42, -44, -14, -14, -29, -41, -16, -17, -18, -15, -17};
    int k = 8;
    int maxDist = 7;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 6960957696000;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> numbers = {48, 17, 49, 27, 2, 41, 21, 6, 0, 1, 21, 7, 0, 27, 12, 17, 0, 9, 6, 9, 42, 17, 43, 24, 9, 0, 10, 38, 30, 18, 17, 46, 6, 15, 8, 45, 27, 48, 3, 6, 47, 38, 36, 44, 5, 33, 0, 42};
    int k = 1;
    int maxDist = 7;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 49;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> numbers = {45, 22, 8, 6, 36, 36, 21, 9, 34, 33, 32, 35, 33, 49, 3, 9, 35, 15, 19, 17, 6, 23, 17, 36, 15, 15, 2, 33, 3, 48, 22, 5, 11, 0, 30, 30, 33, 20, 0, 6, 23, 5, 33};
    int k = 1;
    int maxDist = 2;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 49;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> numbers = {34, 24, 16, 14, 9, 35, 39, 47, 0, 39, 48, 17, 12, 21, 12, 1, 1, 46, 36, 25, 49, 17, 40, 9, 45, 33, 3, 9, 50, 28, 0, 33, 42, 6, 32, 21, 47, 1, 40, 21, 0, 36, 6, 10, 17, 19, 48, 20};
    int k = 3;
    int maxDist = 1;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 64155;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> numbers = {48, 41, 17, 23, 24, 15, 27, 13, 34, 16, 18, 8, 18, 5, 2, 24, 45, 32, 19, 47, 36, 24, 13, 42, 43, 0, 31, 21, 46, 24, 44, 25, 6, 21, 18, 39, 0, 35, 22, 5, 27, 8, 20, 15, 0, 18, 20};
    int k = 2;
    int maxDist = 7;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 2115;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> numbers = {5, 4, 27, 26, 50, 33, 22, 41, 15, 30, 24, 15, 20, 40, 11, 7, 0, 20, 32, 23, 13, 19, 19, 0, 17, 44, 8, 41, 0, 17, 39, 41, 39, 39, 17, 17, 39, 33, 12, 28, 21, 30, 39, 38, 20, 17, 39, 14, 14, 22};
    int k = 3;
    int maxDist = 1;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 62361;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> numbers = {27, 42, 1, 31, -23, 19, 25, -32, 46, -3, -46, 5, -26, 45, 8, -48, -15, -20, 43, 15, 39, -50, 29, 25, -14, -1, -43, 21, 38, 32, -23, 9, 49, 9, -7, 49, 20, -19, 47, -33, 1, 18, 23, -46, 5, -28, 5, 47, 0, -15};
    int k = 3;
    int maxDist = 1;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 29469;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> numbers = {-26, 21, -24, 31, 13, 6, -9, -34, -44, 40, 10, 40, -42, -32, 12, -14, -12, 37, -25, -8, -16, -10, 36, 24, 0, -33, 9, -28, 48, 13, 44, -8, -44, 28, -37, 49, 50, -34, 45, 41, -8, -42, 3, -7, 11};
    int k = 1;
    int maxDist = 2;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 50;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> numbers = {-33, -12, 45, -43, 10, 13, 48, -36, 38, -38, -50, -5, -10, -30, 19, 17, -21, -16, 27, 17, -49, -17, -44, 39, -12, 33, 1, -34, 28, -23, -13, 20, 11, -1, 37, 36, -31, 4, -8, 1, 27, 48, -9, -49};
    int k = 2;
    int maxDist = 1;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 1900;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> numbers = {7, 7, -50, -38, -34, -2, -50, 46, -41, 24, 6, -38, -49, 24, 7, -15, 31, 49, -44, 35, 44, -47, -23, 15, -11, 10, -21, 10, -13, 0, -20, -36, 22, -13, -39, -39, -31, -13, -27, -43, -6, 40, 5, -47, 35, -8, 24, -31, -24, -1};
    int k = 6;
    int maxDist = 1;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 4837589680;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> numbers = {-14, -37, 26, -11, 4, 50, 9, -16, -50, -25, 15, 13, 19, 45, 5, -35, 30, 38, -15, 29, 34, 17, -20, -36, 7, -32, 26, 8, -22, 29, 18, -42, -29, 24, 35, 42, 18, -19, -41, -23, 30, -41, 22, 5, -50, 33, 18, 12, -45, 43};
    int k = 1;
    int maxDist = 1;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 50;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> numbers = {28, 50, 33, 25, 32, 43, -10, -50, -23, 16, -3, 9, -31, -49, -13, 29, 10, 36, -37, -11, 16, -6, -10, -42, -30, -28, 36, -48, -39, 39, 33, -11, -35, 49, -9, 3, -47, -47, 41, -10, 32, 38, -27, 35, -46, 31, 27};
    int k = 6;
    int maxDist = 1;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 2207761920;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> numbers = {49, 29, 48, 24, -12, 46, -21, -37, -24, 33, -41, 49, -36, 11, 3, -41, 15, 40, 48, -43, 32, -49, 4, -13, -38, -8, -40, -37, -14, -4, -37, 9, 26, -34, -39, -4, 30, -14, 0, 6, -7, -7, 32, -31};
    int k = 4;
    int maxDist = 1;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 3236352;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> numbers = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int k = 10;
    int maxDist = 50;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 97656250000000000;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> numbers = {-50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50};
    int k = 10;
    int maxDist = 50;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 97656250000000000;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> numbers = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int k = 10;
    int maxDist = 50;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> numbers = {-50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50};
    int k = 9;
    int maxDist = 50;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = -1953125000000000;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> numbers = {-26, -32, -25, -13, -49, -10, -28, -36, -44, -6, -14, -40, -28, -2, -22, -17, -10, -17, -24, -28, -49, -46, -32, -16, -17, -7, -38, -40, -20, -22, -20, -28, -20, -40, -50, -44, -36, -33, -14, -10, -34, -2, -34, -2, -44, -24, -11, -5, -38, -30};
    int k = 9;
    int maxDist = 2;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = -731808000;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> numbers = {-22, -20, -29, -36, -10, -4, -15, -30, -38, -50, -16, -20, -13, -41, -41, -1, -45, -28, -2, -38, -20, -16, -50, -40, -10, -12, -16, -5, -50, -24, -20, -34, -48, -38, -46, -3, -16, -50, -41, -46, -16, -3, -30, -18, -6, -15, -50, -36, -6, -8};
    int k = 9;
    int maxDist = 1;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = -12597120000;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> numbers = {-1, -49, -8, -50, -6, -20, -12, -28, -37, -16, -4, -48, -20, -22, -30, -34, -32, -40, -12, -18, -25, -2, -46, -12, -28, -21, -18, -12, -50, -50, -43, -32, -11, -35, -30, -30, -12, -31, -26, -24, -31, -46, -44, -25, -34, -8, -50, -46, -3, -16};
    int k = 9;
    int maxDist = 1;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = -29240064000;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> numbers = {-15, -48, -20, -34, -30, -36, -14, -32, -35, -45, -4, -10, -22, -32, -28, -36, -38, -31, -50, -32, -4, -12, -28, -10, -45, -32, -22, -26, -15, -22, -50, -22, -14, -34, -2, -40, -11, -14, -40, -16, -30, -40, -49, -2, -25, -18, -44, -9, -4, -35};
    int k = 9;
    int maxDist = 5;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = -19353600;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> numbers = {-50, -30, -38, -50, -45, -40, -18, -50, -40, -20, -25, -6, -34, -14, -46, -16, -48, -12, -50, -40, -30, -50, -48, -6, -24, -48, -45, -2, -25, -38, -40, -26, -42, -43, -25, -10, -18, -20, -19, -33, -40, -40, -6, -10, -2, -50, -26, -45, -50, -38};
    int k = 9;
    int maxDist = 3;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = -2275257600;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> numbers = {27, 42, 1, 31, -23, 19, 25, -32, 46, -3, -46, 5, -26, 45, 8, -48, -15, -20, 43, 15, 39, -50, 29, 25, -14, -1, -43, 21, 38, 32, -23, 9, 49, 9, -7, 49, 20, -19, 47, -33, 1, 18, 23, -46, 5, -28, 5, 47};
    int k = 9;
    int maxDist = 1;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 13130910000000;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> numbers = {12, -1, -26, 21, -24, 31, 13, 6, -9, -34, -44, 40, 10};
    int k = 9;
    int maxDist = 1;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 656327992320;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> numbers = {12, -14, -12, 37, -25, -8, -16, -10, 36, 24, 0, -33, 9, -28, 48, 13, 44, -8, -44, 28, -37, 49, 50, -34, 45, 41, -8, -42, 3, -7, 11};
    int k = 10;
    int maxDist = 1;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 2466019277568000;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> numbers = {-33, -12, 45, -43, 10, 13, 48, -36, 38, -38, -50, -5, -10, -30, 19, 17, -21, -16, 27, 17, -49, -17, -44, 39, -12, 33, 1, -34, 28, -23, -13, 20, 11, -1, 37, 36};
    int k = 9;
    int maxDist = 1;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 31383780480000;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> numbers = {1, 27, 48, -9, -49, -35, 11, 37, 7, 7, -50, -38, -34, -2, -50, 46, -41, 24, 6};
    int k = 10;
    int maxDist = 1;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 22088794280000;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> numbers = {7, 4, 7};
    int k = 2;
    int maxDist = 1;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 28;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> numbers = {3, 0, -2, 10, 0, 0, 3, -8, 0, 2};
    int k = 3;
    int maxDist = 6;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 160;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> numbers = {-41, -5, -10, -31, -44, -16, -3, -33, -34, -35, -44, -44, -25, -48, -16, -32, -37, -8, -33, -30, -6, -18, -26, -37, -40, -30, -50, -32, -5, -41, -32, -12, -33, -22, -14, -34, -1, -41, -45, -8, -39, -27, -23, -45, -10, -50, -34};
    int k = 6;
    int maxDist = 3;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 5504557500;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> numbers = {7, 4, 7, 3, 2, 4, 5, 4, 7, 2, 3, 2, -3};
    int k = 2;
    int maxDist = 50;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 49;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> numbers = {-1, -1, -1, -1};
    int k = 4;
    int maxDist = 4;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> numbers = {-50, -40, -30, -20, -10, -5, 0, 4, 6, 9, 13, 17, 19, 27, 29, 31, 45, 50, 12, 13, -50, -40, -30, -20, -10, -5, 0, 4, 6, 9, 13, 17, 19, 27, 29, 31, 45, 50, 12, 13, -50, -40, -30, -20, -10, -5, 0, 4, 6, 9};
    int k = 10;
    int maxDist = 50;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 40500000000000000;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> numbers = {-3, -5, -8, -9, -1, -2};
    int k = 3;
    int maxDist = 3;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = -10;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> numbers = {3, 0, -2, 10, 0, 0, 3, -8, 0, 2};
    int k = 2;
    int maxDist = 2;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> numbers = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int k = 10;
    int maxDist = 5;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 97656250000000000;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> numbers = {-18, -18, 4, -38, 2, 6, -42, -20, -6, 44, -6, -11, 15, -31, 1, 41, -49, -45, 39, -16, -25, 8, -30, 1, -12, 15, -20, -43, -30, -40, 1, -32, -7, 21, 47, 11, -24, -45, 7, 20, 15, -50, 25, -21, 36};
    int k = 10;
    int maxDist = 3;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 3143059200000000;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> numbers = {-50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50};
    int k = 10;
    int maxDist = 50;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 97656250000000000;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    int k = 10;
    int maxDist = 50;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 29820834418636800;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> numbers = {5};
    int k = 1;
    int maxDist = 10;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> numbers = {-50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50};
    int k = 9;
    int maxDist = 50;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = -1953125000000000;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> numbers = {3, 0, -2, 10, 0, 0, 3, -8, 0, 2, 3, 0, -2, 10, 0, 0, 3, -8, 0, 2, 3, 0, -2, 10, 0, 0, 3, -8, 0, 2, 3, 0, -2, 10, 0, 0, 3, -8, 0, 2, 3, 0, -2, 10, 0, 0, 3, -8, 0, 2};
    int k = 10;
    int maxDist = 50;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 1228800000;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> numbers = {2, 2, 2, 3, 4, 50, 33, 4, 5, 9, 8, 7};
    int k = 3;
    int maxDist = 2;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 8250;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> numbers = {-50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50};
    int k = 9;
    int maxDist = 12;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = -1953125000000000;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> numbers = {-50, 50, 50, -50, 50, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 50, 50, 50, 50, 20, 20, 20, 20, 20, 20, 30, 30, 30, 1, 2, 3, 4, 5, 6, 7, 8, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 40, 41, 42, 43};
    int k = 10;
    int maxDist = 2;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 1350000000000000;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> numbers = {34, -10, 16, 25, -32, -14, -42, 37, 12, -30, -5, -31, 31, -9, 26, 17, -20, -46, 46, 37, -1, -8, -21, -26, 32, 28, -42, -1, 28, 38, 26, 39, -20, 12, -30, -2, 45, -43, -38, 43, 35, 36, -5, -50, 27, 3, 32, 21, 33, -31};
    int k = 10;
    int maxDist = 30;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 23013457812072000;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> numbers = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int k = 10;
    int maxDist = 50;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> numbers = {-50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50};
    int k = 9;
    int maxDist = 5;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = -1953125000000000;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, -1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14, -15, -16, -17, -18, -19, -20, 26, 4, 3, 12, 3};
    int k = 10;
    int maxDist = 50;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 23936552640000;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> numbers = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int k = 10;
    int maxDist = 10;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 97656250000000000;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> numbers = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 5, 50};
    int k = 10;
    int maxDist = 10;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 97656250000000000;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> numbers = {10, 2, 3, 10};
    int k = 2;
    int maxDist = 3;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 100;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> numbers = {1, 2, 3, 4};
    int k = 4;
    int maxDist = 2;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> numbers = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int k = 10;
    int maxDist = 50;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 97656250000000000;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> numbers = {-50, -50, -50, -50, -50, -50, -50, -50, -50};
    int k = 9;
    int maxDist = 10;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = -1953125000000000;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> numbers = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int k = 10;
    int maxDist = 50;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 97656250000000000;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, -1, -2, -3, -4, -5, -6, -7, -8, -8, -9, -10, 11, 12, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 50, 49, 38, 47};
    int k = 10;
    int maxDist = 50;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 10278906811992000;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int k = 10;
    int maxDist = 50;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 37276043023296000;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> numbers = {-5, -10, -5, -10};
    int k = 2;
    int maxDist = 2;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 100;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> numbers = {3, 0, -2, 10, 0, 0, 3, -8, 0, 2, 9, -50, -49, -48, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, 50};
    int k = 10;
    int maxDist = 50;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 81420679895522450;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> numbers = {-50, -50, -50, -50, -50, -50, -50, -50, -50, -50};
    int k = 9;
    int maxDist = 1;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = -1953125000000000;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> numbers = {-3, -5, -9, -1, -2, 49};
    int k = 5;
    int maxDist = 3;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 13230;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> numbers = {50, 49, 48, 47, 46, 45, 44, 43, 42, -41, 50, 49, 48, 47, 46, 45, 44, 43, 42, -41, 50, 49, 48, 47, 46, 45, 44, 43, 42, -41, 50, 49, 48, 47, 46, 45, 44, 43, 42, -41, 50, 49, 48, 47, 46, 45, 44, 43, 42, -41};
    int k = 10;
    int maxDist = 50;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = 88273515312500000;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> numbers = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14, -15, -43, -23, -24, -12, -15};
    int k = 9;
    int maxDist = 3;
    TheProduct* pObj = new TheProduct();
    clock_t start = clock();
    long result = pObj->maxProduct(numbers, k, maxDist);
    clock_t end = clock();
    delete pObj;
    long expected = -362880;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22781352&rd=14174&pm=10421
********************************************************************************
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <complex>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <cassert>
#include <queue>
#include <cctype>
using namespace std;
 
const int max_n = 128, max_k = 32;
 
struct TheProduct {
 
  long long max_c[max_n][max_k], min_c[max_n][max_k];
 
  long long maxProduct(vector<int> a, int k, int max_d) {
    long long oo = 0;
    for (int i = 0; i < 63; i++)
      oo = oo * 2 + 1;
    int n = a.size();
    for (int i = 0; i < n; i++) {
      max_c[i][1] = a[i];
      min_c[i][1] = a[i];
    }
    for (int j = 2; j <= k; j++) {
      for (int i = 0; i < n; i++) {
        max_c[i][j] = -oo;
        min_c[i][j] = oo;
        if (i + 1 < j)
          continue;
        for (int i1 = 0; i1 < i; i1++) {
          if (min_c[i1][j - 1] == oo)
            continue;
          if (i - i1 > max_d)
            continue;
          max_c[i][j] = max(max_c[i][j], a[i] * max_c[i1][j - 1]);
          max_c[i][j] = max(max_c[i][j], a[i] * min_c[i1][j - 1]);
          min_c[i][j] = min(min_c[i][j], a[i] * max_c[i1][j - 1]);
          min_c[i][j] = min(min_c[i][j], a[i] * min_c[i1][j - 1]);
        }
      }
    }
    long long ans = -oo;
    for (int i = 0; i < n; i++) {
      if (max_c[i][k] > ans)
        ans = max_c[i][k];
    }
    return ans;
          
  }
};

********************************************************************************
*******************************************************************************/