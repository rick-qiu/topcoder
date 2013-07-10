/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8185
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

class ConnectTheCities {
public:
    int minimalRange(int distance, int funds, vector<int> position);
};

int ConnectTheCities::minimalRange(int distance, int funds, vector<int> position) {
    int ret;
    return ret;
}


int test0() {
    int distance = 10;
    int funds = 5;
    vector<int> position = {3, 7, 9};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
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
    int distance = 20;
    int funds = 100;
    vector<int> position = {0, 0, 0, 0};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int distance = 63;
    int funds = 19;
    vector<int> position = {34, 48, 19, 61, 24};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int distance = 100;
    int funds = 0;
    vector<int> position = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int distance = 89;
    int funds = 2271;
    vector<int> position = {86, 40, 78, 9, 18, 73, 42, 58, 8, 60, 14, 72, 57, 56, 44, 21, 42, 86, 4, 84, 69, 82, 30, 60, 10, 49, 83, 79, 31, 9, 30, 27, 49, 18, 36, 67, 53, 40, 88, 24, 63, 64, 6, 30, 30};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int distance = 95;
    int funds = 4723;
    vector<int> position = {32, 12, 44, 70, 20, 69, 10, 22, 4, 55, 17, 15, 10, 29, 84, 76, 63, 94, 81, 80, 57, 85, 62, 82, 95, 43, 40, 76, 55, 90, 2, 56, 70, 47, 30, 90, 84, 8, 16, 56, 31, 1, 71, 9, 30, 27, 85};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int distance = 81;
    int funds = 3609;
    vector<int> position = {54, 22, 12, 72, 32, 20, 57, 23, 0, 81, 1, 46, 79, 16, 75, 47, 76, 69, 59, 15, 41, 72, 6, 30, 39, 17, 61, 5, 14, 51, 54, 70, 73, 68, 61, 26, 8, 36, 49, 8, 35, 50, 57, 32, 68, 50};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int distance = 85;
    int funds = 241;
    vector<int> position = {23, 1, 39, 80, 54, 33, 51, 64, 68, 76, 79, 48, 51, 73, 70, 32, 58, 40, 15, 26, 16, 34, 69, 64, 75, 46, 24};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int distance = 85;
    int funds = 231;
    vector<int> position = {49, 36, 80, 3, 30, 41, 28, 74, 19, 2, 56, 4, 42, 13, 77, 26, 45, 49, 58, 53, 67, 74, 79, 51, 52, 69, 3, 77, 79, 17, 62};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int distance = 85;
    int funds = 90;
    vector<int> position = {30, 76, 11, 58, 64, 22, 52, 26, 18, 8, 39, 9, 26, 77, 50, 84};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int distance = 90;
    int funds = 475;
    vector<int> position = {12, 67, 86, 39, 73, 19, 84, 3, 74, 10, 35, 83, 81, 46, 29, 18, 56, 27, 88, 37, 37, 12, 87, 64, 48, 1, 73, 74, 46, 64, 23, 59, 3, 18, 61, 76, 0, 17, 43, 74, 27, 41, 67};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int distance = 88;
    int funds = 287;
    vector<int> position = {50, 42, 57, 20, 82, 44, 11, 21, 37, 74, 54, 23, 72, 39, 16, 16, 47, 74, 53, 5, 6, 19, 76, 33, 20, 42, 66, 82, 60, 16, 53, 44, 80, 22, 64, 73, 88, 76, 28, 36, 83, 82, 59};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
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
    int distance = 89;
    int funds = 397;
    vector<int> position = {64, 64, 66, 64, 76, 42, 71, 45, 23, 29, 65, 22, 25, 89, 28, 21, 41, 18, 76, 12, 25, 27, 44, 1, 40, 54, 51, 86, 48, 57, 56, 74, 83, 84, 10, 69, 36, 82, 76, 22, 73, 14, 6, 8, 65, 34, 81, 68, 52, 29};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
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
    int distance = 91;
    int funds = 285;
    vector<int> position = {27, 75, 59, 77, 1, 7, 9, 66, 73, 43, 91, 2, 53, 90, 8, 37, 12, 26, 26, 12, 18, 63, 9, 27, 32, 41, 27, 2, 44, 19, 65, 19, 3, 32, 4, 44, 79, 53, 58, 9, 4, 5};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int distance = 94;
    int funds = 463;
    vector<int> position = {10, 78, 87, 43, 17, 75, 36, 12, 0, 12, 54, 81, 53, 77, 72, 33, 44, 70, 83, 35, 79, 30, 71, 59, 79, 90, 63, 12, 2, 74, 28, 10, 57, 18, 50, 75, 93, 86, 84, 90, 1, 40, 73, 51, 22, 47, 84};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
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
    int distance = 98;
    int funds = 196;
    vector<int> position = {22, 62, 57, 54, 54, 89, 90, 92, 10, 88, 28, 78, 41, 61, 77, 93, 53};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int distance = 99;
    int funds = 495;
    vector<int> position = {83, 51, 33, 27, 67, 63, 69, 14, 36, 54, 62, 30, 40, 7, 99, 70, 4, 16, 62, 34, 33, 39, 27, 77, 76, 67, 26, 9, 50, 29, 12, 33, 32, 46, 60, 52, 9, 82, 66, 97, 36, 80};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int distance = 100;
    int funds = 49;
    vector<int> position = {28, 78, 37, 67, 90, 45, 34, 70, 28, 5, 63, 51, 2};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int distance = 100;
    int funds = 220;
    vector<int> position = {85, 5, 9, 68, 70, 67, 25, 58, 61, 73, 94, 78, 60, 48, 18, 81, 76, 96, 84, 9, 51, 95, 43, 20, 23, 48, 49, 40, 16, 5, 62, 0, 10, 38, 68, 47, 4, 59, 4};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int distance = 100;
    int funds = 44;
    vector<int> position = {98, 75, 92, 11, 93, 38, 54, 88, 88, 63};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int distance = 100;
    int funds = 66;
    vector<int> position = {58, 54, 63, 14, 17, 13, 39, 14, 67, 63, 92, 57, 79, 7, 68, 13, 40, 42, 5, 37, 27, 2, 22, 96, 53, 44, 67, 27, 7, 65, 6, 65, 85, 69, 45, 2, 83};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int distance = 100;
    int funds = 66;
    vector<int> position = {49, 12, 40, 73, 57, 47, 40, 70, 53, 48, 41, 56, 75, 43, 78, 37, 63, 88};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int distance = 100;
    int funds = 93;
    vector<int> position = {95, 34, 62, 59, 85, 31, 3, 53, 13, 53, 1, 28, 32, 41, 0, 55, 54, 41, 25, 6, 89, 32, 63, 30, 42, 6, 67, 4, 95, 36, 60, 89, 36, 22};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int distance = 100;
    int funds = 90;
    vector<int> position = {53, 84, 40, 66, 3, 41, 94, 1, 83, 95, 56, 2, 1, 47, 9, 56, 80, 38, 86, 88, 10, 18, 92, 71, 54, 51, 26, 56, 39, 40, 77, 92, 90, 16, 23, 93, 23, 84, 94, 5};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
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
    int distance = 100;
    int funds = 96;
    vector<int> position = {75, 45, 63, 84, 0, 8, 88, 53, 96, 98, 71, 87, 35, 92};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int distance = 100;
    int funds = 60;
    vector<int> position = {6, 43, 43, 10, 6, 10, 87, 43, 10, 6, 20, 10, 87, 6, 43, 6, 10, 3, 43, 20, 10, 6, 20, 20, 6, 43, 20, 10, 20, 10, 87};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int distance = 100;
    int funds = 80;
    vector<int> position = {42, 76, 99, 77, 42, 77, 16, 8, 42, 16, 8, 77, 76, 99, 99, 77, 42, 76, 16, 8, 8, 42, 77, 16, 16, 16, 77, 77, 76, 81, 8, 8, 53, 8, 77, 16, 42};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int distance = 100;
    int funds = 64;
    vector<int> position = {20, 20, 42, 30, 47, 8, 82, 30, 10, 20, 20, 30, 20, 42, 30, 30, 30, 20, 20, 42, 42, 20, 47, 82, 42, 42, 47, 8, 10};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int distance = 100;
    int funds = 84;
    vector<int> position = {44, 58, 58, 58, 44, 26, 26, 26, 4, 26, 4, 44, 4, 26, 4, 16, 26, 44, 44, 4, 4, 58, 44, 4, 58, 16, 44, 26, 16, 4, 16, 26, 44};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int distance = 100;
    int funds = 91;
    vector<int> position = {69, 96, 15, 15, 18, 18, 96, 69, 69, 85, 15, 96, 18, 15, 85, 85, 15, 85, 69, 18, 85, 18, 15, 1, 96, 1, 18, 85, 85, 18, 69, 85, 15, 1, 69, 15, 18, 96, 96};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int distance = 100;
    int funds = 27;
    vector<int> position = {9, 88, 17, 87, 17, 17, 9, 87, 80, 9, 87, 88, 88, 87, 88, 9, 9, 87, 17};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int distance = 100;
    int funds = 31;
    vector<int> position = {93, 59, 59, 59, 73, 34, 73, 75, 75, 87, 34, 59, 59, 34, 87, 87, 87, 34, 93, 73, 59, 87, 87, 59, 59, 87, 34, 87, 93};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int distance = 100;
    int funds = 16;
    vector<int> position = {35, 11, 57, 2, 11, 35, 57, 57, 11, 2, 57, 2, 11, 11, 11, 57, 11, 57, 57, 57, 11};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int distance = 100;
    int funds = 32;
    vector<int> position = {58, 81, 81, 58, 81, 13, 13, 81, 58, 13, 13, 58, 81, 13, 13, 13, 13, 13, 58, 58, 58, 81};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int distance = 100;
    int funds = 35;
    vector<int> position = {20, 32, 32, 20, 20, 73, 20, 20, 32, 73, 20, 57, 73, 73, 57, 57, 73, 20, 73, 20, 32, 20, 32, 73, 32};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int distance = 4;
    int funds = 4;
    vector<int> position = {2, 0, 2, 0, 4, 4, 4, 4, 3};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int distance = 8;
    int funds = 5;
    vector<int> position = {0, 0, 0, 0, 0, 8, 8, 8, 8, 8};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int distance = 1;
    int funds = 0;
    vector<int> position = {0};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int distance = 1;
    int funds = 0;
    vector<int> position = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int distance = 2;
    int funds = 0;
    vector<int> position = {2, 2, 0, 0};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int distance = 2;
    int funds = 1;
    vector<int> position = {2, 0, 2, 0};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int distance = 3;
    int funds = 0;
    vector<int> position = {0, 3};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int distance = 3;
    int funds = 1;
    vector<int> position = {0, 3};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int distance = 3;
    int funds = 2;
    vector<int> position = {0, 3};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int distance = 1;
    int funds = 0;
    vector<int> position = {0, 1, 0, 1, 1, 1, 0, 1, 0};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int distance = 4;
    int funds = 39031;
    vector<int> position = {2, 0, 1, 4, 0, 4, 2, 1, 3, 1};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int distance = 1;
    int funds = 1;
    vector<int> position = {1, 0, 1};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int distance = 5;
    int funds = 0;
    vector<int> position = {2, 3, 0, 1, 3, 0, 2, 0};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
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
    int distance = 6;
    int funds = 4;
    vector<int> position = {4, 2, 0, 0, 6, 2, 6, 4, 6};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int distance = 72;
    int funds = 16;
    vector<int> position = {38, 53, 35, 37, 43, 37};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int distance = 27;
    int funds = 3;
    vector<int> position = {18, 3, 10, 27, 12, 25, 22, 24};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int distance = 69;
    int funds = 71;
    vector<int> position = {55, 36, 37};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int distance = 6;
    int funds = 6;
    vector<int> position = {2, 2, 4};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int distance = 100;
    int funds = 2;
    vector<int> position = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int distance = 1;
    int funds = 1000;
    vector<int> position = {0, 1};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int distance = 100;
    int funds = 0;
    vector<int> position = {0};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int distance = 20;
    int funds = 20;
    vector<int> position = {1, 1, 1, 1, 1, 1, 1, 1, 1, 6, 11, 16};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int distance = 7;
    int funds = 0;
    vector<int> position = {2, 3, 5};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int distance = 4;
    int funds = 0;
    vector<int> position = {1};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int distance = 11;
    int funds = 1;
    vector<int> position = {3, 4, 8};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int distance = 10;
    int funds = 3;
    vector<int> position = {1, 2, 3};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
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
    int distance = 16;
    int funds = 8;
    vector<int> position = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int distance = 100;
    int funds = 139;
    vector<int> position = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int distance = 100;
    int funds = 0;
    vector<int> position = {1, 10, 40, 90};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int distance = 10;
    int funds = 1;
    vector<int> position = {1, 3, 5, 7, 9};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int distance = 100;
    int funds = 5000;
    vector<int> position = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int distance = 1;
    int funds = 0;
    vector<int> position = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int distance = 2;
    int funds = 0;
    vector<int> position = {1, 1, 1, 1};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int distance = 10;
    int funds = 2;
    vector<int> position = {3, 4, 5, 6, 7, 8, 9};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int distance = 5;
    int funds = 1;
    vector<int> position = {1};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int distance = 5;
    int funds = 0;
    vector<int> position = {0, 1, 1, 2, 2, 3, 3, 4, 4, 5};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int distance = 10;
    int funds = 0;
    vector<int> position = {3, 7, 9};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int distance = 100;
    int funds = 17;
    vector<int> position = {51, 32, 86, 42, 98, 14};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int distance = 100;
    int funds = 220;
    vector<int> position = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 100};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int distance = 7;
    int funds = 0;
    vector<int> position = {0, 4};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
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
    int distance = 100;
    int funds = 2;
    vector<int> position = {56, 43};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int distance = 2;
    int funds = 0;
    vector<int> position = {2};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int distance = 30;
    int funds = 1;
    vector<int> position = {5, 15, 25};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
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
    int distance = 8;
    int funds = 0;
    vector<int> position = {2, 7, 5, 6, 4, 5, 0, 2, 3, 4, 7, 6, 3, 5, 8, 5, 6, 2, 4, 4, 0, 1, 4, 3, 7, 8, 8, 2, 3, 4, 6, 1, 5, 0};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int distance = 20;
    int funds = 0;
    vector<int> position = {3, 7, 11, 15, 16};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int distance = 19;
    int funds = 1;
    vector<int> position = {4, 10, 15};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int distance = 100;
    int funds = 0;
    vector<int> position = {0, 0, 0, 0, 0};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int distance = 10;
    int funds = 2;
    vector<int> position = {2, 5};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int distance = 100;
    int funds = 0;
    vector<int> position = {0, 50, 100};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int distance = 100;
    int funds = 6;
    vector<int> position = {2, 56, 7, 9, 11, 79, 96, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 8, 9, 11, 87, 87, 87, 66, 62};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int distance = 100;
    int funds = 0;
    vector<int> position = {50, 100};
    ConnectTheCities* pObj = new ConnectTheCities();
    clock_t start = clock();
    int result = pObj->minimalRange(distance, funds, position);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=10786&pm=8185
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
 
template<class T> inline void checkmin(T &a,T b){if(b<a) a=b;}
 
class ConnectTheCities
{
public:
  int n,D,key;
  int A[110],f[110][110];
  int solve(int v,int l)
  {
    if (v==n) return (abs(l-D)<=key)?0:1000000;
    int &ret=f[v][l];
    if (ret!=-1) return ret;
    ret=1000000;
    for (int i=l;i<=D;i++) if (abs(i-l)<=key)
    {
      checkmin(ret,solve(v+1,i)+abs(i-A[v]));
    }
    return ret;
  }
  int minimalRange(int distance, int funds, vector <int> position)
  {
    D=distance;
    n=position.size();
    for (int i=0;i<n;i++) A[i]=position[i];
    sort(A,A+n);
    int H=-1,T=110;
    while (H+1<T)
    {
      key=(H+T)/2;
      memset(f,255,sizeof(f));
      int rd=solve(0,0);
      if (rd<=funds) T=key;
      else H=key;
    }
    return T;
  }
};

********************************************************************************
*******************************************************************************/