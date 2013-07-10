/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10586
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

class Archery {
public:
    double expectedPoints(int N, vector<int> ringPoints);
};

double Archery::expectedPoints(int N, vector<int> ringPoints) {
    double ret;
    return ret;
}


int test0() {
    int N = 1;
    vector<int> ringPoints = {10, 0};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 3;
    vector<int> ringPoints = {1, 1, 1, 1};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
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
    int N = 4;
    vector<int> ringPoints = {100, 0, 100, 0, 100};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 60.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 9;
    vector<int> ringPoints = {69, 50, 79, 16, 52, 71, 17, 96, 56, 32};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 51.96;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 40;
    vector<int> ringPoints = {39, 82, 20, 86, 26, 54, 96, 27, 45, 96, 32, 85, 37, 51, 60, 22, 38, 80, 89, 27, 43, 59, 39, 83, 23, 30, 79, 33, 55, 80, 70, 27, 6, 35, 18, 48, 32, 72, 52, 90, 5};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 48.11957168352171;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 43;
    vector<int> ringPoints = {85, 16, 15, 53, 63, 28, 33, 21, 68, 49, 58, 15, 27, 27, 76, 29, 95, 3, 15, 98, 47, 97, 29, 21, 6, 97, 52, 36, 49, 69, 92, 5, 88, 6, 89, 21, 94, 8, 20, 62, 19, 11, 63, 18};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 44.5025826446281;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 47;
    vector<int> ringPoints = {46, 79, 29, 0, 46, 54, 57, 42, 59, 83, 65, 3, 89, 33, 12, 32, 2, 59, 2, 7, 5, 38, 4, 41, 38, 70, 47, 62, 77, 1, 13, 35, 69, 95, 6, 70, 79, 73, 8, 39, 16, 77, 6, 26, 32, 36, 44, 41};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 40.02734375;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 12;
    vector<int> ringPoints = {75, 20, 23, 99, 74, 42, 29, 17, 78, 10, 39, 98, 98};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 57.64497041420118;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 13;
    vector<int> ringPoints = {19, 64, 37, 9, 32, 53, 20, 40, 3, 23, 49, 43, 48, 81};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 41.23979591836735;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 41;
    vector<int> ringPoints = {64, 15, 98, 86, 31, 13, 76, 11, 73, 33, 43, 83, 92, 62, 61, 50, 17, 31, 42, 82, 16, 5, 68, 28, 70, 94, 13, 87, 50, 58, 1, 0, 76, 55, 8, 21, 87, 97, 90, 50, 96, 29};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 52.03061224489796;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 19;
    vector<int> ringPoints = {16, 42, 65, 46, 3, 56, 30, 9, 26, 62, 50, 54, 57, 91, 10, 73, 34, 88, 31, 26};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 46.667500000000004;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 17;
    vector<int> ringPoints = {52, 9, 46, 10, 51, 87, 80, 13, 37, 8, 100, 2, 27, 91, 56, 6, 43, 12};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 39.31481481481481;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 42;
    vector<int> ringPoints = {56, 9, 84, 1, 75, 72, 58, 71, 79, 72, 50, 55, 13, 88, 88, 54, 27, 58, 75, 59, 31, 7, 40, 71, 30, 52, 46, 68, 34, 60, 53, 84, 2, 66, 75, 41, 51, 88, 20, 11, 87, 2, 67};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 50.31692806922661;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 21;
    vector<int> ringPoints = {7, 59, 44, 89, 62, 0, 43, 75, 21, 76, 53, 17, 32, 68, 76, 50, 61, 35, 43, 49, 45, 98};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 53.2293388429752;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 48;
    vector<int> ringPoints = {94, 33, 68, 25, 14, 14, 39, 18, 26, 7, 80, 36, 78, 38, 5, 56, 79, 10, 59, 32, 64, 45, 96, 5, 5, 13, 53, 17, 74, 10, 74, 95, 17, 98, 93, 60, 42, 11, 41, 75, 32, 67, 33, 47, 52, 30, 29, 12, 91};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 46.46230737192836;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 22;
    vector<int> ringPoints = {29, 22, 37, 99, 81, 8, 88, 34, 38, 83, 15, 72, 55, 67, 62, 18, 11, 14, 42, 88, 18, 45, 58};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 45.93572778827977;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 12;
    vector<int> ringPoints = {24, 51, 64, 56, 2, 93, 33, 67, 56, 71, 92, 12, 94};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 60.49112426035503;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 15;
    vector<int> ringPoints = {28, 46, 94, 93, 15, 39, 58, 28, 24, 55, 39, 61, 17, 84, 37, 3};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 41.24609375;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 44;
    vector<int> ringPoints = {49, 86, 78, 73, 71, 75, 0, 67, 50, 74, 38, 38, 54, 42, 55, 93, 44, 35, 26, 59, 25, 62, 64, 69, 89, 75, 93, 87, 37, 54, 18, 88, 2, 88, 89, 60, 90, 86, 91, 86, 62, 43, 89, 88, 38};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 64.49382716049382;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 27;
    vector<int> ringPoints = {36, 56, 89, 72, 40, 13, 34, 80, 83, 66, 61, 99, 43, 82, 42, 88, 51, 67, 74, 66, 76, 22, 18, 44, 39, 21, 33, 5};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 48.52295918367347;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 33;
    vector<int> ringPoints = {49, 70, 19, 64, 11, 12, 71, 31, 5, 17, 37, 75, 77, 48, 12, 36, 47, 71, 57, 75, 15, 53, 85, 57, 2, 53, 84, 4, 53, 19, 71, 50, 62, 3};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 44.819204152249135;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 23;
    vector<int> ringPoints = {1, 3, 16, 48, 87, 17, 73, 54, 21, 41, 86, 47, 8, 43, 58, 85, 10, 76, 96, 86, 100, 38, 84, 20};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 57.64930555555555;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 36;
    vector<int> ringPoints = {51, 48, 87, 82, 4, 97, 46, 3, 67, 71, 73, 50, 3, 48, 19, 85, 93, 77, 10, 0, 42, 72, 27, 61, 65, 99, 96, 27, 98, 57, 91, 38, 53, 100, 25, 89, 44};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 59.03140978816654;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 11;
    vector<int> ringPoints = {95, 75, 61, 14, 11, 82, 30, 68, 44, 96, 56, 53};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 56.25694444444445;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 7;
    vector<int> ringPoints = {22, 89, 28, 70, 6, 6, 1, 50};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 28.15625;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 21;
    vector<int> ringPoints = {33, 0, 63, 94, 15, 52, 84, 85, 89, 20, 89, 75, 48, 71, 41, 41, 23, 74, 23, 45, 34, 68};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 52.514462809917354;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 36;
    vector<int> ringPoints = {74, 83, 90, 75, 12, 93, 26, 22, 47, 13, 1, 80, 34, 60, 82, 72, 70, 90, 20, 55, 70, 72, 60, 77, 6, 34, 42, 76, 36, 93, 34, 0, 70, 40, 69, 77, 18};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 51.52154857560263;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 4;
    vector<int> ringPoints = {77, 13, 80, 59, 37};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 50.480000000000004;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 20;
    vector<int> ringPoints = {46, 13, 50, 47, 30, 24, 78, 24, 92, 79, 100, 2, 100, 14, 96, 33, 53, 64, 90, 52, 98};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 63.11337868480725;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 45;
    vector<int> ringPoints = {66, 0, 18, 78, 12, 2, 33, 10, 66, 88, 23, 36, 71, 38, 39, 86, 16, 71, 22, 84, 49, 81, 11, 44, 51, 44, 27, 72, 10, 10, 31, 85, 31, 17, 14, 74, 64, 38, 79, 74, 15, 50, 11, 16, 100, 42};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 44.92013232514177;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 22;
    vector<int> ringPoints = {66, 54, 75, 56, 62, 66, 2, 83, 2, 25, 78, 15, 88, 59, 34, 17, 72, 5, 15, 15, 65, 87, 94};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 48.534971644612476;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 34;
    vector<int> ringPoints = {71, 95, 43, 34, 99, 47, 91, 48, 29, 10, 62, 34, 54, 3, 80, 23, 41, 73, 76, 54, 77, 39, 19, 49, 32, 77, 70, 86, 12, 5, 23, 89, 25, 2, 38};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 44.46857142857143;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 28;
    vector<int> ringPoints = {66, 6, 31, 46, 65, 100, 18, 80, 64, 58, 66, 87, 80, 51, 26, 17, 69, 33, 30, 32, 95, 80, 63, 93, 90, 14, 19, 78, 43};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 56.026159334126035;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 21;
    vector<int> ringPoints = {40, 41, 22, 71, 59, 30, 66, 22, 74, 97, 60, 21, 22, 1, 41, 7, 78, 14, 13, 70, 69, 32};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 41.582644628099175;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 16;
    vector<int> ringPoints = {99, 32, 89, 32, 76, 29, 94, 30, 32, 71, 88, 21, 71, 68, 81, 34, 88};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 61.179930795847746;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 40;
    vector<int> ringPoints = {67, 30, 26, 52, 84, 73, 39, 9, 23, 82, 15, 49, 74, 68, 7, 9, 88, 54, 36, 96, 1, 8, 46, 52, 85, 23, 8, 49, 64, 47, 35, 84, 10, 71, 64, 67, 18, 82, 91, 76, 26};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 50.354550862581796;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 21;
    vector<int> ringPoints = {4, 79, 37, 17, 72, 38, 14, 3, 41, 70, 9, 24, 16, 42, 81, 37, 54, 15, 66, 81, 67, 60};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 47.25413223140495;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 10;
    vector<int> ringPoints = {85, 4, 30, 53, 31, 38, 65, 17, 19, 31, 22};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 31.314049586776857;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 41;
    vector<int> ringPoints = {12, 17, 56, 1, 80, 18, 44, 31, 71, 93, 15, 84, 8, 34, 5, 25, 50, 65, 93, 55, 9, 88, 4, 78, 10, 20, 21, 84, 37, 81, 35, 74, 6, 91, 44, 33, 15, 65, 35, 6, 80, 90};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 47.02777777777778;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 11;
    vector<int> ringPoints = {4, 31, 58, 26, 44, 60, 11, 59, 9, 17, 11, 46};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 30.680555555555557;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 4;
    vector<int> ringPoints = {24, 12, 97, 6, 57};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 44.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 12;
    vector<int> ringPoints = {45, 46, 81, 14, 57, 59, 24, 2, 82, 62, 13, 95, 59};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 51.44970414201183;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 48;
    vector<int> ringPoints = {63, 59, 79, 80, 40, 40, 64, 45, 88, 55, 36, 64, 77, 34, 42, 76, 13, 12, 57, 85, 60, 29, 82, 22, 80, 12, 51, 56, 31, 63, 22, 67, 41, 86, 76, 93, 36, 28, 49, 94, 64, 67, 37, 55, 0, 97, 100, 76, 1};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 54.59142024156601;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 3;
    vector<int> ringPoints = {4, 8, 95, 83};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 67.75;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 39;
    vector<int> ringPoints = {3, 67, 98, 32, 21, 38, 19, 20, 77, 95, 55, 11, 58, 94, 91, 56, 15, 40, 20, 67, 67, 84, 73, 86, 85, 71, 36, 87, 92, 51, 69, 52, 7, 31, 46, 52, 86, 52, 70, 30};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 57.152499999999996;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 12;
    vector<int> ringPoints = {87, 53, 4, 10, 97, 88, 87, 14, 57, 91, 37, 97, 87};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 67.44970414201183;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 27;
    vector<int> ringPoints = {92, 46, 14, 61, 97, 27, 7, 28, 44, 74, 53, 0, 8, 0, 16, 67, 29, 87, 31, 92, 56, 86, 76, 43, 91, 67, 80, 48};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 55.285714285714285;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 36;
    vector<int> ringPoints = {28, 70, 72, 82, 41, 6, 10, 86, 96, 58, 39, 89, 23, 50, 32, 65, 55, 34, 66, 99, 49, 63, 51, 89, 76, 74, 99, 17, 96, 20, 60, 85, 75, 76, 52, 10, 45};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 59.09130752373996;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 43;
    vector<int> ringPoints = {57, 53, 3, 53, 80, 87, 14, 17, 21, 36, 73, 64, 60, 79, 14, 23, 27, 53, 92, 62, 59, 66, 35, 85, 34, 8, 96, 94, 89, 35, 99, 27, 29, 54, 4, 12, 79, 89, 84, 13, 34, 36, 3, 93};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 51.02014462809917;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 18;
    vector<int> ringPoints = {44, 50, 89, 95, 81, 87, 10, 76, 94, 27, 57, 37, 82, 6, 37, 80, 16, 80, 51};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 53.73684210526316;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 29;
    vector<int> ringPoints = {25, 67, 27, 99, 3, 5, 61, 2, 73, 87, 7, 100, 85, 58, 13, 100, 12, 88, 62, 35, 5, 79, 69, 57, 82, 96, 93, 0, 17, 16};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 51.93888888888889;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 43;
    vector<int> ringPoints = {94, 41, 62, 35, 61, 44, 79, 90, 16, 22, 33, 65, 9, 94, 8, 1, 88, 87, 20, 71, 26, 6, 91, 33, 55, 40, 85, 32, 30, 4, 48, 45, 59, 44, 73, 52, 69, 54, 94, 7, 50, 99, 13, 94};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 51.22055785123967;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 36;
    vector<int> ringPoints = {98, 78, 94, 99, 64, 17, 51, 32, 7, 32, 9, 58, 98, 78, 70, 52, 34, 5, 94, 97, 1, 46, 0, 82, 97, 21, 70, 100, 84, 41, 78, 45, 53, 54, 21, 88, 16};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 54.084733382030684;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 25;
    vector<int> ringPoints = {99, 80, 66, 19, 95, 64, 19, 25, 75, 83, 35, 1, 11, 95, 63, 11, 81, 40, 91, 58, 69, 21, 28, 47, 61, 19};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 48.02071005917159;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 36;
    vector<int> ringPoints = {73, 7, 19, 70, 34, 53, 33, 97, 97, 76, 55, 11, 81, 19, 89, 14, 84, 85, 53, 100, 88, 87, 0, 36, 46, 20, 37, 21, 17, 11, 17, 60, 96, 100, 87, 46, 19};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 51.55295836376917;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 1;
    vector<int> ringPoints = {0, 0};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 9;
    vector<int> ringPoints = {69, 50, 79, 16, 52, 71, 17, 96, 56, 32};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 51.96;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 4;
    vector<int> ringPoints = {100, 0, 100, 0, 100};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 60.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 1;
    vector<int> ringPoints = {10, 0};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 11;
    vector<int> ringPoints = {11, 70, 50, 0, 12, 3, 4, 5, 4, 23, 23, 0};
    Archery* pObj = new Archery();
    clock_t start = clock();
    double result = pObj->expectedPoints(N, ringPoints);
    clock_t end = clock();
    delete pObj;
    double expected = 11.993055555555555;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22671912&rd=14147&pm=10586
********************************************************************************
#include<iostream> 
#include<vector> 
#include<list> 
#include<map> 
#include<set> 
#include<algorithm> 
#include<deque> 
#include<stack> 
#include<bitset> 
#include<functional> 
#include<numeric> 
#include<utility> 
#include<iomanip> 
#include<cstdlib> 
#include<ctime> 
#include<queue> 
#include<cmath> 
#include<sstream> 
#include<string> 
#include<cstdio> 
 
using namespace std; 
 
class Archery 
{ 
  public: 
  double expectedPoints(int n, vector <int> r) 
  { 
    double x=0; 
    for(int i=0;i<=n;i++) 
    { 
      double a=((i+1)*(i+1)-i*i)*1.0/((n+1)*(n+1)); 
      x+=a*r[i]; 
    } 
    return x; 
  } 
};

********************************************************************************
*******************************************************************************/