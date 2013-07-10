/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7701
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

class CropCircles {
public:
    int countCircles(vector<int> x, vector<int> y);
};

int CropCircles::countCircles(vector<int> x, vector<int> y) {
    int ret;
    return ret;
}


int test0() {
    vector<int> x = {1, 2, 1, 2, 8};
    vector<int> y = {2, 1, 8, 9, 9};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {0, 4, 7};
    vector<int> y = {3, 3, 3};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {0, 10, 10, 10, 20};
    vector<int> y = {10, 0, 10, 20, 10};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {0, 10, 11, 10, 21};
    vector<int> y = {10, 0, 11, 20, 10};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {291, 321, 430, 475};
    vector<int> y = {469, 449, 346, 281};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {459, 429, 320, 275};
    vector<int> y = {281, 301, 404, 469};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
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
    vector<int> x = {500, 0, 249, 251, 250};
    vector<int> y = {500, 500, 499, 499, 499};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {0, 500, 249, 250, 251, 249, 250, 251, 249, 250, 1};
    vector<int> y = {500, 0, 249, 249, 249, 250, 250, 250, 251, 251, 1};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 114;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {270, 270, 230, 230, 85, 85, 277, 277, 223, 223, 86, 86, 295, 295, 205, 205, 90, 90, 310, 310, 190, 190, 95, 95, 333, 333, 167, 167, 106, 106, 338, 338, 162, 162, 109, 109, 351, 351, 149, 149, 118, 118, 365, 365, 135, 135, 130, 130, 0, 250};
    vector<int> y = {415, 85, 85, 415, 270, 230, 414, 86, 86, 414, 277, 223, 410, 90, 90, 410, 295, 205, 405, 95, 95, 405, 310, 190, 394, 106, 106, 394, 333, 167, 391, 109, 109, 391, 338, 162, 382, 118, 118, 382, 351, 149, 370, 130, 130, 370, 365, 135, 0, 250};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2285;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {0};
    vector<int> y = {0};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {3, 5};
    vector<int> y = {5, 3};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {0, 6, 0};
    vector<int> y = {0, 8, 8};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {0, 3, 0};
    vector<int> y = {0, 4, 4};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {2, 4, 8};
    vector<int> y = {1, 4, 10};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {441, 279, 1, 224, 354, 360, 37, 204, 446, 425, 308, 359, 37, 440, 104, 199, 161, 236, 288, 214, 181, 153, 19, 181, 478, 36, 65, 36, 209, 479, 300, 29, 238, 23, 69, 327, 456, 201, 87, 230, 216, 248, 487, 248, 161, 185, 55, 453, 74, 40};
    vector<int> y = {210, 255, 487, 394, 265, 443, 351, 79, 323, 238, 40, 141, 109, 37, 439, 342, 439, 59, 54, 169, 2, 183, 188, 397, 227, 377, 474, 20, 158, 174, 200, 84, 232, 42, 384, 342, 304, 78, 100, 146, 416, 381, 11, 425, 133, 76, 284, 51, 149, 418};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 19600;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {430, 431, 384, 432, 433, 412, 403, 396, 359, 390, 375, 413, 363, 404, 371, 385, 380, 414, 367, 397, 356, 415, 391, 405, 376, 416, 398, 360, 386, 353, 381, 406, 417, 372, 392, 364, 368, 418, 407, 399, 419, 357, 377, 387, 420, 393, 382, 408, 421, 400};
    vector<int> y = {436, 435, 477, 434, 433, 453, 461, 467, 496, 472, 484, 452, 493, 460, 487, 476, 480, 451, 490, 466, 498, 450, 471, 459, 483, 449, 465, 495, 475, 500, 479, 458, 448, 486, 470, 492, 489, 447, 457, 464, 446, 497, 482, 474, 445, 469, 478, 456, 444, 463};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 19004;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {0, 0, 0, 0, 0, 1, 1, 1, 10, 10, 11, 11, 11, 12, 12, 12, 12, 13, 13, 13, 14, 14, 15, 15, 15, 2, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 7, 8, 8, 8, 9};
    vector<int> y = {2, 3, 4, 6, 8, 11, 2, 8, 11, 6, 0, 11, 14, 11, 14, 7, 9, 10, 6, 7, 0, 1, 1, 14, 8, 11, 0, 12, 14, 0, 10, 12, 14, 4, 0, 1, 10, 13, 4, 10, 11, 15, 1, 11, 3, 5, 3};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14596;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500};
    vector<int> y = {0, 123, 234, 249, 250, 251, 252, 299, 498, 500, 0, 123, 234, 249, 250, 251, 252, 299, 498, 500, 0, 123, 234, 249, 250, 251, 252, 299, 498, 500, 0, 123, 234, 249, 250, 251, 252, 299, 498, 500, 0, 123, 234, 249, 250, 251, 252, 299, 498, 500};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 17215;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {250, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 250, 250, 250, 250, 250, 250, 250, 498, 498, 498, 498, 498, 498, 498, 499, 499, 499, 499, 499, 499, 499, 500, 500, 500, 500, 500, 500, 500};
    vector<int> y = {250, 0, 1, 2, 249, 498, 499, 500, 0, 1, 2, 249, 498, 499, 500, 0, 1, 2, 249, 498, 499, 500, 0, 1, 2, 249, 498, 499, 500, 0, 1, 2, 249, 498, 499, 500, 0, 1, 2, 249, 498, 499, 500, 0, 1, 2, 249, 498, 499, 500};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14984;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {0, 499, 126, 251, 498, 250, 124, 125};
    vector<int> y = {0, 495, 125, 249, 494, 248, 123, 124};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {19, 493, 200, 74, 326, 12, 402, 490, 193, 158, 340, 138, 166, 196, 274, 339, 442, 483, 438, 336, 308, 157, 150, 478, 5, 195, 48, 426, 166, 446, 258, 217, 47, 80, 201, 114, 1, 107, 255, 253, 252, 250, 248, 247, 245, 247, 248, 250, 252, 253};
    vector<int> y = {357, 135, 284, 459, 105, 94, 397, 310, 336, 340, 63, 109, 29, 124, 28, 249, 277, 362, 343, 222, 68, 131, 464, 476, 324, 246, 399, 123, 90, 85, 494, 159, 337, 334, 125, 303, 51, 349, 250, 252, 253, 255, 253, 252, 250, 248, 247, 245, 247, 248};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 19459;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {0, 1, 500, 2, 56, 24, 65, 71, 135, 98, 15, 14, 68, 132, 432, 59, 98, 178, 246, 67, 99, 100, 201, 345, 456, 123, 135, 64, 93, 97, 431, 34, 13, 312, 12, 54, 135, 55, 88, 99, 110, 68, 422, 123, 156, 223, 79, 34, 0, 0};
    vector<int> y = {0, 1, 500, 452, 315, 131, 67, 134, 99, 156, 144, 352, 78, 80, 93, 334, 450, 460, 470, 480, 490, 500, 133, 133, 346, 133, 241, 133, 78, 322, 235, 12, 8, 259, 492, 134, 68, 91, 42, 47, 431, 13, 75, 1, 31, 0, 1, 78, 3, 300};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 19587;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {0, 140, 176, 300, 400, 468, 480, 500, 1, 283, 377, 471, 5, 103, 215, 285, 341, 355, 440, 15, 29, 78, 299, 259, 188, 113, 241, 8, 389, 249, 472, 356, 369, 49, 197, 32, 4, 81, 27, 229, 202, 459, 359, 29, 336, 343, 391, 473, 92, 214};
    vector<int> y = {500, 480, 468, 400, 300, 176, 140, 0, 471, 377, 283, 1, 355, 341, 285, 215, 103, 5, 401, 34, 247, 130, 296, 190, 82, 289, 278, 165, 252, 240, 380, 432, 73, 215, 338, 387, 86, 22, 500, 105, 479, 353, 71, 285, 438, 423, 205, 387, 201, 1};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 19439;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {76, 16, 337, 452, 399, 424, 318, 137, 80, 340, 274, 72, 72, 130, 310, 456, 309, 390, 125, 160, 193, 91, 474, 398, 156, 170, 203, 61, 300, 128, 451, 25, 129, 286, 193, 259, 360, 54, 355, 49, 414, 440, 389, 119, 77, 60, 361, 151, 231, 450};
    vector<int> y = {191, 474, 299, 133, 69, 51, 128, 44, 465, 19, 87, 91, 474, 54, 377, 42, 71, 169, 81, 111, 362, 312, 459, 336, 416, 67, 152, 158, 405, 491, 148, 228, 295, 402, 306, 279, 282, 99, 122, 339, 247, 114, 217, 414, 161, 236, 76, 244, 52, 366};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 19599;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {368, 153, 74, 388, 7, 64, 277, 75, 55, 413, 224, 30, 420, 287, 346, 434, 202, 366, 207, 493, 64, 162, 140, 194, 19, 144, 280, 414, 153, 95, 207, 458, 361, 425, 323, 275, 468, 476, 421, 295, 22, 175, 359, 248, 35, 256, 0, 500, 250, 251};
    vector<int> y = {196, 407, 375, 470, 64, 201, 337, 106, 35, 457, 427, 425, 232, 150, 6, 460, 86, 23, 254, 461, 304, 342, 237, 442, 107, 490, 174, 446, 200, 499, 275, 155, 69, 315, 418, 388, 437, 107, 169, 186, 439, 303, 336, 11, 90, 489, 0, 500, 249, 250};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 19596;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {250, 281, 312, 342, 370, 396, 421, 442, 461, 476, 487, 495, 499, 499, 495, 487, 476, 461, 442, 421, 396, 370, 342, 312, 281, 250, 218, 187, 157, 129, 103, 78, 57, 38, 23, 12, 4, 0, 0, 4, 12, 23, 38, 57, 78, 103, 129, 157, 187, 218};
    vector<int> y = {500, 498, 492, 482, 469, 452, 432, 409, 383, 356, 327, 296, 265, 234, 203, 172, 143, 116, 90, 67, 47, 30, 17, 7, 1, 0, 1, 7, 17, 30, 47, 67, 90, 116, 143, 172, 203, 234, 265, 296, 327, 356, 383, 409, 432, 452, 469, 482, 492, 498};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 17957;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {419, 6, 87, 205, 293, 382, 24, 419, 21, 256, 282, 60, 413, 186, 155, 312, 416, 162, 363, 78, 114, 52, 93, 361, 186, 263, 345, 477, 365, 33, 52, 28, 442, 357, 345, 78, 70, 176, 177, 374, 412, 378, 348, 384, 88, 355, 355, 221, 139, 111};
    vector<int> y = {58, 354, 358, 83, 471, 473, 326, 296, 193, 279, 17, 355, 191, 206, 69, 318, 21, 107, 71, 109, 457, 283, 14, 423, 287, 9, 264, 241, 313, 380, 173, 93, 319, 364, 393, 434, 258, 423, 352, 99, 301, 462, 79, 147, 203, 133, 374, 70, 253, 420};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 19600;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {456, 462, 268, 127, 439, 486, 233, 447, 453, 373, 105, 410, 49, 451, 48, 143, 392, 154, 389, 111, 313, 441, 166, 357, 443, 89, 293, 412, 313, 204, 301, 25, 6, 144, 162, 96, 470, 78, 265, 285, 253, 368, 264, 355, 398, 140, 17, 371, 195, 10};
    vector<int> y = {262, 83, 287, 73, 6, 371, 388, 122, 468, 348, 344, 82, 304, 499, 311, 187, 107, 51, 172, 79, 17, 268, 351, 14, 57, 428, 375, 171, 343, 429, 165, 403, 266, 483, 0, 72, 234, 219, 214, 70, 179, 63, 239, 463, 362, 348, 5, 336, 23, 490};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 19600;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {0, 0, 500, 500, 499, 1, 1, 499};
    vector<int> y = {0, 500, 500, 0, 499, 1, 499, 1};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
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
    vector<int> x = {0, 2, 0, 0, 0, 1};
    vector<int> y = {0, 2, 4, 1, 3, 2};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {366, 371, 441, 207, 200, 49, 267, 443, 278, 97, 140, 113, 117, 96, 180, 442, 460, 339, 227, 106, 127, 216, 48, 493, 405, 22, 143, 284, 47, 42, 81, 413, 159, 269, 367, 359, 64, 133, 302, 342, 478, 188, 202, 341, 30, 382, 28, 491, 221, 256};
    vector<int> y = {343, 348, 218, 391, 87, 122, 159, 477, 152, 453, 266, 234, 112, 425, 2, 479, 30, 66, 358, 78, 409, 81, 266, 110, 423, 42, 238, 451, 279, 459, 453, 121, 53, 171, 259, 387, 39, 418, 109, 192, 371, 375, 426, 229, 46, 174, 207, 76, 240, 64};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 19598;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {72, 9, 62, 49, 28, 55, 91, 1, 17, 10, 76, 47, 63, 32, 75, 38, 75, 79, 59, 72, 82, 40, 10, 62, 96, 13, 6, 13, 83, 50, 54, 98, 63, 2, 27, 54, 90, 6, 38, 29, 54, 91, 69, 81, 62, 6, 58, 45, 67, 27};
    vector<int> y = {39, 66, 80, 98, 98, 70, 29, 1, 61, 83, 76, 79, 74, 5, 11, 28, 41, 54, 18, 1, 22, 54, 74, 4, 6, 39, 19, 74, 52, 88, 23, 51, 77, 61, 24, 12, 48, 31, 97, 8, 76, 28, 83, 3, 68, 2, 1, 61, 3, 74};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 19547;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {4, 6, 5, 3, 7, 5};
    vector<int> y = {5, 5, 6, 5, 5, 7};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {500, 0, 0, 500, 100, 101, 210, 175, 167, 60, 216, 442, 486, 396, 101, 28, 58, 5, 215, 180, 494, 42, 71, 274, 370, 389, 333, 228, 410, 429, 405, 67, 26, 204, 186, 196, 497, 440, 99, 161, 55, 100, 298, 215, 20, 21, 459, 19, 249, 7};
    vector<int> y = {0, 500, 0, 500, 100, 101, 367, 135, 9, 243, 133, 377, 423, 224, 441, 298, 32, 348, 246, 108, 66, 422, 497, 152, 246, 159, 270, 146, 94, 130, 491, 81, 200, 144, 51, 308, 213, 384, 468, 241, 318, 320, 484, 356, 266, 109, 339, 441, 362, 226};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 19593;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6};
    vector<int> y = {0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 9141;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {0, 1, 2, 3, 4, 2, 2};
    vector<int> y = {0, 0, 0, 0, 0, 1, 2};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {0, 0, 3, 1, 1, 2};
    vector<int> y = {0, 3, 0, 1, 2, 1};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {1, 2, 3, 4};
    vector<int> y = {1, 2, 3, 4};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
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
    vector<int> x = {66, 78, 11, 49, 2, 99, 11, 88, 17, 70, 37, 42, 81, 54, 78, 99, 6, 7, 7, 28, 71, 78, 86, 3, 74, 58, 34, 75, 65, 19, 30, 47, 23, 16, 26, 93, 67, 41, 49, 55, 69, 22, 9, 86, 100, 63, 41, 18, 45, 20};
    vector<int> y = {13, 57, 91, 75, 12, 5, 34, 57, 100, 81, 17, 8, 25, 30, 32, 92, 62, 81, 14, 15, 40, 56, 98, 50, 65, 55, 26, 67, 84, 23, 58, 89, 77, 90, 97, 53, 51, 62, 88, 15, 99, 55, 31, 83, 82, 27, 35, 21, 49, 18};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 19574;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {0, 1, 2, 1, 1};
    vector<int> y = {1, 0, 1, 1, 2};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {0, 1, 2, 2, 3, 4};
    vector<int> y = {0, 0, 1, 2, 0, 0};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {0, 10, 10, 10, 20, 0, 0, 20, 20};
    vector<int> y = {10, 0, 10, 20, 10, 0, 20, 0, 20};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {79, 326, 109, 455, 416, 84, 275, 400, 461, 314, 217, 190, 86, 429, 148, 223, 264, 226, 188, 145, 215, 486, 251, 237, 450, 27, 31, 498, 386, 75, 462, 151, 365, 270, 229, 90, 336, 36, 113, 232, 108, 346, 315, 233, 477, 81, 30, 277, 334, 59};
    vector<int> y = {174, 249, 94, 186, 314, 98, 469, 26, 402, 484, 36, 240, 97, 267, 109, 381, 317, 185, 220, 385, 33, 142, 240, 239, 3, 166, 274, 147, 434, 253, 217, 470, 213, 162, 286, 312, 420, 449, 193, 326, 189, 322, 299, 217, 133, 217, 370, 255, 340, 153};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 19598;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {0, 1, 2};
    vector<int> y = {0, 2, 4};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
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
    vector<int> x = {1, 2, 1, 2, 8, 0, 0, 10};
    vector<int> y = {2, 1, 8, 9, 9, 0, 10, 0};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {0, 1, 2};
    vector<int> y = {0, 1, 2};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
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
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> y = {0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 105, 120, 136, 170, 188, 210, 230, 241, 263, 286, 310, 335, 361, 388, 420, 449, 480, 1, 4, 15, 18, 2, 123, 435, 123, 365, 432, 23, 76, 94, 14, 435, 318, 300, 31, 54};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 19593;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {4, 3, 2, 2, 1, 0};
    vector<int> y = {2, 2, 3, 4, 2, 2};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {1, 1, 4, 4, 2, 2, 3, 3};
    vector<int> y = {1, 4, 1, 4, 2, 3, 2, 3};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
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
    vector<int> x = {260, 244, 137, 93, 78, 47, 98, 5, 455, 454, 396, 407, 108, 198, 301, 29, 369, 412, 75, 146, 198, 237, 224, 207, 471, 79, 220, 402, 261, 498, 416, 196, 418, 58, 140, 491, 355, 151, 50, 451, 443, 496, 116, 459, 301, 80, 433, 90, 31, 285};
    vector<int> y = {493, 154, 316, 405, 106, 221, 146, 24, 81, 320, 396, 220, 120, 14, 77, 272, 350, 269, 461, 106, 392, 400, 86, 450, 242, 3, 370, 248, 492, 476, 75, 291, 446, 152, 123, 133, 338, 195, 420, 212, 345, 107, 37, 77, 435, 298, 12, 2, 398, 87};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 19598;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9};
    vector<int> y = {0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 10262;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {450, 80, 230, 190, 410, 460, 150, 20, 40, 0, 210, 190, 210, 260, 70, 250, 260, 210, 10, 420, 0, 180, 450, 220, 330, 270, 130, 250, 430, 460, 440, 230, 220, 60, 190, 30, 110, 490, 380, 280, 460, 460, 100, 30, 150, 320, 250, 370, 350, 450};
    vector<int> y = {150, 10, 110, 350, 40, 440, 120, 360, 110, 70, 470, 20, 220, 60, 50, 290, 490, 300, 280, 120, 280, 460, 190, 320, 300, 370, 180, 250, 400, 330, 460, 390, 40, 60, 230, 400, 90, 300, 460, 210, 160, 150, 340, 270, 60, 410, 280, 150, 220, 370};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 19433;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> y = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 17874;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {100, 101, 100, 101};
    vector<int> y = {100, 100, 101, 101};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
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
    vector<int> x = {0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3};
    vector<int> y = {0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 223;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {0, 5};
    vector<int> y = {8, 7};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
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
    vector<int> x = {0, 9, 10, 10, 11};
    vector<int> y = {0, 10, 9, 11, 10};
    CropCircles* pObj = new CropCircles();
    clock_t start = clock();
    int result = pObj->countCircles(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=263396&rd=10770&pm=7701
********************************************************************************
#include <sstream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <queue>
#define foreach(i,c) for(__typeof((c).end())i=(c).begin();i!=(c).end();++i)
using namespace std;
 
double EPS = 1e-9;
    
bool lineIntersect( double x[], double y[], double r[] )
{
    double n[2]; n[0] = y[3] - y[2]; n[1] = x[2] - x[3];
    double denom = n[0] * ( x[1] - x[0] ) + n[1] * ( y[1] - y[0] );
    if( fabs( denom ) < EPS ) return false;
    double num = n[0] * ( x[0] - x[2] ) + n[1] * ( y[0] - y[2] );
    double t = -num / denom;
    r[0] = x[0] + t * ( x[1] - x[0] );
    r[1] = y[0] + t * ( y[1] - y[0] );
    return true;
}
 
double circle3pts( double x[], double y[], double r[] )
{
    double lix[4], liy[4];
    lix[0] = 0.5 * ( x[0] + x[1] ); liy[0] = 0.5 * ( y[0] + y[1] );
    lix[1] = lix[0] + y[1] - y[0];  liy[1] = liy[0] + x[0] - x[1];
    lix[2] = 0.5 * ( x[1] + x[2] ); liy[2] = 0.5 * ( y[1] + y[2] );
    lix[3] = lix[2] + y[2] - y[1];  liy[3] = liy[2] + x[1] - x[2];
    if( !lineIntersect( lix, liy, r ) ) return -1.0;
    return sqrt(
        ( r[0] - x[0] ) * ( r[0] - x[0] ) +
        ( r[1] - y[0] ) * ( r[1] - y[0] ) );
}
 
struct C
{
  double x, y, r;
  C( double X, double Y, double R ) { x = X; y = Y; r = R; }
  bool operator<( const C &c ) const 
  {
    if( fabs( x - c.x ) > EPS ) return x < c.x;
    if( fabs( y - c.y ) > EPS ) return y < c.y;
    if( fabs( r - c.r ) > EPS ) return r < c.r;
    return false;
  }
};
 
class CropCircles
{
  public:
  int countCircles(vector <int> x, vector <int> y) 
  {
    set< C > ans;
    int n = x.size();
    for( int i = 0; i < n; i++ ) for( int j = i + 1; j < n; j++ ) for( int k = j + 1; k < n; k++ )
    {
      double X[3] = { x[i], x[j], x[k] }, Y[3] = { y[i], y[j], y[k] }, R[2], r;
      if( ( r = circle3pts( X, Y, R ) ) < -0.5 ) continue;
      ans.insert( C( R[0], R[1], r ) );
    }
    return ans.size();
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/