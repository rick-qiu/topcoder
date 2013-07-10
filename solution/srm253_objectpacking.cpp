/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4675
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

class ObjectPacking {
public:
    int smallBox(int objWidth, int objLength, vector<int> boxWidth, vector<int> boxLength);
};

int ObjectPacking::smallBox(int objWidth, int objLength, vector<int> boxWidth, vector<int> boxLength) {
    int ret;
    return ret;
}


int test0() {
    int objWidth = 7;
    int objLength = 3;
    vector<int> boxWidth = {3};
    vector<int> boxLength = {7};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int objWidth = 5;
    int objLength = 8;
    vector<int> boxWidth = {6, 9, 3};
    vector<int> boxLength = {7, 4, 5};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int objWidth = 17;
    int objLength = 5;
    vector<int> boxWidth = {19, 10, 12, 40};
    vector<int> boxLength = {12, 20, 15, 5};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int objWidth = 20;
    int objLength = 44;
    vector<int> boxWidth = {36, 42, 18, 37, 33, 5, 30, 10, 29, 9, 11, 16, 48, 50, 34, 44, 33, 12, 31, 41};
    vector<int> boxLength = {42, 45, 46, 24, 23, 21, 21, 8, 26, 25, 48, 12, 10, 45, 18, 6, 12, 22, 42, 45};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1845;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int objWidth = 1;
    int objLength = 10;
    vector<int> boxWidth = {9, 1, 10};
    vector<int> boxLength = {10, 6, 4};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int objWidth = 5;
    int objLength = 4;
    vector<int> boxWidth = {2, 3, 3, 3, 3};
    vector<int> boxLength = {2, 7, 7, 4, 2};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int objWidth = 3;
    int objLength = 3;
    vector<int> boxWidth = {2, 3, 3, 3, 2};
    vector<int> boxLength = {3, 1, 3, 3, 2};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int objWidth = 2;
    int objLength = 2;
    vector<int> boxWidth = {2, 2, 1, 4, 4, 3, 2, 4, 4, 4};
    vector<int> boxLength = {1, 1, 2, 3, 2, 4, 3, 3, 2, 3};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int objWidth = 8;
    int objLength = 6;
    vector<int> boxWidth = {8, 6, 2, 1, 4, 3, 5, 7, 1, 3, 4, 3, 7, 7, 7};
    vector<int> boxLength = {4, 5, 5, 4, 2, 3, 4, 7, 8, 5, 1, 7, 7, 1, 1};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int objWidth = 6;
    int objLength = 4;
    vector<int> boxWidth = {9, 1, 4, 7, 1, 7, 5, 4, 5, 10, 4, 1, 1, 9, 9, 1, 4, 9, 5, 1};
    vector<int> boxLength = {9, 1, 2, 2, 1, 8, 4, 4, 8, 2, 1, 5, 5, 3, 1, 3, 5, 3, 9, 1};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int objWidth = 34;
    int objLength = 23;
    vector<int> boxWidth = {14, 38, 49, 48, 31, 22, 34, 34, 1, 8, 33, 9, 33, 9, 2, 5, 46, 29, 39, 31, 33, 2, 36, 45, 28};
    vector<int> boxLength = {4, 21, 36, 20, 44, 4, 6, 38, 50, 37, 36, 22, 4, 9, 36, 49, 16, 40, 36, 1, 15, 42, 17, 37, 8};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1160;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int objWidth = 2;
    int objLength = 41;
    vector<int> boxWidth = {2, 29, 39, 47, 13, 8, 44, 13, 8, 32, 36, 33, 41, 4, 15, 34, 14, 27, 43, 40, 50, 31, 35, 2, 27, 38, 19, 40, 46, 47};
    vector<int> boxLength = {39, 37, 44, 47, 26, 25, 23, 5, 25, 43, 28, 5, 36, 18, 40, 18, 37, 21, 26, 27, 19, 49, 5, 19, 13, 42, 38, 45, 41, 5};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 235;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int objWidth = 37;
    int objLength = 11;
    vector<int> boxWidth = {41, 19, 33, 58, 33, 59, 50, 30, 22, 57, 11, 5, 10, 18, 26, 38, 15, 41, 55, 41, 60, 51, 25, 60, 28, 27, 3, 36, 53, 55, 5, 58, 47, 30, 1, 46, 42, 14, 60, 50, 38, 39, 41, 36, 30};
    vector<int> boxLength = {37, 35, 50, 31, 26, 37, 46, 59, 58, 2, 43, 38, 49, 23, 36, 10, 33, 49, 8, 54, 57, 52, 33, 53, 47, 23, 27, 6, 31, 21, 36, 21, 36, 32, 45, 54, 28, 40, 8, 55, 39, 17, 46, 17, 45};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 473;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int objWidth = 36;
    int objLength = 51;
    vector<int> boxWidth = {49, 38, 3, 39, 35, 5, 9, 8, 12, 31, 14, 48, 65, 4, 19, 57, 63, 60, 39, 20, 38, 10, 61, 46, 7, 39, 2, 38, 6, 13, 13, 36, 64, 53, 30};
    vector<int> boxLength = {32, 61, 26, 68, 59, 48, 61, 9, 22, 36, 23, 51, 41, 12, 17, 68, 4, 10, 39, 48, 61, 40, 69, 46, 43, 15, 28, 66, 25, 66, 41, 45, 30, 61, 16};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 2318;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int objWidth = 25;
    int objLength = 19;
    vector<int> boxWidth = {26, 49, 61, 37, 25, 67, 1, 73, 38, 27, 27, 26, 70, 49, 23, 23, 33, 67, 7, 69, 4, 1, 17, 17, 28, 50, 37, 44, 21, 71, 7, 14, 9, 77, 7};
    vector<int> boxLength = {2, 11, 33, 63, 52, 58, 61, 74, 13, 49, 67, 50, 27, 79, 43, 2, 26, 35, 34, 8, 9, 3, 12, 6, 75, 10, 46, 36, 21, 63, 20, 73, 18, 69, 18};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 858;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int objWidth = 34;
    int objLength = 67;
    vector<int> boxWidth = {22, 39, 50, 48, 88, 29, 80, 90, 34, 22, 72, 13, 33, 12, 79, 31, 2, 74, 15, 69, 20, 12, 15, 9, 57, 23, 4, 40, 68, 77, 30, 82, 15, 61, 7, 78, 35, 15, 53, 47};
    vector<int> boxLength = {51, 13, 30, 67, 16, 10, 43, 2, 3, 81, 88, 67, 23, 76, 38, 47, 89, 90, 17, 59, 25, 27, 3, 8, 88, 34, 77, 16, 85, 1, 90, 80, 36, 9, 21, 63, 4, 50, 53, 90};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 3002;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int objWidth = 68;
    int objLength = 57;
    vector<int> boxWidth = {81, 69, 24, 48, 50, 23, 56, 27, 59, 68, 97, 75, 32, 84, 90, 4, 32, 18, 67, 50, 10, 12, 72, 88, 76, 22, 18, 46, 43, 26, 19, 98, 95, 36, 55, 7, 73, 21, 65, 63};
    vector<int> boxLength = {48, 80, 93, 59, 17, 2, 15, 66, 74, 30, 74, 60, 34, 21, 54, 69, 14, 67, 29, 26, 43, 92, 71, 54, 100, 85, 36, 47, 88, 37, 42, 25, 39, 39, 46, 77, 67, 39, 37, 60};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 4366;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int objWidth = 38;
    int objLength = 177;
    vector<int> boxWidth = {19, 58, 13, 98, 130, 7, 115, 106, 168, 191, 200, 147, 37, 132, 53, 184, 1, 66, 72, 9, 177, 191, 171, 44, 27, 154, 26, 87, 125, 14, 145, 66, 172, 189, 24, 38, 129, 25, 8, 28};
    vector<int> boxLength = {83, 196, 51, 37, 149, 121, 180, 86, 100, 136, 65, 94, 168, 180, 6, 137, 185, 99, 70, 200, 147, 98, 7, 134, 56, 120, 86, 198, 70, 52, 88, 80, 74, 78, 17, 86, 151, 47, 92, 168};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 11368;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int objWidth = 157;
    int objLength = 297;
    vector<int> boxWidth = {9, 198, 103, 99, 62, 243, 27, 184, 25, 215, 103, 271, 195, 279, 116, 111, 22, 65, 176, 120, 145, 270, 70, 48, 226, 185, 135, 180, 60, 202, 223, 86, 201, 190, 145, 217, 32, 80, 252, 241};
    vector<int> boxLength = {219, 112, 110, 14, 229, 192, 46, 153, 275, 90, 57, 179, 250, 38, 258, 253, 56, 282, 63, 226, 151, 205, 194, 214, 63, 2, 237, 48, 103, 115, 83, 282, 108, 17, 189, 247, 184, 6, 147, 276};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int objWidth = 76;
    int objLength = 265;
    vector<int> boxWidth = {247, 339, 240, 348, 242, 279, 387, 310, 34, 38, 253, 396, 352, 275, 378, 190, 291, 113, 80, 30, 313, 302, 217, 5, 176, 65, 243, 73, 42, 190, 149, 354, 78, 344, 114, 148, 87, 184, 343, 206, 201, 317, 387, 36, 92};
    vector<int> boxLength = {154, 28, 168, 191, 262, 263, 311, 221, 49, 397, 97, 313, 284, 297, 262, 121, 80, 114, 255, 100, 355, 111, 230, 94, 319, 284, 235, 298, 385, 379, 78, 237, 294, 108, 360, 256, 368, 13, 202, 184, 73, 170, 128, 147, 165};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 22932;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int objWidth = 446;
    int objLength = 85;
    vector<int> boxWidth = {385, 228, 29, 450, 122, 215, 46, 389, 343, 409, 56, 468, 58, 423, 41, 217, 11, 460, 84, 189, 181, 281, 116, 461, 327, 296, 452, 466, 225, 130, 427, 274, 307, 245, 182, 179, 291, 187, 87, 18, 369, 342, 394, 231, 426};
    vector<int> boxLength = {189, 92, 227, 268, 94, 434, 228, 241, 24, 403, 289, 246, 466, 355, 414, 37, 251, 297, 396, 375, 59, 70, 165, 126, 475, 467, 385, 148, 119, 242, 473, 39, 328, 347, 483, 316, 400, 472, 57, 344, 428, 466, 371, 171, 275};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 58086;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int objWidth = 579;
    int objLength = 295;
    vector<int> boxWidth = {4, 298, 374, 398, 314, 59, 102, 578, 346, 347, 381, 380, 236, 494, 123, 32, 522, 536, 336, 268, 391, 221, 365, 439, 26, 386, 56, 163, 142, 348, 116, 158, 95, 221, 441, 169, 568, 565, 458, 525, 178, 204, 45, 380, 443};
    vector<int> boxLength = {356, 300, 430, 283, 134, 344, 460, 425, 187, 32, 184, 89, 357, 361, 289, 271, 136, 363, 18, 64, 285, 473, 33, 390, 429, 158, 134, 199, 310, 50, 444, 567, 569, 167, 169, 71, 393, 300, 458, 372, 280, 464, 17, 233, 30};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int objWidth = 483;
    int objLength = 73;
    vector<int> boxWidth = {261, 9, 508, 400, 434, 587, 118, 293, 410, 456, 209, 465, 72, 666, 667, 75, 501, 607, 444, 359, 69, 40, 562, 474, 76, 607, 569, 500, 190, 606, 631, 262, 312, 399, 420, 389, 202, 94, 22, 196, 455, 292, 103, 272, 146, 199, 552, 503, 62, 66};
    vector<int> boxLength = {459, 124, 692, 522, 7, 77, 558, 628, 473, 515, 472, 165, 683, 225, 469, 222, 693, 412, 281, 175, 167, 483, 689, 286, 87, 331, 386, 400, 583, 621, 63, 196, 196, 426, 425, 86, 569, 186, 267, 661, 186, 107, 6, 170, 343, 539, 67, 232, 432, 674};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 45199;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int objWidth = 54;
    int objLength = 793;
    vector<int> boxWidth = {398, 598, 597, 449, 466, 23, 177, 672, 119, 179, 712, 189, 678, 562, 630, 602, 69, 207, 48, 169, 537, 171, 709, 230, 427, 639, 325, 493, 724, 94, 509, 530, 641, 300, 389, 720, 405, 149, 165, 209, 422, 17, 110, 718, 533, 426, 631, 519, 629, 398};
    vector<int> boxLength = {694, 540, 450, 499, 439, 148, 123, 396, 299, 21, 512, 399, 517, 483, 421, 90, 764, 495, 273, 349, 419, 90, 324, 718, 142, 613, 84, 450, 617, 184, 458, 551, 430, 217, 197, 595, 402, 746, 422, 121, 389, 203, 397, 546, 653, 70, 333, 602, 228, 105};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int objWidth = 9;
    int objLength = 3;
    vector<int> boxWidth = {9, 8, 2, 10, 7, 6, 3, 1, 1, 5, 7, 1, 7, 5, 1, 7, 10, 10, 10, 9, 5, 1, 8, 6, 6, 8, 10, 10, 9, 2, 6, 4, 10, 7, 9, 10, 3, 5, 7, 5, 2, 9, 1, 5, 10, 9, 1, 6, 8, 3};
    vector<int> boxLength = {2, 9, 5, 4, 9, 7, 5, 10, 1, 10, 8, 2, 8, 6, 7, 2, 10, 1, 4, 8, 7, 3, 2, 2, 6, 7, 5, 9, 8, 2, 9, 8, 3, 6, 2, 9, 4, 5, 3, 9, 2, 1, 4, 7, 8, 9, 9, 1, 5, 8};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
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
    int objWidth = 18;
    int objLength = 11;
    vector<int> boxWidth = {7, 9, 11, 19, 7, 2, 13, 7, 10, 8, 19, 13, 14, 13, 14, 4, 8, 18, 4, 19, 3, 11, 17, 12, 17, 20, 18, 3, 12, 20, 3, 15, 18, 10, 8, 1, 18, 11, 8, 20, 11, 4, 8, 2, 16, 4, 10, 12, 14, 5};
    vector<int> boxLength = {17, 13, 12, 11, 12, 8, 13, 20, 5, 4, 19, 15, 10, 7, 1, 20, 1, 12, 16, 13, 1, 11, 8, 14, 12, 19, 3, 19, 2, 15, 16, 1, 17, 16, 13, 10, 6, 12, 18, 9, 15, 6, 6, 3, 18, 10, 12, 2, 11, 7};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 209;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int objWidth = 43;
    int objLength = 881;
    vector<int> boxWidth = {226, 579, 775, 300, 179, 494, 749, 377, 785, 374, 517, 386, 293, 605, 555, 760, 759, 854, 556, 539, 272, 30, 406, 191, 176, 749, 342, 79, 89, 170, 512, 719, 447, 455, 78, 530, 16, 456, 400, 686, 409, 466, 519, 459, 753, 228, 89, 650, 261, 509};
    vector<int> boxLength = {65, 321, 67, 754, 652, 338, 805, 83, 848, 334, 95, 18, 733, 200, 176, 474, 606, 810, 206, 450, 727, 855, 396, 378, 406, 130, 184, 450, 333, 563, 447, 708, 650, 695, 639, 665, 519, 12, 732, 337, 847, 344, 531, 45, 121, 379, 459, 343, 519, 863};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int objWidth = 462;
    int objLength = 101;
    vector<int> boxWidth = {464, 68, 465, 549, 59, 230, 208, 655, 142, 997, 967, 110, 998, 952, 118, 287, 579, 301, 560, 150, 340, 810, 253, 947, 127, 681, 551, 473, 372, 258, 738, 739, 676, 208, 747, 562, 919, 760, 643, 199, 728, 639, 426, 453, 739, 655, 468, 666, 528, 940};
    vector<int> boxLength = {900, 437, 525, 731, 184, 309, 270, 651, 423, 940, 687, 751, 815, 659, 628, 190, 678, 241, 399, 676, 631, 861, 483, 510, 562, 312, 883, 900, 914, 926, 542, 163, 284, 934, 910, 273, 403, 719, 87, 97, 802, 840, 374, 268, 31, 510, 972, 314, 114, 342};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 60192;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int objWidth = 680;
    int objLength = 369;
    vector<int> boxWidth = {502, 408, 954, 550, 891, 566, 368, 233, 451, 969, 570, 982, 356, 800, 881, 166, 248, 349, 665, 908, 808, 441, 952, 503, 525, 612, 959, 514, 254, 447, 716, 307, 253, 609, 616, 141, 475, 315, 835, 963, 195, 164, 481, 1000, 973, 781, 99, 30, 494, 772};
    vector<int> boxLength = {435, 53, 532, 808, 817, 680, 135, 371, 598, 446, 127, 237, 549, 317, 732, 59, 249, 325, 940, 550, 35, 268, 419, 790, 517, 895, 333, 50, 448, 589, 637, 865, 718, 325, 481, 334, 835, 78, 842, 105, 105, 436, 865, 544, 942, 289, 338, 532, 209, 221};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 384880;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int objWidth = 966;
    int objLength = 179;
    vector<int> boxWidth = {21, 579, 199, 199, 131, 58, 124, 171, 606, 306, 695, 94, 35, 372, 262, 930, 258, 725, 217, 788, 218, 81, 802, 781, 577, 402, 164, 210, 871, 217, 705, 591, 541, 485, 226, 782, 752, 741, 606, 670, 105, 927, 684, 597, 442, 845, 739, 888, 154, 188};
    vector<int> boxLength = {702, 861, 387, 22, 457, 542, 68, 55, 361, 23, 22, 128, 240, 323, 608, 141, 534, 690, 562, 487, 913, 471, 887, 606, 671, 186, 734, 801, 39, 597, 861, 893, 111, 345, 767, 689, 228, 406, 895, 285, 608, 383, 111, 506, 897, 530, 344, 993, 257, 836};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 881784;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int objWidth = 100;
    int objLength = 100;
    vector<int> boxWidth = {100, 32};
    vector<int> boxLength = {100, 42};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int objWidth = 1000;
    int objLength = 1000;
    vector<int> boxWidth = {1000};
    vector<int> boxLength = {1000};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int objWidth = 500;
    int objLength = 500;
    vector<int> boxWidth = {1000};
    vector<int> boxLength = {1000};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int objWidth = 900;
    int objLength = 900;
    vector<int> boxWidth = {999};
    vector<int> boxLength = {999};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 998001;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int objWidth = 4;
    int objLength = 5;
    vector<int> boxWidth = {3};
    vector<int> boxLength = {9};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int objWidth = 10;
    int objLength = 10;
    vector<int> boxWidth = {12, 20, 30};
    vector<int> boxLength = {12, 20, 30};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 144;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int objWidth = 150;
    int objLength = 10;
    vector<int> boxWidth = {150};
    vector<int> boxLength = {10};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1500;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int objWidth = 51;
    int objLength = 51;
    vector<int> boxWidth = {51};
    vector<int> boxLength = {51};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 2601;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int objWidth = 7;
    int objLength = 3;
    vector<int> boxWidth = {7, 8};
    vector<int> boxLength = {3, 4};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int objWidth = 900;
    int objLength = 900;
    vector<int> boxWidth = {1000};
    vector<int> boxLength = {1000};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int objWidth = 10;
    int objLength = 10;
    vector<int> boxWidth = {100, 10};
    vector<int> boxLength = {100, 10};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int objWidth = 20;
    int objLength = 20;
    vector<int> boxWidth = {30, 25};
    vector<int> boxLength = {30, 25};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 625;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int objWidth = 10;
    int objLength = 20;
    vector<int> boxWidth = {2};
    vector<int> boxLength = {3};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int objWidth = 5;
    int objLength = 5;
    vector<int> boxWidth = {5, 6};
    vector<int> boxLength = {5, 6};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int objWidth = 500;
    int objLength = 500;
    vector<int> boxWidth = {600, 700};
    vector<int> boxLength = {600, 700};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 360000;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int objWidth = 20;
    int objLength = 44;
    vector<int> boxWidth = {36, 42, 18, 37, 33, 5, 30, 10, 29, 9, 11, 16, 48, 50, 34, 44, 33, 12, 31, 41};
    vector<int> boxLength = {42, 45, 46, 24, 23, 21, 21, 8, 26, 25, 48, 12, 10, 45, 18, 6, 12, 22, 42, 45};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1845;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int objWidth = 3;
    int objLength = 7;
    vector<int> boxWidth = {1000};
    vector<int> boxLength = {1000};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int objWidth = 5;
    int objLength = 5;
    vector<int> boxWidth = {5};
    vector<int> boxLength = {5};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int objWidth = 100;
    int objLength = 100;
    vector<int> boxWidth = {100, 32};
    vector<int> boxLength = {100, 42};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int objWidth = 1000;
    int objLength = 1000;
    vector<int> boxWidth = {1000};
    vector<int> boxLength = {1000};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int objWidth = 500;
    int objLength = 500;
    vector<int> boxWidth = {1000};
    vector<int> boxLength = {1000};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int objWidth = 900;
    int objLength = 900;
    vector<int> boxWidth = {999};
    vector<int> boxLength = {999};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 998001;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int objWidth = 4;
    int objLength = 5;
    vector<int> boxWidth = {3};
    vector<int> boxLength = {9};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int objWidth = 10;
    int objLength = 10;
    vector<int> boxWidth = {12, 20, 30};
    vector<int> boxLength = {12, 20, 30};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 144;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int objWidth = 150;
    int objLength = 10;
    vector<int> boxWidth = {150};
    vector<int> boxLength = {10};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1500;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int objWidth = 51;
    int objLength = 51;
    vector<int> boxWidth = {51};
    vector<int> boxLength = {51};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 2601;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int objWidth = 7;
    int objLength = 3;
    vector<int> boxWidth = {7, 8};
    vector<int> boxLength = {3, 4};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int objWidth = 900;
    int objLength = 900;
    vector<int> boxWidth = {1000};
    vector<int> boxLength = {1000};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int objWidth = 10;
    int objLength = 10;
    vector<int> boxWidth = {100, 10};
    vector<int> boxLength = {100, 10};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int objWidth = 20;
    int objLength = 20;
    vector<int> boxWidth = {30, 25};
    vector<int> boxLength = {30, 25};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 625;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int objWidth = 10;
    int objLength = 20;
    vector<int> boxWidth = {2};
    vector<int> boxLength = {3};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int objWidth = 5;
    int objLength = 5;
    vector<int> boxWidth = {5, 6};
    vector<int> boxLength = {5, 6};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int objWidth = 500;
    int objLength = 500;
    vector<int> boxWidth = {600, 700};
    vector<int> boxLength = {600, 700};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 360000;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int objWidth = 20;
    int objLength = 44;
    vector<int> boxWidth = {36, 42, 18, 37, 33, 5, 30, 10, 29, 9, 11, 16, 48, 50, 34, 44, 33, 12, 31, 41};
    vector<int> boxLength = {42, 45, 46, 24, 23, 21, 21, 8, 26, 25, 48, 12, 10, 45, 18, 6, 12, 22, 42, 45};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1845;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int objWidth = 3;
    int objLength = 7;
    vector<int> boxWidth = {1000};
    vector<int> boxLength = {1000};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int objWidth = 5;
    int objLength = 5;
    vector<int> boxWidth = {5};
    vector<int> boxLength = {5};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int objWidth = 1000;
    int objLength = 1000;
    vector<int> boxWidth = {1000};
    vector<int> boxLength = {1000};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int objWidth = 5;
    int objLength = 7;
    vector<int> boxWidth = {5};
    vector<int> boxLength = {8};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int objWidth = 3;
    int objLength = 7;
    vector<int> boxWidth = {7};
    vector<int> boxLength = {3};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int objWidth = 2;
    int objLength = 2;
    vector<int> boxWidth = {2, 3};
    vector<int> boxLength = {2, 3};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
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
    int objWidth = 3;
    int objLength = 3;
    vector<int> boxWidth = {2};
    vector<int> boxLength = {2};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int objWidth = 7;
    int objLength = 3;
    vector<int> boxWidth = {6};
    vector<int> boxLength = {9};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int objWidth = 1000;
    int objLength = 1000;
    vector<int> boxWidth = {888};
    vector<int> boxLength = {1000};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int objWidth = 17;
    int objLength = 5;
    vector<int> boxWidth = {19, 10, 12, 40};
    vector<int> boxLength = {12, 20, 15, 5};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int objWidth = 5;
    int objLength = 8;
    vector<int> boxWidth = {6, 9, 3};
    vector<int> boxLength = {7, 4, 5};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int objWidth = 1;
    int objLength = 1;
    vector<int> boxWidth = {2, 2};
    vector<int> boxLength = {2, 4};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
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
    int objWidth = 5;
    int objLength = 4;
    vector<int> boxWidth = {2, 3, 3, 3, 3};
    vector<int> boxLength = {2, 7, 7, 4, 2};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int objWidth = 7;
    int objLength = 3;
    vector<int> boxWidth = {3};
    vector<int> boxLength = {7};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int objWidth = 7;
    int objLength = 5;
    vector<int> boxWidth = {3};
    vector<int> boxLength = {3};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int objWidth = 3;
    int objLength = 3;
    vector<int> boxWidth = {3, 4};
    vector<int> boxLength = {3, 4};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int objWidth = 5;
    int objLength = 5;
    vector<int> boxWidth = {5, 6};
    vector<int> boxLength = {5, 6};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int objWidth = 1;
    int objLength = 1;
    vector<int> boxWidth = {1, 2};
    vector<int> boxLength = {1, 2};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int objWidth = 5;
    int objLength = 6;
    vector<int> boxWidth = {999};
    vector<int> boxLength = {999};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 998001;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int objWidth = 3;
    int objLength = 4;
    vector<int> boxWidth = {3};
    vector<int> boxLength = {5};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int objWidth = 3;
    int objLength = 3;
    vector<int> boxWidth = {10, 1};
    vector<int> boxLength = {10, 1};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int objWidth = 6;
    int objLength = 9;
    vector<int> boxWidth = {3, 18};
    vector<int> boxLength = {18, 10};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int objWidth = 5;
    int objLength = 5;
    vector<int> boxWidth = {1000, 5, 1000};
    vector<int> boxLength = {1000, 5, 1000};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int objWidth = 1;
    int objLength = 1;
    vector<int> boxWidth = {1000};
    vector<int> boxLength = {1000};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int objWidth = 3;
    int objLength = 3;
    vector<int> boxWidth = {4, 5};
    vector<int> boxLength = {4, 5};
    ObjectPacking* pObj = new ObjectPacking();
    clock_t start = clock();
    int result = pObj->smallBox(objWidth, objLength, boxWidth, boxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14954187&rd=7227&pm=4675
********************************************************************************
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cstdio>
#include <cstdlib> 
#include <cctype> 
using namespace std;
class ObjectPacking {
  public:
  int smallBox(int ow, int oh, vector <int> bw, vector <int> bh) {
    int ar=9999999;
    for(int i=0;i<bw.size();i++){
      if(bw[i]>=ow && bh[i]>=oh && bh[i]*bw[i]<ar)
      ar=bh[i]*bw[i];
      if(bw[i]>=oh && bh[i]>=ow && bh[i]*bw[i]<ar)ar=bh[i]*bw[i];
    }
    if(ar==9999999)return -1;
    return ar;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/