/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10309
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

class IncredibleMachineEasy {
public:
    double gravitationalAcceleration(vector<int> height, int T);
};

double IncredibleMachineEasy::gravitationalAcceleration(vector<int> height, int T) {
    double ret;
    return ret;
}


int test0() {
    vector<int> height = {16, 23, 85, 3, 35, 72, 96, 88, 2, 14, 63};
    int T = 30;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 9.803799620759717;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> height = {6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 5};
    int T = 12;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 26.73924541044107;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> height = {8, 8};
    int T = 3;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 7.111111111111111;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> height = {3, 1, 3, 1, 3};
    int T = 12;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7192306901503684;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> height = {100};
    int T = 8;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1250000000000004;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> height = {100};
    int T = 100;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.020000000000000004;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> height = {100};
    int T = 1;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 200.00000000000003;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> height = {1};
    int T = 100;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0000000000000004E-4;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> height = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    int T = 1;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 500000.00000000006;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> height = {88, 99, 44, 21, 38, 98, 49, 48, 83, 63, 16, 78, 30, 14, 15, 91, 58, 97, 61, 40, 75, 23, 40, 88, 63, 94, 57, 21, 89, 24, 29, 4, 81, 42, 16, 24, 53, 59, 57, 19, 57, 32, 21, 90, 61, 72, 27, 27, 23, 48};
    int T = 1;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 234244.23074443493;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> height = {48, 47, 21, 15, 96, 66, 4, 58, 26, 66, 10, 38, 63, 3, 60, 85, 35, 31, 57, 23, 56, 6, 65, 84, 95, 83, 66, 58, 29, 65, 87, 83, 76, 71, 7, 35, 100, 90, 71, 71, 57, 16, 89, 26, 1, 35, 15, 41, 45, 28};
    int T = 26;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 329.56013707429355;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> height = {6, 9, 3, 1, 7, 3, 7, 8, 9, 7, 8, 2, 3, 10, 3, 7, 6, 7, 5, 1, 10, 9, 2, 8, 7, 3, 6, 10, 8, 3, 5};
    int T = 21;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 23.980375807383616;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> height = {26, 50, 3, 42, 22, 41, 8};
    int T = 99;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.24014334371779925;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> height = {49, 79, 25, 71, 93, 41, 95, 90, 4, 50, 15, 40, 51, 76, 88, 4, 79, 33, 6, 82, 6, 72, 54, 57, 64, 44, 20, 84, 64, 28, 94, 90, 63, 37, 41, 73, 32, 92, 31, 46, 33, 76, 46, 27, 21, 44, 7};
    int T = 59;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 59.08638183287904;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> height = {49, 79, 25, 71, 93, 41, 95, 90, 4, 50, 15, 40, 51, 76, 88, 4, 79, 33, 6, 82, 6, 72, 54, 57, 64, 44, 20, 84, 64, 28, 94, 90, 63, 37, 41, 73, 32, 92, 31, 46, 33, 76, 46, 27, 21, 44, 7};
    int T = 100;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 20.567969516025194;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> height = {49, 79, 25, 71, 93, 41, 95, 90, 4, 50, 15, 40, 51, 76, 88, 4, 79, 33, 6, 82, 6, 72, 54, 57, 64};
    int T = 100;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 5.853270739330036;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> height = {93, 81, 9, 24, 85, 49, 37, 97, 71, 11, 54, 49, 85, 65, 13, 100, 62, 59, 49, 54, 37, 43, 73, 75, 54, 96, 8, 25, 88};
    int T = 10;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 880.1207531416899;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> height = {93, 81, 9, 24, 85, 49, 37, 97, 71, 11, 54, 49, 85, 65, 13, 100, 62, 59, 49, 54, 37, 43, 73, 75, 54, 96, 8, 25, 88, 48, 59, 30, 5, 63, 92, 78, 88, 59, 28};
    int T = 70;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 32.186089439108216;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> height = {28, 25, 3};
    int T = 4;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 18.070729634600493;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> height = {28, 25, 3, 8, 26, 15, 12, 29, 22, 4, 16, 15, 26, 20, 4, 30, 19, 18, 15, 16, 11, 13, 22, 23, 17, 29, 3, 8, 27, 15, 18, 9, 2, 19, 28, 24, 27, 18};
    int T = 2;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 11696.987201004398;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> height = {9, 38, 58, 57, 18, 50, 18, 2};
    int T = 27;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 4.679666016210067;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> height = {1, 3, 5, 5, 2, 4, 2, 1, 1, 5, 3, 4, 3, 4, 4, 5, 3, 3, 3, 1, 3, 1, 5, 1, 5, 1, 4, 1, 2, 5, 3, 4, 5, 1, 4, 1, 3, 1};
    int T = 29;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 9.354942840461625;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> height = {2, 4, 1, 2};
    int T = 15;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.30196055776424113;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> height = {9, 9, 20, 16, 22, 42, 56, 29, 5, 19, 51, 53, 56};
    int T = 75;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5966412313678775;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> height = {45, 21, 49, 43, 26, 33, 21, 12, 22, 49, 57, 29, 18, 13, 55, 49, 16, 50, 10, 42, 42, 46, 17};
    int T = 78;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 5.447415660683728;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> height = {3, 7, 1, 1, 2, 4, 4, 1, 6, 4, 4};
    int T = 8;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 11.569860342929067;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> height = {7, 4, 2, 37, 28, 24, 11, 22, 9, 5, 19, 37};
    int T = 14;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 21.60871875973662;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> height = {18, 13, 33, 35, 81, 28, 40, 5, 52, 72, 54, 28, 10, 34, 52, 34, 31, 16, 40, 31, 20, 57, 55, 34, 41, 69, 80, 72, 53, 12, 87, 63};
    int T = 50;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 31.87530596099118;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> height = {6, 4, 11, 11, 26, 9, 13, 2, 17, 23, 17, 9};
    int T = 50;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2956357124584472;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> height = {26, 9, 24, 19, 3, 18, 1, 8, 1, 3, 23, 4, 1, 18, 21, 22, 3, 5, 7};
    int T = 56;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1319208377222325;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> height = {89, 29, 79, 63, 8, 59, 1, 26, 3, 9, 78, 12, 4, 62, 71, 74, 10, 16, 23, 13, 81, 55, 64};
    int T = 92;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 4.127404384472292;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> height = {17, 8, 4, 92, 70, 58, 27, 54, 21, 11, 48, 91, 51, 79, 21, 33, 32, 88, 54};
    int T = 15;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 128.3840801877069;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> height = {73, 42, 76, 2};
    int T = 27;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7362479206283623;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> height = {57, 68, 67, 73, 54, 28, 70, 30};
    int T = 66;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5987537521565605;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> height = {52, 79, 88, 67, 5, 85, 84, 14};
    int T = 97;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7157482123949152;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> height = {63, 33, 15, 35, 53, 90, 18, 16, 81, 51, 81, 10, 28, 31, 60};
    int T = 9;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 224.67007927918206;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> height = {41, 65, 15, 16, 27, 35, 56, 21};
    int T = 95;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4591137241934603;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> height = {24, 37, 36, 75, 8, 75};
    int T = 81;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4202673953790659;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> height = {44, 57, 50, 55, 38, 59, 64, 88};
    int T = 100;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7175239305102875;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> height = {46, 30, 6, 79, 73, 44, 10, 38, 76, 32, 54, 8, 85, 62, 5, 10, 68, 72};
    int T = 86;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 3.384604400925884;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> height = {64, 80, 39, 85, 37, 16, 19, 64, 44};
    int T = 61;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0318454671064146;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> height = {78, 87, 36, 89, 61, 70, 50, 89, 67, 8};
    int T = 54;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 4.09709093255552;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> height = {51, 20, 88, 56, 80, 6, 78, 45, 26, 35, 3, 15};
    int T = 86;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4030684586400395;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> height = {57, 63, 89, 11, 15, 35, 28, 85};
    int T = 70;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1266207761790947;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> height = {44, 32, 9, 58, 61};
    int T = 82;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2806307061400362;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> height = {48, 83, 25};
    int T = 68;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.19144647006863064;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> height = {31, 67, 80, 52, 80};
    int T = 95;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3345234863211787;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> height = {92, 69, 8, 90, 88, 3, 33, 52, 19};
    int T = 69;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4445562346882057;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> height = {59, 38, 33, 41, 74, 40, 54, 12};
    int T = 47;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 2.423062063516802;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> height = {12, 48, 43, 11, 44, 16, 81, 55, 30, 66, 9, 22, 40, 38, 6, 58, 89, 89};
    int T = 7;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 494.1441947053054;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> height = {3, 40, 76, 78};
    int T = 57;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.40361691593049;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> height = {81, 91, 41, 19, 35, 91, 45, 44, 76, 58, 14, 72, 28, 13, 14, 83, 53, 89, 56, 37, 69, 21};
    int T = 25;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 73.52223032287273;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> height = {5, 8, 70};
    int T = 66;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08282567620441224;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> height = {83, 23, 10, 60, 30, 10, 4, 11, 60};
    int T = 86;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5851255986453214;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> height = {31, 72, 37, 71, 72, 6, 89, 30, 82, 37, 50, 20, 83};
    int T = 49;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 6.777167552412185;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> height = {45, 17, 56, 42, 62, 20, 73, 5, 27, 68, 58};
    int T = 30;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 10.573780905113395;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> height = {81, 24, 38, 55, 22, 31, 18, 59, 41, 4, 80, 67, 1, 78, 74, 59, 3, 60, 91};
    int T = 60;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 8.043652566145424;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> height = {18, 59, 85, 21, 21, 6, 9, 53, 88, 72, 68, 62, 4, 15, 24, 72, 89, 63, 52, 41, 62};
    int T = 15;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 162.338883921523;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> height = {29, 1, 68, 90, 3, 24, 58, 37, 32, 86, 56, 45, 71, 17};
    int T = 1;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 14832.971837778898;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> height = {51, 3, 25, 2, 56, 16, 44, 85, 73, 59, 42};
    int T = 54;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 2.927276152877925;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> height = {14, 24, 57, 64};
    int T = 36;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9030538612412858;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> height = {92, 70, 23, 60, 86, 56, 66};
    int T = 80;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9584558870161284;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> height = {48, 13, 19, 29, 82};
    int T = 62;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.44767784671496486;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> height = {15, 28, 18, 42, 83, 33, 14, 91};
    int T = 42;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6148483196798473;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> height = {8, 58, 78, 1, 33, 83, 44, 27, 65, 77, 24, 78};
    int T = 18;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 37.102720266892746;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> height = {63, 24, 48, 7, 73, 77, 87, 17, 59, 66, 35, 86, 26, 32};
    int T = 23;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 34.07100290383988;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> height = {20, 62, 44};
    int T = 22;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4885015462851492;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> height = {32, 44, 46, 83, 54, 36, 25, 34, 85, 67};
    int T = 55;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 3.2181555085976985;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> height = {51, 82, 77, 8, 15, 37, 68};
    int T = 1;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 4232.39785535723;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> height = {7, 71, 4, 89, 89, 56, 52, 65, 36, 61, 66, 7, 25, 61, 38};
    int T = 85;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6721955583786694;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> height = {55, 41, 52, 57, 71, 55, 4, 52, 15, 64, 37, 71, 56, 46, 77, 39};
    int T = 42;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 13.545073959102576;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> height = {33, 27, 35, 16, 71, 72, 29, 80};
    int T = 88;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7009727429140311;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> height = {31, 47, 84, 9, 5};
    int T = 73;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.27005487767677866;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> height = {43, 72, 85};
    int T = 93;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.13612151038787065;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> height = {7, 56, 86};
    int T = 77;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.12699078054146318;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> height = {22, 87, 62, 38};
    int T = 11;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 13.010765205788962;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> height = {72, 11, 70, 42, 80, 89, 86, 28, 16, 51, 11, 15, 13, 3};
    int T = 78;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2789077600779404;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> height = {28, 58, 2, 27, 58, 29, 49};
    int T = 7;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 63.74359737396458;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> height = {92, 44, 37, 12, 3, 87, 45, 83, 59, 82, 7, 30};
    int T = 2;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 3003.849817311856;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> height = {55, 39, 82, 41, 83, 27, 83, 47, 35, 70, 75, 79, 30, 17, 24, 78, 15, 40, 15, 89, 70, 3, 8};
    int T = 26;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 67.44621581868176;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> height = {44, 44, 19, 14, 88, 61, 4, 53, 24, 61, 9, 35, 58, 3, 56};
    int T = 28;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 18.99687308284069;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> height = {1, 1, 2, 2};
    int T = 3;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 5.180824110885502;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> height = {12, 9, 12, 13, 16};
    int T = 6;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 17.079585948196677;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> height = {25};
    int T = 61;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.013437248051599035;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> height = {95};
    int T = 2;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 47.5;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> height = {16, 23, 85, 3, 35, 72, 96, 88, 2, 14, 63};
    int T = 30;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 9.803799620759717;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> height = {6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 5};
    int T = 12;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 26.73924541044107;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> height = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    int T = 1;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 500000.00000000006;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> height = {3, 1, 3, 1, 3};
    int T = 12;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7192306901503684;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> height = {8, 8};
    int T = 3;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 7.111111111111111;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> height = {100, 100, 100, 100, 100, 100, 100, 100, 100};
    int T = 1;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 16200.000000000002;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> height = {1, 4};
    int T = 3;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0000000000000004;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> height = {98};
    int T = 10;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1.96;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> height = {7};
    int T = 4;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.875;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> height = {1, 2, 3, 4, 5, 6, 7, 100, 4, 67, 34, 12, 56, 78, 90, 29};
    int T = 97;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1685596558152092;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> height = {10};
    int T = 30;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.022222222222222227;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> height = {1, 4};
    int T = 5;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7200000000000002;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> height = {2, 9};
    int T = 12;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2706289079755357;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> height = {16, 23, 85, 3, 35, 72, 96, 88, 2, 14, 63, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 10, 100, 1, 100};
    int T = 1;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 72643.74527753238;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> height = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int T = 1;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 4999.999999999993;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> height = {100};
    int T = 1;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 200.00000000000003;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> height = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    int T = 1;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 480200.00000000006;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> height = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 10, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    int T = 1;
    IncredibleMachineEasy* pObj = new IncredibleMachineEasy();
    clock_t start = clock();
    double result = pObj->gravitationalAcceleration(height, T);
    clock_t end = clock();
    delete pObj;
    double expected = 486418.06421393016;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22755004&rd=13748&pm=10309
********************************************************************************
#include <vector>
#include <cmath>
#include <queue>
#include <string>
#include <sstream>
#include <fstream>
#include <numeric>
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <set>
#include <map>
#include <cctype>
#include <list>
#include <stack>
using namespace std;
 
#define fe(i,a,n) for(int i = a, __n = n; i < __n; i++)
#define fi(i,a,n) for(int i = a, __n = n; i <= __n; i++)
#define fr(i,n,a) for(int i = n, _final = a; i >= _final; i--)
#define LL long long
#define ULL unsigned LL
#define ERRO 1e-10
#define all(v) v.begin(), v.end()
#define tr(i,s) for(typeof(s.begin()) i = s.begin(); i != s.end(); i++)
const double PI = 4*atan(1);
const double E = 2.7182818284590452353602874;
 
double funcao(vector<int> d, double g) {
  double ret = 0;
  fe(i,0,d.size())
      ret += sqrt((2.0*d[i])/g);
  return ret;
}
 
class IncredibleMachineEasy {
    public:
        double gravitationalAcceleration(vector <int> d, int T) {
      double low = 0, high = 1e15;
      double mid, dif;
      for(int i = 0; i < 1000; i++) {
        mid = (low + high)/2.0;
        dif = (double)T - funcao(d, mid);
        if(dif < 0)
          low = mid;
        else high = mid;
      }
      return mid;
        }
        
 
};
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/