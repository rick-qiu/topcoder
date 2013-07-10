/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11654
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

class Mosquitoes {
public:
    int getMaximum(vector<int> xInit, vector<int> v, int R);
};

int Mosquitoes::getMaximum(vector<int> xInit, vector<int> v, int R) {
    int ret;
    return ret;
}


int test0() {
    vector<int> xInit = {1, -1};
    vector<int> v = {1, -1};
    int R = 10;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> xInit = {100, -100};
    vector<int> v = {1, -1};
    int R = 10;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> xInit = {0, -1, 10, -11, 99, -99};
    vector<int> v = {1, -1, -3, 3, 47, -47};
    int R = 3;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
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
    vector<int> xInit = {5};
    vector<int> v = {2};
    int R = 8;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> xInit = {12, 34, 56, 78, 90};
    vector<int> v = {-1, 2, -3, 4, -5};
    int R = 6;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> xInit = {99};
    vector<int> v = {-88};
    int R = 1;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> xInit = {-100};
    vector<int> v = {100};
    int R = 100;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
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
    vector<int> xInit = {100, -100};
    vector<int> v = {100, -100};
    int R = 100;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
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
    vector<int> xInit = {100, 97};
    vector<int> v = {99, -100};
    int R = 1;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> xInit = {-99, -96};
    vector<int> v = {-100, 100};
    int R = 1;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
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
    vector<int> xInit = {2, -2};
    vector<int> v = {-100, 100};
    int R = 1;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
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
    vector<int> xInit = {-68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68};
    vector<int> v = {-49, -47, -45, -43, -41, -39, -37, -35, -33, -31, -29, -27, -25, -23, -21, -19, -17, -15, -13, -11, -9, -7, -5, -3, -1, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49};
    int R = 1;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> xInit = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100};
    vector<int> v = {1, 5, 9, 13, 17, 21, 25, 29, 33, 37, 41, 45, 49, 53, 57, 61, 65, 69, 73, 77, 81, 85, 89, 93, 97, -1, -5, -9, -13, -17, -21, -25, -29, -33, -37, -41, -45, -49, -53, -57, -61, -65, -69, -73, -77, -81, -85, -89, -93, -97};
    int R = 100;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> xInit = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100};
    vector<int> v = {1, 5, 9, 13, 17, 21, 25, 29, 33, 37, 41, 45, 49, 53, 57, 61, 65, 69, 73, 77, 81, 85, 89, 93, 97, -1, -5, -9, -13, -17, -21, -25, -29, -33, -37, -41, -45, -49, -53, -57, -61, -65, -69, -73, -77, -81, -85, -89, -93, -97};
    int R = 99;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> xInit = {-34, -91, 29, -26, 92, -32, 56};
    vector<int> v = {2, 5, -90, -39, -4, 36, -2};
    int R = 3;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> xInit = {40, -46, -41, 83, 60, 16, 58, 49};
    vector<int> v = {44, 3, 2, -13, -3, -1, -15, -2};
    int R = 7;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> xInit = {6, -62, 56, -68, 88, -10, -54, 68, -29};
    vector<int> v = {34, -35, -3, 3, -6, 0, -78, -5, 2};
    int R = 11;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> xInit = {-33};
    vector<int> v = {45};
    int R = 4;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> xInit = {-29, -27};
    vector<int> v = {25, 61};
    int R = 7;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
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
    vector<int> xInit = {50, -90, -24};
    vector<int> v = {-57, 68, 8};
    int R = 5;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> xInit = {87, 31, 54, -71};
    vector<int> v = {57, -41, 66, 75};
    int R = 4;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
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
    vector<int> xInit = {-97, -41, 21, 97, -2};
    vector<int> v = {24, -40, 72, -95, 42};
    int R = 8;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> xInit = {78, 79, -25, 42, -20, -70, -79, 52, -98, 19};
    vector<int> v = {85, -3, -36, -54, -96, 66, 27, 72, -11, -40};
    int R = 10;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
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
    vector<int> xInit = {-22, 47, 78, 79, 10, 50, -74, 92, -16, 6, -7, -9, 91, -31, 74, -34, 56, -23, -47, -59};
    vector<int> v = {15, -76, -33, 69, 61, -86, -27, 85, -85, -50, 59, -18, 5, 23, 44, -63, -59, 45, -11, -25};
    int R = 5;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> xInit = {-52, -48, -21, 36, -28, -75, 79, 39, 100, -42, 26, 42, 62, 100, 37, -40, -19, 77, 99, -32, -55, 99, 17, 50, 32, 12, 7, 40, 11, 23};
    vector<int> v = {23, 18, -20, 3, -17, -67, 41, -65, 86, -24, 81, 66, -94, -89, 10, 46, -55, -46, -16, 31, 43, -19, -76, 37, -38, -60, -75, 62, 54, 78};
    int R = 4;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> xInit = {-85, -33, 17, -45, 73, -9, -75, -55, 97, -15, 29, -32, -70, -20, -38, -87, -70, -69, 74, -9, -48, 29, 40, -93, 9, -59, 32, 73, -30, 97, -65, -7, 32, 45, -65, -58, 84, 46, 48, 62};
    vector<int> v = {26, -81, -62, 47, 65, 25, 73, 82, 71, 57, 19, 96, -6, -58, 34, -10, -96, -13, -35, -25, 95, -23, 32, 76, 59, 70, -70, 30, -100, 66, 37, 11, -84, -9, -4, 75, -36, 14, -68, 45};
    int R = 9;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> xInit = {29, -20, 77, -30, -16, -27, 10, -18, -61, 20, 75, 98, 60, 22, -38, 32, 44, 83, -29, 79, 66, 91, 74, 55, -44, -73, -65, 66, -73, 73, -64, 21, 56, 68, 21, 93, 68, 70, 73, -3, -77, 58, -13, -64, 50, 61, 63, -55, 90, 96};
    vector<int> v = {85, -53, -37, -78, -84, 55, -95, 23, 71, -91, -24, 0, -23, 99, 24, 33, -100, 69, 31, -85, 28, -98, 27, 8, -19, 34, -58, -75, -74, -11, 43, 88, -31, 58, -59, -66, 50, -13, 4, -71, -36, -29, 26, -62, -38, -80, -49, 46, 44, 12};
    int R = 7;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> xInit = {-80, -63, 35, -15, -99, -40, 39, -51, -8, -84, 16, 28, -26, -18, -2, 48, 12, -62, 68, -73};
    vector<int> v = {-94, 88, 31, -13, -69, 82, 67, -81, 21, 47, 8, -31, -99, -22, -4, 33, 50, -70, 98, -41};
    int R = 18;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> xInit = {32, -36, -66, -16, 6, 90, 62, 20, -75, 80, -73, 9, 40, -63, -29, -78, 25, -69, 5, -98, 97, -29, 30};
    vector<int> v = {17, 68, -19, -31, -67, -88, -17, -41, 98, 20, 12, 52, -75, 5, -18, -4, 26, -1, 66, 21, -33, 79, -80};
    int R = 50;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> xInit = {-66, -53, -50, -63, -81, 14, 65, 78, -72, -33, -74, -45, 19, -92, 84, -48, -81, -23, 88, -42, 3, -3, 93, -59, 15, 67};
    vector<int> v = {14, 78, 43, 95, 2, -16, -58, 18, 41, 59, -69, 27, -28, 91, -64, -94, 52, -9, -67, 98, -59, 94, 67, 20, 93, -19};
    int R = 34;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> xInit = {34, 93, 43, 69, 93, 15, 54, -73, 43, 33, -56, 31, 43, 58, 35, 96, 94, -31, -16, 98, 64, 87, 74, -11, -21, 83, -11, 100, -47};
    vector<int> v = {99, -16, 82, 89, 60, -99, 65, 57, -68, -80, -42, -94, 27, -75, -38, 86, 23, 67, 20, 13, 10, -8, -93, -91, 63, -22, 70, -61, -57};
    int R = 28;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> xInit = {-67, -17, -86, 36, -17, -49, 7, -46, -93, 63, -79, -54, -33, 26, 61, 84, -56, 52, 87, 82, 93, -41, 99, -28, -19, 69, 16, 79, 66, 23, 58, 1};
    vector<int> v = {62, 70, 87, 73, -3, 44, 1, 92, -81, 32, -93, 25, 82, 6, 72, 37, 0, -55, -35, -27, -21, 99, -83, 100, -62, 11, 95, 24, -24, 71, -77, 53};
    int R = 35;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> xInit = {34, -13, -52, -83, -21, 97, -68, 26, -59, 96, 67, -5, 56, 40, 52, 66, 99, 99, -95, 57, 33, -73, -1, 77, -80, -67, 73, -91, 45, 46, 96, 54, -93, -57, 18};
    vector<int> v = {19, -65, -52, 63, 67, 72, -72, 77, -45, -18, -46, -29, 31, -33, 12, 99, 16, -62, 18, 39, -11, -54, -32, 54, -87, 71, 37, -8, -88, 0, -17, 20, -82, -28, 36};
    int R = 38;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> xInit = {-46, 76, 57, -28, -68, -43, -37, 44, -21, -95, -18, -5, -99, 99, 79, -96, 90, -29, 0, -92, 18, 63, -86, 98, -100, 1, -47, 55, 38, -97, -35, 48, 51, 74, 45, 10, 15, 76};
    vector<int> v = {63, -68, 58, 77, 20, 11, -69, -94, -53, 35, 7, 60, -24, 8, -61, 21, 95, 59, 74, 100, -78, 53, 14, -75, -30, -80, 80, -74, 67, -25, 19, 76, 28, -1, 90, 51, 31, 25};
    int R = 38;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> xInit = {32, -55, 19, 39, 71, -57, -32, -46, -30, 32, -18, 11, -91, -56, 71, 55, -99, -67, 64, -40, -99, -28, 16, -80, -96, -44, 96, -89, -51, -5, 71, 36, -66, 33, 82, -57, 66, 93, 72, -67, -90};
    vector<int> v = {26, -17, 82, 90, 27, 62, -32, -92, 67, -5, -73, 92, 13, 11, 64, -33, -97, 94, 6, -43, 96, 57, -83, -59, 17, 76, -60, 71, -48, -61, 60, 78, 55, -45, 7, -12, -69, 16, 65, -38, 12};
    int R = 15;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> xInit = {85, -3, 96, -60, 84, 82, 17, 92, 33, 41, 57, -85, 79, -34, -81, 26, -17, -39, 54, -58, -59, -48, -13, 12, -6, 49, 46, 26, -44, -40, 73, -58, -36, 1, -98, -42, 100, -39, -100, -38, -17, -73, -76, 10};
    vector<int> v = {-32, 64, 37, -79, -80, -49, 9, 94, 46, 8, 35, 95, 90, -50, 71, 19, -55, -20, -96, 84, -71, -24, -30, 2, 10, 38, -41, 31, -66, 82, 25, 50, 79, 52, -18, 65, -23, 45, 87, 67, -39, 5, -92, -54};
    int R = 46;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> xInit = {-5, 44, -50, 6, -23, 59, -75, -82, -77, 34, 7, -4, -97, 40, 15, -30, -86, -45, 85, -87, -60, 56, -72, -9, -81, 98, -58, -94, 99, -89, -43, 36, 61, 30, 99, 46, 59, -61, -85, 9, -94, -66, -82, 36, -17, -72, 62};
    vector<int> v = {53, 95, 65, -27, -10, -19, 78, 76, 2, -48, 5, -29, -95, 41, 64, -49, -11, -59, 55, -38, -37, 35, 40, 30, 11, 98, -34, 71, 39, 50, 29, -1, -20, -3, 10, 17, 31, 59, -50, -81, 21, -23, -14, -16, 4, -88, -61};
    int R = 49;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> xInit = {-74, 68, 75, -99, -32, 33, 45, 37, -90, -9, 98, -7, 58, -67, -25, 95, -10, -29, 64, -18, -14, -22, 91, -88, -93, -70, 75, -87, 58, -56, -63, -92, 32, -84, 17, -38, -5, -96, -86, 31, -42, -79, -8, 100, 50, 31, -25, -18, 81, -70};
    vector<int> v = {-79, 25, 89, 46, -58, 51, 73, -17, 90, 86, 13, -43, -71, -87, 79, -83, -37, 35, 58, 21, 24, 67, 62, -70, -7, 71, 77, 99, 54, 22, -48, 88, -88, -21, -15, -61, 68, 17, -9, -76, 31, 6, -38, 94, 78, 74, -52, -5, -74, -55};
    int R = 42;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> xInit = {-88, 47, 100, 57, 36, 61, -72, -38, 29, 96, 84, -34, 17, -79, 68, 83, -92, -39, 55, -18, 87, -94, 31, -5, -59, 95, -1, -99, 97, 15, -86, 13, -53, -54, 90, -51, -58, -35, -92, 6, -57, 97, 41, 15, 99, 86, -5, -73, -59, -59};
    vector<int> v = {94, -95, 60, -14, -29, 48, -100, 64, -6, -71, 33, -13, 83, 27, 87, 49, -85, 91, 90, 65, -55, -64, -25, -26, -68, 2, -97, 26, -41, -51, -42, -21, 85, 43, 76, 77, 12, -79, 71, -83, -67, 73, 84, 51, 22, -2, 79, -86, 66, 47};
    int R = 1;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> xInit = {-5, -62, -15, -60, 94, 68, -8, -69, -83, -20, -47, -94, 17, -75, -18, 85, 51, 50, -36, -100, -54, -13, 100, 61, -60, -3, -58, 0, 14, -80, 43, -82, 52, -27, -76, 78, -81, 85, 46, -3, 22, -6, 93, -98, 15, -55, -90, 50, -30, 61};
    vector<int> v = {-56, -84, -35, -90, 68, -43, 29, 70, -23, -70, 67, -39, -11, 8, -55, 30, 83, -64, -59, -44, 42, 47, 20, -33, -69, 46, -51, 86, 63, 23, -2, -8, 28, -10, -42, -46, 40, -4, -22, 19, -14, 80, 44, 79, 93, -91, 96, 22, 76, -88};
    int R = 5;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
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
    vector<int> xInit = {-88, -34, 100, -46, -25, -47, 92, 38, 60, 62, 6, -77, 68, 60, -51, 46, 91, -5, 11, -7, -84, -89, 66, -31, 57, -77, 40, 38, 60, 34, -13, -88, -99, -85, 29, -73, -54, 70, -99, -87, 15, 15, 44, -35, -51, 32, 21, 4, 93, 45};
    vector<int> v = {-75, -66, -73, -56, 17, 71, -43, -84, -69, -80, -6, 6, 30, 29, 70, 51, -60, 87, 79, -85, 58, 4, -65, -34, 9, 55, 35, 61, -54, -86, 18, 81, -36, -90, 8, -13, 74, 97, -18, -4, 75, 43, -32, -3, -27, -82, 3, 21, -33, -63};
    int R = 9;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
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
    vector<int> xInit = {-88, -56, -63, 21, 19, 96, -63, 14, 83, 94, -31, 13, -82, 100, -98, -62, 21, 72, -23, 31, 50, 37, -50, -28, 39, -38, -17, 66, 63, 31, -51, 33, -67, 93, -70, -50, 62, 97, 14, -48, -79, 56, 90, 31, 7, -94, -60, -95, -50, -12};
    vector<int> v = {50, -96, 37, 89, -1, 41, 33, -5, 71, -94, -36, -75, -56, 32, 29, 40, 36, -18, 74, 5, 22, 30, -66, 24, -17, -7, -27, -42, 2, -26, 20, 14, 88, -93, -40, -53, -61, -98, 98, 11, 39, -58, -47, -15, -28, -25, -72, 62, 92, 97};
    int R = 13;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> xInit = {-27, 48, 62, -49, -91, -87, 48, -2, -57, 97, -20, 75, -32, -83, 19, 71, 37, 27, -29, -54, -55, -72, 4, -75, 41, 74, -15, 35, -45, 50, -11, 36, 66, -79, 14, -69, -54, 27, 28, 46, 11, 100, 99, -32, 52, -17, 62, -2, 0, 62};
    vector<int> v = {34, -89, -15, -70, 16, 64, -22, 0, -18, -14, 28, 61, 29, -39, 92, 43, -91, -13, 49, -32, 39, 40, -24, -55, 36, 44, 53, -56, 15, 6, -25, -80, 47, 38, -46, -31, 69, 65, 81, 88, -97, -19, -57, 68, 27, 91, -90, -17, 51, 42};
    int R = 17;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> xInit = {48, -22, -5, 62, 80, 5, -14, 52, -84, 37, -64, 74, -26, -96, 89, 54, -36, -7, 100, 85, -59, 62, 88, 100, 33, 91, -37, -92, -10, 31, -84, 57, -21, 1, 43, -76, -28, 43, 48, -34, 87, 62, 37, -87, 3, -35, -67, 16, -98, -35};
    vector<int> v = {76, -20, -44, -46, 85, -90, 99, 68, -100, -16, -48, -99, -41, -52, 82, -65, -43, -50, 97, 60, -72, -79, 37, 89, -35, -82, -73, -97, 9, -11, 34, 19, -7, 30, -83, 27, 62, -69, -27, 11, 48, -95, -1, 33, -31, 75, 22, 96, 51, 21};
    int R = 21;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> xInit = {54, 88, 20, -42, -34, -49, -74, 84, -17, 35, -4, 87, -80, 9, 20, -12, -79, -40, -8, -41, 76, 79, 38, 98, 14, 2, -26, 20, 85, 42, 87, -30, -52, -62, -23, -93, 65, 22, -36, 68, -39, 88, 40, -15, 17, -16, 65, -49, 3, 45};
    vector<int> v = {76, 82, -22, -58, 36, -27, 27, -91, -67, -45, -19, 5, 81, -50, 63, -99, -23, 44, -47, -69, -97, 85, 72, -37, -24, -2, 58, -84, -7, 16, 83, -49, -75, -76, -74, 49, 67, 95, -8, -88, -66, 80, 92, -44, 68, 59, 28, -43, 57, -87};
    int R = 25;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> xInit = {100, -37, 92, -98, -58, 33, -72, -24, 88, 72, -14, -49, -56, 90, 77, -76, -94, 6, 53, -70, -86, 90, -81, 91, -50, -32, 60, 76, 52, 11, -13, 69, -29, -74, 8, -39, -65, -63, 48, 63, -14, 73, -46, 35, -93, -52, -81, 32, -34, 77};
    vector<int> v = {99, 100, 18, 51, -11, -71, -66, -61, 59, 15, 36, -22, 54, -28, 80, -78, 70, 65, 84, -41, -95, 67, -5, 58, 83, 19, 21, 76, -10, -15, -18, 9, -68, 81, -44, 69, -98, 2, 38, 4, 52, -27, -9, -52, -20, 39, 97, 85, 35, 79};
    int R = 29;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> xInit = {71, 81, 39, 0, 46, -54, -58, 11, -46, 12, 24, 15, -11, 20, -78, -72, -32, 54, 44, -46, -90, -89, -53, 85, 86, -90, 10, 20, 92, 80, -68, -32, 57, -37, -35, -9, -71, -86, -69, 57, 73, -24, 22, -94, 77, 17, -18, -3, 30, -95};
    vector<int> v = {44, -24, -32, 92, -61, 99, -8, 27, 47, 38, 54, -4, -38, 32, -28, 79, 24, -45, -78, -99, 17, -51, -100, -70, 52, -25, -59, 87, -73, -56, -87, 90, 78, 14, 49, -55, 39, -14, -83, -57, 70, -42, -1, 33, -7, -84, 60, -29, -27, -35};
    int R = 33;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> xInit = {83, 99, -33, -35, -68, -51, 72, 30, 60, -97, 48, 3, 46, 100, -18, -80, -24, -1, -44, -75, -15, 75, 16, -25, -87, -81, -25, -78, -68, -79, -43, 64, -92, -93, -43, -62, 37, -84, 41, 56, 92, -79, -13, 34, 93, 35, -90, -34, -89, -3};
    vector<int> v = {13, -27, 84, 17, 57, 98, -48, -71, -53, 63, 51, -40, 85, 11, -57, -87, 45, -82, -2, -8, -63, -33, 5, 2, -42, -21, 27, 74, -59, -49, 4, 71, -12, 29, 75, 59, -36, -13, -92, 76, 28, 65, -46, -100, -14, 100, 25, 50, 9, -9};
    int R = 37;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> xInit = {-4, 39, 78, 23, 98, 51, 60, 89, -72, -77, -48, -86, -44, -88, 38, 69, 16, -2, -97, 45, -43, 45, -63, -92, -82, 48, -32, -1, -96, 41, 74, 37, -50, -37, -85, -39, 9, -89, 3, 89, -76, -23, -20, 43, -84, -12, 28, -67, -57, 83};
    vector<int> v = {29, -20, 89, -23, -43, 83, -42, -60, -93, 27, 4, -99, -66, 41, -7, -58, 100, -44, 69, 96, 2, 80, 77, 22, 45, 68, 85, 91, -8, 36, -4, -3, -2, -16, -79, 33, 11, -25, -52, 28, 60, 42, -50, -51, -41, 18, -71, 14, -9, 59};
    int R = 70;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> xInit = {-93, -57, 42, 11, -39, 66, 10, -88, -57, 21, -9, -80, -98, 52, -54, -88, -41, 59, -34, -69, 32, -11, -53, -39, -41, 9, 68, 94, 8, 72, -70, -20, 71, 86, -23, 36, -11, 23, 2, 59, 45, 21, -35, -13, -22, 15, -42, 17, 8, -40};
    vector<int> v = {-12, 78, 42, -57, 73, -72, 6, 31, 75, 21, -70, -80, 51, 0, 18, 96, 50, 59, 36, 27, 58, 52, 32, 67, -21, -65, 47, -63, -76, 72, -44, 48, -8, 93, 41, -59, -24, -86, -23, 64, 99, 40, 76, -5, -38, -16, -55, -31, -53, 34};
    int R = 80;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> xInit = {-3, 39, -34, -83, 67, 41, -97, 56, 67, -94, -90, -10, 100, 2, 3, -95, 61, -95, 65, 66, 21, -28, -62, 99, -10, -35, 98, -86, 46, -11, 62, 28, 57, 99, 25, 0, -24, -79, 70, -89, -36, -71, -86, 7, 67, -52, 80, -69, -4, -58};
    vector<int> v = {-36, 54, 69, -78, 27, 83, 43, 63, -77, -65, 92, -73, 49, 23, -47, 85, -35, 94, -71, 56, 34, 41, -23, -66, -22, -44, 21, -26, 2, -99, 100, -79, -46, -20, -19, 70, 22, 53, -16, -96, -30, 40, -89, -6, 58, 36, -7, -32, 87, -11};
    int R = 90;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> xInit = {76, -85, 23, -81, 89, 35, 40, 38, 94, -31, -60, 59, -21, 86, 26, -73, -93, -65, -60, 60, -1, -92, 14, 68, 55, -46, 36, -83, -75, 2, -20, -53, 79, -25, -38, -10, 37, 73, 90, 29, 29, 13, 59, 52, 11, 55, 92, 27, 94, 52};
    vector<int> v = {14, -65, -1, 56, 12, 30, 43, 21, 16, 79, -85, -86, -50, -90, 81, -16, 69, -23, -38, -61, -14, 36, 52, 58, 74, -36, -32, 25, -96, -77, 63, 40, -25, -95, -97, -64, -69, -46, 89, -9, 29, 95, 61, 51, 39, -83, 15, -15, 45, 5};
    int R = 100;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> xInit = {-70, 79, 0, -12};
    vector<int> v = {90, -99, 0, 18};
    int R = 1;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> xInit = {0, 43, -47, -13, 59, -6};
    vector<int> v = {1, -45, 55, 15, -65, 9};
    int R = 1;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> xInit = {18, -1, -9, 15, 10, -55, 27, -5};
    vector<int> v = {-31, -7, 0, -28, -20, 56, -42, -4};
    int R = 1;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> xInit = {-16, -24, -9, -13};
    vector<int> v = {0, 40, -60, -20};
    int R = 1;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> xInit = {-2, 9, 7, 5, -2, 1, -12, -18, -3, 14, -4, 1, -15, 13, -6, 14, 12, -2, 5, 15, -5, 16, -13, 1};
    vector<int> v = {7, -51, -30, -54, -12, -22, 48, 94, 30, -96, 25, -9, 85, -68, 43, -77, -81, 15, -38, -92, 18, -84, 75, 3};
    int R = 3;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> xInit = {-22, 63, 15, -49, -2, -66, 36, -12, -14, -14, 5, -53, 40, 60, 13, -53, -22, -76, 27, 40, 8, -32, -52, 68, -46, -78, -42, 12, -61, 24, 59, -64, 5, -21, -76, -31, -76, 26, -9, -67, -13, -34, 60, 9};
    vector<int> v = {27, -88, -19, 66, 1, 82, -41, 8, 20, 23, -14, 69, -59, -75, -18, 68, 25, 94, -31, -47, -11, 46, 70, -84, 56, 96, 57, -17, 71, -26, -83, 87, -10, 24, 93, 45, 95, -33, 4, 80, 13, 49, -72, -16};
    int R = 5;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> xInit = {-8, -32, 46, -53, 58};
    vector<int> v = {22, 55, -88, 98, -99};
    int R = 3;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> xInit = {-58, -69, -48, -12, -79, -98, -39, 53, -2, 88, 96, 30, 59, 84, -100};
    vector<int> v = {30, 39, 34, 6, 45, 58, 22, -36, -3, -46, -52, -22, -38, -53, 54};
    int R = 9;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> xInit = {1, 23, 33, 7, -28, -3, -65, 87, 46, 65, 59, 10, -30, -21, -48, -33, 41, -78, -52, -72, -38, -6, -24, 18, 85};
    vector<int> v = {11, -29, -42, -4, 27, -12, 63, -76, -54, -62, -49, 4, 20, 38, 36, 52, -36, 100, 62, 89, 45, 21, 16, -7, -95};
    int R = 15;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> xInit = {-4, -64, 46, -41, -92};
    vector<int> v = {0, 51, -34, 29, 68};
    int R = 3;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> xInit = {-35, 5, -39, 90, 58, -76, -26, 67, 35, -44, 11, 21, 31, -55, 0};
    vector<int> v = {21, -4, 17, -48, -25, 35, 13, -30, -20, 24, -10, -13, -19, 26, 5};
    int R = 9;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> xInit = {-3, -13, -27, 23, -17, -26, 98, -55, -93, -100, 6, -71, 83, 23, -74, 51, -65, 20, -77, 98, 55, 17, 91, -30, 11};
    vector<int> v = {9, 14, 19, -16, 5, 7, -41, 22, 40, 53, -8, 35, -30, -4, 39, -17, 24, -1, 32, -40, -28, -5, -44, 11, 3};
    int R = 15;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> xInit = {-20, 49, -10, -94, 81};
    vector<int> v = {4, -7, 3, 15, -11};
    int R = 3;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
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
    vector<int> xInit = {63, -91, 77, -32, -89, 23, 84, 71, 54};
    vector<int> v = {-9, 19, -11, 5, 14, -6, -15, -12, -7};
    int R = 13;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> xInit = {73, -30, -13, 57, -87, 76, -72, 74, -1, -100, 7, -98, 28};
    vector<int> v = {-10, 0, -2, -14, 10, -12, 14, -11, -5, 15, -3, 20, -6};
    int R = 23;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> xInit = {-19, 83, 26, 96, -46, -76};
    vector<int> v = {1, -1, 0, -76, -31, 2};
    int R = 3;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> xInit = {-47, 61, -75, 21};
    vector<int> v = {1, -2, 2, -1};
    int R = 3;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> xInit = {-32, 38, -17, 24, -66, 74, 48, 11};
    vector<int> v = {-20, -56, 19, 33, 94, -26, -31, -11};
    int R = 3;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> xInit = {52, 90, -10, 26, -2, 85, -50, -26, -35, 49, -60, -98, -40, -77, 100};
    vector<int> v = {-56, -81, 10, -23, 73, -73, 39, 24, 33, -39, 68, 20, 62, -11, -48};
    int R = 4;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> xInit = {17, 91, 13, 3, 86, 20, 0, -1, 21, 15, 52, 90, -18, 6, -12, 98, -41, 10, 14, 16, -18, -26};
    vector<int> v = {-45, -20, 20, 46, -86, -15, 81, 92, -57, 11, 27, 36, 49, 15, 82, 5, -99, 45, 30, -60, 85, 56};
    int R = 5;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> xInit = {-38, -5, 46, -92, -91, -52, -30, -38, -28, 32, 17, -40, 30, 0, 31, -15, -41, -56, -95, -16, -18, -1, 37, 99, 16, 5, -12, 18, 25};
    vector<int> v = {22, 0, -2, 24, -27, -44, 90, 87, 3, -64, -46, 96, -77, -3, 2, 38, 82, 7, -41, -47, 55, 13, -66, 89, -28, -12, 37, -32, 9};
    int R = 6;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> xInit = {-16, -7, -43, -99, -40, -62, 66};
    vector<int> v = {62, 0, -76, 6, -88, 3, -3};
    int R = 9;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> xInit = {3, 34, 80, 91, -89, 79, -59, -3};
    vector<int> v = {12, -91, 68, 34, 5, -4, 2, -1};
    int R = 13;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> xInit = {43, 54, -67, -11, 79, -89, -50, -4, -89};
    vector<int> v = {32, -98, 3, 0, -3, 6, 82, -75, -78};
    int R = 17;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> xInit = {47, 15, -30, -55, 66, 6, 94, -92, -15, 51};
    vector<int> v = {23, -1, 0, -38, -2, 61, 85, -74, 1, -3};
    int R = 21;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> xInit = {58, -60, 77, 3, 73, 37, -83, -23, -54, 95, -49, 98, 85};
    vector<int> v = {-70, 10, -13, -3, -12, -52, 15, 4, 9, -18, 6, -17, -49};
    int R = 9;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> xInit = {-61, 9, 91, -80, -76, -10, 53, -11, 67, 6, 71, -86, 47, 100, -3};
    vector<int> v = {11, 2, -19, 15, 63, 5, -7, 19, -15, -1, -16, 59, -6, -18, 1};
    int R = 13;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> xInit = {-59, 94, 82, -12, 0, -62, 98, -58, -6, -26, -48, -98, 95, 26, -34, 48, -19};
    vector<int> v = {5, -88, -7, 2, -2, 8, -12, 7, 1, 4, 3, 11, -9, -4, -30, -53, 0};
    int R = 17;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> xInit = {-69, -9, 92, 49, 74, 73, 59, -19, 4, -36, 49, -65, -98, -80, -65, -22, -78, 87, 29};
    vector<int> v = {15, 4, -13, -8, -15, 64, -9, 1, -5, 8, -6, -36, 13, 14, 7, 6, 10, -19, -7};
    int R = 21;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> xInit = {3, -11, -1, -74, 36, 95, 62, -71, -34, -45, -13, 16, -32, 85, 5, 98, 46, -78, 38, -56, -79, 70, -99, 17, 61, -62, 33, -44, -28, -32, 14, 69, -81, -63, 73, -66, -58, 4, -60, -93, 3, 85, -94, -20, -47, 75, 19, -57, -76, -81};
    vector<int> v = {-51, 3, -2, -54, -29, -75, -49, 60, 27, -48, 9, -16, 80, 45, -6, -82, -58, 18, -36, 42, 7, 91, 89, 34, -18, 53, -27, 87, 28, 39, 95, 56, 66, 20, -65, -14, 48, 38, -81, 81, -74, 8, -38, 90, 40, 11, -98, 49, -80, 88};
    int R = 5;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> xInit = {19, 83, 64, -61, 13, 6, 81, 7, 34, -9, 35, 30, 80, 72, -22, 57, 30, 60, 46, 46, 60, 12, -81, 84, 43, -14, -38, 26, 34, -59, 20, -86, 46, 74, -73, 31, -77, -45, -58, 92, 19, 20, 46, 15, 83, 9, -32, -4, 40, -71};
    vector<int> v = {-20, -66, -91, 55, -11, 40, 73, -18, -37, -29, -51, 29, -95, -42, 15, 74, -28, 7, -54, -71, -45, -69, 94, 8, -65, 20, 58, -49, -19, -78, 9, 91, -53, -94, -55, 86, 96, 6, 66, -81, -80, -90, -63, -17, 37, 79, 43, 87, 2, 80};
    int R = 9;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> xInit = {-91, -67, -46, 55, -8, -93, 37, 77, 18, -18, 7, -28, -77, -22, 33, 78, -38, 41, -31, 55, 48, 95, 33, 25, 1, 26, 53, -66, -65, 5, -20, 66, 16, 9, -65, -98, 63, -1, -80, 81, -27, -16, -30, 28, 61, 20, -22, 80, -10, 21};
    vector<int> v = {-90, 44, 83, -49, 58, 72, 63, -27, 86, 5, 9, 32, 66, -99, -97, 46, -70, 39, -8, -63, 26, 54, 97, -32, 3, -30, -35, -20, 61, 6, -31, -46, -11, -17, 43, 78, -66, -2, -7, -68, 18, 7, 31, -13, -50, -25, 80, -10, -83, 12};
    int R = 13;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> xInit = {-58, -58, -39, 5, -99, -21, 53, -52, 63, 91, 46, 75, 14, -15, 23, 36, -7, 77, -37, -43, 64, -55, -59, 55, -61, -1, 18, 36, 11, -53, -28, 6, -51, -68, 68, -25, -99, 89, 19, -82, 73, -16, 6, 72, 39, 40, 88, -67, -48, -32};
    vector<int> v = {12, 59, -33, -1, 74, 16, 88, -91, -63, -86, -27, 39, -22, 11, -13, -72, 9, -36, -79, 20, -23, 18, 42, -46, 70, 47, -2, 15, 1, 45, 22, 31, 60, -9, -47, 13, 67, -58, -28, 53, -71, 4, -19, -48, 92, -11, 77, 79, 34, -59};
    int R = 17;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> xInit = {-5, -32, 57, 75, -63, 81, 18, -75, 12, 28, 43, -55, -5, 40, 62, -79, 68, 84, 64, 80, -97, -51, -11, 76, -40, 41, -50, -99, 32, -32, -50, 94, 69, 65, 26, 79, -64, -27, 44, 55, -64, 71, 10, 1, -5, -59, 36, -40, -88, 47};
    vector<int> v = {4, -55, -42, -59, 46, -20, -18, 55, -8, -36, 91, -33, 1, -31, -48, 61, 47, -63, -98, -91, 66, 50, 5, -6, 30, 84, 36, 72, -24, 79, 39, -64, -51, -79, -23, 73, 24, 27, 71, 3, 49, -56, -86, -3, 2, 43, -28, -30, 7, -35};
    int R = 3;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> xInit = {-28, -17, 45, -63, 76, 44, 97, 1, -1, 36, 36, -81, 84, -67, 26, 41, 37, 36, 1, -54, 71, 28, 7, 12, 74, 15, -26, -64, 18, -65, 64, 89, 48, 36, 2, 43, -85, -17, 74, 29, 94, -26, -78, -48, 12, -14, 93, -87, -62, -48};
    vector<int> v = {44, 15, 26, 36, -57, -25, -16, 9, -2, -20, -23, 89, 1, 38, -14, -34, 45, -22, -4, 11, 86, -58, 0, -12, -49, 84, -78, 39, -13, -67, -36, -54, -28, -77, -59, -31, 50, 7, -45, -9, -39, 12, -47, 74, 68, 6, -56, 59, -7, -70};
    int R = 7;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> xInit = {10, -15, -57, -67, -66, -69, 43, 13, -32, 0, -79, -80, 22, 76, 47, -89, 34, -43, 100, 26, -80, 44, -73, -88, 19, 7, 39, -27, -20, -30, 89, -76, -87, -20, 38, 68, -86, -10, -8, -56, 50, 5, 100, -73, -48, 75, 15, -30, 96, -28};
    vector<int> v = {-10, 81, 34, -36, 42, -18, -31, -9, 27, -1, -77, 56, -12, 55, -32, -95, -27, -66, -54, -15, 18, -33, 46, -61, -21, -2, 97, 12, 14, 25, -70, 43, 17, 15, 89, -39, 52, 0, 83, -41, -28, -26, 96, -44, -81, 60, 66, 13, -57, -84};
    int R = 11;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> xInit = {-51, 46, 42, 36, -21, -79, 55, -80, -11, 23, -8, 84, -84, -60, 46, -88, -54, 16, 81, 23, 2, 48, 25, 64, 65, 74, 25, 68, -71, -12, -60, 82, 50, 9, -18, 81, 44, -8, 17, -75, -68, -63, -24, -19, 40, -4, 21, 27, -42, 65};
    vector<int> v = {-85, -40, -46, 80, -7, 66, -48, 57, 12, -23, 11, -69, 73, 65, -38, 70, 28, -51, -78, -25, -88, -47, -31, 77, -66, 30, 0, 81, 9, 20, 49, -90, -55, -75, 78, -63, -26, 19, -18, 86, 72, 67, 32, -53, -33, 21, -11, 10, 54, -27};
    int R = 15;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> xInit = {86, 6, 42, 29, 34, 98, -42, -21, -6, -25, -39, -5, 38, -52, 40, 24, 61, -52, -72, -14, -51, 45, -86, -50, 3, -40, 26, -78, -23, 30, -54, -8, -93, 15, 91, -6, 30, 25, 45, 38, -64, 4, 77, -13, -89, 59, 45, 59, 15, 44};
    vector<int> v = {-93, -11, 86, -34, -95, -80, 47, -16, -72, 33, 46, 0, -46, 90, -43, -26, -63, -67, 82, 17, 29, -44, 98, 54, -71, -47, 2, 88, 27, -31, 58, 71, 69, -21, -97, 95, -54, -32, -27, -45, 79, -5, -85, -9, -23, -66, -99, -62, -22, -52};
    int R = 5;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> xInit = {86, 34, -92, -48, -51, -90, -32, -19, 47, -90, 46, -84, 18, -94, -19, 81, 59, -60, 92, 47, 45, -99, 26, 9, -35, -71, 68, 46, -98, -39, -19, 39, 13, 50, -91, 41, 73, -29, -7, -67, 91, -90, -77, 69, -34, -54, 16, 14, 31, -35};
    vector<int> v = {-50, -72, 57, 29, 32, 86, 20, 51, -35, 54, 38, -76, -10, -78, 16, -47, -39, 44, -54, -12, -28, 97, 17, -94, -15, 53, -42, -29, 61, 62, -75, -30, -11, -36, 80, -58, -44, 26, 78, 41, -53, 74, -13, -43, 21, 39, -4, -2, 92, 27};
    int R = 9;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> xInit = {-83, 65, 5, -63, -18, 19, -45, -17, -100, -32, -92, 7, 38, -30, 47, 50, -79, 75, 99, -65, 99, -6, 2, -31, 48, 42, -90, 22, -64, 61, -25, -87, 59, -23, 56, -42, 12, 32, 85, -69, -63, 10, 98, -14, 1, -87, -23, 69, -64, 49};
    vector<int> v = {82, -62, 6, 55, -3, 30, 32, 19, -81, 17, 71, -14, -27, 59, -43, -50, 61, -68, 99, 47, -87, 11, -6, 28, -29, -69, -91, -12, 65, -60, -98, 86, -51, 26, -36, 40, -94, -30, -67, 58, -74, 2, 92, 7, -4, 83, -38, 63, 78, -52};
    int R = 13;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> xInit = {-44, 25, 44, 37, 42, -86, 60, 37, -68, -84, 63, 10, 47, 21, 58, -16, -30, 54, -36, -2, -29, 90, -42, 92, -49, 17, 26, 11, 64, -49, 57, -20, 36, 39, -58, -82, -7, -88, 19, -62, -41, -18, 16, 9, -37, -22, 5, -8, 45, -20};
    vector<int> v = {33, -20, 25, -42, -27, 95, -99, -68, -43, 73, -70, -65, 43, -44, -82, 13, 99, -73, 66, -54, 26, -100, -50, -34, 100, -33, -38, 16, -95, 76, -79, 12, -40, -35, 55, 82, 9, 91, -5, 92, -7, 23, 0, -13, 53, 56, -86, 6, -60, 40};
    int R = 17;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> xInit = {0, -1, 10, -11, 99, -99};
    vector<int> v = {1, -1, -3, 3, 47, -47};
    int R = 3;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> xInit = {5};
    vector<int> v = {2};
    int R = 8;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> xInit = {100};
    vector<int> v = {1};
    int R = 3;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> xInit = {41, -72, -80, -65, -96, 49, 51, 63, -66, -80, -71, 64, -90, -49, 23, -94, -25, -51, 13, -67, 19, 12, -99, 92, -74, -95, 39, 39, 37, -57, 95, -71, -86, -51, -74, 75, 33, -29, 58, -52, 35, -46, -71, -17, -94, 77, 83, -83, -59, 2};
    vector<int> v = {86, -94, -80, -39, -60, 72, -58, 8, 12, -47, -49, -71, 34, -21, -92, -74, -28, 100, 29, 4, 79, 98, -91, -82, -59, -34, -51, 92, 77, 38, 51, 35, 22, -67, -90, 78, -100, 53, -57, -32, 48, 31, 69, -88, -68, 97, -56, 73, -63, 87};
    int R = 71;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> xInit = {-100, -33, 33, 100};
    vector<int> v = {3, 1, -1, -3};
    int R = 1;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> xInit = {12, 34, 56, 78, 90};
    vector<int> v = {-1, 2, -3, 4, -5};
    int R = 6;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> xInit = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> v = {-100, -96, -92, -88, -84, -80, -76, -72, -68, -64, -60, -56, -52, -48, -44, -40, -36, -32, -28, -24, -20, -16, -12, -8, -4, 0, 4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 48, 52, 56, 60, 64, 68, 72, 76, 80, 84, 88, 92, 96};
    int R = 100;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> xInit = {0, -10};
    vector<int> v = {0, 100};
    int R = 1;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> xInit = {1, -2};
    vector<int> v = {-100, 100};
    int R = 1;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> xInit = {100, -100};
    vector<int> v = {0, 1};
    int R = 10;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
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
    vector<int> xInit = {-10, 0};
    vector<int> v = {100, 0};
    int R = 1;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
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
    vector<int> xInit = {1, -30, -60, 100, 90};
    vector<int> v = {-1, 2, -3, 4, -5};
    int R = 1;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
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
    vector<int> xInit = {-100, 100};
    vector<int> v = {100, 99};
    int R = 1;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
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
    vector<int> xInit = {0, 1, -1};
    vector<int> v = {0, -1, 1};
    int R = 10;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> xInit = {0, 6};
    vector<int> v = {70, -70};
    int R = 1;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
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
    vector<int> xInit = {100, 100, -100, -100, 44, 55, 66, 77, -22, -33, -55, -66, -77, -11, -12, -34, -56, -45, -23, 12, 45, 67, 89, 45, 34, 78, 54, 34, 88, 65, 45, -45, -45, -87};
    vector<int> v = {1, 100, 12, 13, 14, 15, 16, 17, 18, 19, -20, -21, -22, -23, -24, -25, 26, 27, 30, 40, 41, 42, 80, -81, -82, 82, -83, 60, 61, 62, -62, -63, -64, 65};
    int R = 30;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> xInit = {100, 95};
    vector<int> v = {-100, -1};
    int R = 1;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
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
    vector<int> xInit = {2, 0, 86, 12, 16, -32};
    vector<int> v = {1, 2, -40, -1, -2, 10};
    int R = 1;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> xInit = {60, 53, 63, 39, 7, 80, 86, 57, 31, 3, 66, 40, 31, 3, 57, 78, 53, 0, 23, 73, 71, 53, 25, 36, 37, 54, 47, 80, 71, 27, 71, 85, 73, 41, 97, 29, 85, 33, 83, 56, 60, 13, 27, 27, 20};
    vector<int> v = {41, 1, 36, 45, 2, 42, 3, 8, 40, 6, 25, 16, 26, 19, 48, 14, 30, 24, 10, 23, 7, 17, 21, 37, 18, 0, 32, 5, 4, 22, 12, 31, 35, 29, 44, 9, 46, 38, 39, 13, 47, 34, 28, 11, 27};
    int R = 12;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> xInit = {-2, 2};
    vector<int> v = {-2, 2};
    int R = 3;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> xInit = {-2, 0, 2};
    vector<int> v = {100, 0, -100};
    int R = 1;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
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
    vector<int> xInit = {1, -1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, -9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 43, 45, 56, 78, 99, 100, -23};
    vector<int> v = {1, 2, 3, 4, -1, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 45, 46, 47, 48, 49, 50, 52, 53, 54, 56, 57, 58, 59, 90, 92};
    int R = 2;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> xInit = {0, -1, 10, -11, 99, -99, 39, 1, -2, 11, -12, 98, -98, 38, 4, -3, 13, -16, 92, -93, 34, 6, -4, 15, -21, 95, -96, 37};
    vector<int> v = {1, -1, -3, 3, 47, -47, -80, 12, -12, -32, 32, 42, -42, -81, 13, -13, -33, 0, 15, -52, -21, 2, 4, -2, -4, 6, -6, 8};
    int R = 3;
    Mosquitoes* pObj = new Mosquitoes();
    clock_t start = clock();
    int result = pObj->getMaximum(xInit, v, R);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23004921&rd=14553&pm=11654
