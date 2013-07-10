/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8241
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

class PirateTreasure {
public:
    double getDistance(vector<int> steps, vector<string> directions);
};

double PirateTreasure::getDistance(vector<int> steps, vector<string> directions) {
    double ret;
    return ret;
}


int test0() {
    vector<int> steps = {1};
    vector<string> directions = {"NORTH"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
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
    vector<int> steps = {2};
    vector<string> directions = {"NORTHWEST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> steps = {3, 10, 7};
    vector<string> directions = {"EAST", "WEST", "EAST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
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
    vector<int> steps = {34, 48, 34};
    vector<string> directions = {"NORTH", "SOUTHWEST", "EAST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08326112068522587;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> steps = {2, 2, 2, 1};
    vector<string> directions = {"NORTH", "NORTH", "NORTH", "NORTHWEST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 6.744277676240694;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> steps = {47};
    vector<string> directions = {"NORTH"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 47.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> steps = {47};
    vector<string> directions = {"NORTHWEST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 47.00000000000001;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> steps = {47};
    vector<string> directions = {"NORTHEAST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 47.00000000000001;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> steps = {47};
    vector<string> directions = {"SOUTH"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 47.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> steps = {47};
    vector<string> directions = {"SOUTHWEST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 47.00000000000001;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> steps = {47};
    vector<string> directions = {"SOUTHEAST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 47.00000000000001;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> steps = {47};
    vector<string> directions = {"EAST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 47.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> steps = {47};
    vector<string> directions = {"WEST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 47.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> steps = {31, 21, 44, 32, 40, 28, 29, 34, 50, 48, 21, 16, 34, 17, 17, 19, 21, 9, 41, 32, 12, 45, 16, 10, 12, 41, 39, 25, 28, 34, 36, 10, 6, 31, 43, 46, 8, 22, 31, 7, 21, 4, 24, 6, 22, 42, 25, 42, 50, 17};
    vector<string> directions = {"SOUTHWEST", "NORTH", "NORTH", "NORTHWEST", "NORTH", "WEST", "NORTHWEST", "NORTH", "NORTHWEST", "SOUTH", "NORTH", "EAST", "NORTHEAST", "SOUTHEAST", "WEST", "SOUTH", "NORTH", "NORTH", "NORTHEAST", "NORTHWEST", "WEST", "NORTH", "NORTH", "EAST", "SOUTH", "SOUTHEAST", "SOUTHWEST", "NORTHWEST", "NORTH", "SOUTHEAST", "NORTHWEST", "SOUTHEAST", "EAST", "NORTHWEST", "EAST", "EAST", "NORTHWEST", "NORTH", "EAST", "NORTHEAST", "SOUTH", "EAST", "NORTHWEST", "SOUTHEAST", "SOUTHWEST", "NORTH", "NORTH", "SOUTHWEST", "NORTH", "NORTHEAST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 407.4737826076153;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> steps = {28, 44, 37, 12, 49, 3, 17, 45, 42, 16, 42, 48, 39, 2, 15, 3, 36, 6, 49, 33, 47, 6, 27, 22, 36, 25, 12, 28, 24, 26, 9, 1, 22, 47, 13, 22, 49, 31, 16, 41, 46, 9, 40, 34, 11, 6, 37, 46, 12, 37};
    vector<string> directions = {"NORTHWEST", "WEST", "NORTH", "NORTHEAST", "EAST", "WEST", "EAST", "SOUTHEAST", "EAST", "WEST", "SOUTHWEST", "NORTH", "EAST", "SOUTH", "SOUTHEAST", "NORTHEAST", "NORTH", "WEST", "NORTH", "WEST", "NORTHWEST", "NORTHEAST", "EAST", "SOUTHWEST", "SOUTH", "NORTHEAST", "NORTHEAST", "SOUTH", "NORTHWEST", "SOUTH", "NORTHEAST", "SOUTH", "NORTHEAST", "NORTHEAST", "SOUTHEAST", "NORTH", "NORTHWEST", "SOUTH", "SOUTHEAST", "WEST", "SOUTH", "NORTHWEST", "NORTH", "NORTHWEST", "SOUTHEAST", "SOUTHEAST", "SOUTH", "SOUTHEAST", "SOUTHWEST", "SOUTH"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 73.9362381853827;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> steps = {4, 45, 2, 42, 41, 34, 42, 43, 3, 39, 8, 11, 16, 30, 13, 1, 34, 44, 19, 31, 36, 42, 49, 46, 23, 8, 21, 26, 31, 9, 29, 34, 5, 31, 25, 48, 14, 18, 42, 18, 9, 50, 29, 24, 31, 43, 27, 15, 39, 45};
    vector<string> directions = {"NORTH", "NORTHWEST", "SOUTHEAST", "NORTH", "NORTHEAST", "SOUTH", "SOUTHEAST", "NORTH", "SOUTHWEST", "NORTH", "NORTHEAST", "NORTH", "WEST", "SOUTH", "NORTHEAST", "NORTHEAST", "EAST", "SOUTHEAST", "NORTHWEST", "SOUTHEAST", "SOUTHEAST", "WEST", "SOUTHWEST", "SOUTH", "WEST", "SOUTHEAST", "NORTHWEST", "SOUTHEAST", "WEST", "NORTHWEST", "SOUTHEAST", "WEST", "NORTHEAST", "NORTHEAST", "NORTH", "SOUTHWEST", "SOUTHEAST", "SOUTHEAST", "SOUTHWEST", "NORTHWEST", "SOUTHEAST", "WEST", "NORTHWEST", "SOUTHEAST", "NORTHEAST", "SOUTHWEST", "WEST", "NORTH", "NORTHWEST", "NORTH"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 155.07559407168844;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> steps = {48, 47, 47, 47, 4, 46, 26, 6, 23, 23, 45, 44, 16, 12, 50, 8, 48, 17, 6, 27, 16, 41, 8, 31, 46, 48, 41, 1, 48, 9, 22, 45, 7, 18, 43, 13, 15, 18, 18, 37, 42, 14, 32, 10, 25, 31, 17, 23, 47, 22};
    vector<string> directions = {"NORTHEAST", "SOUTHEAST", "SOUTHWEST", "NORTHWEST", "WEST", "NORTHWEST", "NORTHEAST", "EAST", "EAST", "SOUTH", "EAST", "SOUTH", "NORTHWEST", "SOUTHWEST", "NORTH", "NORTHEAST", "SOUTHWEST", "SOUTHWEST", "NORTHWEST", "WEST", "SOUTHWEST", "WEST", "WEST", "SOUTHEAST", "NORTHEAST", "SOUTHEAST", "NORTHWEST", "NORTHEAST", "WEST", "SOUTHEAST", "EAST", "NORTHWEST", "NORTHEAST", "NORTHEAST", "NORTHEAST", "NORTHWEST", "SOUTH", "SOUTHWEST", "WEST", "NORTHWEST", "WEST", "SOUTHEAST", "SOUTHWEST", "NORTHWEST", "NORTHEAST", "SOUTHWEST", "SOUTH", "EAST", "NORTH", "SOUTHWEST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 174.5590186542821;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> steps = {17, 5, 22, 16, 42, 36, 41, 11, 15, 41, 28, 19, 38, 10, 37, 45, 38, 16, 7, 3, 8, 25, 15, 34, 40, 31, 13, 49, 11, 11, 17, 27, 16, 41, 44, 9, 26, 35, 22, 42, 25, 49, 10, 14, 11, 48, 10, 50, 14, 19};
    vector<string> directions = {"SOUTHEAST", "NORTHEAST", "EAST", "SOUTHEAST", "SOUTH", "NORTHWEST", "WEST", "NORTHWEST", "WEST", "NORTH", "NORTH", "NORTHWEST", "EAST", "SOUTH", "WEST", "NORTHEAST", "WEST", "SOUTH", "NORTH", "EAST", "EAST", "NORTH", "SOUTHEAST", "NORTH", "SOUTH", "SOUTHEAST", "NORTHWEST", "SOUTHEAST", "NORTH", "EAST", "NORTHWEST", "SOUTHEAST", "NORTH", "WEST", "SOUTH", "SOUTHWEST", "NORTH", "NORTHEAST", "SOUTHEAST", "WEST", "NORTHEAST", "SOUTHEAST", "NORTH", "NORTHWEST", "NORTH", "NORTH", "SOUTH", "NORTH", "SOUTH", "SOUTH"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 103.63584290484768;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> steps = {43, 16, 50, 22, 36, 9, 11, 6, 26, 49, 40, 13, 43, 45, 44, 2, 7, 8, 10, 36, 3, 31, 48, 2, 38, 6, 40, 27, 22, 45, 34, 17, 12, 35, 38, 50, 43, 1, 5, 21, 1, 46, 35, 43, 42, 29, 46, 48, 36, 6};
    vector<string> directions = {"NORTHWEST", "NORTH", "SOUTHEAST", "NORTHEAST", "SOUTH", "SOUTHWEST", "SOUTH", "EAST", "EAST", "SOUTHEAST", "SOUTHWEST", "SOUTH", "SOUTHEAST", "SOUTH", "SOUTH", "NORTH", "SOUTHWEST", "NORTHWEST", "SOUTHWEST", "NORTH", "SOUTH", "NORTHWEST", "EAST", "NORTHEAST", "SOUTH", "SOUTHEAST", "SOUTHWEST", "WEST", "SOUTH", "NORTHWEST", "EAST", "SOUTHWEST", "NORTHWEST", "SOUTH", "EAST", "SOUTHWEST", "WEST", "NORTHWEST", "NORTHEAST", "SOUTHEAST", "EAST", "EAST", "NORTH", "SOUTH", "NORTHEAST", "SOUTH", "SOUTHWEST", "EAST", "SOUTHWEST", "NORTH"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 380.6284387749282;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> steps = {48, 37, 28, 38, 9, 40, 19, 9, 47, 50, 44, 11, 16, 22, 12, 14, 40, 39, 50, 39, 16, 48, 15, 32, 24, 29, 19, 18, 34, 19, 26, 31, 7, 6, 20, 15, 47, 38, 25, 43, 40, 21, 5, 5, 42, 16, 19, 31, 4, 20};
    vector<string> directions = {"EAST", "EAST", "SOUTHWEST", "SOUTHEAST", "WEST", "WEST", "SOUTHEAST", "SOUTH", "EAST", "SOUTHWEST", "SOUTH", "EAST", "NORTHEAST", "SOUTHWEST", "WEST", "SOUTHEAST", "EAST", "SOUTHEAST", "SOUTH", "WEST", "WEST", "EAST", "WEST", "SOUTH", "NORTHEAST", "NORTH", "SOUTHWEST", "EAST", "EAST", "NORTHWEST", "SOUTH", "SOUTHEAST", "WEST", "NORTH", "NORTHEAST", "EAST", "WEST", "WEST", "NORTHWEST", "EAST", "SOUTHWEST", "SOUTHWEST", "SOUTHWEST", "EAST", "NORTH", "SOUTH", "SOUTHWEST", "WEST", "NORTH", "WEST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 269.2183988586096;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> steps = {49, 42, 2, 10, 27, 36, 12, 29, 41, 44, 36, 14, 49, 15, 6, 37, 45, 40, 43, 48, 32, 45, 42, 12, 29, 37, 33, 13, 46, 41, 36, 46, 34, 37, 5, 10, 25, 16, 40, 15, 11, 27, 30, 10, 41, 38, 48, 37, 29, 40};
    vector<string> directions = {"SOUTH", "SOUTHEAST", "WEST", "SOUTHWEST", "NORTH", "SOUTHWEST", "EAST", "EAST", "SOUTHWEST", "WEST", "SOUTHWEST", "SOUTHWEST", "EAST", "NORTHWEST", "NORTH", "NORTHEAST", "NORTH", "SOUTHWEST", "SOUTH", "SOUTHEAST", "EAST", "NORTH", "NORTHWEST", "NORTHEAST", "SOUTHEAST", "SOUTH", "WEST", "SOUTHWEST", "NORTHWEST", "SOUTHEAST", "EAST", "SOUTHWEST", "NORTHEAST", "SOUTHEAST", "NORTH", "NORTHEAST", "NORTHWEST", "WEST", "NORTH", "EAST", "EAST", "SOUTHWEST", "NORTHEAST", "SOUTHEAST", "SOUTHEAST", "NORTHEAST", "WEST", "SOUTHEAST", "WEST", "SOUTH"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 191.04361351225765;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> steps = {25, 14, 14, 32, 38, 17, 31, 49, 17, 16, 40, 7, 38, 42, 37, 36, 16, 30, 1, 44, 6, 28, 18, 46, 11, 21, 39, 6, 16, 10, 29, 40, 23, 44, 23, 11, 10, 3, 11, 27, 20, 1, 33, 7, 44, 21, 45, 10, 3, 45};
    vector<string> directions = {"EAST", "SOUTH", "NORTHWEST", "NORTHEAST", "SOUTHEAST", "WEST", "NORTHEAST", "NORTHWEST", "SOUTHEAST", "NORTH", "SOUTHWEST", "SOUTHEAST", "WEST", "SOUTHWEST", "NORTHWEST", "NORTHEAST", "SOUTHWEST", "SOUTHWEST", "NORTHEAST", "SOUTH", "SOUTHWEST", "NORTHEAST", "SOUTHEAST", "WEST", "SOUTHWEST", "SOUTHWEST", "NORTHWEST", "NORTHEAST", "SOUTH", "SOUTHEAST", "SOUTH", "NORTHEAST", "NORTHWEST", "SOUTHWEST", "SOUTHWEST", "EAST", "SOUTHWEST", "EAST", "WEST", "NORTHWEST", "EAST", "SOUTH", "EAST", "EAST", "WEST", "WEST", "NORTH", "SOUTHWEST", "SOUTHWEST", "NORTHEAST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 174.1685508706067;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> steps = {18, 45, 23, 17, 28, 30, 9, 32, 28, 11, 39, 23, 17, 4, 40, 43, 22, 42, 13, 33, 33, 42, 44, 43, 20, 30, 17, 20, 2, 11, 46, 21, 7, 21, 37, 35, 50, 47, 18, 27, 9, 8, 50, 25, 12, 41, 19, 35, 32, 34};
    vector<string> directions = {"SOUTH", "NORTHWEST", "NORTHEAST", "NORTHEAST", "WEST", "WEST", "NORTHWEST", "SOUTHEAST", "SOUTHWEST", "SOUTHWEST", "WEST", "SOUTH", "EAST", "NORTHEAST", "WEST", "SOUTHWEST", "SOUTHWEST", "SOUTHWEST", "SOUTH", "WEST", "SOUTHEAST", "SOUTHEAST", "NORTH", "SOUTHWEST", "EAST", "NORTHWEST", "EAST", "NORTH", "NORTH", "WEST", "SOUTH", "SOUTH", "NORTH", "SOUTHEAST", "SOUTHEAST", "WEST", "SOUTHWEST", "WEST", "SOUTHEAST", "NORTH", "SOUTH", "SOUTHWEST", "SOUTHWEST", "NORTHEAST", "EAST", "SOUTH", "EAST", "NORTHEAST", "NORTH", "NORTHWEST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 348.0377259288232;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> steps = {28, 46, 44, 31, 6, 30, 46, 4, 34, 46, 35, 22, 13, 29, 35, 43, 32, 42, 16, 9, 10, 33, 22, 40, 17, 26, 50, 4, 9, 38, 39, 36, 35, 34, 18, 40, 13, 14, 45, 49, 11, 29, 22, 24, 9, 6, 18, 40, 47, 35};
    vector<string> directions = {"SOUTHWEST", "NORTH", "EAST", "SOUTH", "WEST", "WEST", "NORTH", "NORTHEAST", "EAST", "NORTH", "SOUTHEAST", "EAST", "NORTHEAST", "SOUTHEAST", "EAST", "SOUTHEAST", "EAST", "NORTHEAST", "SOUTHWEST", "EAST", "SOUTHWEST", "WEST", "SOUTHWEST", "WEST", "NORTH", "NORTH", "NORTHWEST", "SOUTHEAST", "NORTHEAST", "SOUTHEAST", "SOUTHEAST", "EAST", "SOUTHEAST", "SOUTH", "NORTHWEST", "SOUTHEAST", "NORTHEAST", "NORTHWEST", "WEST", "NORTH", "NORTHEAST", "SOUTHEAST", "WEST", "SOUTHWEST", "NORTHEAST", "SOUTHEAST", "NORTHWEST", "NORTHWEST", "WEST", "EAST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 146.72231125749315;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> steps = {34, 11, 4, 19, 8, 18, 13, 11, 1, 47, 15, 18, 33, 24, 3, 44, 33, 26, 4, 41, 38, 24, 34, 29, 42, 50, 34, 25, 27, 18, 37, 11, 30, 42, 31, 37, 9, 43, 50, 11, 42, 14, 28, 26, 37, 31, 20, 22, 8, 25};
    vector<string> directions = {"WEST", "SOUTHWEST", "SOUTHEAST", "NORTH", "NORTHWEST", "NORTHEAST", "SOUTH", "NORTHEAST", "NORTH", "NORTH", "SOUTH", "SOUTHEAST", "SOUTHWEST", "NORTH", "EAST", "SOUTHWEST", "NORTHWEST", "SOUTHEAST", "NORTH", "EAST", "SOUTHEAST", "SOUTH", "SOUTHEAST", "SOUTHEAST", "SOUTH", "SOUTH", "WEST", "NORTH", "EAST", "EAST", "SOUTHWEST", "SOUTHEAST", "NORTHEAST", "NORTHWEST", "SOUTHEAST", "SOUTH", "SOUTH", "NORTHWEST", "EAST", "SOUTH", "NORTHWEST", "NORTHWEST", "NORTH", "SOUTHEAST", "NORTHEAST", "WEST", "NORTHWEST", "SOUTH", "SOUTHWEST", "NORTHWEST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 94.33483432192006;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> steps = {46, 10, 24, 3, 5, 5, 50, 34, 5, 19, 20, 29, 50, 1, 4, 30, 6, 21, 7, 24, 4, 10, 20, 43, 49, 26, 28, 6, 25, 22, 25, 22, 31, 48, 26, 38, 2, 25, 21, 8, 43, 41, 36, 45, 43, 41, 24, 48, 11, 32};
    vector<string> directions = {"WEST", "EAST", "NORTH", "NORTH", "NORTHEAST", "NORTHEAST", "SOUTH", "SOUTHEAST", "SOUTHEAST", "NORTHWEST", "SOUTHWEST", "NORTHWEST", "NORTH", "SOUTHWEST", "SOUTH", "SOUTHEAST", "SOUTH", "SOUTHWEST", "SOUTH", "NORTH", "EAST", "NORTHEAST", "NORTH", "SOUTH", "EAST", "EAST", "EAST", "SOUTHEAST", "SOUTHEAST", "NORTH", "NORTH", "SOUTHWEST", "EAST", "NORTH", "SOUTHWEST", "NORTH", "NORTHEAST", "WEST", "SOUTHEAST", "WEST", "NORTH", "NORTHWEST", "NORTH", "NORTH", "EAST", "SOUTH", "SOUTHEAST", "NORTHWEST", "NORTH", "NORTHWEST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 212.14688078813836;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> steps = {10, 29, 48, 50, 48, 2, 32, 8, 31, 14, 29, 43, 16, 19, 43, 15, 16, 33, 32, 1, 18, 43, 45, 22, 19, 29, 48, 39, 38, 48, 26, 50, 26, 23, 49, 23, 24, 31, 31, 6, 44, 11, 48, 11, 29, 42, 27, 46, 24, 9};
    vector<string> directions = {"SOUTHWEST", "NORTHEAST", "NORTH", "NORTHEAST", "NORTHWEST", "EAST", "EAST", "SOUTHWEST", "NORTHEAST", "SOUTH", "WEST", "WEST", "NORTHEAST", "NORTH", "WEST", "SOUTH", "SOUTH", "NORTH", "SOUTH", "SOUTHEAST", "WEST", "NORTH", "WEST", "SOUTHWEST", "EAST", "WEST", "WEST", "SOUTH", "WEST", "NORTHEAST", "SOUTHEAST", "SOUTH", "SOUTHWEST", "SOUTHEAST", "SOUTHEAST", "EAST", "SOUTH", "SOUTH", "NORTHEAST", "EAST", "EAST", "NORTHEAST", "SOUTHEAST", "NORTHWEST", "NORTHEAST", "SOUTHEAST", "SOUTHWEST", "SOUTHEAST", "SOUTHEAST", "WEST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 133.58688918223558;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> steps = {29, 30, 50, 34, 18, 44, 22, 48, 17, 3, 2, 46, 34, 47, 27, 9, 9, 31, 4, 33, 45, 10, 17, 44, 27, 42, 1, 3, 27, 43, 18, 6, 24, 17, 41, 43, 13, 12, 42, 31, 16, 44, 27, 49, 42, 5, 9, 50, 37, 12};
    vector<string> directions = {"SOUTHEAST", "SOUTHWEST", "WEST", "NORTH", "EAST", "NORTHWEST", "SOUTHEAST", "SOUTHWEST", "NORTH", "WEST", "NORTH", "SOUTHEAST", "SOUTHWEST", "NORTHWEST", "NORTHEAST", "SOUTH", "SOUTHWEST", "SOUTHWEST", "NORTHEAST", "WEST", "EAST", "NORTHEAST", "EAST", "EAST", "SOUTHWEST", "SOUTHEAST", "NORTHWEST", "WEST", "NORTHEAST", "NORTHWEST", "SOUTHWEST", "NORTH", "EAST", "SOUTH", "NORTH", "SOUTHWEST", "SOUTHEAST", "SOUTHEAST", "NORTH", "SOUTHEAST", "SOUTHWEST", "NORTHWEST", "NORTHEAST", "NORTHWEST", "NORTHEAST", "SOUTHWEST", "SOUTHWEST", "EAST", "NORTH", "EAST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 82.3689193923634;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> steps = {13, 28, 21, 35, 36, 16, 1, 3, 19, 17, 5, 33, 17, 37, 19, 17, 45, 4, 8, 29, 39, 21, 34, 45, 6, 31, 38, 8, 15, 32, 36, 29, 11, 9, 16, 49, 24, 16, 1, 44, 34, 5, 26, 1, 43, 44, 17, 39, 49, 27};
    vector<string> directions = {"SOUTH", "EAST", "EAST", "EAST", "WEST", "SOUTHEAST", "SOUTHWEST", "SOUTHWEST", "NORTH", "NORTHWEST", "NORTHWEST", "NORTHWEST", "SOUTH", "EAST", "SOUTH", "NORTHEAST", "NORTH", "NORTHEAST", "SOUTH", "NORTH", "SOUTHEAST", "NORTHWEST", "NORTHWEST", "NORTHWEST", "SOUTH", "WEST", "NORTH", "NORTHWEST", "NORTH", "NORTHWEST", "NORTHWEST", "SOUTH", "WEST", "WEST", "NORTHWEST", "EAST", "SOUTHWEST", "EAST", "NORTHEAST", "SOUTHWEST", "WEST", "SOUTHWEST", "EAST", "NORTHEAST", "NORTHEAST", "NORTHWEST", "SOUTHEAST", "NORTHEAST", "SOUTHWEST", "NORTH"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 234.60335230152046;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> steps = {37, 12, 42, 8, 11, 39, 22, 8, 5, 26, 3, 48, 1, 36, 40, 26, 3, 32, 38, 39, 39, 49, 31, 39, 42, 39, 46, 27, 11, 34, 23, 50, 46, 15, 7, 8, 5, 30, 17, 11, 7, 19, 9, 7, 7, 50, 35, 9, 31, 24};
    vector<string> directions = {"NORTH", "NORTHEAST", "NORTH", "NORTHWEST", "NORTH", "WEST", "SOUTH", "NORTH", "SOUTH", "NORTH", "SOUTH", "WEST", "WEST", "NORTH", "SOUTHEAST", "NORTHWEST", "NORTH", "NORTH", "WEST", "NORTHEAST", "NORTH", "WEST", "NORTHWEST", "NORTH", "EAST", "SOUTH", "WEST", "SOUTHWEST", "WEST", "NORTHEAST", "WEST", "WEST", "SOUTHWEST", "WEST", "NORTH", "SOUTHEAST", "EAST", "SOUTHWEST", "SOUTHEAST", "NORTHWEST", "SOUTHWEST", "NORTH", "NORTHWEST", "SOUTH", "NORTHWEST", "EAST", "SOUTHWEST", "NORTHWEST", "EAST", "SOUTH"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 317.29087665384736;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> steps = {18, 44, 14, 3, 48, 50, 46, 2, 20, 49, 38, 15, 49, 44, 33, 33, 9, 17, 37, 34, 41, 27, 49, 30, 50, 4, 46, 15, 7, 47, 50, 24, 42, 15, 29, 39, 14, 26, 42, 35, 25, 29, 50, 25, 25, 32, 7, 35, 48, 46};
    vector<string> directions = {"NORTH", "NORTHWEST", "SOUTHEAST", "NORTH", "EAST", "WEST", "NORTHWEST", "NORTHEAST", "SOUTHEAST", "SOUTH", "SOUTHWEST", "EAST", "NORTH", "SOUTHEAST", "SOUTH", "NORTHEAST", "SOUTHEAST", "NORTH", "SOUTHWEST", "SOUTHEAST", "SOUTH", "SOUTHWEST", "SOUTHEAST", "NORTHEAST", "NORTHEAST", "SOUTH", "SOUTHEAST", "EAST", "SOUTHWEST", "NORTHEAST", "SOUTHEAST", "SOUTHWEST", "SOUTHWEST", "SOUTH", "SOUTHWEST", "NORTHEAST", "NORTHEAST", "SOUTHEAST", "SOUTHWEST", "WEST", "NORTH", "NORTH", "SOUTHEAST", "NORTH", "SOUTHEAST", "NORTH", "SOUTH", "SOUTH", "NORTHWEST", "WEST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 190.83633173329102;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> steps = {5, 17, 48, 22, 21, 8, 12, 8, 24, 38, 42, 34, 32, 18, 19, 44, 13, 27, 29, 23, 24, 43, 46, 9, 13, 21, 2, 16, 40, 15, 29, 46, 31, 28, 18, 1, 35, 31, 8, 9, 20, 1, 44, 1, 19, 14, 46, 33, 40, 24};
    vector<string> directions = {"SOUTHWEST", "NORTH", "WEST", "SOUTHEAST", "NORTHEAST", "NORTHWEST", "SOUTHWEST", "SOUTHEAST", "WEST", "SOUTHEAST", "NORTHWEST", "SOUTH", "WEST", "NORTHWEST", "SOUTH", "EAST", "WEST", "WEST", "EAST", "NORTH", "WEST", "SOUTH", "WEST", "NORTH", "NORTHWEST", "WEST", "SOUTHEAST", "SOUTHWEST", "SOUTH", "NORTH", "NORTHWEST", "WEST", "NORTH", "NORTH", "SOUTHEAST", "SOUTH", "NORTHWEST", "NORTHWEST", "NORTH", "NORTH", "EAST", "NORTHEAST", "SOUTHWEST", "SOUTHEAST", "SOUTH", "WEST", "SOUTH", "SOUTH", "EAST", "NORTHWEST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 284.8199693973589;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> steps = {32, 33, 23, 15, 29, 6, 18, 41, 36, 5, 43, 41, 49, 6, 13, 46, 45, 17, 17, 7, 19, 3, 11, 49, 3, 37, 36, 32, 36, 15, 24, 17, 49, 48, 34, 29, 6, 1, 19, 41, 8, 12, 34, 6, 19, 46, 3, 13, 14, 19};
    vector<string> directions = {"NORTH", "SOUTHWEST", "SOUTHWEST", "SOUTH", "SOUTHWEST", "NORTHEAST", "NORTHWEST", "SOUTHWEST", "SOUTHWEST", "NORTHEAST", "NORTHEAST", "WEST", "EAST", "EAST", "EAST", "SOUTHEAST", "NORTH", "SOUTH", "EAST", "WEST", "NORTHEAST", "SOUTH", "NORTHEAST", "SOUTH", "SOUTHWEST", "NORTHEAST", "EAST", "EAST", "NORTHEAST", "EAST", "NORTHEAST", "NORTHEAST", "NORTHEAST", "EAST", "SOUTHEAST", "EAST", "NORTHWEST", "EAST", "NORTHEAST", "SOUTHEAST", "NORTH", "SOUTHWEST", "SOUTHWEST", "WEST", "NORTHEAST", "NORTHEAST", "SOUTHWEST", "SOUTH", "EAST", "NORTHEAST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 371.08296999403404;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> steps = {35, 41, 30, 31, 4, 8, 47, 14, 36, 27, 38, 36, 27, 48, 11, 11, 43, 12, 15, 7, 21, 28, 10, 15, 17, 46, 41, 15, 47, 3, 26, 31, 45, 7, 13, 50, 15, 9, 14, 2, 35, 1, 40, 14, 1, 50, 24, 43, 11, 40};
    vector<string> directions = {"NORTHEAST", "SOUTHWEST", "NORTH", "NORTHWEST", "EAST", "EAST", "SOUTH", "NORTHEAST", "NORTHWEST", "WEST", "SOUTHEAST", "EAST", "EAST", "WEST", "NORTH", "NORTH", "SOUTHEAST", "SOUTHWEST", "NORTHWEST", "SOUTHWEST", "NORTH", "NORTHWEST", "NORTHEAST", "SOUTHEAST", "SOUTHWEST", "NORTHEAST", "NORTHEAST", "WEST", "NORTHEAST", "NORTH", "NORTHWEST", "SOUTHEAST", "SOUTHWEST", "NORTHWEST", "EAST", "NORTHEAST", "NORTH", "NORTHWEST", "SOUTHWEST", "NORTHWEST", "NORTHWEST", "NORTHWEST", "WEST", "WEST", "NORTHWEST", "WEST", "WEST", "EAST", "SOUTHWEST", "NORTH"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 207.380953128892;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> steps = {11, 45, 41, 17, 38, 45, 24, 30, 25, 24, 34, 44, 23, 20, 33, 32, 6, 7, 45, 32, 36, 10, 6, 41, 9, 19, 35, 3, 23, 27, 3, 33, 23, 45, 1, 12, 40, 26, 41, 14, 50, 24, 9, 24, 45, 41, 7, 50, 50, 2};
    vector<string> directions = {"SOUTHWEST", "EAST", "EAST", "SOUTH", "WEST", "SOUTHEAST", "SOUTH", "WEST", "SOUTH", "NORTHWEST", "SOUTH", "NORTHWEST", "NORTHWEST", "SOUTH", "NORTHEAST", "EAST", "SOUTHWEST", "NORTHWEST", "NORTHWEST", "NORTH", "EAST", "EAST", "WEST", "NORTHEAST", "NORTHEAST", "SOUTHEAST", "EAST", "NORTHEAST", "SOUTHWEST", "SOUTH", "NORTHWEST", "NORTH", "NORTHEAST", "NORTH", "SOUTHWEST", "NORTHWEST", "SOUTHEAST", "WEST", "NORTH", "NORTH", "NORTHWEST", "SOUTH", "NORTHWEST", "NORTHEAST", "EAST", "SOUTH", "NORTH", "NORTHEAST", "SOUTHWEST", "NORTHEAST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 168.41028293099555;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> steps = {43, 41, 13, 32, 31, 31, 15, 12, 4, 49, 41, 29, 17, 7, 19, 25, 48, 32, 41, 4, 22, 38, 47, 42, 48, 3, 37, 27, 31, 50, 49, 23, 42, 11, 6, 23, 44, 20, 34, 47, 20, 26, 27, 37, 33, 48, 13, 32, 29, 3};
    vector<string> directions = {"NORTHWEST", "NORTH", "SOUTHEAST", "SOUTHEAST", "SOUTHEAST", "WEST", "NORTH", "SOUTHEAST", "NORTHWEST", "SOUTHWEST", "NORTHEAST", "SOUTHEAST", "SOUTH", "NORTHEAST", "NORTHWEST", "NORTHEAST", "EAST", "NORTH", "NORTH", "SOUTHEAST", "SOUTHWEST", "WEST", "NORTHEAST", "WEST", "NORTHWEST", "NORTH", "NORTH", "NORTHEAST", "NORTH", "SOUTHWEST", "NORTH", "NORTHWEST", "SOUTHWEST", "EAST", "EAST", "NORTHWEST", "SOUTHEAST", "EAST", "WEST", "EAST", "SOUTH", "NORTHWEST", "SOUTH", "EAST", "SOUTH", "SOUTHWEST", "NORTH", "NORTHWEST", "SOUTHEAST", "NORTH"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 144.85049470789124;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> steps = {29, 16, 39, 34, 11, 14, 22, 5, 4, 42, 28, 47, 49, 50, 29, 38, 20, 48, 12, 19, 36, 5, 48, 39, 39, 2, 17, 20, 1, 16, 20, 30, 32, 10, 15, 44, 26, 38, 49, 29, 32, 26, 27, 30, 27, 5, 19, 46, 4, 31};
    vector<string> directions = {"WEST", "NORTH", "NORTH", "SOUTH", "NORTH", "NORTHWEST", "NORTHEAST", "SOUTHEAST", "NORTHEAST", "NORTHEAST", "EAST", "SOUTH", "NORTHWEST", "NORTHWEST", "SOUTHEAST", "NORTHWEST", "SOUTHEAST", "NORTH", "SOUTH", "NORTHWEST", "EAST", "EAST", "NORTHEAST", "NORTHWEST", "SOUTH", "SOUTHWEST", "SOUTHEAST", "NORTHEAST", "NORTHEAST", "NORTHWEST", "NORTH", "NORTHWEST", "NORTHWEST", "NORTH", "SOUTHWEST", "NORTHEAST", "NORTHWEST", "EAST", "WEST", "SOUTH", "NORTHWEST", "SOUTHEAST", "WEST", "NORTHEAST", "WEST", "SOUTHWEST", "SOUTHWEST", "SOUTHWEST", "SOUTHWEST", "WEST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 283.9344339260109;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> steps = {18, 13, 8, 32, 26, 21, 26, 42, 5, 14, 13, 21, 20, 22, 24, 40, 10, 1, 27, 45, 29, 34, 39, 24, 38, 30, 46, 10, 8, 26, 35, 27, 38, 42, 10, 14, 15, 35, 7, 21, 1, 19, 42, 20, 42, 15, 9, 2, 17, 35};
    vector<string> directions = {"SOUTHEAST", "NORTHEAST", "NORTHWEST", "WEST", "NORTHWEST", "WEST", "NORTH", "SOUTHWEST", "NORTH", "SOUTHEAST", "SOUTH", "NORTHWEST", "WEST", "SOUTHEAST", "EAST", "NORTH", "NORTHEAST", "SOUTHWEST", "SOUTHEAST", "NORTH", "SOUTHEAST", "WEST", "NORTH", "NORTH", "NORTH", "SOUTH", "EAST", "SOUTHWEST", "SOUTHWEST", "NORTH", "SOUTH", "NORTHEAST", "SOUTH", "SOUTHWEST", "NORTHWEST", "SOUTHWEST", "SOUTH", "NORTHEAST", "NORTHWEST", "SOUTHWEST", "WEST", "SOUTHWEST", "SOUTHEAST", "WEST", "NORTHWEST", "SOUTH", "WEST", "SOUTH", "NORTH", "SOUTHWEST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 116.17693852874483;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> steps = {6, 8, 4, 28, 32, 22, 42, 22, 1, 6, 30, 14, 20, 33, 46, 22, 4, 38, 40, 41, 50, 33, 21, 13, 30, 29, 26, 40, 34, 50, 48, 42, 7, 4, 19, 40, 25, 10, 11, 27, 18, 41, 40, 37, 25, 38, 10, 28, 25, 49};
    vector<string> directions = {"SOUTHEAST", "WEST", "SOUTHEAST", "EAST", "SOUTH", "SOUTHWEST", "NORTH", "NORTHEAST", "SOUTH", "SOUTHEAST", "NORTHEAST", "WEST", "EAST", "EAST", "EAST", "SOUTH", "NORTH", "NORTH", "EAST", "SOUTHWEST", "SOUTH", "SOUTHEAST", "SOUTHWEST", "NORTH", "NORTHEAST", "SOUTH", "SOUTHEAST", "SOUTHEAST", "SOUTHWEST", "SOUTHEAST", "NORTHEAST", "NORTHEAST", "SOUTHWEST", "WEST", "NORTH", "WEST", "SOUTH", "NORTH", "NORTHEAST", "WEST", "SOUTHEAST", "SOUTHWEST", "EAST", "SOUTHWEST", "NORTHEAST", "SOUTHWEST", "WEST", "NORTHEAST", "SOUTHWEST", "SOUTHEAST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 329.4936857947535;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> steps = {10, 50, 42, 24, 1, 22, 15, 38, 13, 34, 2, 3, 24, 38, 28, 6, 14, 18, 8, 4, 13, 17, 6, 13, 23, 32, 19, 46, 19, 9, 44, 28, 9, 35, 3, 11, 8, 18, 48, 20, 3, 49, 25, 26, 37, 2, 33, 2, 21, 40};
    vector<string> directions = {"SOUTHWEST", "NORTHEAST", "WEST", "NORTHWEST", "EAST", "EAST", "NORTH", "EAST", "SOUTH", "NORTHEAST", "SOUTH", "EAST", "SOUTH", "WEST", "SOUTHWEST", "NORTH", "SOUTH", "WEST", "SOUTH", "SOUTHWEST", "SOUTHEAST", "NORTHWEST", "NORTHWEST", "WEST", "SOUTHWEST", "SOUTHEAST", "SOUTHWEST", "SOUTHWEST", "NORTH", "NORTHWEST", "NORTHWEST", "SOUTHWEST", "SOUTH", "NORTH", "SOUTHEAST", "NORTHEAST", "EAST", "SOUTHEAST", "NORTH", "NORTHEAST", "NORTH", "SOUTH", "NORTH", "SOUTH", "NORTHEAST", "SOUTHEAST", "SOUTH", "SOUTHEAST", "SOUTHWEST", "EAST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 46.517077814416865;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> steps = {31, 20, 18, 24, 31, 12, 5, 46, 36, 37, 31, 3, 25, 50, 28, 24, 16, 36, 15, 49, 22, 21, 6, 33, 17, 49, 50, 6, 36, 34, 9, 16, 4, 28, 39, 36, 40, 45, 33, 27, 33, 15, 30, 7, 17, 9, 32, 34, 44, 49};
    vector<string> directions = {"NORTHWEST", "NORTHWEST", "EAST", "NORTHWEST", "SOUTH", "NORTH", "SOUTH", "NORTHEAST", "EAST", "NORTHEAST", "SOUTHEAST", "NORTHEAST", "SOUTHWEST", "NORTHEAST", "SOUTHEAST", "NORTH", "NORTH", "SOUTHWEST", "SOUTHEAST", "NORTHEAST", "SOUTH", "NORTHWEST", "SOUTH", "NORTHEAST", "NORTHEAST", "SOUTHEAST", "NORTHEAST", "SOUTH", "NORTHEAST", "NORTHWEST", "SOUTH", "SOUTHWEST", "NORTHEAST", "NORTHEAST", "SOUTHEAST", "SOUTHEAST", "NORTHEAST", "NORTH", "WEST", "NORTH", "NORTHEAST", "SOUTHEAST", "NORTHEAST", "EAST", "WEST", "NORTH", "WEST", "WEST", "SOUTHWEST", "SOUTHWEST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 285.3544196650402;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> steps = {1, 46, 20, 26, 24, 38, 19, 10, 38, 45, 40, 37, 3, 38, 7, 4, 34, 12, 42, 29, 10, 5, 8, 11, 7, 26, 41, 40, 17, 41, 50, 19, 39, 20, 46, 12, 7, 14, 24, 46, 9, 15, 33, 13, 2, 41, 17, 35, 2, 10};
    vector<string> directions = {"SOUTHEAST", "WEST", "NORTHWEST", "EAST", "SOUTHEAST", "NORTH", "WEST", "SOUTH", "SOUTHEAST", "NORTH", "SOUTHEAST", "WEST", "NORTHEAST", "WEST", "EAST", "NORTHEAST", "SOUTH", "SOUTHWEST", "SOUTH", "NORTHEAST", "EAST", "NORTHWEST", "EAST", "EAST", "NORTH", "NORTHWEST", "EAST", "SOUTHWEST", "NORTHEAST", "NORTHEAST", "SOUTHEAST", "WEST", "NORTHWEST", "WEST", "SOUTHEAST", "EAST", "WEST", "SOUTHEAST", "NORTHWEST", "SOUTHWEST", "SOUTHEAST", "EAST", "SOUTH", "WEST", "EAST", "NORTHWEST", "NORTHWEST", "NORTHWEST", "EAST", "SOUTHEAST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 70.46951179990177;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> steps = {50, 35, 21, 44, 7, 45, 41, 21, 37, 25, 39, 39, 24, 18, 6, 48, 20, 45, 19, 37, 47, 10, 8, 15, 37, 20, 16, 1, 41, 10, 14, 40, 46, 34, 35, 4, 31, 25, 25, 19, 50, 13, 9, 25, 33, 14, 22, 2, 10, 40};
    vector<string> directions = {"EAST", "NORTH", "NORTH", "WEST", "EAST", "SOUTH", "EAST", "SOUTHEAST", "WEST", "EAST", "SOUTH", "NORTH", "NORTHWEST", "SOUTHWEST", "WEST", "SOUTHEAST", "NORTH", "SOUTHEAST", "SOUTH", "SOUTHWEST", "EAST", "EAST", "NORTHEAST", "EAST", "SOUTHEAST", "SOUTHWEST", "EAST", "SOUTHWEST", "NORTH", "SOUTH", "NORTHEAST", "EAST", "SOUTH", "NORTHEAST", "SOUTHEAST", "NORTHWEST", "SOUTHEAST", "SOUTH", "WEST", "SOUTHWEST", "NORTHWEST", "NORTHEAST", "SOUTHWEST", "NORTHEAST", "EAST", "SOUTHWEST", "WEST", "EAST", "NORTHWEST", "NORTHEAST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 276.4576615434116;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> steps = {1};
    vector<string> directions = {"NORTH"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> steps = {2};
    vector<string> directions = {"NORTH"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> steps = {34, 48, 34};
    vector<string> directions = {"NORTH", "SOUTHWEST", "EAST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08326112068522587;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> steps = {2, 2, 2, 1};
    vector<string> directions = {"NORTH", "NORTH", "NORTH", "NORTHWEST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 6.744277676240694;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> steps = {3, 1, 7};
    vector<string> directions = {"EAST", "WEST", "EAST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 9.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> steps = {1};
    vector<string> directions = {"EAST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> steps = {2, 2};
    vector<string> directions = {"NORTHEAST", "EAST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 3.695518130045147;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> steps = {1, 1, 1, 1, 1};
    vector<string> directions = {"NORTHEAST", "NORTHEAST", "NORTHEAST", "EAST", "NORTHEAST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 4.759921664218056;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> steps = {30};
    vector<string> directions = {"SOUTHEAST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 30.000000000000004;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> steps = {1};
    vector<string> directions = {"SOUTHWEST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
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
    vector<int> steps = {1, 2};
    vector<string> directions = {"NORTHEAST", "EAST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 2.7979326519318133;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> steps = {2, 2, 2, 1};
    vector<string> directions = {"NORTH", "NORTHEAST", "NORTH", "WEST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 5.430035117219646;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> steps = {30, 10, 7};
    vector<string> directions = {"NORTHEAST", "NORTHEAST", "EAST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 45.22145284557393;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> steps = {3, 10, 7, 45};
    vector<string> directions = {"EAST", "WEST", "EAST", "SOUTH"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 45.0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> steps = {5, 5};
    vector<string> directions = {"NORTHEAST", "NORTHWEST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0710678118654755;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> steps = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    vector<string> directions = {"NORTHWEST", "NORTHWEST", "NORTHWEST", "NORTHWEST", "NORTHWEST", "NORTHWEST", "NORTHWEST", "NORTHWEST", "NORTHWEST", "NORTHWEST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 500.00000000000006;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> steps = {2, 5, 7, 3};
    vector<string> directions = {"NORTHEAST", "NORTHWEST", "SOUTH", "EAST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 2.230608298729404;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> steps = {1, 1};
    vector<string> directions = {"NORTH", "SOUTH"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
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
    vector<int> steps = {10, 10};
    vector<string> directions = {"NORTHEAST", "NORTHEAST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 20.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> steps = {12, 23, 23};
    vector<string> directions = {"NORTHEAST", "NORTHEAST", "NORTHEAST"};
    PirateTreasure* pObj = new PirateTreasure();
    clock_t start = clock();
    double result = pObj->getDistance(steps, directions);
    clock_t end = clock();
    delete pObj;
    double expected = 58.00000000000001;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22682913&rd=10936&pm=8241
********************************************************************************
#include <algorithm> 
#include <cctype> 
#include <cmath> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <deque> 
#include <iostream> 
#include <list> 
#include <map> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <string> 
#include <vector> 
 
using namespace std; 
 
template <class _T> inline string tostr(const _T& a) { ostringstream os(""); os << a; return os.str(); } 
 
#define TynKogep TOPCODER 
#define bublic public: 
#define clr(a,b); memset(a,b,sizeof(a)); 
#define pb push_back 
#define sz size() 
#define ld long double 
#define ll long long 
#define istr istringstream 
 
class PirateTreasure 
{ 
  bublic 
   
  ld getans(ld x,ld y) 
  { 
    return sqrt(x*x+y*y); 
  } 
   
  double getDistance(vector <int> steps, vector <string> directions) 
  { 
    ld ans=0,x=0,y=0,c=0.70710678118654752440084436210485; 
    for(int i=0;i<steps.sz;i++) 
    { 
      if (directions[i]=="NORTH") y+=steps[i]; 
      if (directions[i]=="SOUTH") y-=steps[i]; 
      if (directions[i]=="NORTHWEST") {y+=steps[i]*c; x-=steps[i]*c;} 
      if (directions[i]=="SOUTHWEST") {y-=steps[i]*c; x-=steps[i]*c;} 
      if (directions[i]=="NORTHEAST") {y+=steps[i]*c; x+=steps[i]*c;} 
      if (directions[i]=="SOUTHEAST") {y-=steps[i]*c; x+=steps[i]*c;} 
      if (directions[i]=="WEST") {x-=steps[i];} 
      if (directions[i]=="EAST") {x+=steps[i];} 
    } 
    return getans(x,y); 
  } 
};

********************************************************************************
*******************************************************************************/