/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11031
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

class TheAirTripDivTwo {
public:
    int find(vector<int> flights, int fuel);
};

int TheAirTripDivTwo::find(vector<int> flights, int fuel) {
    int ret;
    return ret;
}


int test0() {
    vector<int> flights = {1, 2, 3, 4, 5, 6, 7};
    int fuel = 10;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> flights = {7, 6, 5, 4, 3, 2, 1};
    int fuel = 10;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
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
    vector<int> flights = {1};
    int fuel = 1000;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> flights = {8, 7, 7, 1, 5, 7, 9};
    int fuel = 21;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> flights = {1, 3, 3, 6, 6, 9, 9};
    int fuel = 30;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> flights = {3, 1, 8, 1, 6, 1, 5};
    int fuel = 37;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> flights = {5, 1, 1, 1, 3, 9, 1};
    int fuel = 4;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> flights = {11, 61, 99, 65, 57, 7, 44, 73, 25, 84, 69, 63, 29, 17, 31, 7, 73, 27, 34, 91, 65, 1, 34, 7, 52, 23, 91, 37, 49, 35, 11, 17, 45, 37, 73, 5, 99, 68, 29, 26, 81, 81, 52, 77, 69, 41, 88};
    int fuel = 1;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> flights = {83, 1, 76, 39, 89, 1, 81, 55, 100, 79, 3, 48, 85, 85, 13, 1, 49, 65, 95, 85, 93, 45, 85, 71, 53, 86, 81, 43, 23, 48, 5, 14, 96, 1, 97, 77, 11, 1, 17, 45, 13, 10, 91, 85, 2, 97, 81};
    int fuel = 423;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> flights = {79, 27, 73, 1, 51, 41, 51, 19, 19, 85, 25, 36, 17, 29, 76, 97, 37, 53, 25, 55, 73, 24, 97, 70, 14, 89, 67, 5, 57, 35, 16, 29, 31, 19, 6, 41, 65, 93, 71, 70, 70, 13, 19, 6, 98, 15, 36};
    int fuel = 489;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> flights = {41, 33, 61, 25, 1, 81, 63, 56, 82, 56, 99, 61, 61, 1, 51, 61, 76, 33, 45, 25, 87, 55, 56, 13, 61, 76, 71, 58, 17, 61, 53, 81, 9, 1, 95, 99, 76, 45, 1, 53, 77, 18, 51, 85, 89, 53, 41};
    int fuel = 263;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> flights = {21, 34, 1, 77, 85, 16, 87, 37, 82, 1, 48, 76, 17, 76, 57, 45, 63, 89, 5, 40, 85, 34, 17, 41, 67, 95, 26, 61, 81, 81, 51, 66, 73, 80, 53, 51, 43, 1, 9, 86, 9, 41, 71, 59, 51, 21, 34};
    int fuel = 81;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> flights = {17, 97, 38, 69, 41, 5, 70, 65, 77, 33, 1, 1, 76, 25, 5, 11, 79, 58, 24, 89, 4, 19, 61, 21, 31, 67, 16, 61, 53, 89, 81, 63, 8, 68, 76, 51, 92, 17, 11, 53, 22, 41, 37, 1, 7, 45, 26};
    int fuel = 148;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
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
    vector<int> flights = {33, 86, 53, 26, 22, 75, 1, 73, 56, 29, 89, 57, 6, 53, 1, 97, 71, 46, 3, 83, 30, 81, 69, 69, 88, 51, 23, 71, 88, 17, 14, 47, 23, 47, 37, 1, 45, 5, 51, 3, 92, 45, 54, 40, 53, 36, 29};
    int fuel = 709;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> flights = {26, 93, 93, 29, 57, 37, 85, 26, 85, 1, 97, 50, 73, 15, 55, 47, 75, 27, 93, 89, 47, 5, 9, 81, 27, 81, 33, 81, 89, 31, 41, 71, 45, 85, 63, 3, 23, 77, 41, 36, 83, 14, 35, 41, 47, 52, 91};
    int fuel = 943;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> flights = {76, 30, 21, 36, 63, 89, 36, 36, 13, 73, 26, 69, 54, 9, 41, 81, 61, 77, 55, 74, 1, 11, 25, 49, 83, 81, 1, 50, 47, 99, 35, 1, 60, 37, 97, 86, 52, 76, 13, 45, 21, 97, 21, 7, 97, 37, 23};
    int fuel = 949;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> flights = {64, 63, 71, 95, 76, 81, 55, 61, 10, 81, 51, 39, 61, 82, 39, 9, 59, 16, 41, 51, 41, 56, 21, 51, 17, 57, 61, 29, 81, 6, 56, 7, 79, 97, 60, 47, 52, 43, 90, 49, 85, 69, 73, 21, 47, 65, 30};
    int fuel = 957;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> flights = {3, 85, 28, 41, 63, 73, 41, 1, 81, 81, 37, 83, 60, 81, 73, 90, 37, 1, 51, 33, 9, 30, 81, 41, 5, 32, 21, 77, 43, 63, 29, 91, 68, 97, 37, 41, 3, 96, 57, 55, 66, 53, 91, 92, 3, 13, 91};
    int fuel = 976;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> flights = {51, 31, 18, 11, 96, 71, 33, 41, 94, 66, 85, 82, 99, 51, 23, 49, 29, 59, 26, 77, 85, 61, 77, 21, 69, 98, 69, 25, 83, 40, 92, 61, 98, 5, 85, 11, 83, 97, 45, 29, 46, 25, 41, 56, 51, 93, 76};
    int fuel = 103;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
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
    vector<int> flights = {56, 15, 65, 21, 29, 44, 46, 9, 9, 41, 13, 41, 78, 21, 82, 25, 24, 55, 76, 93, 96, 13, 16, 28, 24, 21, 81, 45, 83, 78, 41, 45, 11, 26, 3, 69, 1, 63, 8, 8, 17, 33, 1, 97, 85, 21, 95};
    int fuel = 185;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> flights = {60, 60, 98, 64, 56, 56, 93, 72, 74, 83, 68, 62, 78, 66, 80, 56, 72, 76, 83, 90, 64, 50, 83, 56, 51, 72, 90, 86, 98, 84, 60, 66, 94, 86, 72, 54, 98, 67, 78, 75, 80, 80, 51, 76, 68, 90, 87};
    int fuel = 909;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> flights = {80, 60, 52, 59, 66, 64, 94, 62, 97, 50, 78, 80, 96, 92, 50, 97, 75, 84, 80, 50, 94, 94, 82, 95, 92, 84, 54, 76, 85, 99, 51, 90, 84, 54, 50, 70, 62, 50, 98, 84, 88};
    int fuel = 987;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> flights = {76, 89, 70, 70, 69, 54, 54, 50, 63, 68, 80, 90, 50, 86, 78, 85, 69, 74, 84, 65, 66, 88, 84, 52, 97, 68, 64, 75, 50, 55, 96, 70, 65, 72, 64, 68, 92, 56, 57, 66, 73};
    int fuel = 961;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> flights = {54, 50, 98, 62, 94, 98, 60, 94, 56, 75, 65, 50, 84, 80, 52, 82, 50, 50, 96, 75, 60, 60, 60, 62, 55, 86, 75, 51, 52, 70, 91, 66, 92, 70, 88, 75, 60, 55, 64, 50, 70, 84, 82, 52, 76, 60};
    int fuel = 926;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> flights = {91, 56, 70, 60, 74, 86, 82, 82, 93, 75, 93, 95, 51, 54, 58, 75, 85, 54, 55, 99, 63, 60, 50, 88, 66, 60, 50, 59, 50, 92, 65, 70, 91, 90, 68, 90, 74, 50, 58, 54, 68, 54, 58, 72, 70};
    int fuel = 904;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> flights = {56, 72, 60, 74, 78, 56, 75, 94, 50, 79, 82, 58, 83, 50, 67, 78, 70, 69, 58, 98, 59, 80, 52, 50, 75, 80, 86, 70, 53, 63, 89, 90, 98, 66, 55, 78, 88, 82, 60, 65, 92};
    int fuel = 908;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> flights = {80, 52, 63, 88, 88, 62, 64, 66, 58, 80, 64, 99, 54, 50, 96, 74, 66, 57, 67, 75, 58, 62, 50, 75, 96, 96, 95, 86, 50, 66, 96, 72, 75, 54, 60, 98, 72, 90, 50, 90, 64};
    int fuel = 943;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> flights = {60, 62, 57, 56, 83, 99, 97, 50, 78, 95, 76, 50, 54, 82, 80, 70, 68, 65, 90, 94, 80, 64, 52, 88, 60, 53, 66, 65, 90, 90, 50, 51, 66, 50, 52, 90, 70, 92, 93, 98, 50, 75};
    int fuel = 944;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> flights = {50, 80, 94, 80, 74, 80, 76, 75, 58, 70, 96, 51, 88, 70, 70, 75, 94, 90, 72, 84, 60, 72, 96, 82, 50, 81, 96, 90, 56, 82, 64, 78, 50, 76, 92, 64, 54, 82, 94, 75, 50, 90, 50, 75, 75};
    int fuel = 973;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> flights = {64, 70, 50, 70, 72, 94, 84, 75, 50, 58, 84, 96, 54, 98, 50, 64, 92, 56, 52, 94, 53, 80, 86, 62, 60, 72, 84, 90, 50, 56, 79, 68, 84, 86, 70, 96, 82, 87, 70, 62, 68, 86, 85, 70, 76};
    int fuel = 939;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> flights = {1, 1, 9, 5, 7, 7, 4, 3, 5, 4, 9, 3, 9, 7, 1, 7, 3, 7, 4, 1, 5, 1, 4, 7, 2, 3, 1, 7, 9, 5, 1, 7, 5, 7, 3, 5, 9, 8, 9, 6, 1, 1, 2, 7, 9, 1, 8};
    int fuel = 909;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> flights = {1, 1, 3, 10, 7, 5, 5, 3, 8, 1, 9, 1, 7, 3, 1, 8, 6, 5, 1, 1, 5, 5, 3, 6, 3, 5, 5, 7, 6, 10, 2, 1, 5, 5, 1, 1, 3, 1, 9, 5, 9};
    int fuel = 987;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> flights = {7, 10, 1, 1, 10, 5, 5, 1, 4, 9, 1, 1, 1, 7, 9, 6, 10, 5, 5, 6, 7, 9, 5, 3, 8, 9, 5, 6, 1, 6, 7, 1, 6, 3, 5, 9, 3, 7, 8, 7, 4};
    int fuel = 961;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> flights = {5, 1, 9, 3, 5, 9, 1, 5, 7, 6, 6, 1, 5, 1, 3, 3, 1, 1, 7, 6, 1, 1, 1, 3, 6, 7, 6, 2, 3, 1, 2, 7, 3, 1, 9, 6, 1, 6, 5, 1, 1, 5, 3, 3, 7, 1};
    int fuel = 926;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> flights = {2, 7, 1, 1, 5, 7, 3, 3, 4, 6, 4, 6, 2, 5, 9, 6, 6, 5, 6, 10, 4, 1, 1, 9, 7, 1, 1, 10, 1, 3, 6, 1, 2, 1, 9, 1, 5, 1, 9, 5, 9, 5, 9, 3, 1};
    int fuel = 904;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> flights = {11, 61, 99, 65, 57, 7, 44, 73, 25, 84, 69, 63, 29, 17, 31, 7, 73, 27, 34, 91, 65, 1, 34, 7, 52, 23, 91, 37, 49, 35, 11, 17, 45, 37, 73, 5, 99, 68, 29, 26, 81, 81, 52, 77, 69, 41, 88};
    int fuel = 967;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> flights = {81, 11, 53, 10, 17, 65, 95, 13, 48, 1, 79, 81, 97, 93, 1, 48, 76, 85, 81, 1, 45, 45, 83, 96, 43, 85, 55, 77, 86, 100, 2, 91, 85, 5, 1, 71, 13, 1, 49, 85, 89};
    int fuel = 954;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> flights = {27, 90, 71, 71, 70, 5, 55, 1, 14, 69, 31, 41, 1, 37, 29, 36, 70, 25, 35, 66, 67, 89, 85, 53, 98, 19, 65, 76, 1, 6, 97, 71, 16, 73, 15, 19, 93, 57, 8, 17, 24};
    int fuel = 1000;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> flights = {55, 1, 99, 63, 95, 99, 61, 45, 57, 76, 66, 1, 85, 81, 53, 33, 51, 1, 97, 76, 61, 11, 61, 13, 56, 87, 76, 52, 53, 71, 42, 17, 93, 21, 89, 76, 61, 56, 65, 51, 21, 85, 33, 53, 77, 61};
    int fuel = 970;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> flights = {42, 57, 21, 11, 75, 37, 83, 33, 44, 26, 94, 46, 52, 5, 9, 26, 36, 5, 56, 100, 14, 61, 1, 89, 17, 61, 51, 10, 51, 43, 16, 71, 42, 41, 69, 41, 75, 1, 9, 5, 69, 5, 59, 73, 21};
    int fuel = 934;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> flights = {611, 61, 199, 165, 357, 607, 744, 73, 125, 784, 269, 563, 529, 417, 31, 907, 573, 227, 434, 291, 365, 501, 134, 7, 252, 523, 291, 137, 749, 135, 811, 217, 545, 437, 873, 605, 799, 868, 529, 226, 981, 681, 852, 677, 369, 41, 388};
    int fuel = 871;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> flights = {883, 901, 576, 239, 89, 701, 181, 255, 900, 279, 803, 948, 385, 985, 213, 401, 949, 565, 795, 85, 793, 45, 685, 271, 253, 686, 481, 943, 23, 748, 105, 414, 396, 201, 97, 277, 111, 601, 517, 345, 313, 310, 191, 585, 2, 997, 681};
    int fuel = 883;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> flights = {579, 27, 373, 701, 251, 541, 751, 619, 219, 885, 425, 236, 617, 429, 876, 997, 37, 553, 25, 655, 73, 424, 897, 70, 914, 189, 267, 105, 657, 835, 116, 629, 31, 719, 506, 241, 265, 793, 971, 770, 270, 513, 119, 806, 798, 915, 636};
    int fuel = 979;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> flights = {941, 433, 961, 725, 701, 681, 463, 156, 482, 556, 499, 961, 561, 601, 551, 561, 876, 633, 745, 725, 887, 55, 756, 713, 161, 376, 571, 358, 717, 361, 853, 781, 309, 401, 595, 799, 376, 445, 901, 753, 877, 818, 751, 885, 89, 353, 641};
    int fuel = 941;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
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
    vector<int> flights = {521, 734, 301, 177, 785, 516, 987, 137, 182, 1, 848, 676, 817, 676, 657, 845, 663, 689, 605, 440, 685, 734, 317, 841, 667, 295, 26, 161, 981, 81, 151, 266, 473, 580, 353, 651, 843, 301, 209, 486, 109, 741, 271, 159, 551, 521, 634};
    int fuel = 520;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
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
    vector<int> flights = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    int fuel = 1000;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
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
    vector<int> flights = {1000};
    int fuel = 1000;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
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
    vector<int> flights = {999};
    int fuel = 1000;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> flights = {1000};
    int fuel = 999;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
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
    vector<int> flights = {5};
    int fuel = 1;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
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
    vector<int> flights = {1};
    int fuel = 1;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> flights = {1, 2, 3, 4, 5, 6, 7};
    int fuel = 10;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> flights = {2};
    int fuel = 1;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
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
    vector<int> flights = {1, 2, 3};
    int fuel = 6;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> flights = {1, 1, 1, 1};
    int fuel = 1000;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> flights = {25};
    int fuel = 5;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
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
    vector<int> flights = {5};
    int fuel = 5;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> flights = {1, 2, 3};
    int fuel = 100;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> flights = {10};
    int fuel = 1;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> flights = {1, 2, 3};
    int fuel = 3;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> flights = {2, 1};
    int fuel = 10;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> flights = {1000};
    int fuel = 10;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> flights = {4};
    int fuel = 5;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
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
    vector<int> flights = {100};
    int fuel = 1;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> flights = {5, 2};
    int fuel = 10;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
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
    vector<int> flights = {1};
    int fuel = 1000;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> flights = {100, 100};
    int fuel = 300;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> flights = {1, 1, 1, 1};
    int fuel = 5;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
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
    vector<int> flights = {2, 2};
    int fuel = 2;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> flights = {1, 2, 3, 4, 5};
    int fuel = 100;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> flights = {1, 1, 1};
    int fuel = 3;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> flights = {9, 7, 8};
    int fuel = 17;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> flights = {7, 3};
    int fuel = 5;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
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
    vector<int> flights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int fuel = 55;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> flights = {6};
    int fuel = 5;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> flights = {1, 1};
    int fuel = 100;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> flights = {17};
    int fuel = 15;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> flights = {3};
    int fuel = 4;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> flights = {1};
    int fuel = 10;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
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
    vector<int> flights = {1, 1, 1};
    int fuel = 2;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> flights = {1, 2};
    int fuel = 1;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> flights = {5, 6};
    int fuel = 11;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> flights = {7, 1, 5, 1, 1, 2, 1};
    int fuel = 10;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> flights = {1, 1, 1, 2};
    int fuel = 1000;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> flights = {1, 2};
    int fuel = 1000;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> flights = {12};
    int fuel = 10;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
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
    vector<int> flights = {1, 1, 3, 1, 1, 1, 1};
    int fuel = 10;
    TheAirTripDivTwo* pObj = new TheAirTripDivTwo();
    clock_t start = clock();
    int result = pObj->find(flights, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22890621&rd=14158&pm=11031
********************************************************************************
#include <iostream> 
#include <vector> 
 
using namespace std; 
 
class TheAirTripDivTwo 
{ 
      public: 
      int find ( vector <int> flights , int fuel ) 
      { 
         
          int cnt = 0; 
          int add = flights[0]; 
           
          for(int i = 0 ; i < flights.size() ; i++){ 
                  if ( add <= fuel ) { 
                     cnt++; 
                  } 
                  add = add + flights[i + 1]; 
          } 
          return cnt; 
       } 
};

********************************************************************************
*******************************************************************************/