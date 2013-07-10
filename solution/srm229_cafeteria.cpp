/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3080
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

class Cafeteria {
public:
    string latestTime(vector<int> offset, vector<int> walkingTime, vector<int> drivingTime);
};

string Cafeteria::latestTime(vector<int> offset, vector<int> walkingTime, vector<int> drivingTime) {
    string ret;
    return ret;
}


int test0() {
    vector<int> offset = {9};
    vector<int> walkingTime = {1};
    vector<int> drivingTime = {1};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "02:28";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> offset = {6};
    vector<int> walkingTime = {9};
    vector<int> drivingTime = {120};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "12:17";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> offset = {6, 9};
    vector<int> walkingTime = {9, 10};
    vector<int> drivingTime = {120, 121};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "12:19";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> offset = {0};
    vector<int> walkingTime = {20};
    vector<int> drivingTime = {250};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "10:00";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> offset = {0};
    vector<int> walkingTime = {21};
    vector<int> drivingTime = {250};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "09:59";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> offset = {1};
    vector<int> walkingTime = {30};
    vector<int> drivingTime = {300};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "08:51";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> offset = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> walkingTime = {11, 11, 11, 11, 11, 11, 11, 11, 11, 11};
    vector<int> drivingTime = {190, 190, 190, 190, 190, 190, 190, 190, 190, 190};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "11:09";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> offset = {2, 9, 1, 0, 3, 8, 9, 0, 6, 3, 4, 2, 0, 9, 9, 6, 7, 6, 8, 1};
    vector<int> walkingTime = {20, 9, 22, 17, 23, 6, 23, 11, 24, 24, 19, 8, 17, 25, 22, 9, 18, 1, 21, 2};
    vector<int> drivingTime = {263, 56, 218, 148, 76, 280, 183, 63, 107, 251, 264, 155, 139, 92, 263, 146, 140, 299, 130, 84};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "01:20";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> offset = {6, 5, 1, 1, 4, 9, 2, 1, 4, 1, 6, 3, 1, 4, 5, 6, 9, 2, 1, 0, 7, 6, 6, 6, 5};
    vector<int> walkingTime = {30, 12, 5, 3, 15, 10, 9, 8, 23, 18, 29, 19, 2, 3, 8, 7, 19, 25, 16, 30, 4, 19, 24, 16, 4};
    vector<int> drivingTime = {75, 29, 119, 155, 7, 75, 224, 162, 49, 209, 184, 3, 104, 183, 115, 239, 127, 189, 268, 289, 290, 116, 239, 51, 35};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "02:04";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> offset = {5, 6, 8, 5, 8, 0, 5, 6, 2, 2, 0, 9, 2, 0, 0, 7, 1, 1, 1, 3, 4, 8, 8, 3, 3, 1, 9, 9, 6, 1};
    vector<int> walkingTime = {1, 2, 11, 14, 17, 1, 6, 10, 18, 12, 18, 23, 1, 20, 9, 3, 13, 23, 19, 30, 11, 1, 10, 30, 19, 8, 25, 21, 8, 15};
    vector<int> drivingTime = {56, 235, 108, 194, 14, 198, 39, 8, 95, 267, 257, 128, 299, 291, 256, 101, 108, 237, 217, 197, 201, 1, 22, 102, 124, 207, 133, 1, 283, 109};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "02:27";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> offset = {0, 2, 5, 9, 8, 8, 1, 6, 8, 5, 8, 4, 7, 1, 8, 2, 5, 7, 8, 1, 4, 9, 5, 6, 4, 3, 6, 9, 1, 0, 4, 1, 8, 2, 2};
    vector<int> walkingTime = {12, 16, 13, 11, 30, 14, 27, 29, 6, 27, 23, 17, 7, 2, 8, 9, 22, 21, 15, 5, 8, 15, 24, 8, 2, 26, 14, 6, 1, 2, 16, 23, 15, 2, 15};
    vector<int> drivingTime = {287, 33, 221, 240, 170, 26, 248, 241, 234, 104, 103, 200, 145, 147, 3, 186, 191, 138, 53, 176, 142, 136, 237, 27, 163, 54, 151, 233, 21, 154, 214, 191, 107, 171, 34};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "02:10";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> offset = {8, 3, 8, 9, 4, 3, 8, 7, 3, 2, 8, 4, 6, 4, 9, 0, 4, 8, 2, 7, 4, 3, 4, 7, 4, 3, 0, 9, 1, 6, 4, 9, 9, 7, 7, 9, 5, 4, 3, 5};
    vector<int> walkingTime = {19, 30, 28, 23, 25, 14, 26, 28, 13, 6, 22, 5, 18, 28, 26, 27, 23, 4, 18, 17, 21, 11, 23, 3, 18, 8, 10, 4, 1, 30, 23, 22, 20, 24, 1, 3, 6, 24, 30, 10};
    vector<int> drivingTime = {171, 156, 166, 111, 249, 189, 132, 278, 146, 14, 141, 81, 81, 141, 214, 217, 287, 5, 153, 38, 145, 31, 93, 142, 2, 113, 287, 103, 252, 292, 59, 59, 151, 200, 176, 8, 258, 110, 75, 111};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "02:16";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> offset = {3, 8, 4, 4, 9, 2, 5, 0, 1, 3, 1, 3, 5, 1, 9, 6, 9, 2, 8, 0, 6, 0, 4, 7, 0, 9, 3, 9, 7, 2, 8, 5, 3, 5, 7, 9, 9, 7, 0, 0, 5, 3, 0, 6, 7};
    vector<int> walkingTime = {13, 7, 11, 28, 12, 12, 28, 10, 7, 30, 22, 26, 28, 28, 27, 27, 15, 14, 13, 21, 18, 16, 24, 27, 20, 7, 13, 29, 28, 30, 16, 24, 22, 21, 14, 7, 10, 3, 28, 12, 13, 5, 3, 12, 12};
    vector<int> drivingTime = {122, 64, 172, 248, 279, 123, 96, 78, 205, 167, 8, 212, 36, 116, 207, 233, 135, 119, 195, 289, 74, 152, 148, 139, 284, 147, 61, 157, 124, 266, 11, 8, 220, 265, 179, 217, 177, 19, 29, 204, 19, 44, 229, 141, 56};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "02:04";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> offset = {2, 0, 8, 3, 0, 7, 7, 4, 5, 4, 9, 8, 5, 8, 8, 2, 2, 4, 9, 1, 7, 4, 8, 3, 6, 1, 8, 4, 1, 4, 8, 7, 8, 1, 0, 0, 0, 7, 7, 0, 3, 0, 8, 9, 2, 3, 1, 5, 5, 2};
    vector<int> walkingTime = {19, 4, 10, 28, 2, 1, 26, 9, 22, 27, 5, 9, 25, 6, 19, 6, 9, 25, 29, 20, 23, 30, 21, 24, 9, 12, 26, 3, 21, 10, 15, 30, 21, 13, 23, 19, 19, 4, 18, 12, 28, 30, 9, 7, 16, 4, 1, 20, 14, 8};
    vector<int> drivingTime = {247, 13, 254, 300, 232, 287, 28, 11, 241, 103, 54, 248, 63, 150, 41, 91, 194, 103, 26, 83, 205, 91, 138, 95, 145, 109, 38, 157, 163, 149, 14, 226, 248, 186, 69, 145, 294, 31, 119, 184, 230, 4, 106, 82, 296, 194, 52, 19, 280, 168};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "02:06";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> offset = {7, 2, 4, 9, 3, 7, 4, 9, 0, 5, 5, 5, 2, 2, 9, 5, 3, 4, 0, 8, 0, 6, 5, 8, 3, 2, 7, 0, 1, 3, 7, 2, 3, 4, 0, 2, 0, 8, 3, 6, 4, 2, 0, 2, 6, 9, 3, 3, 0, 7};
    vector<int> walkingTime = {9, 17, 25, 11, 14, 18, 12, 28, 3, 30, 21, 28, 14, 3, 28, 1, 10, 8, 28, 16, 9, 25, 29, 10, 20, 30, 21, 5, 10, 20, 29, 14, 23, 15, 4, 11, 14, 27, 29, 1, 10, 21, 6, 24, 25, 12, 30, 10, 15, 18};
    vector<int> drivingTime = {143, 101, 18, 12, 119, 98, 92, 20, 152, 99, 27, 95, 261, 65, 6, 75, 9, 190, 81, 272, 197, 191, 219, 172, 259, 82, 145, 110, 45, 149, 229, 173, 119, 257, 110, 256, 18, 14, 39, 234, 39, 182, 80, 125, 174, 170, 21, 160, 265, 8};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "02:03";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> offset = {7, 9, 0, 3, 9, 5, 9, 7, 6, 4, 5, 1, 6, 2, 0, 6, 7, 4, 4, 7, 4, 6, 5, 3, 4, 4, 1, 2, 1, 4, 1, 0, 5, 9, 8, 5, 9, 7, 5, 6, 7, 0, 2, 6, 5, 6, 7, 1, 4, 6};
    vector<int> walkingTime = {30, 24, 21, 27, 15, 3, 10, 13, 14, 2, 6, 24, 3, 18, 2, 18, 14, 19, 16, 9, 22, 10, 2, 13, 12, 24, 5, 30, 21, 15, 27, 5, 18, 28, 9, 22, 5, 15, 14, 29, 18, 30, 7, 10, 13, 1, 25, 20, 25, 9};
    vector<int> drivingTime = {15, 188, 138, 70, 219, 178, 148, 37, 169, 134, 8, 29, 122, 140, 236, 84, 221, 204, 136, 39, 293, 69, 37, 110, 281, 173, 280, 241, 83, 69, 217, 235, 218, 190, 160, 282, 132, 267, 117, 286, 152, 66, 86, 71, 49, 132, 239, 249, 37, 159};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "02:09";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> offset = {6, 1, 8, 0, 5, 3, 6, 2, 5, 6, 9, 9, 3, 0, 9, 2, 2, 6, 7, 2, 2, 0, 9, 6, 8, 5, 9, 9, 0, 3, 4, 5, 6, 3, 2, 8, 3, 4, 0, 5, 1, 9, 3, 2, 7, 1, 4, 6, 0, 4};
    vector<int> walkingTime = {5, 7, 3, 12, 18, 20, 11, 1, 17, 23, 10, 28, 19, 9, 29, 4, 23, 14, 15, 26, 11, 12, 21, 4, 29, 26, 6, 19, 17, 14, 18, 10, 2, 18, 2, 9, 24, 13, 13, 14, 19, 11, 29, 20, 10, 23, 22, 8, 16, 4};
    vector<int> drivingTime = {98, 245, 131, 271, 183, 99, 176, 53, 233, 294, 278, 114, 12, 107, 298, 93, 3, 68, 191, 218, 172, 247, 36, 192, 257, 263, 106, 166, 126, 222, 163, 175, 242, 264, 117, 70, 237, 33, 19, 64, 22, 254, 249, 205, 196, 236, 60, 237, 215, 83};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "01:59";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> offset = {8, 1, 4, 8, 9, 8, 1, 2, 4, 2, 8, 4, 8, 3, 0, 5, 5, 4, 0, 6, 3, 1, 6, 5, 9, 1, 3, 6, 4, 5, 0, 9, 7, 9, 7, 7, 2, 7, 9, 5, 5, 7, 4, 0, 0, 8, 5, 3, 9, 1};
    vector<int> walkingTime = {17, 13, 26, 2, 18, 23, 4, 10, 25, 17, 22, 15, 5, 1, 1, 19, 10, 30, 12, 30, 5, 1, 21, 9, 6, 28, 1, 15, 23, 6, 28, 20, 8, 30, 12, 9, 9, 16, 26, 23, 17, 8, 19, 29, 28, 10, 27, 12, 5, 26};
    vector<int> drivingTime = {126, 194, 232, 203, 157, 130, 166, 11, 239, 105, 113, 203, 92, 234, 269, 197, 206, 128, 55, 8, 102, 101, 58, 237, 271, 140, 282, 163, 254, 150, 209, 144, 38, 253, 186, 67, 195, 137, 126, 277, 205, 15, 215, 107, 118, 172, 215, 140, 210, 252};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "02:02";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> offset = {7, 1, 2, 1, 3, 8, 3, 4, 5, 0, 9, 7, 8, 7, 1, 8, 8, 1, 2, 6, 5, 3, 7, 0, 1, 5, 3, 3, 6, 6, 4, 5, 2, 9, 1, 0, 0, 6, 3, 7, 2, 9, 8, 6, 3, 0, 2, 5, 7};
    vector<int> walkingTime = {3, 21, 5, 26, 20, 21, 8, 26, 16, 2, 19, 8, 21, 15, 5, 13, 28, 21, 2, 6, 8, 4, 21, 21, 20, 1, 12, 6, 5, 10, 29, 15, 8, 11, 13, 27, 3, 24, 6, 25, 27, 9, 12, 24, 10, 30, 20, 20, 18};
    vector<int> drivingTime = {224, 246, 187, 136, 232, 122, 296, 105, 220, 24, 122, 194, 195, 212, 48, 268, 184, 267, 4, 161, 159, 230, 93, 179, 294, 143, 250, 269, 251, 246, 63, 80, 234, 77, 232, 253, 186, 28, 239, 215, 218, 99, 20, 155, 202, 161, 29, 14, 90};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "02:20";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> offset = {7, 4, 0, 0, 2, 1, 6, 7, 7, 0, 8, 6, 0, 5, 0, 6, 7, 9, 0, 2, 4, 8, 4, 7, 9, 2, 4, 4, 3, 1, 4, 5, 8, 8, 2, 5, 7, 8, 7, 5, 6, 8, 8, 0, 1, 3, 5, 0, 8};
    vector<int> walkingTime = {26, 14, 1, 4, 16, 28, 16, 6, 4, 5, 21, 18, 5, 2, 21, 21, 28, 22, 5, 22, 26, 16, 14, 19, 19, 19, 4, 12, 24, 4, 30, 16, 28, 20, 25, 2, 30, 18, 4, 6, 9, 22, 8, 3, 7, 29, 8, 30, 6};
    vector<int> drivingTime = {151, 264, 280, 89, 63, 57, 15, 120, 28, 296, 76, 269, 90, 106, 31, 222, 291, 52, 102, 73, 140, 248, 44, 187, 76, 49, 296, 106, 54, 119, 54, 283, 263, 285, 275, 127, 108, 82, 84, 241, 169, 203, 244, 256, 109, 288, 9, 262, 103};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "02:07";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> offset = {0, 5, 0, 5, 3, 6, 0, 7, 4, 3, 8, 6, 7, 0, 0, 4, 1, 1, 7, 0, 9, 0, 9, 1, 2, 4, 5, 9, 5, 6, 4, 0, 0, 9, 9, 4, 0, 5, 5, 1, 5, 7, 1, 5, 5, 9, 6, 9, 8};
    vector<int> walkingTime = {13, 12, 7, 10, 18, 20, 23, 19, 16, 9, 28, 6, 25, 25, 23, 14, 30, 15, 4, 7, 17, 16, 25, 23, 14, 29, 4, 3, 24, 27, 7, 1, 3, 28, 4, 26, 14, 2, 2, 3, 26, 12, 13, 10, 12, 26, 3, 7, 14};
    vector<int> drivingTime = {290, 61, 276, 253, 112, 97, 55, 27, 292, 117, 127, 217, 246, 105, 1, 20, 241, 254, 240, 36, 113, 13, 243, 54, 252, 286, 131, 46, 270, 43, 294, 130, 187, 268, 293, 77, 5, 62, 56, 6, 141, 23, 16, 91, 221, 255, 133, 262, 131};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "02:18";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> offset = {2, 2, 5, 7, 3, 2, 9, 5, 1, 8, 6, 6, 6, 4, 0, 8, 7, 8, 5, 6, 8, 4, 9, 6, 3, 5, 4, 8, 4, 6, 1, 3, 9, 7, 7, 5, 9, 5, 8, 0, 6, 5, 4, 7, 5, 8, 1, 1};
    vector<int> walkingTime = {16, 3, 11, 17, 2, 2, 29, 2, 13, 6, 20, 17, 13, 6, 22, 12, 15, 21, 12, 5, 6, 17, 3, 22, 13, 24, 15, 5, 12, 23, 13, 12, 20, 3, 1, 1, 20, 26, 26, 19, 24, 19, 24, 8, 20, 6, 27, 6};
    vector<int> drivingTime = {202, 300, 145, 208, 209, 140, 1, 131, 262, 81, 183, 178, 249, 73, 180, 116, 273, 253, 170, 292, 13, 225, 56, 233, 223, 59, 289, 256, 252, 170, 210, 279, 241, 85, 202, 95, 181, 291, 285, 90, 228, 170, 124, 261, 183, 18, 149, 147};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "02:02";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> offset = {8, 9, 6, 2, 2, 7, 4, 8, 5, 0, 3, 2, 0, 3, 0, 0, 6, 2, 7, 4, 6, 5, 6, 1, 9, 6, 6, 3, 5, 7, 0, 3, 7, 2, 8, 5, 1, 5, 9, 3, 9, 6, 6, 8, 5, 7, 5, 7};
    vector<int> walkingTime = {30, 2, 11, 23, 29, 29, 28, 12, 10, 28, 24, 3, 26, 30, 30, 12, 5, 4, 29, 8, 12, 27, 29, 11, 4, 15, 7, 30, 29, 22, 14, 18, 15, 23, 26, 25, 14, 27, 26, 20, 16, 12, 4, 29, 29, 1, 20, 15};
    vector<int> drivingTime = {11, 194, 35, 18, 291, 219, 57, 165, 39, 25, 62, 268, 219, 174, 10, 281, 87, 299, 248, 92, 225, 204, 58, 235, 188, 20, 152, 172, 158, 141, 14, 128, 133, 263, 278, 161, 163, 8, 269, 104, 121, 136, 44, 7, 35, 134, 272, 237};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "01:56";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> offset = {6, 1, 0, 1, 2, 2, 8, 3, 0, 6, 8, 4, 2, 7, 8, 9, 8, 3, 1, 7, 7, 1, 9, 7, 0, 8, 6, 7, 1, 2, 4, 0, 4, 9, 9, 2, 5, 7, 5, 8, 0, 0, 3, 8, 6, 6, 0};
    vector<int> walkingTime = {8, 26, 11, 1, 24, 20, 22, 21, 23, 17, 28, 7, 7, 6, 19, 6, 16, 10, 21, 19, 17, 27, 4, 16, 6, 9, 1, 11, 10, 21, 25, 26, 20, 24, 5, 23, 28, 23, 30, 30, 24, 7, 2, 5, 28, 19, 19};
    vector<int> drivingTime = {172, 82, 102, 164, 153, 110, 169, 102, 44, 128, 288, 273, 68, 44, 91, 33, 279, 77, 173, 190, 135, 271, 90, 222, 69, 164, 261, 59, 174, 80, 260, 147, 116, 156, 94, 92, 261, 124, 102, 176, 242, 163, 73, 276, 129, 23, 131};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "01:47";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> offset = {7, 6, 5, 2, 2, 2, 6, 5, 2, 7, 2, 2, 3, 8, 9, 6, 5, 5, 9, 1, 3, 6, 3, 8, 9, 1, 2, 1, 4, 4, 8, 9, 3, 9, 6, 2, 3, 1, 2, 1, 8, 1, 9, 4, 7, 8};
    vector<int> walkingTime = {5, 17, 30, 28, 5, 15, 9, 16, 6, 1, 14, 17, 30, 23, 28, 7, 5, 13, 23, 22, 15, 3, 23, 18, 21, 15, 13, 8, 18, 10, 7, 8, 3, 13, 16, 29, 25, 30, 2, 3, 12, 30, 25, 3, 12, 5};
    vector<int> drivingTime = {115, 65, 117, 250, 81, 246, 60, 127, 4, 191, 247, 295, 115, 38, 155, 167, 238, 49, 69, 12, 186, 11, 29, 253, 156, 199, 87, 142, 60, 158, 246, 224, 59, 289, 168, 260, 53, 90, 6, 175, 92, 247, 70, 209, 162, 58};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "02:20";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> offset = {7, 4, 0, 0, 2, 1, 6, 7, 7, 0, 8, 6, 0, 5, 0, 6, 7, 9, 0, 2, 4, 8, 4, 7, 9, 2, 4, 4, 3, 1, 4, 5, 8, 8, 2, 5, 7, 8, 7, 5, 6, 8, 8, 0, 1, 3, 5, 0, 8};
    vector<int> walkingTime = {26, 14, 1, 4, 16, 28, 16, 6, 4, 5, 21, 18, 5, 2, 21, 21, 28, 22, 5, 22, 26, 16, 14, 19, 19, 19, 4, 12, 24, 4, 30, 16, 28, 20, 25, 2, 30, 18, 4, 6, 9, 22, 8, 3, 7, 29, 8, 30, 6};
    vector<int> drivingTime = {151, 264, 280, 89, 63, 57, 15, 120, 28, 296, 76, 269, 90, 106, 31, 222, 291, 52, 102, 73, 140, 248, 44, 187, 76, 49, 296, 106, 54, 119, 54, 283, 263, 285, 275, 127, 108, 82, 84, 241, 169, 203, 244, 256, 109, 288, 9, 262, 103};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "02:07";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> offset = {3};
    vector<int> walkingTime = {30};
    vector<int> drivingTime = {300};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "08:53";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> offset = {5};
    vector<int> walkingTime = {1};
    vector<int> drivingTime = {20};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "02:04";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> offset = {7, 4, 0, 6, 7, 7, 0, 8, 6, 0, 5, 0, 6, 7, 9, 0, 2, 4, 8, 4, 7, 9, 2, 4, 4, 3, 1, 4, 5, 8, 8, 2, 5, 7, 8, 7, 5, 6, 8, 8, 0, 1, 3, 5, 0, 8};
    vector<int> walkingTime = {26, 16, 28, 16, 6, 4, 5, 21, 18, 5, 2, 21, 21, 28, 22, 5, 22, 26, 16, 14, 19, 19, 19, 4, 12, 24, 4, 30, 16, 28, 20, 25, 2, 30, 18, 4, 6, 9, 22, 8, 3, 7, 29, 8, 30, 6};
    vector<int> drivingTime = {151, 26, 56, 28, 296, 57, 76, 269, 90, 106, 31, 222, 291, 52, 102, 73, 140, 248, 44, 187, 76, 49, 296, 106, 54, 119, 54, 283, 263, 285, 275, 127, 108, 82, 84, 241, 169, 203, 244, 256, 109, 288, 9, 45, 32, 34};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "01:53";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> offset = {1, 1};
    vector<int> walkingTime = {1, 30};
    vector<int> drivingTime = {1, 300};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "02:20";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> offset = {1};
    vector<int> walkingTime = {30};
    vector<int> drivingTime = {299};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "09:01";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> offset = {1};
    vector<int> walkingTime = {21};
    vector<int> drivingTime = {120};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "12:00";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> offset = {5};
    vector<int> walkingTime = {1};
    vector<int> drivingTime = {33};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "01:54";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> offset = {0};
    vector<int> walkingTime = {10};
    vector<int> drivingTime = {80};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "01:00";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> offset = {7, 4, 0, 6, 7, 7, 0, 8, 6, 0, 5, 0, 6, 7, 9, 0, 2, 4, 8, 4, 7, 9, 2, 4, 4, 3, 1, 4, 5, 8, 8, 2, 5, 7, 8, 7, 5, 6, 8, 8, 0, 1, 3, 5, 0, 8, 9, 9, 4, 6};
    vector<int> walkingTime = {26, 16, 28, 16, 6, 4, 5, 21, 18, 5, 2, 21, 21, 28, 22, 5, 22, 26, 16, 14, 19, 19, 19, 4, 12, 24, 4, 30, 16, 28, 20, 25, 2, 30, 18, 4, 6, 9, 22, 8, 3, 7, 29, 8, 30, 6, 4, 7, 4, 4};
    vector<int> drivingTime = {151, 26, 56, 2, 296, 57, 76, 269, 90, 106, 31, 222, 291, 52, 102, 73, 140, 248, 44, 187, 76, 49, 296, 106, 54, 119, 54, 283, 263, 285, 275, 127, 108, 82, 84, 241, 169, 203, 244, 256, 109, 288, 9, 45, 32, 34, 45, 43, 43, 299};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "02:10";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> offset = {0};
    vector<int> walkingTime = {1};
    vector<int> drivingTime = {299};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "09:29";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> offset = {7, 4, 0, 0, 2, 1, 6, 7, 7, 0, 8, 6, 0, 5, 0, 6, 7, 9, 0, 2, 4, 8, 4, 7, 9, 2, 4, 4, 3, 1, 4, 5, 8, 8, 2, 5, 7, 8, 7, 5, 6, 8, 8, 0, 1, 3, 5, 0, 8, 6};
    vector<int> walkingTime = {26, 14, 1, 4, 16, 28, 16, 6, 4, 5, 21, 18, 5, 2, 21, 21, 28, 22, 5, 22, 26, 16, 14, 19, 19, 19, 4, 12, 24, 4, 30, 16, 28, 20, 25, 2, 30, 18, 4, 6, 9, 22, 8, 3, 7, 29, 8, 30, 6, 12};
    vector<int> drivingTime = {151, 264, 280, 89, 63, 57, 15, 120, 28, 296, 76, 269, 90, 106, 31, 222, 291, 52, 102, 73, 140, 248, 44, 187, 76, 49, 296, 106, 54, 119, 54, 283, 263, 285, 275, 127, 108, 82, 84, 241, 169, 203, 244, 256, 109, 288, 9, 262, 103, 23};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "02:07";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> offset = {1};
    vector<int> walkingTime = {1};
    vector<int> drivingTime = {89};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "01:00";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> offset = {0, 1, 6, 4, 9, 6};
    vector<int> walkingTime = {5, 4, 21, 5, 3, 19};
    vector<int> drivingTime = {120, 45, 234, 24, 4, 9};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "02:16";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> offset = {7};
    vector<int> walkingTime = {10};
    vector<int> drivingTime = {44};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "01:27";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> offset = {9};
    vector<int> walkingTime = {30};
    vector<int> drivingTime = {300};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "08:59";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> offset = {0};
    vector<int> walkingTime = {1};
    vector<int> drivingTime = {149};
    Cafeteria* pObj = new Cafeteria();
    clock_t start = clock();
    string result = pObj->latestTime(offset, walkingTime, drivingTime);
    clock_t end = clock();
    delete pObj;
    string expected = "11:59";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=152340&rd=6518&pm=3080
********************************************************************************
using namespace std;
#include <string>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stack>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <iostream>
#include <sstream>
typedef long long I64;
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<double> VD;
typedef vector<PII> VPII;
#define FOR(i,n) for(int i=0;i<(n);i++)
#define VAR(a,b) __typeof(b) a=b
#define FORIT(it,c) for(VAR(it,(c).begin());it!=(c).end();it++)
#define ALL(x) (x).begin(),(x).end()
 
struct CafeteriaImpl {
    vector <int> offset;
    vector <int> walkingTime;
    vector <int> drivingTime;
    CafeteriaImpl(vector <int> _offset,vector <int> _walkingTime,vector <int> _drivingTime) {
        offset = _offset;
        walkingTime = _walkingTime;
        drivingTime = _drivingTime;
    }
 
    string latestTime() {
        int targ = 14*60+30;
        int best = 0;
 
        FOR(i,offset.size()) {
            int t = targ - drivingTime[i];
            while(t%10 != offset[i]) t--;
            t -= walkingTime[i];
            best >?= t;
        }
 
        int h = (best / 60) % 12;
        if(h==0) h = 12;
        int m = best % 60;
 
        char ans[20];
        sprintf(ans,"%02d:%02d",h,m);
 
        return ans;
    };
};
 
 
struct Cafeteria {
    string latestTime(vector <int> offset,vector <int> walkingTime,vector <int> drivingTime) {
        CafeteriaImpl impl(offset,walkingTime,drivingTime);
        return impl.latestTime();
    }
 
};
 
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/