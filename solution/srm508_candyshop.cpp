/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11439
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

class CandyShop {
public:
    int countProbablePlaces(vector<int> X, vector<int> Y, vector<int> R);
};

int CandyShop::countProbablePlaces(vector<int> X, vector<int> Y, vector<int> R) {
    int ret;
    return ret;
}


int test0() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {1};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {2};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> X = {2, 3};
    vector<int> Y = {1, -1};
    vector<int> R = {2, 2};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
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
    vector<int> X = {2, 3, 5};
    vector<int> Y = {1, -1, 0};
    vector<int> R = {2, 2, 3};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> X = {-100, -100, -100, 0, 0, 0, 100, 100, 100};
    vector<int> Y = {-100, 0, 100, -100, 0, 100, -100, 0, 100};
    vector<int> R = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
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
    vector<int> X = {-3, 3, 5, 5};
    vector<int> Y = {4, 5, -2, 0};
    vector<int> R = {10, 11, 8, 6};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 20201;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> X = {0, 0};
    vector<int> Y = {0, 1};
    vector<int> R = {100, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 20000;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> X = {0, 0, 5};
    vector<int> Y = {0, 25, 56};
    vector<int> R = {100, 14, 46};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 363;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> X = {-50, -50, 50, 50};
    vector<int> Y = {-50, 50, -50, 50};
    vector<int> R = {100, 100, 100, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
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
    vector<int> X = {-49, -3, -85, -89};
    vector<int> Y = {-74, -79, -100, -61};
    vector<int> R = {44, 34, 97, 70};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> X = {10, -12, -38};
    vector<int> Y = {-19, 96, 89};
    vector<int> R = {89, 82, 83};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 672;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> X = {-12, 18, 22};
    vector<int> Y = {-15, 47, -15};
    vector<int> R = {58, 98, 41};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 2145;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> X = {2, 17, -60};
    vector<int> Y = {10, 45, 47};
    vector<int> R = {100, 79, 83};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 3696;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> X = {91};
    vector<int> Y = {-64};
    vector<int> R = {33};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 2245;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> X = {-89};
    vector<int> Y = {67};
    vector<int> R = {55};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 6161;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> X = {-44};
    vector<int> Y = {-85};
    vector<int> R = {70};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 9941;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> X = {7, 33};
    vector<int> Y = {67, -29};
    vector<int> R = {64, 83};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1014;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> X = {3};
    vector<int> Y = {-99};
    vector<int> R = {26};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1405;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> X = {94, 53};
    vector<int> Y = {40, 73};
    vector<int> R = {75, 58};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 3510;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> X = {41, 43, -37, -3, -24, -67, 2, 17, -17};
    vector<int> Y = {-6, 10, 61, -46, 4, -2, -13, 20, -7};
    vector<int> R = {98, 76, 85, 67, 95, 83, 86, 73, 97};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 228;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> X = {62, 7, 22, 33, 70, -49, 50, -27};
    vector<int> Y = {-58, -50, -69, -2, -18, -35, -23, -18};
    vector<int> R = {77, 29, 65, 62, 70, 80, 46, 65};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> X = {49, -62, -2, -4, 16, -6, 5, -10};
    vector<int> Y = {-3, -7, -14, -26, -44, 9, 29, -40};
    vector<int> R = {77, 68, 35, 28, 85, 26, 42, 78};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> X = {8, 8, -3, -31, -20, -86, 8, -17, -35, -56};
    vector<int> Y = {-16, -81, -67, -5, -88, -65, -85, -35, -44, -16};
    vector<int> R = {53, 67, 70, 54, 77, 93, 93, 37, 78, 89};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> X = {-27, 66, -3, 26, 9, -16, -30, 12, -23, 52, -3, 22};
    vector<int> Y = {-38, -52, -14, -10, -4, -78, -77, -62, -21, -39, -7, -55};
    vector<int> R = {83, 93, 39, 57, 42, 94, 74, 77, 88, 52, 91, 94};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> X = {48, -11, -21, -37, 61, 52, -30, -4, -40, -4};
    vector<int> Y = {4, 11, 22, -13, -23, 1, 5, 21, -25, -49};
    vector<int> R = {97, 72, 57, 87, 95, 90, 77, 54, 59, 45};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 225;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> X = {-86, 19, -5, -6, 7, -20, -4, -63, -51, -19, -13};
    vector<int> Y = {-81, -62, -16, -36, -19, -38, -72, -75, -6, -53, -24};
    vector<int> R = {89, 72, 59, 76, 73, 66, 97, 59, 67, 48, 79};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> X = {2, -24, 20, 29, 37, 36, -5, -3, 2, -17, 20, -14, 45, 16, 14, 5, 14, -45, 3, -9, 0, -3, 36, 48};
    vector<int> Y = {-39, -4, 20, 24, 4, -25, -23, -41, -48, 12, 27, 39, -15, 6, -2, 12, -31, -25, 2, -20, -36, -24, 13, -9};
    vector<int> R = {63, 57, 46, 75, 36, 41, 62, 49, 60, 61, 77, 76, 71, 37, 51, 35, 77, 82, 57, 54, 61, 47, 45, 76};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> X = {-18, -21, -36, -34, -27, 45, -17, -34, -45, -34, 21, -37, 18, -22, 19, 12, -3, -10, 0, 2, -41, 26, 15};
    vector<int> Y = {28, 21, 50, -24, -35, 7, -20, -9, 13, -41, 33, -9, -32, 23, 25, -33, 7, 32, -16, -10, -28, 1, -4};
    vector<int> R = {48, 59, 81, 85, 65, 58, 76, 60, 66, 81, 88, 67, 67, 81, 79, 55, 57, 81, 40, 73, 68, 73, 24};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
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
    vector<int> X = {-44, 9, 34, -10, -19, -30, -18, 9, 6, 16, 27, -3, 27, -31, -8, 9, -3, 40, 19, -4, 38, 13, -46, 49, 44, -1, -26, 26, 4, 7};
    vector<int> Y = {-1, 3, -21, 25, -24, -26, -7, -3, -49, 28, 44, 16, -26, -10, 20, -8, 40, -1, 26, -5, -23, 35, -11, -14, 9, -10, 11, -23, -21, -37};
    vector<int> R = {74, 66, 35, 56, 45, 80, 40, 68, 64, 45, 74, 39, 64, 70, 79, 41, 77, 66, 49, 42, 86, 61, 68, 47, 58, 37, 75, 50, 82, 73};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> X = {-15, 40, 19, -29, -50, 38, -40, -29, 40, -32, -11, -22, -19, -39, 16, -14, -26, -30, -35, 5, -17, -3, -18, -28, 19, -27, 0, -43, 35, -28};
    vector<int> Y = {23, -27, 16, -10, 45, -16, -42, -28, 12, -40, -27, -22, -29, 25, -33, -50, 31, -36, -23, -19, 7, 46, -10, -14, -39, -40, -26, -43, -15, 20};
    vector<int> R = {59, 88, 76, 47, 98, 71, 51, 55, 89, 67, 65, 54, 54, 87, 56, 42, 93, 76, 94, 36, 83, 85, 36, 86, 62, 80, 89, 66, 83, 96};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> X = {22, 25, 26, 31, -12, 31, -5, -19, 36, 6, 38, -6, -7, 24, -10, -13, 22, -6, 9, 22, -12, 15, -12, -13, 8, 28, 36, -15, 41, 28, 3, -8, 24, 18, 9, 33, -10, -4, -24, -1};
    vector<int> Y = {36, -12, -9, -7, 33, -15, -17, 35, -21, -18, -51, -20, 18, -37, -53, -8, 0, 19, -2, -27, -33, 23, 42, 38, -6, -13, 20, 35, -29, 11, 14, -51, -1, 8, 24, -7, 9, 4, 7, 29};
    vector<int> R = {69, 38, 45, 45, 51, 86, 87, 93, 88, 86, 92, 57, 38, 62, 59, 61, 36, 52, 50, 65, 38, 65, 67, 93, 71, 87, 83, 97, 70, 57, 68, 66, 52, 98, 91, 57, 81, 78, 73, 97};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> X = {5, 8, -1, 10, 27, 0, -14, -19, 8, -24, 17, 16, 10, -20, 5, -16, -17, 33, 29, -7, 23, 37, 31, -12, 38, 24, 29, 17, -17, -8, 45, -1, -18, 26, 17, 24, -2, 7, 10, 12};
    vector<int> Y = {-20, 27, -19, -39, 25, -18, -30, -38, -2, 9, -15, 15, 15, 45, -54, 29, 8, -25, 34, 2, -19, -40, -2, 39, 37, -37, -54, 7, -2, 29, -13, -17, -27, -10, 29, 22, 33, -32, -16, -42};
    vector<int> R = {22, 50, 72, 67, 53, 72, 75, 61, 88, 100, 54, 41, 67, 76, 73, 68, 95, 71, 76, 91, 37, 79, 47, 81, 74, 74, 91, 65, 73, 100, 64, 97, 75, 58, 100, 73, 46, 96, 98, 79};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> X = {-25, 44, 12, 41, -9, -6, 50, -17, -25, 3, 30, 13, -16, -8, -4, 48, 44, 52, 38, 23, 3, 37, -8, 14, 38, 27, 14, 12, 25, 22, 11, 17, 35, 53, 15, 27, -18, -20, 11, -8, 43, 26, -21, 40, -6, 6, 6};
    vector<int> Y = {-25, -38, -47, -40, -25, 26, -18, -4, -55, 13, -16, 28, -28, 15, -49, -39, 4, -49, -7, -8, -25, -12, -6, -42, -45, 11, 26, -43, -41, -35, -41, -19, -14, -28, -5, -38, -26, -39, 13, 5, -23, -22, -48, 15, 26, 19, 31};
    vector<int> R = {90, 59, 55, 49, 80, 89, 78, 64, 90, 47, 85, 53, 69, 74, 93, 85, 81, 91, 74, 67, 36, 46, 54, 63, 57, 59, 76, 44, 56, 82, 93, 19, 82, 71, 62, 52, 86, 49, 75, 54, 40, 59, 93, 91, 91, 53, 61};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> X = {8, 3, -2, 21, 22, 54, 20, 15, -1, 5, 48, 12, -11, 47, -16, 34, 27, 11, 15, -24, 43, 15, 31, 41, 0, 21, -5, 53, 22, 38, 26, 36, 41, 2, 31, -21, 43, -20, 22, 48};
    vector<int> Y = {44, -12, -19, 26, -15, -48, -25, 35, 3, -13, -30, -24, -15, 10, 42, -48, 43, 8, -9, 2, 1, -40, -27, 8, -20, 9, 9, 13, -47, -50, 42, 37, 45, 18, -48, -21, 4, -1, -37, -33};
    vector<int> R = {75, 52, 94, 64, 41, 88, 44, 96, 41, 48, 79, 61, 71, 61, 98, 71, 66, 33, 88, 67, 79, 47, 67, 41, 41, 65, 87, 56, 45, 79, 79, 55, 71, 92, 55, 65, 96, 78, 49, 67};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> X = {9, 10, 8, 9, -2, 14, -14, -15, -21, 17, 7, 5, 4, 14, -19, 4, -22, 30, -8, 7, 10, 24, -15, -21, -12, 31, -21, 32, 17, 28, -11, 32, -3, 1, -4, -25, -1, -18, -22, 20, -12, 14, 34, 28, 33, -3, -15, 5, 15};
    vector<int> Y = {-23, 15, 14, -26, -2, -4, -40, -11, -19, -18, 3, -17, -21, -15, -32, -17, -28, -1, -23, -45, -32, -2, -23, 6, 9, 7, -38, -15, -10, 8, -23, 12, 12, -3, -21, -21, -52, -33, -43, -2, -1, -33, 9, -43, -12, -45, -12, 1, 14};
    vector<int> R = {67, 95, 66, 57, 96, 65, 79, 58, 83, 90, 91, 66, 99, 60, 62, 83, 60, 85, 59, 95, 50, 86, 60, 96, 65, 93, 79, 60, 72, 95, 81, 99, 89, 62, 86, 59, 84, 61, 96, 75, 91, 81, 88, 86, 53, 75, 66, 92, 80};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1140;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> X = {1, 15, 4, 28, 22, -2, 15, 34, 5, -1, -19, 19, 15, 21, 11, -12, -5, -3, 10, 8, -14, 10, -17, 32, 20, -14, 1, 5, -15, 11, -23, 19, 22, -19, -19, 5, 32, 18, 18, -9};
    vector<int> Y = {-12, -42, -39, -1, -1, -45, -26, -33, -28, -38, -49, -44, -10, -51, 14, -49, -28, -33, 6, -37, -53, -8, -30, -36, -51, -46, -18, -35, -29, -37, -4, -14, -30, -14, -5, 2, 6, -13, -28, -5};
    vector<int> R = {50, 60, 90, 87, 87, 77, 67, 80, 82, 91, 87, 77, 67, 71, 81, 68, 95, 84, 77, 65, 76, 95, 96, 62, 91, 59, 46, 60, 74, 81, 83, 77, 46, 96, 62, 67, 92, 99, 66, 87};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1161;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> X = {24, 29, 17, -17, 14, 12, 12, -1, -20, -16, -14, -21, -12, 24, 20, 32, 10, -12, -8, -3, 8, -6, -24, 28, 17, 10, -24, -5, -15, 1, -5, 20, -18, -21, 13, 11, -18, -5, 25, -12};
    vector<int> Y = {-1, -42, -16, 4, 4, -42, 5, -34, -38, -27, -33, -7, -1, -30, -2, -9, -40, 8, -32, -14, -27, -49, 4, -17, -24, -8, -34, -37, -38, -17, -27, -22, -11, -39, -15, -29, -28, -25, -11, -29};
    vector<int> R = {90, 79, 86, 91, 76, 70, 78, 71, 53, 87, 90, 76, 91, 80, 70, 81, 60, 98, 93, 63, 75, 76, 93, 78, 70, 90, 57, 97, 55, 48, 52, 97, 90, 46, 60, 96, 66, 75, 69, 94};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1385;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> X = {34, 43, 33, 53, 52, 58, 81, 46, 47, 31, 57, 80, 41, 54, 33, 30, 56, 48, 50, 82, 31, 33, 68, 83, 29, 48, 70, 70, 29, 59, 79, 45, 52, 27, 72, 39, 31, 67, 43, 64, 76, 63, 33, 66, 57, 79, 58, 36, 69, 46};
    vector<int> Y = {-23, 14, -41, -10, -42, -48, -28, -2, -38, -10, -36, -24, -6, -37, 8, -4, -12, -45, 14, -47, -24, -15, -32, 5, -14, -9, -10, -51, -20, -22, -28, -8, -7, -9, -55, -41, -50, -35, -31, -6, -28, 1, -20, 10, -10, -37, -13, -4, 10, -2};
    vector<int> R = {98, 88, 85, 49, 49, 66, 86, 80, 67, 57, 74, 75, 82, 80, 78, 75, 71, 82, 59, 80, 90, 92, 71, 83, 52, 88, 76, 80, 79, 59, 93, 47, 96, 99, 89, 83, 77, 93, 56, 92, 85, 71, 74, 63, 70, 96, 61, 72, 77, 82};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1081;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> X = {32, 53, 60, 42, 52, 66, 33, 35, 32, 74, 56, 27, 46, 69, 69, 52, 45, 59, 30, 49, 27, 68, 54, 75, 51, 57, 67, 32, 66, 69, 37, 56, 59, 55, 67, 31, 63, 84, 55, 57, 71, 70, 77, 40, 52, 51, 38, 49, 32};
    vector<int> Y = {-4, -1, -13, -39, -16, -39, -45, -33, -9, -20, -14, -36, -19, -25, -49, -41, -31, 14, -17, -8, -38, -36, -53, -34, -28, -1, -4, -33, -15, -39, 7, -29, -20, -42, -4, -8, 9, -38, -6, 8, -37, -17, 5, -52, -15, -5, -33, -30, -30};
    vector<int> R = {90, 75, 93, 70, 79, 95, 90, 76, 74, 73, 74, 75, 95, 56, 83, 65, 88, 59, 69, 71, 93, 71, 94, 56, 79, 47, 85, 99, 72, 81, 82, 98, 80, 59, 52, 69, 54, 83, 49, 60, 81, 48, 87, 74, 47, 74, 61, 66, 67};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1170;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> X = {75, -48, -78, 42, 25, 57, -91, 5, 2, -12, 92, -74, 2, 95, 76, 75, -41, -58, 37, -76, 39, -69, -27, -57, -97, -6, 56, -11, 87, 73, -72, 45, -80, 84, -51, -81, 61, 30, 65, -58, 48, -96, 64, 8, 27};
    vector<int> Y = {39, 97, 80, -85, -1, -43, 81, 66, 40, 72, -51, 75, -1, 57, 12, -16, -89, 54, -86, 68, -83, -2, -11, 84, -82, -53, 6, 46, -55, -89, -96, 70, -58, 85, -64, -68, 92, 24, -41, -63, 3, -27, -100, 53, 25};
    vector<int> R = {70, 70, 56, 54, 62, 68, 55, 54, 56, 72, 56, 60, 78, 58, 69, 41, 81, 91, 66, 60, 56, 69, 59, 62, 54, 71, 69, 51, 74, 64, 77, 76, 56, 85, 55, 99, 92, 70, 47, 84, 73, 76, 97, 49, 71};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
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
    vector<int> X = {89, 44, -53, 24, -19, 23, -77, -15, 81, -95, 95, -40, 35, 100, -91, -100, 56, -81, -69, 58, 93, -81, -50, 38, -30, 39, -17, -26, 47, 53, 5, 47, 14, -48, -14, 8, 57, 83, -21, 84, 65, -84, 47, -65, 16};
    vector<int> Y = {7, 89, -75, 39, 91, 88, 89, -64, -69, -58, 97, -17, 47, -46, -54, 29, 81, -70, -71, -47, 66, -63, 15, 87, 4, 44, -76, 31, 99, -21, 15, -47, -12, 59, -73, 16, 51, 91, 22, -40, 92, 94, -63, -79, 76};
    vector<int> R = {84, 52, 47, 56, 84, 48, 91, 95, 98, 43, 62, 75, 46, 93, 82, 83, 88, 80, 94, 93, 45, 36, 78, 78, 53, 72, 75, 70, 47, 78, 99, 75, 86, 47, 68, 75, 72, 54, 95, 68, 58, 48, 46, 68, 96};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
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
    vector<int> X = {50, -14, -13, -43, -19, -66, 19, 23, -63, -19, -88, -50, 60, -91, -57, 39, -2, -45, -77, -41, -51, 62, 55, 23, 80, 84, -58, -70, 46, -60, 27, 53, 45, 6, -34};
    vector<int> Y = {73, -19, 91, 74, -86, -60, -28, -9, 81, 98, 92, -96, 63, 58, 37, 82, 9, -53, -75, -13, 16, 54, 13, 4, -40, -4, 10, 89, 2, 17, 99, 82, -69, -67, -32};
    vector<int> R = {7, 49, 16, 36, 17, 31, 9, 55, 34, 36, 34, 51, 42, 38, 22, 53, 35, 23, 35, 54, 59, 24, 23, 17, 25, 17, 14, 40, 18, 48, 32, 12, 23, 12, 50};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
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
    vector<int> X = {-7, 15, -75, -43, 47, -2, 92, 35, -19, 97, -77, 36, 19, -56, 17, 24, 62, 75, -72, 46, -2, 20, -83, -23, 78, -50, 48, -2, -81};
    vector<int> Y = {-87, 0, 29, 8, 95, -15, -10, -7, 100, -39, -99, -29, 0, -23, 21, -70, 27, 52, 26, 19, 20, 91, -18, 70, 98, 51, -55, 55, -14};
    vector<int> R = {28, 8, 15, 17, 51, 5, 19, 24, 18, 48, 30, 27, 21, 10, 16, 11, 33, 44, 17, 11, 49, 41, 26, 14, 46, 9, 40, 19, 59};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
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
    vector<int> X = {-45, 77, -81, 77, -11, -82, 91, 16, 2, -47, -76, -34, -23, -78, -87, 99, 68, 51, 100, 41, 71, -26, -96, 32};
    vector<int> Y = {42, 26, -17, 82, -91, -92, 60, -91, -63, 54, 93, 24, -10, 69, 75, -7, -57, -82, -87, -54, -17, -56, 40, 13};
    vector<int> R = {53, 5, 37, 26, 42, 17, 32, 47, 13, 5, 59, 14, 9, 24, 35, 8, 59, 31, 38, 16, 15, 50, 31, 5};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
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
    vector<int> X = {68, 91, -58, -16, -54};
    vector<int> Y = {-28, 84, -38, 45, 50};
    vector<int> R = {4, 6, 10, 5, 5};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> X = {-6, -2, -2, 26, 7, 96, -45, -100, -31, 3, 95, 65, 27, 12, 69, 3};
    vector<int> Y = {10, -26, 27, -91, -71, -37, 25, -58, 32, -70, 30, -5, 10, 24, 50, 98};
    vector<int> R = {2, 2, 9, 1, 9, 9, 10, 2, 1, 1, 10, 9, 7, 10, 1, 2};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> X = {22};
    vector<int> Y = {-38};
    vector<int> R = {2};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> X = {0, -46, -63, -39, -47};
    vector<int> Y = {-35, -94, -76, -95, -97};
    vector<int> R = {98, 91, 97, 95, 92};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 6150;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> X = {-80, -54, -7, -12, -40, -8};
    vector<int> Y = {67, 68, 99, 75, 31, 99};
    vector<int> R = {91, 91, 98, 80, 93, 96};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 4578;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> X = {-7, -36, -21, -28, -28, -38, -76, -57, -2, -57};
    vector<int> Y = {-5, 7, 3, 22, -33, -30, -8, -4, -7, -49};
    vector<int> R = {94, 86, 91, 97, 80, 85, 91, 97, 82, 98};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 4158;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {1};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> X = {2, 3};
    vector<int> Y = {1, -1};
    vector<int> R = {2, 2};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
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
    vector<int> X = {-100};
    vector<int> Y = {-100};
    vector<int> R = {100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 20201;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> X = {-3, 3, 5, 5};
    vector<int> Y = {4, 5, -2, 0};
    vector<int> R = {10, 11, 8, 6};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> X = {2, 1, 2, 3, -2, 1};
    vector<int> Y = {0, 1, 1, -1, 2, 2};
    vector<int> R = {3, 2, 3, 3, 2, 2};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
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
    vector<int> X = {100};
    vector<int> Y = {100};
    vector<int> R = {1};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> X = {-100, -100};
    vector<int> Y = {0, 1};
    vector<int> R = {100, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 20000;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> X = {-100, -100, -99, -99, -98};
    vector<int> Y = {-100, -100, -99, -99, -98};
    vector<int> R = {100, 100, 100, 100, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 19799;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> X = {0, 1};
    vector<int> Y = {100, 100};
    vector<int> R = {100, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 20000;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> X = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> Y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> R = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 5101;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> X = {-100, -100, -100};
    vector<int> Y = {-100, -99, -98};
    vector<int> R = {3, 3, 3};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> X = {100};
    vector<int> Y = {100};
    vector<int> R = {4};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> X = {2, 2};
    vector<int> Y = {2, 2};
    vector<int> R = {100, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 20201;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> X = {100};
    vector<int> Y = {100};
    vector<int> R = {100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 20201;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> X = {2, 3, 5};
    vector<int> Y = {1, -1, 0};
    vector<int> R = {2, 2, 3};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> X = {-100, -99, -98};
    vector<int> Y = {-99, -98, -97};
    vector<int> R = {97, 99, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 18915;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> X = {2, 3, 5};
    vector<int> Y = {1, -1, 0};
    vector<int> R = {90, 90, 90};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 15753;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> X = {-100};
    vector<int> Y = {-100};
    vector<int> R = {1};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
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
    vector<int> X = {-90};
    vector<int> Y = {-90};
    vector<int> R = {80};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 12961;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> X = {-100, -100, -100, 0, 0, 0, 100, 100, 100, 50, 50, 49, 49, 100, 100, -100, -100, -100, 0, 0, 0, 100, 100, 100, 50, 50, 49, 49, 100, 100, 50, 49, 49, 100, 100, -100, -100, -100, 0, 0, 0, 100, 100, 100, 50, 50, 49, 49, 100, 100};
    vector<int> Y = {-100, 0, 100, -100, 0, 100, -100, 0, 100, 0, -100, 100, 0, 100, 100, -100, 0, 100, -100, 0, 100, -100, 0, 100, 0, -100, 100, 0, 100, 100, -100, 0, 100, -100, 0, 100, -100, 0, 100, 0, 100, -100, 0, 100, 0, -100, 100, 0, 100, 100};
    vector<int> R = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 50, 100, 100, 100, 100, 100, 100, 100, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> X = {100};
    vector<int> Y = {-100};
    vector<int> R = {100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 20201;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> X = {-100, -100, -100, 0, 0, 0, 100, 100, 100};
    vector<int> Y = {-100, 0, 100, -100, 0, 100, -100, 0, 100};
    vector<int> R = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> X = {-100, 100};
    vector<int> Y = {-100, 100};
    vector<int> R = {100, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> X = {-100, -100};
    vector<int> Y = {-100, 0};
    vector<int> R = {100, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 5101;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> X = {-100, -100};
    vector<int> Y = {-50, -50};
    vector<int> R = {2, 5};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> X = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> Y = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> R = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 20201;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> X = {-10};
    vector<int> Y = {-10};
    vector<int> R = {3};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> X = {-100, -100, -100};
    vector<int> Y = {100, 50, 100};
    vector<int> R = {100, 3, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> X = {-100};
    vector<int> Y = {100};
    vector<int> R = {100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 20201;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> X = {-100, -100, -100, 100};
    vector<int> Y = {-100, -100, -100, 100};
    vector<int> R = {100, 100, 100, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> X = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, -100, -99, -98, -97, -96, -95, -94, -93, -92, -91, -90, -89, -88, -87, -86, -85, -84, -83, -82, -81};
    vector<int> Y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, -100, -99, -98, -97, -96, -95, -94, -93, -92, -91, -90, -89, -88, -87, -86, -85, -84, 12, 15, 16};
    vector<int> R = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> X = {-100, -100};
    vector<int> Y = {0, 0};
    vector<int> R = {100, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 20201;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> X = {1};
    vector<int> Y = {1};
    vector<int> R = {100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 20201;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> X = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> Y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> R = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 20201;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> X = {-100, -100, -100, 0, 0, 0, 100, 100, 100};
    vector<int> Y = {-100, 0, 100, -100, 0, 100, -100, 0, 100};
    vector<int> R = {100, 100, 100, 100, 100, 100, 100, 100, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> X = {-100, -100, -100, 0, 0, 0, 100, 100, 100, 4};
    vector<int> Y = {-100, 0, 100, -100, 0, 100, -100, 0, 100, 2};
    vector<int> R = {100, 100, 100, 100, 100, 100, 100, 100, 100, 99};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> X = {0, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    vector<int> Y = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> R = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 11113;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> X = {-3, 3, 5, 5};
    vector<int> Y = {4, 5, -2, 0};
    vector<int> R = {100, 100, 100, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 18139;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> X = {100};
    vector<int> Y = {100};
    vector<int> R = {99};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 19801;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> X = {65, 38};
    vector<int> Y = {98, 72};
    vector<int> R = {23, 84};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1105;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> X = {-100, -99};
    vector<int> Y = {-100, -99};
    vector<int> R = {10, 15};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 221;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> X = {-100};
    vector<int> Y = {-100};
    vector<int> R = {10};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 221;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> X = {-100, -100, -100, -100, -100, -100, -100, -100, -100, -100};
    vector<int> Y = {-100, -100, -100, -100, -100, -100, -100, -100, -100, -100};
    vector<int> R = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 20201;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> X = {-90, -85, -80, -82, -79, -88, -80};
    vector<int> Y = {1, 2, 3, 4, 5, 6, 7};
    vector<int> R = {100, 100, 80, 90, 77, 100, 99};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 12013;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> X = {100};
    vector<int> Y = {100};
    vector<int> R = {2};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> X = {-3, 3, 5, 5, 10, 6, 20, 40};
    vector<int> Y = {4, 5, -2, 0, 3, 40, 2, -50};
    vector<int> R = {10, 11, 8, 6, 100, 100, 100, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> X = {-100, -99, -97, -98, -96, -95, -94, -93, -92, -91, -100, -99, -97, -98, -96, -95, -94, -93, -92, -91, -100, -99, -97, -98, -96, -95, -94, -93, -92, -91, -100, -99, -97, -98, -96, -95, -94, -93, -92, -91, -100, -99, -97, -98, -96, -95, -94, -93, -92, -91};
    vector<int> Y = {-100, -99, -97, -98, -96, -95, -94, -93, -92, -91, -100, -99, -97, -98, -96, -95, -94, -93, -92, -91, -100, -99, -97, -98, -96, -95, -94, -93, -92, -91, -100, -99, -97, -98, -96, -95, -94, -93, -92, -91, -100, -99, -97, -98, -96, -95, -94, -93, -92, -91};
    vector<int> R = {100, 100, 100, 100, 100, 100, 100, 100, 100, 50, 100, 100, 100, 100, 100, 100, 100, 100, 100, 50, 100, 100, 100, 100, 100, 100, 100, 100, 100, 50, 100, 100, 100, 100, 100, 100, 100, 100, 100, 50, 100, 100, 100, 100, 100, 100, 100, 100, 100, 50};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 5101;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> X = {0, 20};
    vector<int> Y = {0, 20};
    vector<int> R = {1, 1};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> X = {0, 10};
    vector<int> Y = {0, 10};
    vector<int> R = {99, 1};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
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
    vector<int> X = {-100, -100, -100, 0, 0, 0, 100, 100, 100, -100, -100, -100, 0, 0, 0, 100, 100, 100, -100, -100, -100, 0, 0, 0, 100, 100, 100, -100, -100, -100, 0, 0, 0, 100, 100, 100, 100, -100, -100, -100, 0, 0, 0, 100, 100, 100, -100, -100, -100, 0};
    vector<int> Y = {-100, -100, -100, 0, 0, 0, 100, 100, 100, -100, -100, -100, 0, 0, 0, 100, 100, 100, -100, -100, -100, 0, 0, 0, 100, 100, 100, -100, -100, -100, 0, 0, 0, 100, 100, 100, 100, -100, -100, -100, 0, 0, 0, 100, 100, 100, -100, -100, -100, 0};
    vector<int> R = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> X = {-100, -100, -100, 0, 0, 0, 100, 100, 100, 100, 100, 100, -100, -100};
    vector<int> Y = {-100, 0, 100, -100, 0, 100, -100, 0, 100, 100, -100, 100, -100, 100};
    vector<int> R = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> X = {100, 100};
    vector<int> Y = {100, 99};
    vector<int> R = {100, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 20000;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> X = {-100, -100, -100, -100, -100, -100, -100, -100, -100};
    vector<int> Y = {-100, -100, -100, -100, -100, -100, -100, -100, -100};
    vector<int> R = {100, 100, 100, 100, 100, 100, 100, 100, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 20201;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> X = {0, 2};
    vector<int> Y = {0, 0};
    vector<int> R = {50, 30};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1861;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> X = {1, 2};
    vector<int> Y = {0, 2};
    vector<int> R = {1, 3};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> X = {90, 90};
    vector<int> Y = {90, 80};
    vector<int> R = {99, 99};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 17861;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> X = {0, 0, 0, 0};
    vector<int> Y = {0, 0, 0, 0};
    vector<int> R = {100, 100, 100, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 20201;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> X = {-100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100};
    vector<int> Y = {-100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100};
    vector<int> R = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> X = {100, 99, 98};
    vector<int> Y = {99, 97, 96};
    vector<int> R = {7, 8, 5};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> X = {0, 1, 100, 100, -100, 100, 100, 100};
    vector<int> Y = {0, 1, 100, -100, 100, -90, -99, -50};
    vector<int> R = {100, 50, 100, 100, 100, 100, 100, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> X = {1};
    vector<int> Y = {2};
    vector<int> R = {3};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> X = {2, 3, 50};
    vector<int> Y = {1, -1, 50};
    vector<int> R = {2, 2, 2};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> X = {99, 99, 99, 99, 99, 99, 99, 99};
    vector<int> Y = {99, 99, 99, 99, 99, 99, 99, 99};
    vector<int> R = {99, 99, 99, 99, 99, 99, 99, 99};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 19801;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> X = {-100, -100};
    vector<int> Y = {100, -100};
    vector<int> R = {100, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> X = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> Y = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> R = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    CandyShop* pObj = new CandyShop();
    clock_t start = clock();
    int result = pObj->countProbablePlaces(X, Y, R);
    clock_t end = clock();
    delete pObj;
    int expected = 10352;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22870498&rd=14437&pm=11439
********************************************************************************
#include <iostream>  
#include <sstream>  
#include <string>  
#include <vector>  
#include <deque>  
#include <queue>  
#include <set>  
#include <map>  
#include <algorithm>  
#include <functional>  
#include <utility>  
#include <cmath>  
#include <cstdlib>  
#include <ctime>  
 
using namespace std; 
int ABS(int a) 
{ 
  if(a<0) 
  return -a; 
  return a; 
} 
class CandyShop 
{ 
        public: 
        int countProbablePlaces(vector <int> X, vector <int> Y, vector <int> R) 
        { 
                int n=X.size(); 
                int mp[500][500]; 
                memset(mp,0,sizeof(mp)); 
                for(int i=0;i<n;i++) 
                { 
          int sx=X[i]+200; 
          int sy=Y[i]+200; 
          for(int j=0;j<500;j++) 
            for(int k=0;k<500;k++) 
              if(ABS(j-sx)+ABS(k-sy)<=R[i]) 
                mp[j][k]++; 
        } 
        int ans=0; 
        for(int j=0;j<500;j++) 
          for(int k=0;k<500;k++) 
            if(mp[j][k]==n) 
              ans++; 
        return ans; 
        } 
  }; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/