********************************************************************************
#line 5 "Mosquitoes.cpp"
 
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <algorithm>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <climits>
//#include <ext/hash_map>
 
 
using namespace std;
using namespace __gnu_cxx;
 
 
 
#define REP(i,n) for(int i = 0; i < int(n); ++i)
#define FOR(i, a, b) for(int i = (int)(a); i < (int)(b); ++i)
#define FE(i,t) for (typeof((t).begin())i=(t).begin();i!=(t).end();++i)
 
#define two(x) (1LL << (x))
#define ALL(a) (a).begin(), (a).end()
 
 
#define pb push_back
#define ST first
#define ND second
#define MP(x,y) make_pair(x, y)
 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef vector<int> vi;
 
template<class T> void checkmin(T &a, T b){if (b<a)a=b;}
template<class T> void checkmax(T &a, T b){if (b>a)a=b;}
template<class T> void out(T t[], int n){REP(i, n)cout<<t[i]<<" "; cout<<endl;}
template<class T> void out(vector<T> t, int n=-1){for (int i=0; i<(n==-1?t.size():n); ++i) cout<<t[i]<<" "; cout<<endl;}
inline int count_bit(int n){return (n==0)?0:1+count_bit(n&(n-1));}
inline bool bit_set(int a, int b){return (a&two(b));}
inline int low_bit(int n){return (n^n-1)&n;}
inline int ctz(int n){return (n==0?-1:ctz(n>>1)+1);}
int toInt(string s){int a; istringstream(s)>>a; return a;}
string toStr(int a){ostringstream os; os<<a; return os.str();}
 
 
const double eps=1e-7;
 
