/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10310
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

class IncredibleMachine {
public:
    double gravitationalAcceleration(vector<int> x, vector<int> y, int T);
};

double IncredibleMachine::gravitationalAcceleration(vector<int> x, vector<int> y, int T) {
    double ret;
    return ret;
}


int test0() {
    vector<int> x = {0, 6};
    vector<int> y = {100, 22};
    int T = 4;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 9.807692307692307;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {0, 26, 100};
    vector<int> y = {50, 26, 24};
    int T = 4;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 26.743031720603582;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {0, 100};
    vector<int> y = {100, 0};
    int T = 8;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 6.250000000000003;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {0, 7, 8};
    vector<int> y = {10, 6, 0};
    int T = 7;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1076837407708007;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {0, 100};
    vector<int> y = {1, 0};
    int T = 1;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 20002.000000000004;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {0, 1};
    vector<int> y = {100, 0};
    int T = 100;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.020002;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {4, 8, 19, 20, 23, 26, 29, 31, 35, 39, 42, 47, 50, 52, 55, 60, 63, 67, 69, 70, 74, 76, 79, 80, 82, 85, 86, 88, 89, 90, 95, 98};
    vector<int> y = {100, 99, 94, 92, 91, 89, 86, 84, 81, 78, 72, 67, 64, 63, 62, 60, 59, 58, 53, 48, 45, 42, 37, 35, 22, 15, 12, 9, 8, 7, 5, 3};
    int T = 44;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3508891171443518;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {4, 6, 8, 9, 21, 27, 34, 38, 41, 43, 53, 55, 56, 58, 67, 68, 70, 72, 75, 76, 80, 89, 92, 94, 96, 97};
    vector<int> y = {98, 95, 89, 84, 78, 77, 76, 70, 66, 64, 62, 59, 58, 55, 54, 47, 44, 40, 31, 28, 26, 24, 23, 16, 10, 6};
    int T = 71;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08590581355212065;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {3, 6, 7, 12, 13, 14, 15, 18, 23, 25, 26, 28, 29, 31, 33, 37, 40, 41, 42, 46, 47, 48, 49, 52, 53, 57, 58, 63, 64, 67, 69, 71, 73, 76, 85, 87, 92, 93, 94, 98, 99, 100};
    vector<int> y = {100, 97, 94, 93, 87, 83, 77, 76, 75, 74, 73, 68, 66, 61, 60, 58, 54, 52, 51, 49, 47, 43, 42, 35, 34, 32, 31, 30, 28, 27, 24, 23, 22, 21, 16, 15, 14, 10, 9, 6, 5, 3};
    int T = 65;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10159426713033466;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {2, 7, 9, 23, 31, 32, 43, 45, 51, 56, 57, 66, 68, 70, 72, 75, 78, 91, 100};
    vector<int> y = {99, 96, 87, 85, 84, 79, 75, 73, 72, 58, 53, 42, 38, 35, 32, 31, 21, 15, 7};
    int T = 77;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09227475125261662;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {4, 5, 10, 13, 19, 21, 22, 23, 24, 26, 29, 38, 39, 41, 42, 43, 44, 46, 49, 50, 53, 56, 57, 58, 59, 60, 62, 63, 64, 66, 68, 73, 75, 77, 78, 79, 80, 85, 86, 88, 89, 93, 94, 96, 99, 100};
    vector<int> y = {98, 97, 94, 93, 90, 89, 85, 84, 82, 77, 76, 75, 73, 72, 70, 67, 66, 63, 62, 61, 58, 57, 56, 50, 46, 45, 44, 42, 41, 40, 39, 35, 34, 30, 26, 25, 23, 21, 19, 15, 14, 13, 11, 8, 7, 6};
    int T = 48;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.21327037314389624;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {1, 3, 4, 8, 11, 12, 17, 18, 22, 24, 29, 39, 41, 42, 43, 44, 46, 47, 50, 53, 54, 57, 63, 66, 67, 70, 71, 73, 74, 76, 79, 80, 82, 83, 84, 85, 86, 89, 91, 93, 94, 96, 100};
    vector<int> y = {100, 93, 91, 89, 88, 86, 84, 82, 80, 72, 69, 65, 64, 61, 59, 58, 56, 55, 51, 48, 47, 45, 44, 42, 41, 40, 39, 36, 35, 34, 32, 31, 30, 28, 27, 24, 22, 19, 16, 14, 9, 3, 1};
    int T = 81;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.06286695631251715;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {11, 13, 14, 15, 20, 22, 24, 25, 29, 34, 35, 37, 38, 41, 45, 51, 52, 56, 57, 59, 61, 62, 64, 65, 66, 74, 75, 77, 78, 79, 80, 87, 88, 90, 91, 96};
    vector<int> y = {100, 98, 94, 93, 92, 90, 84, 78, 77, 76, 72, 62, 59, 58, 51, 48, 47, 46, 44, 37, 35, 33, 31, 30, 29, 25, 23, 22, 21, 20, 17, 12, 9, 8, 5, 2};
    int T = 29;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.47505200669869774;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {6, 11, 15, 18, 19, 21, 22, 24, 28, 32, 34, 38, 39, 40, 45, 47, 50, 53, 56, 58, 59, 61, 62, 66, 67, 69, 70, 71, 72, 73, 74, 76, 77, 80, 82, 87, 93, 96, 98};
    vector<int> y = {98, 95, 94, 89, 88, 86, 84, 82, 77, 76, 73, 72, 71, 65, 61, 59, 53, 50, 49, 48, 47, 45, 44, 41, 40, 38, 37, 35, 34, 32, 31, 25, 20, 19, 16, 13, 7, 2, 1};
    int T = 20;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1872814409449153;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {9, 86, 96};
    vector<int> y = {68, 64, 32};
    int T = 59;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1.049661828204787;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {3, 11, 16, 28, 30, 36, 37, 46, 55, 62, 63, 85, 87, 96, 99};
    vector<int> y = {90, 85, 73, 70, 68, 60, 49, 40, 38, 26, 22, 19, 16, 15, 7};
    int T = 16;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8122286644545182;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {2, 4, 5, 6, 7, 10, 14, 19, 20, 22, 25, 26, 32, 33, 35, 36, 37, 38, 42, 51, 52, 53, 59, 61, 63, 70, 71, 72, 73, 75, 82, 83, 87, 90, 92, 93};
    vector<int> y = {99, 97, 95, 90, 87, 86, 85, 83, 80, 78, 76, 73, 68, 67, 66, 65, 64, 63, 61, 55, 50, 43, 42, 41, 39, 36, 31, 23, 22, 18, 15, 12, 5, 4, 3, 1};
    int T = 31;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4379617599463084;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {7, 14, 15, 19, 21, 50, 56, 60, 77, 86, 88};
    vector<int> y = {80, 78, 72, 69, 68, 48, 39, 31, 26, 10, 3};
    int T = 50;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.20427114727192094;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {1, 2, 4, 9, 14, 17, 24, 29, 39, 41, 44, 48, 60, 67, 72, 81, 84, 89, 91, 96, 99, 100};
    vector<int> y = {90, 88, 78, 77, 70, 67, 63, 51, 50, 48, 41, 39, 38, 28, 26, 25, 16, 13, 11, 9, 7, 1};
    int T = 2;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 100.88545887226479;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {2, 4, 6, 9, 12, 13, 14, 17, 18, 19, 21, 22, 24, 26, 27, 29, 32, 33, 38, 41, 43, 45, 46, 50, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 64, 66, 71, 77, 79, 80, 82, 83, 85, 89, 92, 93, 95, 96, 97, 98};
    vector<int> y = {100, 99, 97, 96, 95, 93, 90, 88, 86, 84, 83, 81, 80, 75, 74, 73, 71, 69, 66, 64, 60, 57, 53, 52, 51, 50, 48, 47, 46, 45, 43, 41, 39, 38, 37, 36, 35, 34, 33, 27, 25, 21, 18, 17, 16, 14, 12, 9, 4, 3};
    int T = 85;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.06994564382209403;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {2, 3, 4, 7, 9, 11, 14, 16, 17, 20, 25, 26, 27, 28, 30, 31, 32, 33, 38, 44, 45, 46, 53, 55, 58, 61, 63, 65, 66, 68, 69, 72, 76, 79, 80, 83, 86, 87, 88, 89, 95, 96, 99, 100};
    vector<int> y = {98, 97, 95, 94, 93, 90, 82, 81, 80, 77, 74, 73, 72, 71, 68, 67, 66, 65, 58, 55, 54, 52, 51, 49, 47, 40, 38, 37, 36, 35, 34, 32, 31, 30, 29, 26, 24, 23, 20, 19, 17, 16, 10, 8};
    int T = 51;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.15880913400551766;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {4, 9, 15, 18, 29, 30, 31, 38, 41, 42, 43, 44, 48, 49, 52, 55, 57, 59, 61, 63, 64, 65, 68, 70, 74, 79, 80, 85, 94, 95, 96, 97, 98, 99};
    vector<int> y = {97, 91, 90, 87, 83, 81, 79, 77, 76, 74, 72, 58, 53, 52, 50, 48, 47, 46, 43, 42, 38, 36, 34, 28, 26, 23, 22, 21, 20, 19, 10, 9, 6, 5};
    int T = 87;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.06387348338471038;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {7, 14, 33, 36, 95};
    vector<int> y = {71, 49, 33, 26, 15};
    int T = 97;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.030768022040635404;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {1, 3, 4, 6, 9, 13, 17, 18, 20, 24, 28, 34, 38, 43, 47, 54, 66, 68, 71, 74, 77, 80, 82, 85, 86, 87, 89, 90, 98};
    vector<int> y = {98, 97, 90, 88, 85, 84, 82, 80, 77, 73, 69, 68, 65, 63, 54, 53, 49, 48, 35, 33, 31, 27, 22, 20, 18, 16, 10, 5, 2};
    int T = 43;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25842956188197036;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {13, 18, 31, 46, 48, 55, 69, 76};
    vector<int> y = {93, 87, 82, 67, 53, 31, 12, 4};
    int T = 97;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.035724650600767176;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {1, 4, 5, 8, 9, 14, 17, 18, 22, 29, 34, 40, 45, 49, 59, 60, 62, 65, 67, 71, 72, 84, 87, 88, 90, 91, 92, 95, 97, 100};
    vector<int> y = {96, 95, 94, 86, 82, 74, 72, 71, 68, 66, 64, 61, 59, 55, 52, 50, 47, 45, 44, 40, 38, 35, 28, 26, 22, 17, 16, 14, 5, 1};
    int T = 15;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 2.318545440342977;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {1, 2, 4, 6, 7, 9, 10, 12, 14, 15, 16, 19, 22, 24, 25, 26, 27, 28, 29, 32, 34, 40, 41, 44, 45, 48, 53, 54, 57, 60, 62, 73, 74, 76, 77, 78, 81, 82, 85, 89, 90, 92, 94, 95, 97, 98};
    vector<int> y = {97, 88, 85, 84, 83, 81, 80, 79, 78, 77, 74, 72, 70, 69, 68, 67, 66, 63, 58, 57, 56, 53, 52, 47, 40, 39, 38, 37, 36, 34, 33, 27, 26, 25, 24, 21, 20, 14, 13, 10, 9, 7, 5, 4, 2, 1};
    int T = 71;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07465116494648613;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {3, 4, 6, 9, 10, 17, 18, 20, 24, 26, 27, 32, 33, 45, 56, 60, 61, 62, 65, 69, 72, 74, 81, 86, 87, 89, 91};
    vector<int> y = {99, 98, 93, 91, 88, 85, 84, 80, 73, 57, 53, 48, 47, 45, 43, 42, 40, 38, 37, 36, 31, 28, 25, 20, 19, 10, 5};
    int T = 58;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1173782021693497;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {21, 38};
    vector<int> y = {40, 15};
    int T = 9;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9027160493827163;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {4, 5, 7, 9, 10, 11, 13, 15, 16, 17, 19, 21, 23, 25, 27, 28, 29, 30, 31, 36, 37, 40, 41, 42, 44, 47, 48, 50, 60, 61, 63, 66, 76, 80, 82, 83, 85, 87, 88, 89, 91, 92, 96, 97, 98, 100};
    vector<int> y = {100, 97, 95, 89, 88, 87, 85, 83, 82, 80, 79, 77, 76, 75, 74, 73, 71, 65, 64, 62, 60, 55, 53, 50, 44, 43, 41, 38, 36, 34, 33, 30, 27, 26, 24, 23, 22, 20, 19, 18, 17, 15, 11, 9, 6, 5};
    int T = 22;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7671971639721655;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {2, 3, 7, 15, 22, 43, 48, 62, 85};
    vector<int> y = {90, 63, 61, 58, 34, 30, 26, 9, 7};
    int T = 60;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08931359313505766;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {1, 6, 32, 39, 40, 41, 52, 63, 66, 71, 84, 85, 89, 95};
    vector<int> y = {89, 84, 79, 77, 67, 61, 53, 36, 35, 22, 20, 17, 10, 6};
    int T = 32;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5447044021596468;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {2, 4, 6, 9, 11, 14, 15, 16, 18, 19, 25, 27, 31, 32, 33, 34, 43, 44, 45, 46, 48, 50, 51, 52, 54, 55, 56, 59, 62, 63, 64, 67, 68, 70, 71, 73, 74, 75, 76, 77, 81, 82, 83, 85, 89, 93, 96, 100};
    vector<int> y = {99, 97, 95, 93, 92, 91, 89, 88, 87, 86, 85, 83, 81, 80, 78, 76, 73, 72, 68, 65, 63, 61, 58, 57, 55, 54, 51, 50, 49, 40, 38, 34, 31, 28, 27, 22, 21, 20, 19, 18, 15, 13, 12, 9, 8, 5, 4, 2};
    int T = 14;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 2.448125753991936;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {3, 26, 44, 47, 56, 57, 64, 74, 84, 85, 90, 98, 99};
    vector<int> y = {95, 81, 79, 75, 65, 58, 50, 48, 30, 28, 15, 6, 2};
    int T = 69;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1196240519779429;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {39, 58, 63, 73, 98};
    vector<int> y = {83, 82, 77, 17, 1};
    int T = 85;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.22574063895865865;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {1, 6, 8, 9, 10, 13, 15, 16, 17, 19, 23, 27, 28, 29, 30, 31, 35, 36, 39, 40, 45, 47, 49, 52, 55, 56, 62, 64, 65, 67, 69, 70, 73, 77, 81, 82, 87, 88, 91, 92, 99};
    vector<int> y = {97, 95, 91, 90, 89, 88, 86, 77, 73, 72, 71, 69, 61, 60, 59, 58, 50, 49, 48, 43, 39, 38, 35, 32, 28, 27, 24, 23, 22, 20, 19, 18, 14, 12, 11, 10, 9, 8, 4, 3, 2};
    int T = 9;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 6.238148082542964;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {2, 6, 9, 11, 19, 20, 21, 24, 25, 26, 27, 36, 39, 43, 45, 54, 60, 68, 69, 72, 73, 76, 78, 82, 84, 86, 87, 88, 92, 97};
    vector<int> y = {97, 92, 85, 82, 81, 79, 77, 71, 68, 60, 58, 53, 51, 50, 49, 46, 42, 40, 39, 37, 31, 29, 27, 23, 22, 20, 13, 12, 2, 1};
    int T = 54;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.142418794820918;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {1, 11, 15, 21, 29, 52, 63, 84, 85, 89, 90, 95};
    vector<int> y = {93, 84, 70, 57, 55, 48, 38, 36, 31, 26, 14, 8};
    int T = 70;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08643255917047979;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {3, 4, 6, 8, 9, 10, 11, 12, 14, 16, 17, 18, 24, 26, 27, 28, 31, 35, 36, 37, 40, 44, 45, 49, 51, 52, 55, 60, 61, 62, 66, 67, 71, 72, 74, 75, 79, 80, 83, 88, 89, 96, 97};
    vector<int> y = {96, 94, 91, 85, 84, 82, 81, 72, 71, 65, 62, 61, 60, 59, 57, 54, 53, 51, 48, 47, 44, 43, 42, 37, 35, 34, 30, 27, 25, 24, 23, 21, 19, 18, 14, 13, 12, 11, 10, 9, 8, 7, 5};
    int T = 6;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 9.86035382854815;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {4, 5, 8, 20, 22, 23, 27, 33, 36, 42, 43, 44, 53, 54, 55, 56, 57, 58, 59, 60, 86, 91, 96};
    vector<int> y = {97, 96, 92, 91, 89, 88, 86, 84, 83, 82, 77, 73, 70, 63, 57, 51, 47, 41, 19, 15, 14, 8, 7};
    int T = 21;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3376296399818641;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {2, 4, 5, 9, 14, 16, 20, 26, 27, 28, 32, 57, 68, 93};
    vector<int> y = {100, 99, 96, 85, 82, 80, 70, 65, 59, 58, 52, 40, 27, 1};
    int T = 21;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9043226816748323;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {3, 4, 5, 8, 10, 12, 18, 19, 21, 22, 23, 24, 26, 27, 31, 32, 33, 34, 35, 36, 37, 38, 48, 50, 51, 53, 54, 55, 56, 59, 61, 64, 65, 67, 70, 71, 75, 76, 77, 79, 82, 88, 90, 91, 92, 94, 97, 98, 100};
    vector<int> y = {97, 91, 90, 89, 88, 84, 81, 80, 75, 74, 72, 71, 70, 66, 65, 61, 60, 59, 58, 57, 55, 52, 51, 50, 46, 45, 42, 40, 39, 38, 36, 35, 33, 31, 29, 28, 27, 25, 23, 21, 18, 13, 11, 10, 8, 6, 5, 3, 2};
    int T = 96;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04284539299719726;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {12, 13, 14, 16, 24, 31, 32, 33, 34, 35, 42, 47, 49, 53, 62, 70, 71, 72, 78, 81, 89, 90, 93, 94, 98, 100};
    vector<int> y = {100, 91, 90, 85, 82, 79, 76, 74, 71, 65, 64, 60, 50, 49, 43, 42, 40, 29, 28, 26, 25, 24, 11, 7, 5, 3};
    int T = 94;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04456806202935621;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {1, 5, 7, 9, 12, 21, 26, 35, 38, 39, 41, 44, 45, 47, 50, 51, 56, 58, 60, 67, 69, 70, 71, 73, 74, 75, 79, 80, 81, 84, 85, 89, 90, 93, 96, 100};
    vector<int> y = {99, 97, 96, 95, 93, 90, 81, 80, 79, 77, 75, 73, 69, 68, 63, 58, 57, 52, 50, 48, 47, 43, 38, 37, 34, 32, 30, 23, 19, 14, 13, 11, 5, 3, 2, 1};
    int T = 40;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3810861110507062;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {2, 4, 9, 10, 12, 14, 16, 17, 19, 22, 23, 25, 26, 27, 28, 29, 30, 31, 32, 33, 39, 40, 42, 43, 52, 56, 57, 58, 60, 61, 62, 66, 67, 69, 71, 72, 73, 74, 77, 78, 81, 85, 90, 93, 94, 96, 98, 100};
    vector<int> y = {100, 97, 94, 93, 90, 88, 85, 80, 76, 74, 71, 68, 65, 64, 63, 62, 61, 59, 56, 55, 53, 50, 46, 44, 39, 37, 35, 32, 31, 29, 28, 27, 26, 25, 24, 23, 22, 20, 18, 17, 15, 13, 11, 9, 8, 5, 2, 1};
    int T = 55;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.13052012987318598;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {5, 6, 8, 9, 14, 16, 19, 21, 22, 23, 26, 36, 40, 41, 43, 44, 47, 50, 51, 52, 56, 58, 62, 63, 65, 73, 74, 75, 76, 77, 78, 79, 80, 81, 86, 87, 91, 94, 95, 97};
    vector<int> y = {100, 97, 91, 88, 84, 83, 71, 69, 67, 66, 64, 63, 62, 60, 58, 55, 52, 51, 47, 46, 45, 43, 42, 40, 34, 33, 32, 31, 30, 26, 24, 21, 15, 14, 13, 12, 9, 5, 4, 2};
    int T = 34;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3289154299018763;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {7, 8, 9, 10, 17, 19, 28, 32, 34, 39, 49, 50, 58, 59, 63, 65, 67, 73, 74, 78, 80, 90, 93, 94, 96};
    vector<int> y = {91, 90, 82, 81, 79, 78, 76, 75, 74, 72, 66, 64, 59, 56, 55, 53, 45, 38, 31, 28, 27, 26, 17, 15, 5};
    int T = 61;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.12158824132087609;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {1, 3, 4, 7, 12, 16, 18, 19, 22, 25, 26, 27, 30, 31, 35, 37, 38, 44, 45, 47, 48, 50, 59, 64, 69, 70, 75, 78, 83, 84, 85, 86, 90, 92, 95, 97};
    vector<int> y = {95, 94, 89, 88, 85, 82, 81, 78, 73, 71, 70, 62, 61, 60, 57, 56, 53, 52, 49, 45, 41, 40, 36, 35, 33, 28, 26, 25, 22, 21, 20, 17, 16, 13, 8, 6};
    int T = 92;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.05436201552371344;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {1, 7, 9, 10, 12, 15, 18, 22, 27, 29, 30, 36, 39, 42, 43, 44, 48, 51, 52, 61, 62, 65, 70, 75, 76, 78, 82, 84, 85, 89, 95, 98};
    vector<int> y = {98, 93, 91, 90, 89, 88, 86, 81, 68, 66, 63, 62, 61, 53, 51, 45, 44, 36, 35, 32, 31, 26, 25, 24, 17, 16, 14, 11, 8, 6, 5, 2};
    int T = 51;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.17505369824038333;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {4, 6, 9, 11, 13, 14, 18, 19, 20, 24, 27, 38, 40, 41, 43, 48, 50, 53, 55, 56, 62, 63, 65, 66, 68, 71, 73, 81, 88, 92, 97, 100};
    vector<int> y = {97, 95, 94, 93, 91, 86, 85, 84, 78, 75, 69, 66, 65, 64, 60, 47, 43, 40, 34, 33, 32, 30, 26, 25, 24, 21, 20, 19, 17, 14, 6, 1};
    int T = 12;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1872783149906616;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {8, 16, 22, 31, 51, 62, 73, 74, 97};
    vector<int> y = {93, 79, 75, 69, 68, 53, 38, 37, 12};
    int T = 21;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8352310087885916;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {3, 4, 8, 10, 13, 20, 24, 25, 33, 35, 38, 40, 41, 44, 45, 55, 59, 63, 66, 67, 69, 71, 72, 80, 88, 90, 91, 97, 99};
    vector<int> y = {100, 97, 96, 92, 87, 85, 65, 55, 52, 50, 46, 44, 43, 42, 40, 37, 36, 32, 30, 29, 27, 26, 25, 23, 16, 10, 9, 8, 5};
    int T = 7;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 8.424311414202764;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {1, 2, 7, 13, 22, 25, 36, 37, 38, 53, 60, 85, 90, 96, 99};
    vector<int> y = {100, 88, 85, 81, 67, 66, 64, 59, 58, 57, 55, 51, 47, 26, 17};
    int T = 59;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.11981816031169423;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {3, 4, 16, 17, 18, 19, 23, 25, 26, 27, 31, 33, 38, 41, 46, 50, 51, 56, 58, 61, 69, 75, 79, 83, 85, 88, 91, 93, 94, 97, 98, 99};
    vector<int> y = {100, 95, 92, 91, 86, 84, 82, 77, 76, 75, 74, 71, 67, 66, 64, 60, 57, 55, 54, 49, 42, 41, 40, 32, 29, 22, 19, 15, 13, 12, 7, 2};
    int T = 53;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16217985398399193;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {1, 2, 7, 12, 16, 25, 28, 31, 37, 41, 45, 48, 50, 52, 57, 59, 61, 62, 67, 71, 75, 80, 83, 86, 87, 90, 91, 96};
    vector<int> y = {98, 96, 84, 82, 79, 69, 66, 61, 60, 58, 55, 43, 37, 36, 33, 31, 30, 29, 27, 25, 23, 15, 14, 11, 5, 4, 3, 1};
    int T = 4;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 23.515327900457642;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {1, 2, 4, 5, 7, 8, 10, 11, 13, 14, 15, 16, 21, 27, 28, 32, 33, 36, 39, 40, 44, 45, 49, 51, 52, 53, 54, 56, 59, 64, 67, 69, 70, 71, 76, 77, 78, 82, 83, 84, 86, 93, 95, 98, 99, 100};
    vector<int> y = {100, 96, 94, 89, 88, 87, 84, 83, 80, 79, 77, 76, 75, 74, 73, 70, 69, 68, 67, 66, 62, 61, 57, 52, 51, 48, 43, 41, 40, 39, 38, 37, 35, 31, 30, 29, 27, 26, 22, 21, 20, 18, 14, 12, 7, 2};
    int T = 69;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08681803169298105;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {26, 33, 47};
    vector<int> y = {76, 15, 3};
    int T = 58;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.048039159635711204;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {19, 23, 93};
    vector<int> y = {65, 22, 6};
    int T = 86;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.036567872214892286;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {44, 52, 57, 58, 75};
    vector<int> y = {100, 86, 85, 71, 57};
    int T = 25;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.22253374276602436;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {18, 22, 24, 56, 67, 77};
    vector<int> y = {94, 86, 41, 40, 34, 20};
    int T = 16;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0675177705514436;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {4, 8, 39, 57, 72, 97};
    vector<int> y = {97, 77, 70, 66, 61, 8};
    int T = 27;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5948190923208516;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {9, 47, 48, 50, 54, 66};
    vector<int> y = {95, 77, 63, 51, 34, 33};
    int T = 31;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4252969591873462;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {26, 39};
    vector<int> y = {82, 40};
    int T = 78;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.015129457437149748;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {7, 14, 33, 36, 85, 95};
    vector<int> y = {90, 71, 49, 33, 26, 15};
    int T = 66;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07275988372083177;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {21, 38, 46, 93};
    vector<int> y = {40, 33, 15, 5};
    int T = 7;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 7.916833880764825;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {24, 93, 100};
    vector<int> y = {76, 65, 60};
    int T = 59;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2842507380286895;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x = {76, 78};
    vector<int> y = {46, 12};
    int T = 42;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03868213952247567;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x = {13, 17, 64, 85, 98};
    vector<int> y = {73, 46, 35, 27, 9};
    int T = 41;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.19309499238142558;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x = {33, 61, 81};
    vector<int> y = {94, 28, 21};
    int T = 89;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.025737309019335648;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x = {49, 66, 71, 84, 89};
    vector<int> y = {91, 88, 68, 24, 8};
    int T = 49;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2588548175845644;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x = {43, 81, 94, 96};
    vector<int> y = {94, 56, 55, 26};
    int T = 85;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03837721943363127;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x = {13, 46, 58, 66, 80};
    vector<int> y = {93, 85, 72, 57, 26};
    int T = 38;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4687530887192758;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x = {9, 21, 35, 60, 96, 100};
    vector<int> y = {97, 77, 75, 57, 11, 3};
    int T = 28;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4838396931954325;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x = {42, 70};
    vector<int> y = {92, 87};
    int T = 11;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6743801652892563;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x = {26, 32, 53, 94, 95, 98};
    vector<int> y = {100, 68, 53, 35, 28, 4};
    int T = 8;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 4.937427205466061;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x = {25, 49, 93, 95};
    vector<int> y = {90, 79, 71, 41};
    int T = 58;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16056039932868243;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x = {1, 9, 10, 17, 19, 20, 23, 27, 28, 31, 34, 37, 39, 43, 45, 46, 48, 58, 61, 67, 69, 73, 74, 76, 77, 80, 81, 90, 93, 94, 97, 100};
    vector<int> y = {97, 96, 90, 87, 86, 82, 76, 73, 72, 71, 69, 67, 65, 62, 61, 57, 56, 52, 42, 40, 37, 27, 26, 23, 19, 15, 13, 12, 8, 7, 5, 1};
    int T = 6;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 24.284185842266385;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x = {4, 9, 10, 14, 16, 17, 19, 22, 23, 25, 26, 28, 29, 30, 31, 32, 33, 40, 42, 43, 52, 56, 57, 58, 60, 61, 62, 66, 67, 69, 71, 72, 73, 74, 77, 78, 81, 85, 94, 96, 98};
    vector<int> y = {100, 97, 94, 93, 90, 88, 85, 80, 76, 74, 71, 68, 65, 64, 63, 61, 56, 55, 53, 50, 46, 39, 37, 35, 31, 29, 28, 27, 26, 25, 24, 23, 22, 18, 17, 15, 11, 9, 8, 5, 2};
    int T = 6;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 12.647034758636012;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x = {3, 6, 8, 9, 10, 14, 17, 19, 22, 25, 26, 28, 32, 34, 36, 38, 45, 47, 48, 49, 50, 52, 53, 64, 65, 68, 73, 82, 84, 86, 90, 94, 95, 96, 98, 100};
    vector<int> y = {100, 97, 90, 76, 73, 71, 70, 68, 66, 64, 61, 57, 55, 54, 53, 50, 48, 46, 43, 41, 38, 37, 36, 35, 33, 31, 30, 28, 26, 25, 22, 17, 14, 8, 4, 1};
    int T = 2;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 102.95870245424061;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x = {2, 5, 15, 19, 20, 22, 27, 31, 34, 36, 39, 52, 53, 54, 55, 59, 61, 64, 65, 69, 70, 71, 74, 75, 77, 82, 91, 92, 95, 96, 97, 100};
    vector<int> y = {98, 86, 84, 83, 82, 79, 78, 74, 71, 66, 63, 61, 55, 54, 51, 50, 49, 48, 47, 46, 45, 44, 35, 30, 28, 24, 22, 17, 16, 6, 4, 2};
    int T = 8;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 7.130433793809195;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> x = {1, 5, 7, 9, 12, 21, 26, 35, 38, 39, 41, 44, 45, 47, 50, 51, 56, 60, 67, 69, 70, 71, 73, 75, 79, 80, 81, 84, 85, 89, 90, 93, 96, 100};
    vector<int> y = {99, 97, 95, 93, 90, 81, 80, 79, 77, 75, 73, 69, 68, 63, 58, 57, 52, 50, 48, 43, 38, 37, 34, 32, 30, 23, 19, 14, 13, 11, 5, 3, 2, 1};
    int T = 9;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 6.581969715632265;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x = {1, 2, 3, 4, 9, 14, 16, 17, 23, 26, 29, 30, 34, 38, 39, 41, 44, 47, 48, 50, 51, 56, 59, 60, 63, 64, 65, 67, 74, 78, 79, 81, 84, 85, 86, 88, 90, 91, 96, 99};
    vector<int> y = {100, 99, 98, 95, 90, 89, 88, 84, 81, 78, 77, 75, 72, 70, 68, 67, 64, 58, 57, 56, 50, 48, 44, 41, 39, 35, 34, 32, 28, 26, 25, 24, 15, 13, 11, 9, 7, 6, 5, 1};
    int T = 8;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 6.92297600829009;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> x = {4, 6, 9, 10, 11, 13, 14, 18, 19, 20, 24, 27, 29, 32, 35, 38, 40, 41, 43, 48, 50, 52, 53, 55, 56, 58, 62, 63, 65, 66, 68, 71, 73, 81, 82, 88, 92, 94, 97, 100};
    vector<int> y = {100, 99, 97, 95, 94, 93, 91, 89, 86, 85, 84, 78, 75, 69, 66, 65, 64, 60, 54, 49, 47, 43, 40, 35, 34, 33, 32, 30, 26, 25, 24, 21, 20, 19, 17, 14, 13, 11, 6, 1};
    int T = 3;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 53.12415117086146;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> x = {4, 8, 10, 16, 17, 21, 22, 25, 28, 31, 32, 34, 40, 47, 51, 52, 60, 62, 65, 73, 74, 79, 81, 83, 86, 90, 97};
    vector<int> y = {93, 89, 79, 75, 69, 68, 66, 61, 59, 53, 51, 48, 44, 43, 42, 40, 38, 37, 30, 26, 21, 15, 12, 9, 6, 2, 1};
    int T = 8;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0812596035319775;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> x = {1, 2, 3, 4, 5, 7, 13, 16, 17, 21, 22, 23, 24, 25, 27, 33, 34, 35, 36, 37, 38, 41, 42, 46, 53, 59, 60, 69, 73, 74, 76, 82, 85, 90, 95, 96, 99, 100};
    vector<int> y = {100, 97, 95, 89, 88, 86, 85, 82, 81, 78, 73, 72, 69, 67, 66, 64, 62, 60, 59, 58, 57, 55, 51, 49, 47, 34, 33, 32, 29, 26, 25, 20, 17, 16, 12, 9, 3, 1};
    int T = 7;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 8.217213341155478;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> x = {2, 3, 8, 9, 11, 13, 14, 17, 21, 27, 29, 30, 31, 32, 35, 36, 37, 42, 46, 47, 48, 49, 50, 53, 56, 57, 58, 60, 62, 68, 73, 79, 80, 86, 88, 90, 91, 92, 93, 97, 100};
    vector<int> y = {100, 99, 97, 96, 95, 88, 86, 85, 83, 79, 77, 73, 72, 69, 68, 67, 66, 62, 58, 56, 55, 54, 48, 47, 43, 42, 40, 34, 28, 27, 26, 23, 22, 20, 19, 18, 12, 10, 9, 7, 5};
    int T = 2;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 118.40208864369161;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> x = {4, 5, 6, 7, 15, 21, 25, 31, 32, 33, 36, 37, 42, 44, 49, 51, 57, 68, 72, 79, 84, 88, 93, 94, 95};
    vector<int> y = {92, 90, 82, 79, 76, 73, 71, 68, 64, 63, 55, 54, 50, 49, 46, 45, 44, 41, 40, 33, 28, 27, 20, 19, 4};
    int T = 8;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 6.101432089900507;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> x = {3, 4, 9, 11, 12, 16, 17, 24, 25, 26, 27, 28, 30, 32, 36, 37, 39, 42, 46, 49, 51, 54, 55, 59, 62, 63, 71, 74, 75, 76, 78, 79, 85, 87, 89, 96, 98, 99};
    vector<int> y = {90, 85, 84, 81, 73, 70, 69, 68, 60, 58, 56, 55, 50, 49, 48, 40, 38, 37, 32, 30, 27, 26, 22, 21, 20, 19, 17, 16, 15, 13, 12, 9, 8, 7, 6, 5, 3, 2};
    int T = 8;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 6.27262066668572;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> x = {1, 6, 9, 10, 14, 18, 22, 24, 29, 32, 34, 35, 37, 38, 39, 44, 45, 49, 50, 52, 55, 56, 59, 60, 61, 65, 68, 70, 71, 75, 77, 79, 80, 81, 86, 87, 88, 89, 90};
    vector<int> y = {98, 96, 93, 91, 88, 87, 86, 82, 81, 80, 77, 73, 70, 68, 65, 59, 56, 55, 53, 52, 47, 44, 42, 38, 36, 32, 31, 28, 23, 20, 19, 18, 17, 16, 13, 11, 7, 4, 3};
    int T = 6;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 14.789814644625674;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> x = {1, 2, 5, 7, 14, 15, 16, 17, 19, 20, 21, 22, 23, 26, 28, 29, 30, 36, 38, 40, 43, 50, 51, 52, 53, 56, 59, 60, 62, 64, 66, 67, 71, 72, 77, 78, 79, 84, 86, 88, 93, 96, 97, 98};
    vector<int> y = {100, 98, 97, 93, 90, 88, 84, 80, 78, 77, 76, 72, 70, 69, 68, 67, 52, 51, 49, 48, 47, 46, 45, 43, 41, 39, 38, 37, 35, 34, 31, 27, 26, 25, 24, 19, 16, 15, 14, 11, 10, 4, 3, 2};
    int T = 2;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 111.39064925950503;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> x = {4, 15, 16, 19, 24, 25, 26, 27, 30, 32, 38, 40, 42, 44, 45, 46, 49, 53, 56, 57, 58, 60, 61, 63, 67, 72, 75, 83, 86, 88, 95};
    vector<int> y = {99, 98, 97, 96, 94, 91, 90, 89, 88, 81, 78, 77, 71, 70, 64, 63, 59, 57, 54, 48, 44, 42, 40, 29, 28, 27, 23, 21, 16, 14, 1};
    int T = 3;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 132.65932312713576;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> x = {5, 8, 9, 10, 12, 14, 16, 19, 23, 25, 26, 28, 29, 33, 37, 39, 40, 42, 43, 45, 46, 47, 49, 50, 52, 53, 56, 58, 61, 62, 68, 70, 72, 73, 77, 78, 81, 83, 84, 88, 89, 96, 97, 98};
    vector<int> y = {97, 95, 90, 89, 85, 84, 83, 82, 80, 78, 76, 74, 72, 69, 67, 66, 63, 62, 60, 58, 57, 54, 53, 50, 49, 48, 47, 46, 45, 42, 38, 32, 27, 26, 20, 15, 14, 12, 11, 7, 5, 4, 2, 1};
    int T = 7;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 8.807975196710327;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> x = {1, 2, 3, 7, 9, 11, 13, 17, 18, 22, 24, 28, 29, 31, 32, 33, 36, 37, 40, 43, 45, 46, 47, 48, 55, 58, 63, 64, 65, 67, 68, 69, 72, 73, 76, 86, 87, 92, 93, 94, 95, 96, 98, 99, 100};
    vector<int> y = {99, 96, 95, 93, 92, 89, 88, 87, 86, 82, 81, 79, 75, 74, 72, 71, 69, 67, 63, 61, 57, 56, 53, 52, 46, 44, 37, 35, 31, 28, 26, 25, 23, 22, 19, 17, 16, 15, 14, 13, 12, 9, 7, 5, 4};
    int T = 4;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 26.246963988470142;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> x = {4, 8, 9, 10, 11, 15, 21, 25, 28, 30, 35, 38, 39, 42, 44, 45, 46, 52, 53, 54, 55, 56, 57, 58, 63, 65, 66, 73, 75, 76, 82, 85, 86, 88, 92, 94, 100};
    vector<int> y = {100, 99, 97, 94, 93, 89, 86, 85, 83, 81, 80, 77, 76, 75, 74, 73, 71, 69, 68, 67, 62, 61, 58, 57, 52, 51, 45, 44, 42, 40, 33, 30, 16, 11, 10, 8, 7};
    int T = 1;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 613.8564972992187;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> x = {2, 3, 6, 11, 14, 15, 20, 25, 27, 29, 36, 45, 49, 50, 53, 55, 67, 72, 77, 78, 81, 82, 86, 87, 88, 89, 91, 92, 93, 96};
    vector<int> y = {98, 97, 96, 90, 85, 81, 79, 78, 68, 61, 56, 54, 51, 50, 47, 46, 45, 41, 37, 30, 24, 19, 18, 14, 13, 11, 10, 8, 3, 1};
    int T = 3;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 52.314947976919036;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> x = {2, 3, 4, 7, 9, 21, 22, 23, 38, 45, 49, 50, 54, 57, 63, 64, 67, 68, 69, 72, 75, 78, 79, 88, 90, 91, 94, 95, 96, 100};
    vector<int> y = {96, 95, 87, 83, 82, 79, 78, 73, 70, 69, 65, 64, 63, 61, 60, 57, 56, 53, 51, 39, 37, 36, 32, 24, 19, 13, 8, 6, 5, 1};
    int T = 7;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 9.858868328136493;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> x = {88, 92, 96, 97};
    vector<int> y = {96, 94, 93, 90};
    int T = 3;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 6.076100865462094;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> x = {88, 89, 90, 91, 92, 93, 94, 95, 96, 97};
    vector<int> y = {97, 96, 95, 94, 93, 92, 91, 90, 89, 88};
    int T = 1;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 35.99999999999999;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> x = {88, 92, 93, 94, 95, 96};
    vector<int> y = {97, 96, 94, 93, 90, 88};
    int T = 1;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 81.84947220970487;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> x = {91, 93};
    vector<int> y = {96, 95};
    int T = 1;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 10.000000000000004;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> x = {90, 94, 95, 96};
    vector<int> y = {97, 95, 93, 91};
    int T = 2;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 9.330127018922193;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> x = {1, 2, 6};
    vector<int> y = {56, 5, 4};
    int T = 7;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2533066454881383;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> x = {1, 3};
    vector<int> y = {96, 4};
    int T = 1;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 184.08695652173915;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> x = {1, 2, 3};
    vector<int> y = {96, 5, 4};
    int T = 1;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 184.85377649576782;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> x = {0, 100};
    vector<int> y = {1, 0};
    int T = 1;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 20002.000000000004;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> x = {0, 100};
    vector<int> y = {100, 99};
    int T = 1;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 20002.000000000004;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> x = {0, 1};
    vector<int> y = {100, 0};
    int T = 1;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 200.02;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> x = {0, 100};
    vector<int> y = {2, 1};
    int T = 1;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 20002.000000000004;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7};
    vector<int> y = {100, 97, 90, 82, 71, 51, 20, 10};
    int T = 10;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8485407796269264;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> x = {0, 99, 100};
    vector<int> y = {100, 99, 0};
    int T = 1;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 23330.38016528926;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> x = {0, 7, 8};
    vector<int> y = {10, 6, 0};
    int T = 7;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1076837407708007;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> x = {2, 3, 10, 12, 16, 18, 19, 20, 24, 25, 26, 31, 34, 35, 37, 38, 39, 40, 41, 43, 44, 47, 48, 49, 50, 52, 53, 54, 55, 56, 59, 61, 62, 64, 65, 67, 69, 71, 72, 76, 77, 80, 82, 87, 88, 89, 91, 92, 95, 96};
    vector<int> y = {100, 97, 94, 93, 89, 85, 84, 83, 80, 79, 74, 72, 71, 70, 69, 67, 66, 64, 61, 59, 55, 54, 52, 51, 49, 48, 46, 45, 44, 42, 39, 38, 37, 32, 31, 29, 28, 27, 26, 25, 23, 20, 18, 13, 12, 11, 10, 9, 5, 3};
    int T = 1;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 411.146418676107;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> y = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int T = 1;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 196.00000000000017;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 50};
    vector<int> y = {100, 90, 80, 77, 60, 50, 40, 30, 20, 10};
    int T = 1;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 254.90587438498275;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> x = {0, 100};
    vector<int> y = {100, 0};
    int T = 1;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 400.00000000000017;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> y = {49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int T = 1;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 196.00000000000017;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> x = {0, 1};
    vector<int> y = {100, 0};
    int T = 100;
    IncredibleMachine* pObj = new IncredibleMachine();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(x, y, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.020002;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7390467&rd=13748&pm=10310
********************************************************************************
#include <algorithm> 
#include <cmath> 
#include <cstdio> 
#include <cstdlib> 
#include <ctime> 
#include <iostream> 
#include <map> 
#include <set> 
#include <string> 
#include <utility> 
#include <vector> 
 
using namespace std; 
 
template<typename T> inline T sqr( const T &a ) { return a*a; } 
#define repeat(n) for ( int repc = (n); repc > 0; --repc ) 
 
struct IncredibleMachine { 
   double sim(const vector<int> &x, const vector<int> &y, double g) { 
      double v0 = 0.0; 
      double sumt = 0.0; 
      for ( int i=0; i<(int)x.size()-1; ++i ) { 
         double d = hypot(x[i]-x[i+1], y[i]-y[i+1]); 
         double sinalpha = (y[i]-y[i+1]) / d; 
         double a = g * sinalpha; 
         double t = (-v0 + sqrt(sqr(v0) + 2*a*d)) / a; 
         v0 += a*t; 
         sumt += t; 
      } 
      return sumt; 
   } 
    
   double gravitationalAcceleration( vector <int> x, vector <int> y, int T ) { // caret here 
      double lo = 0, hi = 1e9; 
      repeat(100) { 
         double mid = (lo+hi)/2; 
         if ( sim(x, y, mid) < T ) hi = mid; 
         else lo = mid; 
      } 
      return lo; 
   } 
}; 
 
 
 
// Powered by FileEdit
// Powered by moj 4.12 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/