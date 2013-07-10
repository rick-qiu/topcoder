/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4501
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

class AirTravel {
public:
    double shortestTrip(vector<int> latitude, vector<int> longitude, vector<string> canTravel, int origin, int destination);
};

double AirTravel::shortestTrip(vector<int> latitude, vector<int> longitude, vector<string> canTravel, int origin, int destination) {
    double ret;
    return ret;
}


int test0() {
    vector<int> latitude = {0, 0, 70};
    vector<int> longitude = {90, 0, 45};
    vector<string> canTravel = {"2", "0 2", "0 1"};
    int origin = 0;
    int destination = 1;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = 10612.237799994255;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> latitude = {0, 0, 70};
    vector<int> longitude = {90, 0, 45};
    vector<string> canTravel = {"1 2", "0 2", "0 1"};
    int origin = 0;
    int destination = 1;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = 6283.185307179586;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> latitude = {0, 30, 60};
    vector<int> longitude = {25, -130, 78};
    vector<string> canTravel = {"1 2", "0 2", "1 2"};
    int origin = 0;
    int destination = 0;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> latitude = {0, 20, 55};
    vector<int> longitude = {-20, 85, 42};
    vector<string> canTravel = {"1", "0", "0"};
    int origin = 0;
    int destination = 2;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> latitude = {77, 32, -63, -45, -29, -72, -62, 29, -77, -50, -84};
    vector<int> longitude = {4, -51, 67, -66, -21, -13, -70, -85, -81, 17, -25};
    vector<string> canTravel = {"0 1 6 7 9 10", "2 3 4 8", "0 1 3 5 6 10", "1 5 6 9 10", "0 1 5 10", "2 3 6 8", "0 1 2 5 7 8", "0 1 4 5 6 8", "3 10", "2 8 9", "0 2 3 10"};
    int origin = 8;
    int destination = 8;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> latitude = {53, 17, 0, -87, -53, -73, 88, 62, -69, -9, 76, -32, -72, -2, -72, -72};
    vector<int> longitude = {-84, -67, -67, -7, 69, -83, -42, 29, 35, 25, 19, -1, 69, -44, -10, -65};
    vector<string> canTravel = {"3 4 7 10", "4 5 8 9 10 14", "2 7 9 11", "0 2 3 4 6 7 8 11 12 14", "2 3 4 5 7 8 9 10 11 14", "0 1 3 4 5 6 13 14 15", "0 3 4 6 7 8 9 10 12 13 14", "2 3 4 6 9 10 11 12 13 15", "0 3 6 11 14 15", "0 2 4 5 6 9 10 11 15", "2 3 4 7 9 10 11 12 13 14 15", "0 3 4 5 7 8 12 13", "1 2 4 6 8 12 15", "1 2 5 8 9 10 13", "3 4 6 9 10 11 13 14 15", "1 2 3 9 12 13 14"};
    int origin = 15;
    int destination = 8;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = 2476.4572913155125;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> latitude = {88, 17, -80, 39, 55, 56};
    vector<int> longitude = {29, -13, -29, -16, 0, -45};
    vector<string> canTravel = {"0 2", "1 2 5", "0 2 4", "1 2 3", "0 1 2 3", "2 3 5"};
    int origin = 2;
    int destination = 1;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = 12239.008429056397;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> latitude = {66, 26, -11, -32, 48, -27, -32, 78, -7, 89, 0, -27, 18, 27, 7, -7, 61, -11, 71, -8};
    vector<int> longitude = {82, -74, -55, 89, -47, 50, 48, 35, -61, -60, -25, 59, -49, 54, -51, -43, -64, 21, -37, 32};
    vector<string> canTravel = {"0 7 9 10 12 15", "0 1 5 6 8 9 10 13 16 17 18", "1 3 5 7 8 10 11 12 19", "0 4 7 8 9 10 11 15 16 17 19", "0 1 2 4 5 8 10 11 12 15 18", "4 6 7 9 10 11 12 17 19", "1 2 3 7 10 11 12 13 17", "1 2 5 10 12 19", "1 2 4 5 6 7 8 9 10 11 13 18", "4 10 12 14 15 16 17 19", "0 4 5 6 9 12 13 14 16", "3 6 7 10 13 16 17 18", "0 1 2 4 7 14 15 16 18", "1 3 4 6 7 9 10 11 13 16 17 19", "0 2 3 4 8 11 12 15 16 19", "0 2 4 5 7 11 14 15 17 19", "1 2 3 9 10 14 17 18", "0 1 2 3 4 5 8 10 11 12 15 18", "0 7 11 14 16", "0 3 4 7 8 12 14 16 17 18"};
    int origin = 5;
    int destination = 3;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = 2409.5245773235165;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> latitude = {52, -20, 86};
    vector<int> longitude = {-9, -90, -24};
    vector<string> canTravel = {"0 1 2", "2", "1"};
    int origin = 2;
    int destination = 0;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> latitude = {-20, 43, 20, 82, 89};
    vector<int> longitude = {63, 55, -82, 79, 18};
    vector<string> canTravel = {"0 1 3", "0 1", "1 2 3", "0 1", "1 2 3 4"};
    int origin = 1;
    int destination = 1;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> latitude = {-5, 27, -37, -86, -42, 77, 39, -46, -14, -41, 1, 27, -68, 33, 85, -19};
    vector<int> longitude = {35, 47, 26, 80, 20, 22, -9, 14, 50, -63, -76, -34, -89, -15, 22, 71};
    vector<string> canTravel = {"1 2 3 8 10 11 13 14 15", "0 3 9 13 14 15", "0 2 9 11 14", "0 1 4 7 9 11 12 13 14 15", "3 4 6 7 9 12", "0 3 8 9 11 13", "1 5 9 10 13 14", "0 1 9 10 12 13 15", "0 2 3 6 7 9 11 12", "1 3 4 5 7 8 10 11 14", "1 2 8 10 11 14", "0 1 6 8 10 11 12 13 15", "1 2 3 5 6 10 12 14 15", "1 2 3 5 6 8 9 10 13 14", "5 8 11", "1 6 7 8 9 10 11 12 15"};
    int origin = 15;
    int destination = 15;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> latitude = {60, -66, 60, -31, 53, -4, -23, -33, -42, 88, -33, -35, -78, 0, -49, -15};
    vector<int> longitude = {-18, 45, 90, 61, -40, 90, 68, 12, -48, 80, 65, -8, -37, 59, -48, -8};
    vector<string> canTravel = {"0 2 3 6 8 9 10 14 15", "2 3 5 6 7 9 10 12", "0 3 4 5 8 10 11 13 14 15", "1 2 5 7 9 14", "0 3 5 6 7 8 14", "0 1 4 6 10 11 13 14", "2 4 5 6 8 9 10 12 13 14", "6 8 12 13 14", "0 2 5 6 7 8 10 11 14 15", "0 1 2 3 4 5 6 11 13 14 15", "0 2 3 4 5 6 7 8 10 13", "0 3 4 7 8 9 11 13 14 15", "1 2 4 6 7 8 9 12 13 15", "0 2 3 5 7 8 9 11", "0 1 5 6 7 10 11 12 13 15", "5 6 9 11 13"};
    int origin = 3;
    int destination = 7;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = 2877.9825503801253;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> latitude = {-40, 73, -47, 56};
    vector<int> longitude = {52, -4, -7, 4};
    vector<string> canTravel = {"1 3", "1 2 3", "1 2 3", "1 2 3"};
    int origin = 3;
    int destination = 1;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = 1208.401739001028;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> latitude = {-28, -71, -40, -30, 26, 38, -53};
    vector<int> longitude = {17, 85, 26, 73, -49, -71, -22};
    vector<string> canTravel = {"1 3 5 6", "2 3 4", "0 1 2 4", "0 3 4", "0 1 3 4 5 6", "1 2 3 4 6", "1 6"};
    int origin = 1;
    int destination = 1;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> latitude = {46, 20, 35, 77, -7, -72, 25, -78, -29, 47, -87, -67, 57};
    vector<int> longitude = {23, 44, -56, -58, -61, 6, 73, -84, 62, 90, -46, -86, -77};
    vector<string> canTravel = {"3 4 6 10 12", "1 2 4 12", "5 6 8", "0 5 6 7 9 11 12", "4 6 7 8 12", "1 2 3 4 6 7 8 12", "0 4 5 7 9", "1 2 3 4 5 7 10 12", "3 8 11", "0 1 4 5 8 10", "0 1 3 5 6 7 9 10 11 12", "0 3 5 6 7 8 9 10 12", "1 4 5 8 9 11 12"};
    int origin = 9;
    int destination = 8;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = 5591.335303331194;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> latitude = {22, -20, 10, 21, 84, 46};
    vector<int> longitude = {9, 22, -52, -11, -4, -66};
    vector<string> canTravel = {"0 1 2 5", "2 5", "2 3 5", "1 4 5", "0 2", "1 4"};
    int origin = 1;
    int destination = 0;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = 14417.45623332333;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> latitude = {16, -8};
    vector<int> longitude = {-81, -31};
    vector<string> canTravel = {"0", "0"};
    int origin = 1;
    int destination = 1;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> latitude = {-82, -14, -9, -29, -13, 58, 63, 16, 15, 74, -58, -74, 66, 80, 39, 57, 79, -51, 24};
    vector<int> longitude = {-81, 1, 84, -31, -14, -48, -7, 90, -59, 88, -6, -8, 28, -45, 58, -51, -70, 63, -25};
    vector<string> canTravel = {"3 7 9 11 14 18", "0 1 2 5 6 7 9 13 14 16 18", "4 6 7 9 11 13 14 15 17 18", "0 1 3 6 7 8 12 13 14 16 18", "2 4 6 8 12 17", "0 2 6 7 8 10 13 14 16 18", "1 3 4 5 7 9 10 13", "2 3 4 5 6 11 13 14 17", "3 5 9 11 12 13 14 15 18", "1 2 3 4 5 7 8 11 12 13 18", "2 3 6 7 10 13 14 15 16 17", "0 1 2 4 5 6 9 10 13 16 17 18", "4 6 7 16 17 18", "2 4 7 8 10 13 14 15 16 17", "0 7 10 12 15 17 18", "1 2 4 5 6 7 8 10 11 13 14", "0 2 3 4 5 6 7 8 10 11 12 13 14 15", "0 2 3 4 5 7 8 9 10 11 12 13 15 18", "1 2 3 4 7 9 11 12 15 16"};
    int origin = 9;
    int destination = 16;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = 1993.8025338562802;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> latitude = {-17, 50, -62, -3, -39, 89, -46, -36, 68, -30, -76};
    vector<int> longitude = {-14, 64, 25, 46, 76, -77, -70, -57, -29, 79, -23};
    vector<string> canTravel = {"0 4 10", "0 1 2 5 9", "0 1 2 3 5 6 7 8 9", "5 6 8 9", "0 2 5 6 7 8", "1 2 3 6", "0 1 5 10", "0 1 2 3 4 5 7 9 10", "1 3 5 6 7 8 9 10", "1 2 3 4 5 6", "1 2 4 8"};
    int origin = 1;
    int destination = 7;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = 11962.040343248767;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> latitude = {2, -87, 74, -13};
    vector<int> longitude = {86, 83, -29, 30};
    vector<string> canTravel = {"1 3", "0 2", "1", "0"};
    int origin = 2;
    int destination = 0;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = 17723.943245668233;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> latitude = {-50, 34, 78, 87, -8, -32};
    vector<int> longitude = {-42, 1, -1, 17, 5, 42};
    vector<string> canTravel = {"0 1", "0 4", "0 1 2 3 5", "1 2 5", "0 1 2 4", "2 3 4"};
    int origin = 3;
    int destination = 5;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = 8326.810439923662;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> latitude = {19, -40, 46, -37, -7, 2, 79, -22, 14, -30, -54};
    vector<int> longitude = {22, 86, -90, 65, 73, 16, -88, -7, -20, -4, 6};
    vector<string> canTravel = {"1 2 4 5 8 10", "0 3 4 6 7 9", "0 3 6 7 9", "0 1 2 4 6 10", "0 4 5 6 7 8 9 10", "2 6 7 9 10", "5 6 8 9", "2 4 7 8 9 10", "1 2 4 5 7 9", "2 3 4 6 7 8 9", "3 7 9 10"};
    int origin = 5;
    int destination = 8;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = 4961.110536291824;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> latitude = {-52, -45, 19, -77, -47, -13, 0};
    vector<int> longitude = {-31, 78, -38, -23, 15, 52, -66};
    vector<string> canTravel = {"1", "0 2 4", "0 1 2 3 5", "0 6", "6", "0 1 4 6", "0 1 2 3 4"};
    int origin = 3;
    int destination = 2;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = 7953.897459943442;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> latitude = {-45, -75, -29, 46, 35, -43, 13, -82, -76, 7};
    vector<int> longitude = {29, -46, -29, -6, -82, 60, 12, -84, 55, -14};
    vector<string> canTravel = {"1 4 5 7 8", "2 4 5 7 8", "4 6 7 9", "2 3 8", "0 2 3 4 9", "1 2 4 5 7 8", "3 6 7 9", "3 4 5 6 8 9", "0 2 6 9", "1 4 6 7 9"};
    int origin = 4;
    int destination = 7;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = 9622.559067480373;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> latitude = {83, -72, -9, -46, 56, 86, 60, -26, 77, -1, 72, 6, 2, 25, -85, 37, 17, 67, -61, -75};
    vector<int> longitude = {-33, -34, -52, -84, -9, -46, 32, -72, -66, 50, 8, -24, 80, 54, -10, -84, -76, -55, -87, -48};
    vector<string> canTravel = {"1 3 7 8 14 15 16 19", "0 1 2 8 10 12 14 15 18 19", "0 1 2 3 4 11 12 13 14 15 17 18", "0 1 5 7 8 9 10 12 18 19", "0 3 5 7 11 12 13 15 17 19", "0 1 3 6 8 12 13 16 18 19", "0 1 3 5 6 8 9 12 13 14 16 17", "0 6 11 15 17", "1 4 5 7 8 9 10 11 13 17 18 19", "0 1 2 4 5 8 9 11 17", "0 3 4 6 10 11 13 15 16 17", "1 2 4 6 7 8 9 10 13 14 16 17 18", "0 1 2 3 5 8 9 10 11 12 14 15 16 19", "3 5 7 8 10 11 13 14", "3 4 6 9 10 11 12 13 14 17 19", "0 4 5 6 7 11 13 14 15 18", "0 1 2 5 6 10 11 16 17", "1 4 13 17 18 19", "1 2 3 4 5 6 8 9 10 11 12 13 17 18", "0 1 3 5 11 12 14 15 16 17 19"};
    int origin = 14;
    int destination = 9;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = 6039.205135480922;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> latitude = {41, -63, -82, 47, 24, -10, -20, -25, -49, 37, 39, -33, 57, 63, 61, 0, 59, -23, 64};
    vector<int> longitude = {84, -59, -26, -78, -77, 57, 43, -49, 74, 16, 60, 85, 72, -40, -76, 0, 35, 83, -73};
    vector<string> canTravel = {"1 7 11 14 15 18", "1 3 7 8 10 11 14", "0 2 3 4 5 7 8 9 10 13 14 15 16 17 18", "0 1 3 5 7 9 10 15 16 17 18", "0 3 5 6 7 9 10 11 12 14", "1 2 4 5 7 8 9 10 11 14 15", "0 2 5 6 7 12 15", "1 2 3 4 5 7 13 14 16 17 18", "1 2 3 4 8 10 12 13 15 18", "1 5 7 9 10 11 16 17", "0 2 3 4 6 12 13 17 18", "0 1 2 3 4 5 6 8 9 10 12 14 15 16 17 18", "0 1 2 6 7 8 15 16 17 18", "1 2 3 4 5 6 8 12 13 15 17", "0 1 2 3 4 5 7 9 13 14 15 17 18", "1 3 7 12 13 15 17 18", "3 8 12 13 15 18", "2 3 6 8 12 13 14 15 17", "1 3 5 6 7 10 11 12 13 15"};
    int origin = 3;
    int destination = 9;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = 4627.749316573995;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> latitude = {-11, 37, -4, 68, -50, -4, -88, 81, -56, -41};
    vector<int> longitude = {50, -8, 11, 44, 70, 57, 26, -43, -42, -73};
    vector<string> canTravel = {"1 2 3 6 8", "1 3 4 9", "0 1 2 4 5 6 7", "1 2 3 5 7 8", "3 5 6 7", "0 2 4 5 6 7 8 9", "2 6 7 8 9", "1 6 8 9", "1 4 6 7", "0 5 9"};
    int origin = 1;
    int destination = 5;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = 8004.663144446447;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> latitude = {0, 0, 70};
    vector<int> longitude = {90, 0, 45};
    vector<string> canTravel = {"1 2", "0 2", "0 1"};
    int origin = 0;
    int destination = 1;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = 6283.185307179586;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> latitude = {0, 30, 60};
    vector<int> longitude = {25, -130, 78};
    vector<string> canTravel = {"1 2", "0 2", "1 2"};
    int origin = 0;
    int destination = 1;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = 9893.231024871204;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> latitude = {0, 0, 70};
    vector<int> longitude = {90, 0, 45};
    vector<string> canTravel = {"2", "0 2", "0 1"};
    int origin = 0;
    int destination = 1;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = 10612.237799994255;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> latitude = {0, 20, 55};
    vector<int> longitude = {-20, 85, 42};
    vector<string> canTravel = {"1", "0", "0"};
    int origin = 0;
    int destination = 2;
    AirTravel* pObj = new AirTravel();
    clock_t start = clock();
    double result = pObj->shortestTrip(latitude, longitude, canTravel, origin, destination);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10442944&rd=7216&pm=4501
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <set> 
#include <map> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
using namespace std; 
 
#define ALL(c) (c).begin(),(c).end() 
#define REP(i,n)    for(int i=0,_n=n;i<_n;i++) 
#define REPD(i,n)   for(int i=(n-1);i>=0;i--) 
#define FOR(i,v,n)  for(int i=v,_n=n;i<_n;i++) 
#define FORD(i,v,n) for(int i=(n-1),_v=v;i>=_v;i--) 
#define FOREACH(it,c) for(typeof((c).begin()) it=(c).begin();it!=(c).end();++it) 
#define sz(c) (c).size() 
 
typedef vector<int> VI; 
 
VI la,lo; 
int o,d; 
double melhor; 
bool adj[30][30],vis[30]; 
 
double rad(int g) { 
  return (g*3.1415926535897932384626433832795)/180; 
} 
 
double dist(int i, int j) { 
  double radius=4000.00; 
  double lat1=rad(la[i]),lat2=rad(la[j]),lon1=rad(lo[i]),lon2=rad(lo[j]); 
   
  return radius * acos(sin(lat1) * sin(lat2) + cos(lat1) * cos(lat2) * cos(lon1 - lon2)); 
} 
 
void calc(int i, double custo) { 
  if (custo>melhor) 
    return; 
 
  if (i==d) { 
    melhor<?=custo; 
    return; 
  } 
 
  vis[i]=true; 
  REP(j,30) if (adj[i][j] && !vis[j]) 
    calc(j,custo+dist(i,j)); 
  vis[i]=false; 
} 
 
struct AirTravel { 
  // MAIN 
  double shortestTrip(vector <int> latitude, vector <int> longitude, vector <string> canTravel, int origin, int destination) { 
     
    o=origin; d=destination; 
    la=latitude; 
    lo=longitude; 
 
    cout<<dist(0,2)<<endl; 
 
    memset(vis,false,sizeof(vis)); 
    memset(adj,false,sizeof(adj)); 
 
    REP(i,sz(canTravel)) { 
      stringstream ss(canTravel[i]); 
      int j; 
      while(ss>>j) { 
  adj[i][j]=true; 
      } 
    } 
     
    melhor=1000000000000000000000000000.0; 
    calc(o,0.0); 
 
    if (melhor==1000000000000000000000000000.0) 
      return -1; 
 
    return melhor; 
  } 
}; 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/