struct event{
    double t;
    int a;
    event(double t, int a):t(t), a(a){}
    bool operator<(const event &e)const{
        if (t!=e.t) return t>e.t;
        return a<e.a;
    }
};
 
class Mosquitoes {
  public:
  int getMaximum(vector <int> xo, vector <int> v, int R) {
        int n=xo.size();
        vector<pii> tb;
        REP(i, n) tb.pb(MP(v[i], xo[i]));
        sort(ALL(tb));
        REP(i, n) xo[i]=tb[i].ND, v[i]=tb[i].ST;
 
        int best=0;
        if (v[0]==v[n-1]){
            REP(i, n){
                int cnt=0;
                FOR(j, i+1, n) if (xo[j]<=xo[i]+2*R) ++cnt;
                checkmax(best, cnt+1);
            }
            return best;
        }
 
        vector<event> q;
        REP(i, n) q.pb(event(0, i));
 
        REP(j, n) REP(i, j) if (v[j]!=v[i]){
            if (xo[j]<xo[i]-2*R) q.pb(event(1.*(xo[i]-2*R-xo[j])/(v[j]-v[i]), j));
            if (xo[j]<xo[i]+2*R) q.pb(event(1.*(xo[i]+2*R-xo[j])/(v[j]-v[i]), i));
        }
 
        REP(i, q.size()){
            int cnt=0;
            double t=q[i].t; int a=q[i].a;
            double p=xo[a]+v[a]*t+R;
            REP(j, n) if (fabs(xo[j]+v[j]*t-p)<R+eps) ++cnt;
            checkmax(best, cnt);
        }
        return best;
    
  }
  
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/