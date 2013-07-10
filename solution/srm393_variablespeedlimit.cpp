/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8730
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

class VariableSpeedLimit {
public:
    double journeyTime(int journeyLength, vector<int> speedLimit);
};

double VariableSpeedLimit::journeyTime(int journeyLength, vector<int> speedLimit) {
    double ret;
    return ret;
}


int test0() {
    int journeyLength = 100;
    vector<int> speedLimit = {50};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int journeyLength = 100;
    vector<int> speedLimit = {50, 25};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int journeyLength = 1000;
    vector<int> speedLimit = {50, 40, 30, 40, 50};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 24.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int journeyLength = 2058;
    vector<int> speedLimit = {80, 43, 57, 23, 28, 45, 60, 75, 73, 80};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 37.4;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int journeyLength = 56935;
    vector<int> speedLimit = {82, 20, 17, 15, 48, 3, 9, 64, 98, 84, 81, 53, 32, 20};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 1272.65625;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int journeyLength = 99345;
    vector<int> speedLimit = {37, 1, 28, 49, 82, 50, 98, 97, 23, 22};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 2039.8636363636363;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int journeyLength = 64609;
    vector<int> speedLimit = {49, 40, 5, 34, 50, 85, 86, 69, 81, 32, 96, 35, 27};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 1219.0104166666667;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int journeyLength = 45767;
    vector<int> speedLimit = {58, 46, 9, 4, 100, 56, 18, 28, 90, 77, 39, 60, 49, 48};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 939.3260869565217;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int journeyLength = 98803;
    vector<int> speedLimit = {87, 10, 45, 21, 22, 32, 82, 52, 42, 95, 61, 46};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 1992.3793103448277;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int journeyLength = 71899;
    vector<int> speedLimit = {69, 92, 27, 67, 16, 16, 34, 49, 2, 99};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 1526.5882352941176;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int journeyLength = 30901;
    vector<int> speedLimit = {98, 81, 27, 84, 78, 83, 24, 11, 21, 72, 56};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 533.6385542168674;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int journeyLength = 17216;
    vector<int> speedLimit = {26, 30, 62, 55, 51, 56, 58, 4, 60, 23, 31};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 415.03333333333336;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int journeyLength = 9839;
    vector<int> speedLimit = {45, 90, 13, 4, 81, 50, 81, 10, 64, 86, 69};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 182.8395061728395;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int journeyLength = 80821;
    vector<int> speedLimit = {57, 91, 27, 20, 45, 16, 7, 16, 83, 45, 95};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 1770.9894736842105;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int journeyLength = 100000;
    vector<int> speedLimit = {1};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 100000.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int journeyLength = 43552;
    vector<int> speedLimit = {30, 26, 79, 65, 45, 86, 76, 100, 3, 85, 5, 59, 80, 19, 76, 96, 22, 22, 77, 10, 81, 97, 2, 22, 54, 38, 96, 87, 3, 11, 62, 45, 99, 18, 80, 50, 47, 38, 29, 79, 70, 78, 56, 7, 10, 49, 97, 25, 20, 83};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 839.3544303797469;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int journeyLength = 43750;
    vector<int> speedLimit = {81, 33, 51, 19, 97, 90, 16, 61, 22, 65, 49, 59, 51, 72, 37, 71, 87, 79, 67, 89, 94, 51, 41, 42, 95, 29, 77, 22, 77, 23, 34, 11, 74, 40, 84, 66, 79, 16, 27, 66, 33, 99, 42, 42, 81, 81, 60, 70, 98, 80};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 747.6857142857143;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int journeyLength = 72693;
    vector<int> speedLimit = {93, 24, 5, 84, 55, 17, 31, 1, 10, 85, 75, 16, 51, 50, 67, 65, 72, 22, 56, 86, 70, 36, 89, 99, 28, 65, 23, 45, 16, 8, 91, 18, 84, 79, 20, 98, 25, 15, 85, 44, 90, 43, 59, 56, 23, 55, 17, 2, 49, 94};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 1460.6533333333334;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int journeyLength = 10137;
    vector<int> speedLimit = {67, 12, 37, 44, 8, 20, 100, 30, 49, 10, 50, 68, 6, 25, 18, 73, 60, 12, 97, 89, 100, 36, 98, 79, 77, 79, 47, 78, 3, 2, 33, 22, 58, 16, 23, 38, 72, 63, 49, 67, 78, 31, 5, 90, 54, 2, 19, 17, 49, 57};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 219.93258426966293;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int journeyLength = 46571;
    vector<int> speedLimit = {69, 4, 31, 81, 27, 67, 47, 45, 53, 24, 63, 10, 64, 17, 48, 52, 3, 80, 28, 77, 1, 40, 7, 19, 33, 6, 88, 75, 16, 60, 8, 93, 81, 90, 12, 94, 15, 77, 67, 39, 82, 54, 49, 22, 62, 50, 28, 1, 9, 57};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 1044.8548387096773;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int journeyLength = 30930;
    vector<int> speedLimit = {31, 4, 24, 83, 4, 77, 8, 12, 4, 79, 45, 48, 29, 64, 29, 18, 43, 10, 53, 97, 6, 22, 86, 37, 66, 17, 32, 33, 14, 87, 20, 90, 44, 26, 68, 98, 18, 34, 2, 48, 13, 60, 42, 90, 99, 37, 20, 5, 78, 34};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 742.3571428571429;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int journeyLength = 97419;
    vector<int> speedLimit = {86, 46, 38, 26, 53, 73, 73, 21, 93, 25, 61, 91, 41, 40, 34, 12, 15, 96, 99, 72, 22, 37, 66, 10, 28, 13, 74, 91, 63, 53, 47, 93, 96, 32, 92, 59, 12, 10, 91, 67, 96, 42, 100, 49, 11, 49, 68, 73, 41, 80};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 1766.4;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int journeyLength = 12957;
    vector<int> speedLimit = {74, 35, 100, 14, 89, 100, 55, 60, 100, 20, 83, 27, 85, 55, 3, 43, 54, 75, 95, 56, 50, 91, 71, 8, 78, 29, 29, 20, 85, 3, 59, 99, 49, 34, 45, 28, 20, 74, 71, 80, 32, 73, 85, 44, 25, 78, 76, 1, 33, 92};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 231.7171717171717;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int journeyLength = 55875;
    vector<int> speedLimit = {95, 91, 48, 10, 51, 63, 53, 35, 38, 85, 73, 68, 80, 56, 62, 58, 62, 51, 42, 15, 26, 24, 58, 12, 80, 74, 99, 20, 9, 70, 59, 95, 35, 57, 17, 22, 87, 72, 87, 77, 19, 34, 46, 74, 89, 80, 30, 95, 88, 38};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 995.325;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int journeyLength = 36231;
    vector<int> speedLimit = {17, 52, 26, 40, 73, 84, 58, 21, 23, 81, 69, 22, 1, 22, 32, 9, 74, 93, 78, 62, 10, 42, 10, 49, 8, 11, 96, 67, 12, 53, 92, 49, 17, 70, 58, 50, 14, 71, 27, 4, 65, 14, 57, 75, 63, 58, 11, 80, 92, 49};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 784.7413793103449;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int journeyLength = 100000;
    vector<int> speedLimit = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 100000.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int journeyLength = 100000;
    vector<int> speedLimit = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 1000.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int journeyLength = 9839;
    vector<int> speedLimit = {45, 90, 13, 4, 81, 50, 81, 10, 64, 86, 69};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 182.8395061728395;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int journeyLength = 100;
    vector<int> speedLimit = {50};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int journeyLength = 17216;
    vector<int> speedLimit = {26, 30, 62, 55, 51, 56, 58, 4, 60, 23, 31};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 415.03333333333336;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int journeyLength = 89839;
    vector<int> speedLimit = {45, 90, 13, 4, 81, 50, 81, 10, 64, 86, 69, 13, 1};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 1924.0666666666666;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int journeyLength = 1;
    vector<int> speedLimit = {10};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int journeyLength = 2058;
    vector<int> speedLimit = {80, 43, 57, 23, 28, 45, 60, 75, 73, 80};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 37.4;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int journeyLength = 50;
    vector<int> speedLimit = {23};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1739130434782608;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int journeyLength = 5;
    vector<int> speedLimit = {10};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int journeyLength = 76;
    vector<int> speedLimit = {50, 25};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 2.02;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int journeyLength = 10;
    vector<int> speedLimit = {50};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int journeyLength = 10;
    vector<int> speedLimit = {20};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int journeyLength = 9850;
    vector<int> speedLimit = {45, 45, 13, 4, 81, 50, 81, 10, 64, 86, 69};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 197.79710144927537;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int journeyLength = 2;
    vector<int> speedLimit = {4};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int journeyLength = 98483;
    vector<int> speedLimit = {45, 90, 13, 4, 81, 50, 81, 10, 64, 86, 69, 11};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 1956.6888888888889;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int journeyLength = 1000;
    vector<int> speedLimit = {50, 40, 30, 40, 50};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 24.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int journeyLength = 80;
    vector<int> speedLimit = {25};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 3.2;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int journeyLength = 1;
    vector<int> speedLimit = {2};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int journeyLength = 10000;
    vector<int> speedLimit = {5, 15};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 1000.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int journeyLength = 31;
    vector<int> speedLimit = {10, 10, 10, 10};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int journeyLength = 100000;
    vector<int> speedLimit = {1};
    VariableSpeedLimit* pObj = new VariableSpeedLimit();
    clock_t start = clock();
    double result = pObj->journeyTime(journeyLength, speedLimit);
    clock_t end = clock();
    delete pObj;
    double expected = 100000.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22666203&rd=11127&pm=8730
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
 
class VariableSpeedLimit {
public:
  double journeyTime(int, vector <int>);
};
 
double VariableSpeedLimit::journeyTime(int dist, vector <int> v) {
  double t=0.0;
  while(dist>0){
  for(int i=0;i<v.size();i++){
    if(dist-v[i]<0){
      t+=(1.0*dist)/(1.0*v[i]);
      dist=0;
      }
    else{
      t+=1.0;
      dist-=v[i];
      }
    }
  }
  return t;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/