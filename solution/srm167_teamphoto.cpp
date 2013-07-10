/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1614
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

class TeamPhoto {
public:
    int minDiff(vector<int> height);
};

int TeamPhoto::minDiff(vector<int> height) {
    int ret;
    return ret;
}


int test0() {
    vector<int> height = {80, 82, 81, 50, 90, 65};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> height = {70, 82, 91, 50, 50, 50, 50, 50, 50};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 113;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> height = {10, 100, 30, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> height = {100, 30, 10, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 164;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> height = {30, 10, 100, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> height = {13, 17, 11, 12, 10};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> height = {10, 10, 10, 25, 26, 26};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> height = {10, 10, 10, 25, 26, 26, 40};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> height = {10, 12, 11, 25, 10, 26, 40};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> height = {20, 12, 31, 18, 22, 25, 29};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> height = {30, 92, 50, 35, 36, 37, 38, 39, 40, 52, 53, 54, 55, 60, 61, 62, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 71, 72, 73, 74, 75, 76, 77, 78, 89, 88, 87, 86, 44, 12, 62};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 122;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> height = {17, 50, 60, 52, 30, 53};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> height = {17, 50, 13, 52, 49, 53};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 107;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> height = {60, 30, 20, 13, 14, 15, 16, 17};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 112;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> height = {60, 30, 15, 13, 14, 15, 16, 17};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 107;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> height = {50, 30, 70, 20, 60, 80};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> height = {28, 61, 60, 42, 98, 78, 99, 25, 61, 76, 32, 86, 95, 77, 75, 27, 68, 54, 67, 96, 62, 24, 56, 81, 84, 57, 17, 80, 71, 51, 100, 73, 86, 91, 26, 37, 39, 57, 35, 86, 85, 65, 30, 88, 10, 62, 73, 92, 31, 90};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 193;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> height = {32, 92, 29, 34, 89, 33, 21, 56, 68, 66, 51, 22, 71, 59, 80, 79, 74, 66, 40, 38, 36, 51, 45, 46, 75, 71, 17, 92, 36, 91, 52, 85, 45, 45, 81, 50, 53, 29, 20, 67, 87, 13, 14, 61, 14, 39, 33, 77, 45};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 133;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> height = {26, 12, 52, 25, 11, 78, 27, 73, 77, 90, 12, 96, 54, 63, 21, 38, 61, 27, 70, 78, 28, 91, 58, 54, 67, 88, 22, 94, 56, 37, 85, 80, 68, 66, 12, 63, 50, 95, 41, 88, 50, 99, 58, 20, 92, 27, 37, 73, 62, 47};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> height = {82, 32, 16, 77, 77, 79, 97, 16, 99, 30, 58, 89, 71, 11, 47, 33, 77, 23, 84, 81, 35, 100, 65, 62, 80, 64, 18, 50, 97, 16, 65, 32, 78, 28, 35, 44, 58, 75, 16, 46, 68, 59, 84, 34, 99, 48, 82, 95, 33};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 162;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> height = {88, 88, 38, 49, 63, 34, 52, 73, 30, 74, 71, 42, 51, 30, 48, 84, 22, 55, 61, 18, 99, 53, 36, 96, 91, 88, 79, 31, 31, 56, 70, 65, 12, 74, 54, 57, 71, 74, 39, 84, 72, 51, 19, 25, 37, 98, 85, 27, 89, 58};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 186;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> height = {99, 83, 78, 34, 33, 28, 74, 76, 58, 65, 70, 42, 91, 96, 33, 85, 28, 16, 94, 70, 24, 60, 74, 69, 90, 65, 70, 23, 25, 95, 72, 43, 33, 99, 12, 56, 56, 59, 18, 70, 80, 24, 26, 26, 30, 52, 88, 38, 47};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 219;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> height = {20, 11, 93, 17, 75, 49, 100, 43, 74, 62, 95, 71, 97, 80, 60, 39, 72, 16, 88, 83, 72, 42, 17, 22, 36, 15, 16, 38, 69, 41, 41, 73, 32, 31, 11, 37, 41, 10, 65, 67, 91, 78, 74, 29, 51, 95, 85, 14, 85, 22};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 156;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> height = {57, 62, 75, 78, 69, 39, 46, 25, 86, 16, 79, 38, 92, 90, 86, 37, 36, 39, 72, 58, 43, 34, 81, 53, 65, 63, 48, 60, 96, 99, 65, 52, 35, 38, 43, 54, 84, 14, 88, 12, 71, 17, 59, 50, 85, 16, 61, 57, 24};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 161;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> height = {54, 54, 25, 46, 45, 35, 82, 46, 17, 62, 76, 86, 60, 19, 54, 12, 23, 38, 11, 45, 22, 24, 14, 24, 34, 25, 90, 96, 82, 21, 18, 62, 76, 61, 55, 98, 92, 86, 92, 55, 34, 42, 81, 92, 38, 23, 40, 34, 80, 94};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 161;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> height = {52, 57, 98, 44, 22, 47, 88, 54, 84, 70, 58, 33, 75, 90, 55, 59, 26, 47, 13, 18, 86, 43, 15, 45, 96, 73, 60, 52, 56, 21, 55, 19, 55, 88, 19, 89, 48, 64, 59, 54, 32, 67, 44, 10, 55, 76, 16, 92, 86};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 135;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> height = {56, 23, 64, 43, 13, 12, 99, 35, 76, 25, 13, 95, 48, 71, 54, 32, 98, 23, 28, 41, 62, 93, 11, 16, 77, 12, 29, 97, 51, 11, 35, 27, 13, 72, 97, 25, 97, 96, 10, 89, 63, 75, 77, 22, 16, 35, 84, 63, 100, 98};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 149;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> height = {40, 96, 93, 23, 78, 50, 45, 99, 33, 55, 54, 95, 97, 48, 56, 56, 19, 31, 17, 67, 99, 37, 40, 79, 28, 76, 78, 81, 69, 71, 66, 16, 13, 42, 14, 92, 48, 39, 95, 11, 14, 89, 26, 52, 74, 86, 36, 46, 86};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 173;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> height = {62, 28, 93, 50, 42, 17, 52, 97, 22, 77, 37, 27, 72, 26, 28, 68, 67, 78, 61, 34, 34, 52, 90, 40, 25, 86, 58, 78, 75, 86, 86, 76, 15, 55, 13, 59, 93, 87, 46, 82, 63, 23, 93, 58, 83, 24, 40, 93, 82, 84};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 105;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> height = {65, 78, 60, 75, 34, 19, 86, 94, 81, 19, 55, 37, 13, 16, 70, 45, 25, 84, 28, 73, 71, 46, 40, 29, 39, 98, 59, 83, 75, 36, 20, 17, 39, 61, 51, 45, 11, 50, 13, 67, 49, 15, 18, 33, 26, 33, 84, 66, 28};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 196;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> height = {46, 29, 15, 32, 30, 21, 10, 75, 79, 24, 16, 43, 33, 65, 57, 78, 84, 88, 63, 65, 52, 35, 65, 24, 12, 64, 85, 10, 41, 21, 63, 86, 32, 46, 45, 56, 65, 96, 35, 88, 97, 55, 81, 70, 22, 92, 83, 83, 58, 13};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> height = {61, 84, 64, 33, 12, 47, 55, 18, 94, 55, 87, 30, 89, 87, 86, 68, 100, 23, 26, 98, 69, 53, 62, 97, 19, 33, 93, 31, 96, 81, 37, 78, 74, 76, 14, 97, 82, 89, 44, 88, 85, 11, 83, 100, 24, 73, 95, 48, 23};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 168;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> height = {28, 49, 84, 99, 90, 13, 80, 21, 30, 55, 76, 35, 98, 42, 61, 80, 95, 63, 10, 19, 27, 55, 73, 98, 53, 19, 98, 30, 33, 78, 33, 52, 47, 70, 12, 98, 87, 81, 55, 88, 54, 24, 98, 68, 68, 74, 48, 42, 99, 59};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 155;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> height = {33, 27, 11, 46, 65, 98, 94, 14, 99, 39, 96, 30, 52, 53, 82, 14, 78, 21, 74, 29, 81, 45, 47, 24, 80, 84, 27, 67, 49, 71, 17, 14, 71, 40, 29, 45, 68, 98, 38, 21, 16, 77, 11, 70, 11, 59, 58, 13, 80};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 192;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> height = {88, 74, 86, 43, 36, 79, 78, 29, 39, 60, 48, 11, 55, 19, 59, 48, 24, 42, 79, 15, 24, 53, 22, 72, 69, 15, 62, 82, 93, 97, 10, 75, 88, 71, 69, 42, 36, 82, 43, 95, 31, 98, 39, 22, 48, 79, 57, 28, 21, 51};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 234;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> height = {46, 72, 59, 53, 52, 16, 24, 88, 77, 13, 23, 12, 15, 59, 83, 86, 87, 75, 30, 76, 99, 75, 57, 82, 80, 96, 38, 15, 57, 90, 36, 11, 56, 61, 15, 16, 71, 95, 67, 52, 66, 99, 67, 80, 31, 30, 24, 10, 71};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 165;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> height = {15, 27, 40, 93, 28, 44, 82, 88, 60, 18, 16, 46, 41, 43, 26, 72, 88, 84, 57, 34, 44, 40, 48, 89, 92, 59, 30, 88, 82, 46, 85, 67, 65, 96, 87, 70, 97, 14, 54, 13, 23, 73, 82, 86, 59, 94, 40, 25, 94, 71};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 219;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> height = {63, 83, 14, 25, 46, 31, 29, 91, 52, 21, 58, 43, 59, 85, 54, 67, 21, 24, 83, 71, 89, 19, 33, 37, 53, 15, 94, 98, 77, 45, 82, 11, 85, 27, 60, 87, 97, 66, 97, 92, 100, 13, 48, 90, 78, 75, 30, 70, 16};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 117;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> height = {25, 38, 61, 43, 49, 43, 86, 10, 87, 10, 70, 66, 77, 72, 84, 20, 32, 20, 23, 69, 54, 57, 66, 33, 54, 95, 76, 61, 92, 55, 91, 29, 12, 65, 66, 94, 49, 76, 72, 67, 84, 26, 43, 41, 67, 99, 95, 48, 56, 57};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 193;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> height = {57, 33, 42, 60, 81, 60, 70, 98, 70, 99, 46, 26, 17, 73, 56, 47, 15, 62, 32, 49, 75, 95, 88, 92, 91, 95, 78, 40, 71, 82, 39, 32, 94, 46, 77, 23, 94, 17, 69, 19, 95, 56, 96, 59, 55, 41, 16, 39, 43};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 165;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> height = {99, 77, 75, 51, 17, 99, 99, 15, 85, 63, 14, 59, 75, 21, 94, 93, 37, 27, 39, 76, 35, 38, 12, 86, 10, 78, 84, 93, 22, 35, 45, 51, 51, 78, 61, 68, 26, 29, 26, 44, 88, 32, 74, 41, 60, 12, 95, 93, 91, 70};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 212;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> height = {75, 67, 47, 50, 37, 68, 85, 40, 93, 77, 80, 55, 86, 28, 19, 54, 53, 93, 21, 93, 21, 24, 54, 52, 14, 50, 41, 64, 44, 90, 18, 17, 57, 75, 49, 19, 43, 77, 25, 72, 51, 50, 70, 82, 25, 16, 36, 40, 66};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 170;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> height = {83, 48, 35, 41, 74, 36, 91, 24, 40, 89, 100, 31, 15, 41, 31, 69, 83, 13, 34, 73, 11, 74, 77, 14, 32, 11, 26, 50, 21, 34, 76, 15, 99, 58, 12, 69, 91, 80, 64, 78, 50, 91, 26, 78, 20, 51, 84, 32, 82, 100};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 165;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> height = {73, 42, 54, 52, 97, 75, 11, 32, 12, 80, 27, 22, 52, 46, 79, 31, 55, 79, 90, 31, 94, 93, 22, 69, 62, 22, 46, 67, 84, 38, 37, 82, 17, 68, 30, 91, 33, 81, 51, 69, 76, 26, 41, 13, 21, 62, 80, 45, 83};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 164;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> height = {18, 26, 23, 48, 92, 16, 73, 85, 50, 67, 81, 16, 76, 55, 47, 45, 23, 52, 38, 27, 79, 61, 35, 73, 60, 63, 60, 80, 94, 12, 89, 49, 95, 87, 61, 31, 39, 74, 89, 89, 81, 65, 18, 23, 46, 34, 48, 54, 95, 12};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 227;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> height = {49, 40, 72, 30, 19, 53, 14, 84, 48, 100, 56, 16, 83, 90, 79, 18, 88, 59, 55, 21, 67, 34, 71, 43, 85, 47, 71, 54, 43, 16, 12, 92, 41, 95, 62, 28, 45, 34, 56, 13, 48, 12, 74, 59, 11, 81, 84, 98, 82};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 156;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> height = {45, 21, 15, 55, 76, 81, 53, 43, 46, 22, 74, 36, 75, 22, 32, 55, 88, 33, 36, 46, 59, 42, 81, 66, 40, 100, 89, 78, 13, 11, 51, 71, 76, 21, 28, 91, 99, 79, 69, 57, 44, 51, 100, 65, 39, 68, 46, 27, 73, 36};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 188;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> height = {74, 31, 12, 60, 90, 76, 29, 13, 33, 66, 47, 12, 69, 92, 70, 81, 77, 23, 83, 53, 58, 18, 29, 68, 10, 27, 72, 84, 42, 20, 27, 36, 84, 10, 87, 96, 39, 85, 88, 14, 96, 85, 30, 64, 42, 72, 100, 24, 26};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 161;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> height = {79, 38, 45, 81, 71, 51, 50, 45, 73, 46, 37, 46, 33, 94, 48, 12, 31, 12, 82, 59, 37, 59, 35, 69, 67, 45, 27, 81, 16, 13, 72, 44, 97, 63, 30, 50, 76, 73, 20, 47, 23, 10, 87, 98, 10, 26, 21, 98, 57, 22};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 169;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> height = {58, 85, 100, 14, 94, 42, 12, 66, 85, 68, 22, 64, 19, 85, 48, 47, 93, 56, 86, 22, 36, 77, 82, 37, 34, 84, 56, 20, 25, 91, 46, 31, 86, 14, 69, 53, 21, 31, 80, 10, 27, 40, 55, 36, 57, 32, 40, 47, 74};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 187;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> height = {73, 40, 53, 30, 67, 24, 14, 73, 45, 38, 26, 90, 46, 59, 15, 93, 63, 65, 22, 41, 96, 58, 69, 97, 55, 19, 15, 89, 36, 72, 37, 68, 65, 14, 97, 28, 35, 49, 80, 13, 53, 31, 79, 72, 35, 18, 52, 12, 61, 73};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 157;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> height = {82, 91, 18, 45, 84, 51, 84, 23, 98, 53, 76, 76, 56, 24, 10, 44, 79, 35, 42, 10, 95, 74, 21, 49, 20, 85, 80, 46, 21, 38, 36, 53, 24, 82, 96, 55, 13, 50, 98, 45, 31, 11, 66, 84, 96, 16, 47, 64, 58};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 165;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> height = {28, 99, 39, 39, 65, 76, 86, 53, 46, 96, 85, 51, 80, 97, 64, 62, 83, 51, 23, 73, 33, 93, 61, 54, 62, 94, 46, 16, 73, 93, 50, 37, 64, 78, 100, 65, 42, 51, 78, 55, 65, 42, 97, 83, 67, 63, 58, 11, 83, 51};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 166;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> height = {86, 80, 25, 51, 29, 38, 16, 38, 38, 29, 33, 36, 87, 58, 50, 19, 20, 38, 78, 91, 70, 93, 32, 100, 100, 91, 83, 33, 54, 34, 36, 26, 88, 84, 97, 94, 65, 16, 92, 22, 34, 26, 62, 36, 17, 54, 77, 100, 84};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 171;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> height = {86, 58, 94, 50, 50, 55, 52, 44, 56, 77, 60, 63, 51, 31, 98, 97, 30, 82, 35, 14, 88, 83, 86, 69, 98, 98, 31, 99, 82, 53, 71, 25, 94, 40, 90, 71, 94, 95, 45, 75, 50, 49, 34, 37, 73, 27, 36, 36, 75, 39};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 186;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> height = {39, 37, 88, 98, 46, 63, 96, 52, 89, 61, 40, 83, 88, 31, 32, 90, 92, 34, 77, 80, 17, 94, 70, 77, 39, 21, 22, 60, 95, 67, 20, 11, 29, 45, 86, 54, 27, 21, 16, 21, 46, 83, 37, 57, 15, 45, 33, 60, 67};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 149;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> height = {40, 53, 40, 54, 64, 80, 90, 13, 57, 20, 24, 59, 88, 39, 81, 36, 60, 94, 93, 11, 86, 55, 80, 84, 72, 60, 75, 27, 95, 43, 11, 17, 39, 85, 91, 39, 75, 73, 35, 58, 16, 70, 19, 36, 71, 62, 84, 11, 56, 69};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 193;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> height = {28, 45, 61, 45, 92, 60, 56, 30, 79, 52, 94, 36, 33, 77, 42, 77, 65, 60, 54, 65, 60, 49, 97, 29, 86, 92, 56, 99, 75, 36, 97, 34, 84, 20, 49, 100, 88, 28, 53, 59, 53, 51, 34, 70, 83, 12, 88, 88, 87};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 190;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> height = {100, 58, 20, 84, 89, 63, 63, 49, 94, 82, 27, 83, 94, 36, 27, 20, 13, 24, 91, 27, 73, 52, 97, 66, 54, 13, 96, 28, 91, 51, 22, 67, 38, 34, 75, 33, 67, 61, 25, 27, 23, 48, 54, 79, 54, 64, 90, 99, 23, 57};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 138;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> height = {71, 44, 61, 18, 51, 55, 33, 15, 58, 74, 76, 13, 78, 48, 22, 62, 55, 89, 69, 87, 51, 54, 40, 44, 98, 50, 31, 95, 85, 76, 85, 29, 67, 75, 60, 11, 25, 13, 70, 81, 22, 40, 54, 24, 37, 24, 54, 71, 10};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 173;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> height = {61, 73, 28, 71, 81, 37, 85, 20, 13, 48, 81, 82, 29, 49, 81, 92, 57, 49, 55, 28, 87, 94, 42, 46, 100, 19, 72, 26, 53, 56, 36, 59, 43, 38, 86, 87, 100, 13, 29, 52, 42, 83, 84, 51, 30, 18, 98, 79, 52, 19};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 145;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> height = {30, 79, 79, 97, 93, 81, 16, 19, 63, 29, 28, 37, 12, 54, 14, 15, 45, 97, 13, 33, 82, 71, 54, 48, 89, 15, 19, 74, 27, 26, 39, 90, 38, 54, 56, 98, 31, 71, 16, 58, 23, 65, 27, 26, 16, 19, 88, 94, 17};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 172;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> height = {48, 70, 23, 39, 76, 65, 63, 30, 59, 71, 39, 40, 68, 87, 21, 71, 11, 68, 39, 60, 84, 65, 15, 30, 20, 32, 13, 13, 42, 63, 17, 22, 84, 59, 35, 10, 54, 21, 27, 13, 82, 38, 66, 81, 26, 94, 12, 59, 89, 76};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> height = {69, 64, 86, 74, 46, 100, 44, 48, 13, 21, 29, 87, 81, 54, 89, 58, 94, 76, 44, 99, 26, 24, 24, 44, 75, 72, 79, 13, 74, 35, 57, 87, 30, 11, 33, 25, 95, 74, 68, 59, 59, 61, 100, 66, 65, 72, 70, 38, 55};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 176;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> height = {56, 52, 37, 41, 13, 33, 86, 34, 54, 80, 88, 61, 47, 78, 31, 57, 92, 52, 45, 66, 89, 69, 94, 35, 29, 21, 14, 90, 18, 16, 25, 36, 30, 67, 32, 39, 17, 100, 21, 73, 72, 90, 33, 83, 100, 32, 32, 24, 67, 30};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 169;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> height = {36, 19, 64, 82, 48, 80, 51, 12, 50, 48, 37, 59, 17, 53, 60, 22, 14, 92, 11, 85, 37, 81, 88, 17, 42, 39, 19, 50, 60, 95, 99, 29, 61, 24, 30, 57, 69, 11, 47, 39, 69, 52, 87, 11, 13, 41, 26, 39, 52};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 155;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> height = {40, 80, 100, 30, 91, 92, 95, 96, 81, 82, 83, 84, 85, 86, 87, 88, 89, 71, 55, 57, 60, 62, 63, 64, 65, 66, 67, 68, 69, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> height = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 145;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> height = {10, 100, 12, 98, 14, 96, 16, 94, 18, 92, 20, 90, 22, 88, 54, 36, 96, 84, 28, 82, 30, 80, 32, 78, 34, 76, 36, 74, 38, 72, 40, 70, 42, 68, 44, 66, 46, 64, 48, 62, 50, 60, 52, 58, 54, 86, 52, 54, 56, 58};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 176;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> height = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 143;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> height = {10, 11, 12, 13, 15, 10, 12, 13, 14, 15, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 34, 54, 32, 53, 52, 53, 54, 52, 53, 42, 32, 53, 54, 54};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 115;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> height = {10, 10, 10, 10, 10, 10, 10, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 24, 65, 23, 76, 87, 23, 54, 23, 65, 87, 98, 23, 12, 45, 65, 98, 45, 23, 54, 12, 43, 34, 54, 67, 78, 89, 87, 76};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 202;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> height = {10, 100, 100, 40, 50, 60, 70, 80, 90};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> height = {56, 46, 18, 78, 54, 15, 28, 82, 36, 36, 64, 87, 45, 30, 60, 85, 68, 50, 86, 50, 58, 29, 33, 29, 83, 19, 13, 33, 59, 70, 63, 70, 11, 61, 34, 63, 96, 98, 84, 82, 92, 44, 51, 49, 66, 98, 29, 50, 78, 20};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 146;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> height = {51, 27, 44, 50, 99, 74, 58, 28, 62, 84, 45, 75, 71, 97, 71, 51, 35, 72, 67, 46, 91, 34, 42, 73, 32, 62, 61, 96, 18, 15, 57, 46, 21, 28, 79, 32, 27, 29, 35, 94, 93, 61, 12, 13, 43, 84, 31, 71, 93, 38};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 157;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> height = {80, 82, 81, 50, 90, 80, 82, 81, 50, 90, 80, 82, 81, 50, 90, 80, 82, 81, 33, 90, 80, 82, 81, 50, 90, 80, 82, 81, 50, 90, 80, 82, 81, 50, 90, 80, 82, 81, 50, 90, 80, 82, 43, 50, 90, 80, 82, 81, 50, 90};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 113;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> height = {51, 50, 53, 50, 50, 52};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> height = {40, 30, 70, 25, 33, 47, 79, 91, 11, 13, 15, 16, 18, 20, 22, 24, 36, 40, 45, 47, 50, 52, 53, 55, 59, 62, 83, 81, 75, 92, 95, 99, 24, 14, 19};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 146;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> height = {13, 12, 16, 11, 18, 14, 17, 15};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
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
    vector<int> height = {50, 60, 70, 12, 34, 56, 67, 78, 89, 32, 45, 54, 32, 76, 87, 98, 32, 43, 54, 65, 76, 87, 98, 11, 22, 33, 44, 55, 66, 77, 88, 99, 21, 32, 12, 45, 54, 76, 54, 32, 34, 56, 76, 54, 32, 34};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 166;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> height = {13, 17, 11, 12, 10, 23, 32, 55, 43, 44, 67, 78, 45, 36, 66, 76, 88};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 212;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> height = {10, 30, 30, 10, 10, 20, 20, 30, 30};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> height = {20, 10, 10, 11, 12, 13, 14};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> height = {70, 10, 13, 10, 45, 50, 60, 56, 45, 12, 13, 14, 65, 45, 48, 87, 67, 56, 45, 53, 45, 33, 45, 76, 87, 65, 45, 33, 13, 15, 16, 17, 84, 83, 82, 90, 91, 26, 54, 54, 53, 56, 57, 52};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 159;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> height = {50, 60, 70, 11, 22, 33, 44, 55, 66, 77, 88, 99, 12, 23, 34, 45, 56, 67, 78, 89, 98, 87, 76, 65, 54, 43, 32, 21, 13, 25, 36, 47, 58, 59, 35, 43, 21, 64, 75, 86, 23, 42, 74, 42, 64};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 166;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> height = {100, 74, 92, 24, 64, 35, 75, 87, 35, 78, 36, 77, 37, 75, 58, 86, 26, 87, 96, 36, 36, 75, 36, 47, 38, 85, 64, 74, 47, 36, 75, 74, 36, 85, 87, 36, 23, 64, 86, 98, 24, 53, 35, 67, 87, 89, 64, 35, 57, 57};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 192;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> height = {80, 70, 56, 36, 66, 80, 54, 32, 88, 77, 34, 65, 87, 80, 54, 76, 87, 78, 74, 34, 56, 78, 66, 34, 56, 88, 12, 23, 34, 45, 56, 67, 34, 78, 34, 90, 34, 68, 89, 34, 68, 34, 59, 39, 10, 95, 49, 48, 34, 74};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 178;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> height = {10, 50, 10, 70, 49, 48, 10, 10, 10, 10};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> height = {44, 15, 35, 99, 87, 78, 12, 13, 14, 15, 16, 17, 18, 19, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 51, 52, 53, 54, 55, 56, 57};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 160;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> height = {45, 10, 60, 20, 30, 40, 50};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> height = {50, 60, 40, 70, 59, 58, 10, 20, 30};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> height = {50, 100, 45, 45, 49, 60};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> height = {10, 100, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 30, 40, 50, 60, 70, 80, 90, 100, 10, 20, 30, 40, 50, 10, 70, 80, 90, 100, 10, 20, 30, 40, 50, 10, 70, 80, 90, 100, 10, 20, 30, 40, 50, 10, 70, 80, 90, 100};
    TeamPhoto* pObj = new TeamPhoto();
    clock_t start = clock();
    int result = pObj->minDiff(height);
    clock_t end = clock();
    delete pObj;
    int expected = 170;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=286907&rd=4640&pm=1614
********************************************************************************
//program framework generated with WishingBone's parser :)-
 
//common header
#ifdef WIN32
#  pragma warning(disable:4786)
#  define for if (0); else for
#endif
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;
 
//64 bit integer definition
#ifdef WIN32
#define in_routine(type,spec) \
istream& operator>>(istream& s,type &d){char b[30];s>>b;sscanf(b,spec,&d);return s;}
#define out_routine(type,spec) \
ostream& operator<<(ostream& s,type d){char b[30];sprintf(b,spec,d);s<<b;return s;}
typedef signed __int64 i64; in_routine(i64,"%I64d") out_routine(i64,"%I64d")
typedef unsigned __int64 u64; in_routine(u64,"%I64u") out_routine(u64,"%I64u")
#else
typedef signed long long i64;
typedef unsigned long long u64;
#endif
 
//common routines
#ifdef WIN32
#define min(a,b) _cpp_min(a,b)
#define max(a,b) _cpp_max(a,b)
#endif
#define abs(a) ((a)>0?(a):-(a))
#define s2d(s,d) {istringstream(s)>>d;}
#define d2s(d,s) {ostringstream t;t<<d;s=t.str();}
int gcd(int a,int b){for(int c;b;c=a,a=b,b=c%b);return a;}
int lcm(int a,int b){return a/gcd(a,b)*b;}
 
//remove routine
template <class T>
void remove(vector<T>& v,const T&e){
  v.resize(remove(v.begin(),v.end(),e)-v.begin());
}
template <class T>
vector<T> remove_copy(vector<T>& v,const T&e){
  vector<T> result;
  remove_copy(v.begin(),v.end(),back_inserter(result),e);
  return result;
}
 
//output routine
ostream& operator<<(ostream& s,string d){
  s<<'\"'<<d.c_str()<<'\"';
  return s;
}
template <class T>
ostream& operator<<(ostream& s,vector<T> d){
  s<<"{";
  for (typename vector<T>::iterator i=d.begin();i!=d.end();i++)
    s<<(i!=d.begin()?",":"")<<*i;
  s<<"}";
  return s;
}
 
//parsing routine
template <class T>
vector<basic_string<T> > parse(const basic_string<T> &s,const basic_string<T> &delim){
  vector<basic_string<T> > ret(0);
  for (int b,e=0;;ret.push_back(s.substr(b,e-b)))
    if ((b=s.find_first_not_of(delim,e))==(e=s.find_first_of(delim,b)))
      return ret;
}
vector<int> intparse(const string &s,const string &delim=" \t\n"){
  vector<string> tmp=parse(s,delim);
  vector<int> ret(0);
  int t;
  for (vector<string>::iterator i=tmp.begin();i!=tmp.end();i++)
    sscanf(i->c_str(),"%d",&t),ret.push_back(t);
  return ret;
}
 
//name mapper
class mapper{
public:
  map<string,int> m;
  vector<string> v;
  void reset(){
    v.clear();
    m.clear();
  }
  int size(){
    return v.size();
  }
  int get(const string str){
    if (m.find(str)==m.end()){
      m[str]=v.size();
      v.push_back(str);
    }
    return m[str];
  }
  string get(int i){
    return v[i];
  }
  vector<int> get(const vector<string>& strs){
    vector<int> ret;
    ret.reserve(strs.size()+2);
    for(int i=0;i<strs.size();i++)
      ret.push_back(get(strs[i]));
    return ret;
  }
  vector<string> get(const vector<int>& is){
    vector<string> ret;
    ret.reserve(is.size()+2);
    for(int i=0;i<is.size();i++)
      ret.push_back(get(is[i]));
    return ret;
  }
};
 
 
class TeamPhoto{
public:
  int calc(vector<int>& p) {
    int ret = 0;
    for (int i = 0; i < p.size() - 1; ++i) {
      int t = p[i] - p[i + 1];
      if (t < 0) t = -t;
      ret += t;
    }
    return ret;
  }
  int calc(vector<int>& p, int pos) {
    int ret = calc(p);
    vector<int> t = p;
    for (int i = 1, j = pos - 1; i < j; ++i, --j) swap(t[i], t[j]);
    if (calc(t) < ret) ret = calc(t);
    t = p;
    for (int i = pos + 1, j = p.size() - 2; i < j; ++i, --j) swap(t[i], t[j]);
    if (calc(t) < ret) ret = calc(t);
    t = p;
    for (int i = 1, j = pos - 1; i < j; ++i, --j) swap(t[i], t[j]);
    for (int i = pos + 1, j = p.size() - 2; i < j; ++i, --j) swap(t[i], t[j]);
    if (calc(t) < ret) ret = calc(t);
    return ret;
  }
  int minDiff(vector<int> height){
    sort(height.begin() + 1, height.begin() + 3);
    sort(height.begin() + 3, height.end());
    int head = height[0];
    int a1 = height[1];
    int a2 = height[2];
    vector<int> p;
    int num = (height.size() - 3) / 2;
    p.push_back(a1);
    for (int i = 3; i < 3 + num; ++i) p.push_back(height[i]);
    p.push_back(head);
    for (int i = 3 + num; i < height.size(); ++i) p.push_back(height[i]);
    p.push_back(a2);
    int ret = calc(p, (p.size() - 1) / 2);
    if (p.size() % 2 == 0) {
      swap(p[p.size() / 2 - 1], p[p.size() / 2]);
      if (calc(p, p.size() / 2) < ret) ret = calc(p, p.size() / 2);
    }
    return ret;
  }
};

********************************************************************************
*******************************************************************************/