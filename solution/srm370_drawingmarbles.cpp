/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8016
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

class DrawingMarbles {
public:
    double sameColor(vector<int> colors, int n);
};

double DrawingMarbles::sameColor(vector<int> colors, int n) {
    double ret;
    return ret;
}


int test0() {
    vector<int> colors = {13};
    int n = 8;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> colors = {5, 7};
    int n = 1;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> colors = {5, 6, 7};
    int n = 2;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3006535947712418;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> colors = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int n = 500;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> colors = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int n = 10;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 4.178940467970992E-10;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> colors = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int n = 5;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 8.300897542362798E-5;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> colors = {12, 2, 34, 13, 17};
    int n = 4;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.035028830818304504;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> colors = {16, 10, 11, 20, 6, 12, 17, 2, 15, 15, 17, 8, 14, 19, 1, 1, 4, 5, 13, 9, 14, 2, 17, 4, 3, 20, 4, 11, 13, 19, 2, 8, 20, 5, 20, 6, 16, 16, 19, 2, 10, 15, 9, 4, 14, 1, 16, 9, 17, 8};
    int n = 3;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 6.451180614601044E-4;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> colors = {13, 3, 19, 12, 16, 2, 19, 1, 2, 13, 4, 4, 20, 16, 3, 10, 13, 3, 18, 3, 1, 5, 9, 2, 3, 15, 11, 11, 4, 13, 18, 16, 15, 8, 20, 2, 10, 10, 2, 11, 14, 5, 7, 13, 20, 9, 14, 4, 11, 12};
    int n = 8;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 8.91313042384041E-12;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> colors = {24, 28, 40, 2, 31, 12, 27, 18, 36, 44, 17, 44, 3, 3, 18, 31, 5, 42, 43, 23, 15, 4, 21, 19, 6, 31, 34, 24, 5, 27, 8, 30, 4, 49, 31, 35, 12, 10, 4, 47, 3, 20, 43, 7, 24, 12, 39, 29, 3, 32};
    int n = 1;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> colors = {19, 35, 21, 37, 42, 4, 22, 18, 10, 48, 25, 40, 4, 25, 22, 40, 36, 31, 45, 35, 34, 17, 27, 42, 40, 38, 31, 18, 40, 14, 21, 8, 50, 41, 46, 41, 46, 18, 8, 6, 17, 34, 47, 22, 8, 18, 11, 46, 1, 8};
    int n = 32;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 4.755340490627849E-52;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> colors = {36, 24, 8, 27, 13, 47, 9, 33, 38, 22, 3, 45, 21, 43, 42, 12, 41, 9, 21, 48, 28, 7, 44, 49, 16, 13, 12, 11, 13, 19, 44, 48, 42, 1, 27, 6, 49, 35, 38, 36, 7, 40, 32, 29, 35, 24, 42, 25, 34, 13};
    int n = 5;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 5.389562780471944E-7;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> colors = {11, 21, 17, 10, 36, 29, 21, 49, 44, 41, 42, 41, 32, 45, 19, 37, 43, 4, 27, 29, 12, 16, 10, 40, 50, 33, 32, 26, 17, 46, 49, 29, 16, 15, 38, 1, 46, 10, 49, 41, 50, 41, 33, 31, 37, 2, 20, 29, 5, 46};
    int n = 3;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 6.249392847217786E-4;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> colors = {16, 13, 19, 7, 13, 3, 38, 38, 21, 33, 39, 50, 48, 3, 37, 1, 50, 47, 49, 40, 48, 41, 25, 31, 27, 26, 50, 8, 32, 47, 16, 47, 9, 34, 5, 23, 37, 43, 13, 9, 27, 1, 8, 27, 5, 47, 27, 5, 43, 25};
    int n = 2;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02630479480220413;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> colors = {42, 18, 20, 22, 46, 47, 23, 5, 28, 19, 21, 26, 30, 4, 31, 2, 42, 23, 16, 1, 1, 16, 10, 27, 21, 6, 3, 27, 50, 30, 24, 42, 49, 44, 13, 44, 42, 36, 49, 20, 6, 21, 45, 37, 26, 25, 41, 18, 49, 6};
    int n = 4;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 2.205187265629854E-5;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> colors = {50, 22, 29, 26, 44, 35, 29, 20, 36, 10, 43, 27, 8, 38, 40, 1, 30, 27, 1, 1, 34, 21, 45, 21, 49, 22, 11, 16, 20, 16, 37, 21, 39, 17, 49, 32, 3, 29, 3, 39, 38, 48, 15, 45, 37, 6, 47, 18, 34, 50};
    int n = 2;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.024857624895935404;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> colors = {18, 22, 15, 40, 20, 36, 50, 37, 7, 17, 23, 30, 8, 42, 28, 39, 44, 6, 44, 34, 43, 41, 1, 39, 27, 8, 35, 47, 42, 34, 14, 11, 6, 28, 2, 25, 15, 3, 12, 22, 19, 36, 1, 26, 29, 30, 17, 23, 35, 10};
    int n = 3;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 7.003640300611957E-4;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> colors = {29, 2, 8, 17, 30, 16, 3, 26, 9, 37, 42, 21, 44, 19, 22, 20, 34, 26, 33, 7, 44, 21, 9, 22, 49, 38, 40, 23, 22, 1, 31, 2, 2, 40, 18, 31, 7, 20, 9, 15, 8, 50, 37, 1, 20, 10, 23, 3, 35, 5};
    int n = 4;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 2.787809847952095E-5;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> colors = {31, 25, 19, 4, 24, 8, 43, 46, 31, 43, 28, 32, 44, 18, 1, 26, 24, 21, 36, 41, 30, 35, 29, 33, 5, 39, 5, 9, 25, 11, 22, 7, 36, 42, 10, 11, 50, 2, 8, 30, 44, 36, 12, 39, 5, 14, 17, 28, 36, 2};
    int n = 3;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 7.24410332718799E-4;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> colors = {24, 28, 40, 2, 31, 12, 27, 18, 36, 44, 17, 44, 3, 3, 18, 31, 5, 42, 43, 23, 15, 4, 21, 19, 6, 31, 34, 24, 5, 27, 8, 30, 4, 49, 31, 35, 12, 10, 4, 47, 3, 20, 43, 7, 24, 12, 39, 29, 3, 32};
    int n = 6;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 2.782721565018281E-8;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> colors = {45, 48, 40, 42, 49, 44, 49, 41, 41, 43};
    int n = 14;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3119104899009693E-14;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> colors = {44, 41, 44, 40, 41, 46, 44, 50, 46, 49};
    int n = 6;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 7.923897835963811E-6;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> colors = {46, 44, 43, 41, 50, 47, 42, 49, 46, 47};
    int n = 2;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09839763760468606;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> colors = {46, 50, 41, 49, 46, 40, 50, 49, 46, 44};
    int n = 17;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 9.714821997909795E-18;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> colors = {50, 42, 50, 44, 47, 49, 48, 43, 50, 41};
    int n = 9;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 5.777212681979774E-9;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> colors = {41, 42, 44, 46, 45, 40, 50, 50, 45, 46};
    int n = 8;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 6.482742230434584E-8;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> colors = {44, 42, 45, 44, 41, 41, 50, 43, 48, 47};
    int n = 2;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09839052535681748;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> colors = {47, 49, 40, 43, 47, 41, 41, 48, 46, 42};
    int n = 3;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.009548267714513897;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> colors = {40, 46, 43, 40, 45, 40, 43, 49, 50, 47};
    int n = 7;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 7.387570743725265E-7;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> colors = {42, 40, 40, 41, 48, 43, 50, 45, 49, 44};
    int n = 6;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 8.079087652845126E-6;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> colors = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int n = 2500;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> colors = {1, 2};
    int n = 2;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> colors = {12, 2, 34, 13, 17};
    int n = 4;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.035028830818304504;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> colors = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int n = 25;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2450460110604864E-44;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> colors = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int n = 1250;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> colors = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int n = 20;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 6.80263488208756E-35;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> colors = {12, 2, 34, 13, 17, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 44, 49, 49, 49, 49};
    int n = 3;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 8.046688689897095E-4;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> colors = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 22, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    int n = 789;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> colors = {1};
    int n = 1;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> colors = {49, 50};
    int n = 51;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> colors = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int n = 20;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7669930459665218E-21;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> colors = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int n = 51;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> colors = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int n = 1250;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> colors = {50, 50, 50, 50, 50, 50, 47, 48, 35, 34, 50};
    int n = 49;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 3.291810245375422E-67;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> colors = {5, 7};
    int n = 1;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> colors = {5, 6, 7};
    int n = 2;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3006535947712418;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> colors = {50, 50};
    int n = 10;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0011868393451716574;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> colors = {50, 50, 50, 50, 50, 50, 50};
    int n = 250;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> colors = {2, 3, 4};
    int n = 6;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> colors = {50, 50};
    int n = 25;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0424788643271385E-9;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> colors = {50, 30, 50, 10};
    int n = 50;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 6.713216749208715E-39;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> colors = {23, 43, 22, 23, 11, 8};
    int n = 7;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1130312484238564E-4;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> colors = {3};
    int n = 3;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> colors = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 3;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.012578616352201259;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> colors = {3, 4, 5};
    int n = 3;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.06818181818181818;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> colors = {40, 30, 50, 50, 50, 40, 40, 50, 40, 40, 40, 40, 40, 40, 50, 50};
    int n = 25;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9528078204699337E-31;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> colors = {1, 2, 3};
    int n = 4;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> colors = {12, 14, 22, 15, 19, 21, 5, 4, 13, 21, 18, 27, 35, 19, 21, 33, 18, 14, 10, 14, 39, 31, 21, 18, 12, 14, 11, 19, 33, 31, 32, 33, 33, 3, 3, 3, 3, 3, 4, 3, 5, 14, 1, 13, 15, 16, 26, 18, 15, 25};
    int n = 231;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> colors = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int n = 100;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> colors = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 5, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int n = 51;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> colors = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 40, 45, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int n = 1000;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> colors = {50, 50};
    int n = 50;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.982330604283667E-29;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> colors = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int n = 50;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 3.156947199244522E-104;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> colors = {49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49};
    int n = 24;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 6.548139538541121E-35;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> colors = {13, 50, 50, 50, 50, 49, 34, 34, 34, 34, 34, 34};
    int n = 10;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 4.148711581146338E-10;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> colors = {3, 3};
    int n = 3;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> colors = {30, 40, 29, 15};
    int n = 40;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0610933375976087E-31;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> colors = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int n = 1000;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> colors = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 5, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int n = 50;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 7.742343698780786E-104;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> colors = {5};
    int n = 5;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> colors = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 7, 50, 50, 11, 50, 50, 5, 50, 50, 50, 50, 5, 50, 50, 50, 50, 50, 3, 50, 50, 50, 50, 50, 50, 50, 50, 50, 9, 50, 50, 1, 50, 50, 50, 50, 34, 50, 50, 50};
    int n = 10;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 6.748651047021557E-16;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> colors = {21, 44, 24, 41, 10, 19, 29, 27, 46, 4};
    int n = 6;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 4.822187452684364E-5;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> colors = {4};
    int n = 4;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> colors = {25, 25};
    int n = 50;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> colors = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 49, 50, 50, 50, 46, 50, 50, 50, 50, 50, 50, 50, 50, 37, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int n = 4;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 7.141568899747483E-6;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> colors = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int n = 50;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1140618795240286E-84;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> colors = {50};
    int n = 25;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> colors = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int n = 2500;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> colors = {1, 2, 3, 4, 5, 6};
    int n = 6;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.842842400117942E-5;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> colors = {13};
    int n = 8;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> colors = {50, 1};
    int n = 50;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0196078431372549;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> colors = {2};
    int n = 2;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> colors = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int n = 200;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> colors = {5, 5};
    int n = 5;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.007936507936507936;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> colors = {10, 10};
    int n = 7;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0030959752321981426;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> colors = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int n = 1225;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> colors = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 48, 49, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int n = 50;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 3.220111924750026E-104;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> colors = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 7, 50, 50, 11, 50, 50, 5, 50, 50, 50, 50, 5, 50, 50, 50, 50, 50, 3, 50, 50, 50, 50, 50, 50, 50, 50, 50, 9, 50, 50, 1, 50, 50, 50, 50, 34, 50, 50, 50};
    int n = 11;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2467123948813707E-17;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> colors = {50, 50, 50, 50, 50, 50, 50, 50, 2, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int n = 50;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 8.235552401104238E-104;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> colors = {12, 2, 34, 13, 17};
    int n = 10;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.042249671481569E-4;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> colors = {50, 50, 50};
    int n = 25;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9383531093556322E-14;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> colors = {10, 20, 30, 40, 50};
    int n = 30;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.46372167167487E-18;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> colors = {1, 2, 3, 5, 26, 34, 8, 12, 45, 45, 49, 37};
    int n = 4;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.003080759697922703;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> colors = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int n = 2;
    DrawingMarbles* pObj = new DrawingMarbles();
    clock_t start = clock();
    double result = pObj->sameColor(colors, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22653720&rd=10786&pm=8016
********************************************************************************
#include <math.h> 
#include <string.h> 
#include <vector> 
#include <string> 
#include <queue> 
#include <algorithm> 
using namespace std; 
 
class DrawingMarbles 
{ 
  public: 
  double sameColor(vector <int> colors, int n) 
  { 
    int sum = 0; 
    double res = 0; 
    for (int i=0; i<colors.size(); i++) sum += colors[i]; 
    for (int i=0; i<colors.size(); i++) 
    { 
      double now = 1; 
      if ( colors[i] >= n ) 
      { 
        for (int j=0; j<n; j++) 
          now = now * (colors[i]-j) / (double)(sum-j); 
        res += now; 
      } 
    } 
    return res; 
  }; 
};

********************************************************************************
*******************************************************************************/