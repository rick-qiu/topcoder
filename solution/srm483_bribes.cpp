/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11037
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

class Bribes {
public:
    int minBribes(vector<int> influence, vector<int> resistance);
};

int Bribes::minBribes(vector<int> influence, vector<int> resistance) {
    int ret;
    return ret;
}


int test0() {
    vector<int> influence = {10, 3, 5, 3, 1};
    vector<int> resistance = {11, 2, 7, 3, 1};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
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
    vector<int> influence = {15, 15, 15};
    vector<int> resistance = {13, 42, 13};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
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
    vector<int> influence = {10, 16, 4, 7, 1, 1, 13};
    vector<int> resistance = {10, 16, 4, 7, 1, 1, 13};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
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
    vector<int> influence = {471, 183, 376, 296, 408, 19, 422, 403, 469, 252, 338, 255, 446, 489, 171, 58, 113, 485};
    vector<int> resistance = {232, 270, 172, 261, 15, 380, 276, 151, 403, 48, 90, 215, 457, 231, 277, 269, 202, 336};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> influence = {479, 340, 398, 40, 477, 181, 422, 377, 60, 486, 15, 500, 307, 1, 2, 65, 411, 374, 446, 401};
    vector<int> resistance = {402, 87, 20, 76, 468, 493, 252, 98, 216, 58, 89, 500, 89, 26, 8, 125, 269, 116, 426, 81};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> influence = {21, 196, 401, 157, 9, 497, 371, 84, 395, 495, 401, 190, 465, 359, 47, 441, 245, 487, 118, 405};
    vector<int> resistance = {127, 313, 376, 94, 66, 37, 237, 142, 315, 495, 257, 153, 437, 339, 483, 356, 16, 132, 231, 342};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> influence = {499};
    vector<int> resistance = {500};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> influence = {4, 6, 4, 6, 4};
    vector<int> resistance = {5, 4, 6, 4, 5};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> influence = {16, 16, 16};
    vector<int> resistance = {24, 32, 24};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
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
    vector<int> influence = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<int> resistance = {3, 2, 4, 2, 4, 2, 4, 2, 4, 2, 4, 2, 4, 2, 4, 2, 4, 2, 4, 2, 4, 2, 4, 2, 4, 2, 4, 2, 4, 2, 4, 2, 4, 2, 4, 2, 4, 2, 4, 2, 4, 2, 4, 2, 4, 2, 4, 2, 4, 2};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> influence = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<int> resistance = {3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> influence = {468, 1, 225, 359, 465, 146, 328, 492, 443, 437, 105, 154, 383, 217, 396, 227, 39, 413, 300, 395, 312, 334, 165, 212, 369, 145, 258, 360, 242, 279, 36, 343, 107, 443, 149, 306, 230, 351, 102, 49, 124, 455};
    vector<int> resistance = {335, 170, 479, 463, 206, 282, 462, 496, 328, 392, 403, 293, 422, 219, 448, 272, 370, 168, 36, 204, 323, 174, 142, 254, 48, 163, 38, 224, 30, 317, 191, 289, 41, 265, 447, 391, 371, 7, 394, 130, 85, 257};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> influence = {97, 349, 169, 282, 54, 419, 401, 128, 229, 149, 308, 311, 314, 310, 436, 101, 20, 299, 225, 345, 490};
    vector<int> resistance = {22, 200, 485, 235, 500, 439, 289, 468, 394, 484, 422, 118, 15, 117, 452, 250, 57, 304, 9, 110, 203};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> influence = {61, 254, 424, 497, 30, 438, 450, 196, 417, 106, 283, 235, 202, 172, 264, 356, 54, 309, 446, 257, 59, 483, 145, 223, 162, 451, 467, 160, 440, 25, 11, 150, 314, 23, 19, 406, 392, 126, 415, 325, 375, 160, 71, 298, 178, 271};
    vector<int> resistance = {219, 140, 280, 188, 50, 367, 194, 298, 287, 489, 456, 115, 317, 287, 314, 186, 413, 333, 314, 322, 147, 482, 197, 130, 36, 174, 45, 293, 254, 155, 246, 187, 475, 169, 288, 459, 203, 478, 315, 335, 373, 334, 488, 19, 274, 264};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
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
    vector<int> influence = {348, 444, 410, 50, 89, 109, 222, 455, 147, 450, 431, 249, 37, 36, 186, 354, 225, 424, 258, 445, 319, 412, 356, 50, 85, 465, 76, 143, 449, 427, 174, 405, 127, 376, 66, 237, 315, 257, 437, 483, 16, 231, 126, 138};
    vector<int> resistance = {89, 138, 464, 182, 343, 61, 259, 389, 191, 344, 121, 68, 284, 227, 39, 130, 249, 360, 267, 456, 227, 26, 2, 497, 16, 343, 414, 197, 73, 107, 430, 206, 313, 94, 37, 142, 495, 153, 339, 356, 132, 342, 12, 187};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> influence = {151, 135, 354, 453, 263, 455, 135, 257, 125, 214, 29, 81, 359, 156, 265, 177, 410, 62, 449, 154, 221, 424, 370, 260, 120, 4, 282, 393, 314, 90, 439, 411, 235, 462, 494, 270, 370, 201, 265, 216, 316};
    vector<int> resistance = {163, 394, 417, 9, 234, 304, 304, 149, 318, 110, 201, 319, 51, 362, 404, 144, 403, 490, 283, 175, 403, 332, 379, 9, 472, 446, 5, 186, 199, 223, 38, 462, 9, 460, 16, 438, 59, 472, 118, 56, 331};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> influence = {307, 319, 408, 482, 137, 115, 85, 291, 497, 55, 209, 492, 132, 440, 223, 496, 270, 239, 419, 160, 487, 463, 159, 147, 38, 148, 103, 99, 293, 279, 353, 383};
    vector<int> resistance = {269, 103, 308, 13, 131, 310, 57, 294, 153, 346, 249, 213, 115, 459, 205, 53, 480, 424, 367, 499, 197, 134, 23, 393, 426, 459, 308, 331, 101, 300, 449, 41};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> influence = {263, 337, 419, 329, 317, 450, 159, 21, 61, 163, 176, 362, 399, 215, 189, 139, 76, 22, 116, 235, 406, 58, 162, 50, 331, 351};
    vector<int> resistance = {68, 398, 398, 352, 231, 426, 230, 441, 148, 156, 293, 255, 147, 447, 70, 164, 16, 476, 29, 71, 465, 463, 25, 470, 424, 334};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> influence = {238, 338, 394, 215, 92, 136, 338, 338, 165, 109, 282};
    vector<int> resistance = {337, 279, 137, 165, 450, 6, 5, 124, 471, 69, 86};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> influence = {374, 195, 327};
    vector<int> resistance = {153, 377, 397};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
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
    vector<int> influence = {250, 175, 444, 442, 420, 306, 217, 116, 65, 394, 10, 196, 90, 173, 359, 269, 11, 275, 411, 183, 496, 375, 403};
    vector<int> resistance = {141, 320, 112, 290, 66, 86, 451, 110, 167, 75, 301, 74, 162, 469, 32, 427, 423, 280, 53, 392, 265, 365, 256};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
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
    vector<int> influence = {475, 322, 48, 290, 196, 451, 255, 13, 440, 413, 468};
    vector<int> resistance = {473, 123, 78, 106, 95, 344, 482, 173, 429, 263, 409};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> influence = {409, 260, 205, 320, 446, 167, 368, 288, 57, 448, 284, 332, 84, 224, 19, 221};
    vector<int> resistance = {224, 435, 487, 459, 307, 201, 193, 33, 475, 22, 223, 377, 449, 483, 277, 112};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
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
    vector<int> influence = {357, 426, 487, 470, 35, 169, 492, 284, 228, 372, 113, 28, 46, 186, 238, 314, 351, 112, 150, 455, 182, 268, 294, 473, 331, 443, 378, 203, 382, 324, 24, 96, 328};
    vector<int> resistance = {491, 325, 178, 144, 178, 69, 197, 329, 427, 198, 204, 409, 9, 239, 444, 2, 129, 151, 193, 370, 466, 214, 135, 473, 402, 178, 271, 365, 91, 238, 180, 170, 43};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
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
    vector<int> influence = {179, 59, 251, 230, 496, 177, 400, 66, 109, 244, 15, 56, 474, 249, 487, 447, 18, 417, 292, 413, 194, 316, 358, 53, 52, 227, 456, 395, 98};
    vector<int> resistance = {80, 78, 8, 82, 179, 254, 285, 94, 173, 430, 169, 192, 423, 152, 145, 78, 130, 375, 470, 147, 92, 450, 141, 237, 488, 163, 184, 181, 66};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> influence = {209, 277, 190, 167, 456, 115, 254, 349, 362, 83, 198, 253, 297, 22, 448, 319, 377, 360, 75, 423, 144, 154, 248, 427, 451, 462, 356, 217, 62, 474, 51, 182, 200, 144, 173, 482, 477, 248, 172, 373, 490, 166, 159, 207, 449, 172, 397, 21};
    vector<int> resistance = {147, 260, 423, 487, 29, 361, 278, 4, 432, 456, 107, 322, 282, 456, 125, 136, 275, 499, 254, 136, 389, 233, 181, 179, 302, 200, 364, 74, 246, 275, 354, 288, 111, 466, 30, 113, 382, 391, 306, 33, 321, 432, 294, 79, 207, 167, 198, 195};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> influence = {262, 218, 483, 166, 105, 96, 222, 282, 107, 344, 81, 369, 214, 252, 80, 41, 434, 164, 154, 96, 375, 336, 477, 226, 309, 157, 333, 441, 63, 463, 337, 203, 81, 77, 494, 47, 274, 381};
    vector<int> resistance = {494, 2, 448, 254, 85, 26, 465, 373, 157, 94, 81, 412, 469, 217, 269, 32, 280, 260, 437, 366, 221, 181, 456, 72, 60, 103, 406, 376, 386, 81, 298, 9, 341, 59, 241, 475, 98, 336};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> influence = {272, 302, 222, 422, 111, 242, 313, 16, 394, 280, 109, 323, 246, 145, 340, 105, 226, 225, 331, 224, 131, 488, 306, 251, 339, 136, 210, 225, 238, 421, 294, 235, 57, 185, 383, 242, 185, 280, 168, 126, 238, 120, 238};
    vector<int> resistance = {364, 364, 66, 446, 496, 23, 152, 56, 239, 383, 155, 208, 339, 291, 155, 124, 79, 482, 234, 95, 347, 446, 117, 490, 464, 198, 131, 409, 475, 373, 356, 62, 107, 76, 120, 433, 280, 284, 337, 119, 29, 78, 92};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> influence = {296, 402, 433, 81, 408, 75, 291};
    vector<int> resistance = {61, 294, 137, 376, 185, 220, 477};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> influence = {352, 291, 73, 190, 491, 394, 64, 404, 177, 196, 469, 84, 16, 494, 223, 329, 400, 392, 444, 244, 203, 3, 188, 392, 414, 317, 163, 127, 378, 261, 206, 164, 196, 361, 89, 246, 426, 190, 64, 3, 100, 227};
    vector<int> resistance = {330, 475, 92, 288, 240, 54, 182, 6, 480, 140, 499, 140, 122, 327, 339, 82, 479, 24, 335, 350, 208, 142, 347, 138, 401, 191, 436, 411, 383, 190, 375, 223, 67, 39, 312, 468, 368, 43, 48, 118, 24, 204};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> influence = {52, 137, 468, 406, 463, 476, 32, 45, 304, 416, 320, 292, 134, 143, 301, 79, 258, 394, 104, 234, 272, 491, 142, 48, 159, 303, 491, 69, 396, 9, 243, 200, 179, 358, 348, 346, 414, 211, 386, 5, 204, 70, 30, 75, 231, 345, 119, 364, 274};
    vector<int> resistance = {71, 459, 457, 32, 320, 57, 496, 92, 389, 451, 273, 384, 276, 70, 455, 86, 334, 491, 251, 223, 112, 339, 259, 353, 480, 184, 3, 423, 136, 362, 195, 189, 43, 442, 470, 381, 465, 62, 74, 463, 103, 155, 53, 150, 245, 50, 66, 53, 471};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
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
    vector<int> influence = {248, 370, 499, 353, 54, 23, 64, 351, 241, 493, 81, 117, 179, 116, 299, 136, 384, 403, 421, 23, 342, 389, 218, 199, 250, 390, 120, 4, 29, 90, 131, 365};
    vector<int> resistance = {12, 399, 104, 180, 44, 89, 335, 23, 412, 152, 478, 377, 221, 349, 180, 358, 163, 263, 271, 274, 187, 418, 393, 268, 66, 433, 82, 131, 132, 153, 173, 408};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
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
    vector<int> influence = {100, 196, 159, 359, 390};
    vector<int> resistance = {475, 7, 90, 310, 448};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> influence = {365, 27, 4, 413, 71, 396, 487, 110, 84, 391, 187, 382, 3, 363, 66, 333, 429, 390, 384};
    vector<int> resistance = {476, 90, 67, 341, 177, 142, 152, 188, 86, 251, 256, 129, 278, 425, 373, 386, 147, 479, 426};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> influence = {3, 96, 17, 8, 285, 260, 59, 169, 120, 42, 265, 416, 430};
    vector<int> resistance = {449, 185, 138, 494, 445, 322, 144, 178, 358, 392, 124, 73, 342};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
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
    vector<int> influence = {285, 291, 392, 86, 191, 499, 19, 425, 377, 170, 428, 69, 103, 101, 319, 485, 57, 133, 315, 240, 21, 55, 442, 143, 322, 447, 10, 209};
    vector<int> resistance = {205, 335, 122, 235, 43, 87, 122, 98, 255, 109, 494, 367, 439, 320, 291, 340, 309, 479, 288, 75, 328, 489, 299, 3, 105, 57, 334, 262};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> influence = {187, 386, 343, 162, 344, 188, 64, 435, 157, 13, 460, 239, 125, 8, 452, 490, 442, 14, 356, 94, 403, 44, 267, 276, 33, 470, 230, 393, 454, 71, 473, 495, 441, 263};
    vector<int> resistance = {305, 143, 261, 121, 79, 114, 92, 416, 262, 412, 252, 371, 8, 85, 102, 459, 291, 413, 61, 473, 177, 374, 152, 29, 262, 4, 108, 452, 393, 20, 408, 6, 384, 410};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> influence = {284, 54, 92, 387, 130, 318, 357, 453, 467, 261, 132, 268, 99, 321, 8, 217, 343, 464, 448, 131, 44, 315, 118};
    vector<int> resistance = {161, 206, 260, 188, 43, 46, 389, 155, 334, 420, 239, 277, 315, 54, 470, 223, 8, 261, 294, 218, 377, 127, 335};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> influence = {172, 465, 367, 165, 1, 101, 477, 444, 290, 386, 435, 62, 5, 389, 158, 124, 75, 338, 319, 293, 333};
    vector<int> resistance = {293, 155, 194, 276, 213, 52, 380, 378, 362, 273, 145, 64, 447, 309, 431, 465, 347, 482, 112, 92, 124};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> influence = {492, 331, 370, 401, 118, 415, 442, 368, 454, 474, 4, 317};
    vector<int> resistance = {462, 499, 292, 180, 318, 96, 437, 29, 410, 482, 70, 384};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> influence = {386, 231, 182, 311, 188, 478, 265, 172, 116, 312, 406, 172, 241, 176, 291, 499, 105, 132};
    vector<int> resistance = {403, 158, 68, 367, 172, 246, 239, 48, 93, 158, 54, 81, 31, 321, 378, 87, 490, 245};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> influence = {111, 420, 428, 120, 217, 397, 459, 94, 350, 273, 295, 334, 230, 429, 242, 189, 34, 271, 262, 209, 163, 379, 398, 39, 284, 296, 134, 58, 135, 136, 94, 194, 452, 95, 175, 98, 196, 493, 238};
    vector<int> resistance = {219, 260, 110, 480, 301, 354, 331, 307, 355, 161, 55, 147, 472, 60, 422, 367, 186, 330, 361, 483, 7, 480, 388, 470, 41, 267, 10, 318, 54, 259, 344, 467, 141, 438, 13, 52, 318, 293, 31};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> influence = {49, 125, 455, 128, 241, 128, 318, 143, 401, 477};
    vector<int> resistance = {269, 12, 236, 134, 363, 78, 341, 101, 59, 155};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
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
    vector<int> influence = {332, 38, 423, 30, 212, 381, 294, 286, 444, 56, 271, 376, 141, 41, 335, 40, 297, 263, 232, 465, 249, 171, 183, 294, 333, 332, 5, 27, 239, 124, 442};
    vector<int> resistance = {296, 124, 428, 212, 255, 254, 322, 29, 1, 172, 453, 132, 435, 487, 249, 266, 313, 53, 488, 58, 57, 451, 302, 100, 45, 76, 51, 67, 302, 344, 381};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> influence = {85, 87, 249, 398, 169, 149, 383, 170, 378, 105, 444, 312, 393, 491, 391, 75, 275, 174, 219};
    vector<int> resistance = {253, 270, 138, 425, 28, 494, 272, 394, 15, 485, 496, 294, 299, 300, 494, 50, 315, 70, 366};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> influence = {239, 253, 9, 89, 232, 107, 369, 259, 148, 239, 224, 207, 157, 352, 119, 98, 92, 11, 152, 345, 242, 79, 206, 286, 125, 357, 228, 103, 469, 480, 490, 491, 411, 90};
    vector<int> resistance = {412, 464, 150, 246, 421, 272, 422, 158, 483, 123, 407, 190, 346, 424, 51, 337, 407, 314, 381, 244, 246, 450, 15, 228, 205, 418, 56, 287, 199, 412, 259, 276, 133, 297};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> influence = {123, 173, 278, 477, 86, 252, 252, 436, 73, 217, 12, 339, 440};
    vector<int> resistance = {30, 337, 54, 171, 153, 398, 2, 194, 417, 329, 126, 297, 45};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> influence = {327, 259, 22, 109, 129, 448, 281};
    vector<int> resistance = {403, 89, 87, 278, 480, 50, 246};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> influence = {108, 358, 200, 156, 491, 359, 418};
    vector<int> resistance = {267, 179, 175, 192, 333, 497, 291};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> influence = {208, 247, 403, 427, 407, 351, 280, 323, 302, 177, 358, 39, 145, 181, 144, 62, 440, 291};
    vector<int> resistance = {235, 463, 240, 96, 315, 87, 277, 380, 313, 165, 71, 313, 62, 201, 357, 148, 309, 453};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> influence = {276, 133, 47, 4, 402, 154, 150, 406, 26, 337, 294, 33, 397, 277, 51, 296, 351};
    vector<int> resistance = {47, 290, 146, 153, 327, 185, 351, 347, 471, 296, 324, 357, 211, 193, 291, 353, 316};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> influence = {362, 485, 35, 83, 437, 291, 183, 117, 426, 111, 483, 194, 255, 396, 139, 421, 384, 197, 391, 190, 184, 130, 180, 101, 146, 152, 464, 408, 477, 212, 265, 32, 199, 156, 258, 465, 11};
    vector<int> resistance = {261, 230, 51, 307, 85, 118, 67, 389, 102, 451, 122, 39, 94, 281, 168, 346, 366, 334, 133, 340, 318, 254, 114, 253, 362, 319, 314, 55, 118, 430, 467, 443, 23, 88, 159, 263, 447};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> influence = {275, 129, 146, 215, 169, 308, 5, 198};
    vector<int> resistance = {385, 47, 482, 150, 339, 294, 106, 218};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
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
    vector<int> influence = {344, 98, 237, 134, 431, 405, 489, 255, 177, 416, 232, 476, 15, 158, 439, 448, 119, 132, 220, 491, 173, 303, 429, 399, 446, 223, 295, 345, 48, 486, 224, 154, 131, 467, 13, 319, 143, 7, 185, 271, 251, 312};
    vector<int> resistance = {134, 180, 56, 455, 253, 280, 371, 73, 202, 87, 481, 261, 439, 491, 482, 243, 71, 62, 282, 334, 64, 3, 222, 448, 407, 187, 78, 184, 241, 465, 338, 169, 256, 359, 157, 202, 277, 203, 24, 313, 476, 351};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> influence = {489, 102, 299, 349, 246, 463, 259, 372, 173, 442, 89, 477, 299, 284, 498, 270, 418, 21, 443, 390, 481, 278, 382, 23, 480, 214, 236, 187, 149, 253, 261, 137, 420, 293, 279, 497, 12, 48, 203, 203, 40, 258, 421, 360, 299, 461};
    vector<int> resistance = {21, 184, 393, 285, 188, 344, 360, 17, 333, 184, 16, 17, 40, 206, 147, 176, 388, 31, 236, 374, 74, 287, 286, 346, 86, 436, 384, 97, 86, 22, 483, 189, 237, 66, 199, 387, 477, 122, 246, 65, 73, 371, 155, 81, 392, 11};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> influence = {368, 176, 500, 291, 257, 204, 468, 43, 67, 187, 199, 365, 166, 341, 315, 13, 339, 26, 250, 80, 339, 422, 492, 340, 66, 474, 471, 54, 9, 430, 190, 272, 260, 73, 467, 171, 200, 351, 437, 407, 314, 372};
    vector<int> resistance = {34, 137, 276, 377, 273, 87, 16, 496, 457, 438, 127, 86, 409, 361, 155, 253, 207, 131, 180, 314, 18, 146, 470, 309, 263, 182, 148, 209, 216, 67, 164, 42, 132, 15, 489, 169, 156, 445, 279, 428, 24, 328};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> influence = {462, 435, 88, 464, 127, 496, 407, 360, 497, 224, 380, 127, 86, 372, 108, 88, 20, 216, 493, 258, 460, 387, 366, 20};
    vector<int> resistance = {174, 103, 418, 154, 96, 214, 371, 306, 334, 353, 20, 294, 466, 445, 272, 100, 97, 53, 254, 91, 358, 310, 187, 260};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> influence = {436, 102, 370, 232, 75, 344, 317, 12, 223, 58, 175, 184, 296, 484};
    vector<int> resistance = {29, 469, 457, 79, 396, 275, 25, 86, 472, 96, 39, 159, 223, 232};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> influence = {62, 29, 214, 93, 468, 359, 488, 484};
    vector<int> resistance = {121, 157, 333, 183, 321, 75, 95, 365};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> influence = {215, 391, 256, 468, 232, 381, 129, 221, 92, 88, 127, 160, 221, 315, 148};
    vector<int> resistance = {247, 426, 164, 293, 120, 219, 449, 80, 267, 309, 326, 19, 36, 457, 157};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> influence = {423, 234, 418, 374, 176, 486, 123, 396, 221, 489, 73, 194, 255, 377, 317, 91, 290, 480, 323, 103, 155, 235, 275, 464, 473, 454, 308, 334, 196, 162, 160, 408, 473, 93, 129, 312, 336, 217, 457, 250, 297, 121, 407, 446, 192, 39, 105, 354, 5, 353};
    vector<int> resistance = {122, 414, 294, 61, 75, 2, 209, 27, 292, 430, 478, 9, 423, 138, 304, 413, 254, 300, 403, 370, 230, 439, 227, 135, 349, 4, 19, 438, 180, 145, 462, 77, 146, 473, 197, 36, 230, 33, 159, 121, 225, 27, 484, 75, 89, 165, 378, 443, 124, 126};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
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
    vector<int> influence = {348, 67, 166, 1, 174, 169, 80, 229, 159, 268, 235, 170, 71, 236, 212, 251, 46, 255, 218, 443, 274, 80, 389, 387};
    vector<int> resistance = {397, 231, 153, 118, 287, 98, 225, 261, 426, 313, 453, 63, 212, 391, 65, 461, 268, 288, 66, 89, 316, 338, 270, 331};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> influence = {141, 320, 127, 412, 394, 358, 337, 451, 406, 335};
    vector<int> resistance = {322, 382, 21, 455, 485, 500, 330, 458, 366, 50};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> influence = {350, 107, 288, 270, 89, 84, 159, 439, 421, 259, 24, 299, 471, 197, 489, 447, 276, 20, 198, 155, 59, 292, 338, 233, 237, 459, 86, 285, 228, 427, 37, 371};
    vector<int> resistance = {443, 351, 41, 224, 468, 401, 107, 464, 367, 186, 230, 357, 176, 184, 120, 191, 470, 342, 46, 159, 295, 342, 401, 176, 439, 81, 14, 254, 286, 171, 282, 50};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> influence = {78, 336, 138, 232, 234, 377, 232, 343, 1, 417, 500, 241, 124, 132, 40, 76, 364, 227, 425, 390, 25, 246, 484, 393, 325, 241, 469, 344, 257, 115, 459, 125, 312, 218, 91, 81, 491, 1, 276, 183, 107, 145, 437, 93, 339, 213, 447, 53, 257};
    vector<int> resistance = {200, 74, 352, 118, 72, 30, 45, 468, 29, 135, 258, 82, 442, 250, 300, 100, 246, 202, 84, 236, 396, 171, 218, 253, 274, 256, 71, 31, 266, 481, 359, 9, 168, 429, 100, 371, 413, 65, 85, 412, 369, 327, 367, 489, 366, 448, 160, 272, 111};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> influence = {316, 83, 83, 401, 338, 301};
    vector<int> resistance = {175, 140, 25, 76, 377, 425};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
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
    vector<int> influence = {38, 26, 352, 295, 207, 72, 385, 480, 159, 346, 439, 321, 267, 458, 272};
    vector<int> resistance = {196, 130, 289, 245, 76, 491, 320, 196, 308, 375, 157, 433, 223, 54, 456};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> influence = {126, 129, 28, 491, 55, 193, 119, 57, 283, 440, 494, 270, 34, 93, 27, 81, 462, 408, 246, 122, 283, 492, 116, 144, 272, 436, 413, 468, 453, 329, 430, 200, 152, 42, 384, 145, 78, 203, 203, 250};
    vector<int> resistance = {30, 40, 395, 149, 18, 31, 149, 491, 244, 302, 428, 394, 432, 136, 343, 117, 218, 421, 167, 283, 7, 371, 196, 264, 93, 218, 382, 222, 323, 231, 425, 154, 295, 265, 221, 389, 214, 159, 254, 59};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> influence = {91, 324, 202, 59, 288, 27, 210, 436, 32, 403, 72, 10, 295, 237, 16, 255, 434, 356, 446, 43, 488, 348, 390, 289, 281, 208};
    vector<int> resistance = {139, 396, 206, 124, 42, 31, 321, 44, 175, 101, 276, 431, 123, 391, 453, 283, 189, 461, 424, 160, 444, 85, 169, 199, 480, 314};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> influence = {242, 148, 455, 455, 222, 189, 117, 181, 38, 390, 5, 385, 488, 53, 29, 473, 459, 484, 324, 97, 402, 21, 473, 433, 325, 58};
    vector<int> resistance = {15, 363, 177, 159, 285, 467, 357, 430, 130, 344, 102, 421, 137, 83, 367, 194, 180, 488, 398, 95, 154, 4, 21, 454, 34, 166};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> influence = {281, 467, 369, 329, 145, 450, 4, 241, 111, 283, 188, 462, 100, 319, 59, 359, 179, 458, 222, 257, 261, 344, 342, 353, 412, 294, 382, 261, 272, 195, 36, 456, 324};
    vector<int> resistance = {168, 191, 427, 480, 204, 334, 411, 28, 28, 394, 364, 66, 252, 82, 104, 239, 465, 73, 423, 368, 299, 235, 20, 63, 312, 406, 152, 399, 343, 85, 1, 156, 151};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> influence = {440, 18, 449, 496, 149, 172, 196, 138, 301, 135, 178, 142, 497, 38, 352, 66, 446, 195, 179, 429, 150, 313, 200, 193, 296, 68, 377, 243, 104, 48, 466, 138, 332, 54, 53, 157, 196, 430, 279};
    vector<int> resistance = {11, 433, 211, 420, 190, 352, 224, 150, 408, 385, 313, 305, 163, 52, 233, 439, 229, 27, 246, 206, 258, 402, 228, 354, 43, 150, 256, 249, 316, 74, 250, 170, 471, 269, 179, 482, 87, 232, 360};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> influence = {148, 12, 320, 206, 289, 46, 493, 77, 404, 400, 168, 115, 294, 355, 332, 327, 300, 175, 113, 458, 492, 330};
    vector<int> resistance = {4, 175, 108, 100, 262, 436, 233, 168, 368, 55, 213, 130, 478, 13, 390, 148, 490, 337, 388, 4, 483, 28};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> influence = {453, 147, 98, 33, 446, 225, 196, 133, 103, 283, 438, 36};
    vector<int> resistance = {497, 184, 55, 103, 477, 82, 124, 344, 370, 490, 100, 180};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> influence = {153, 351, 446, 372, 91};
    vector<int> resistance = {400, 133, 294, 150, 205};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
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
    vector<int> influence = {106, 202, 307, 94, 92, 224, 201, 323, 263, 269, 153, 236, 263, 273, 201, 20};
    vector<int> resistance = {227, 274, 81, 491, 215, 358, 350, 286, 203, 375, 349, 139, 238, 293, 344, 482};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> influence = {240, 90, 210, 296, 413, 436, 480, 231, 102, 44, 413, 124, 484, 187, 258, 440, 277, 153, 36, 317, 368, 222, 21, 66, 259, 32, 283, 163, 424, 343, 197, 470, 216, 237};
    vector<int> resistance = {269, 184, 488, 246, 140, 249, 208, 455, 441, 219, 378, 473, 386, 221, 203, 107, 425, 38, 200, 391, 107, 476, 293, 48, 185, 330, 206, 190, 371, 283, 181, 73, 52, 256};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> influence = {15, 497, 149, 397, 292, 90, 356, 252, 272, 229, 455, 431, 492, 354, 68, 378, 198};
    vector<int> resistance = {67, 374, 11, 442, 367, 21, 449, 82, 326, 174, 310, 239, 240, 449, 55, 491, 57};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> influence = {15, 417, 340, 237, 275, 241, 184, 329, 438, 78, 223, 160, 369, 349, 291, 459, 107, 2, 271, 8, 231, 304, 195, 165, 49, 281, 265, 14};
    vector<int> resistance = {291, 302, 45, 13, 434, 402, 136, 134, 135, 172, 264, 41, 283, 367, 228, 72, 306, 435, 56, 300, 76, 440, 489, 174, 359, 488, 214, 453};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
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
    vector<int> influence = {4, 223, 355, 426, 319, 121, 489, 342, 1, 223, 53, 17, 487, 238, 402};
    vector<int> resistance = {255, 317, 87, 25, 303, 160, 183, 75, 67, 255, 351, 227, 103, 402, 250};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
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
    vector<int> influence = {103, 382, 211, 490, 185, 107, 488, 491, 19, 354, 163, 214, 116, 286, 65, 338, 285, 473};
    vector<int> resistance = {266, 344, 9, 359, 122, 87, 372, 473, 74, 282, 497, 452, 305, 334, 5, 454, 334, 422};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> influence = {133, 317, 262, 431, 33, 374, 381, 488, 90, 61, 98, 164, 122, 316, 335, 138, 165, 12, 347, 238, 156, 352, 53, 421, 361, 274, 134, 302, 388, 1};
    vector<int> resistance = {10, 430, 134, 247, 284, 440, 336, 71, 130, 22, 190, 445, 206, 214, 500, 116, 59, 384, 444, 332, 252, 291, 296, 62, 268, 35, 192, 379, 380, 116};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> influence = {73, 453, 324, 38, 111, 479, 162, 219, 184, 196};
    vector<int> resistance = {62, 471, 65, 51, 292, 444, 322, 299, 434, 210};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> influence = {469, 365, 350, 147, 445, 460, 386, 269, 107, 36, 365, 352, 126, 347, 339, 222, 125, 316, 353, 71, 420, 488, 346};
    vector<int> resistance = {204, 346, 51, 143, 156, 269, 302, 348, 188, 310, 134, 141, 225, 201, 32, 218, 85, 345, 20, 368, 175, 31, 217};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> influence = {200, 186, 322, 42, 74, 453, 230, 160, 166, 451, 92, 214, 487, 191, 407, 123, 167, 492, 67, 280, 368, 104, 21, 35, 334, 288, 328, 125, 419, 245, 87, 9, 98, 122, 408, 23, 492, 252, 466, 481, 466, 301, 236, 113, 377};
    vector<int> resistance = {163, 116, 3, 305, 234, 312, 225, 484, 346, 327, 398, 372, 163, 85, 419, 220, 219, 460, 104, 499, 346, 431, 26, 322, 236, 394, 349, 193, 301, 432, 196, 254, 193, 320, 72, 62, 53, 24, 457, 62, 24, 329, 454, 183, 158};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> influence = {293, 277, 343, 161, 139, 121, 430, 142, 335, 271, 1, 365, 100, 166, 30, 255, 320, 111, 418, 126, 411, 49, 470, 100, 156, 38, 207, 415, 294, 88, 86, 235, 16, 385, 149, 56, 282, 428, 360, 300};
    vector<int> resistance = {200, 462, 132, 201, 81, 46, 169, 263, 134, 83, 61, 142, 337, 334, 328, 29, 485, 169, 398, 407, 464, 191, 345, 144, 465, 59, 412, 448, 130, 81, 265, 77, 119, 348, 48, 333, 338, 397, 325, 154};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> influence = {342, 230};
    vector<int> resistance = {405, 216};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> influence = {66, 483, 236, 313, 303, 14, 498, 216, 408, 419, 425, 184, 329, 484, 38, 350, 384, 348, 287, 410, 1, 340, 169, 486, 23, 236, 328, 62, 136, 480, 407};
    vector<int> resistance = {83, 332, 291, 257, 449, 127, 65, 294, 438, 339, 71, 346, 60, 222, 61, 424, 406, 314, 485, 235, 471, 158, 357, 93, 234, 384, 500, 91, 101, 74, 386};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> influence = {210, 482, 200, 408, 220, 428, 61, 453, 104, 399, 70, 491, 58, 320, 150, 447, 468, 10, 480, 208, 139, 200, 15, 356, 266, 221, 265, 204, 51, 302, 428, 411, 325, 99, 132, 255, 404, 110, 33, 131, 433, 91, 133, 18, 322, 306};
    vector<int> resistance = {337, 440, 102, 196, 85, 356, 134, 301, 189, 376, 305, 344, 358, 376, 191, 299, 347, 81, 482, 220, 426, 271, 11, 233, 119, 238, 210, 45, 42, 345, 142, 197, 184, 141, 71, 36, 446, 415, 418, 319, 414, 462, 136, 146, 319, 334};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> influence = {383, 93, 431, 21, 189, 135, 104, 123, 261, 431, 424, 487, 139};
    vector<int> resistance = {36, 136, 35, 229, 225, 234, 126, 283, 66, 265, 323, 409, 132};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> influence = {427, 64, 420, 242, 77, 22, 88, 240, 53, 475, 243, 401, 235, 181, 424, 169};
    vector<int> resistance = {363, 379, 352, 316, 169, 99, 32, 340, 331, 282, 119, 201, 107, 291, 400, 486};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> influence = {500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500};
    vector<int> resistance = {500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> influence = {500, 500, 421, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 450, 500, 480, 500, 500, 500, 500, 500, 500, 500, 500, 500, 470, 500, 500, 500, 500, 500, 500, 444, 500, 500, 500, 500, 500, 500, 399, 500};
    vector<int> resistance = {500, 500, 500, 500, 400, 444, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 400, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 412, 500, 500};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> influence = {345, 261, 186, 128, 40, 143, 173, 406, 92, 415, 342, 103, 254, 122, 391, 210, 280, 407, 311, 61, 45, 50, 406, 19, 378, 89, 306, 12, 327, 290, 319, 298, 201, 159, 38, 255, 55, 394, 269, 396, 167, 251, 319, 197};
    vector<int> resistance = {2, 14, 16, 9, 2, 1, 12, 2, 3, 21, 17, 14, 20, 17, 3, 2, 20, 11, 4, 8, 4, 2, 21, 18, 3, 2, 20, 13, 15, 1, 3, 6, 21, 8, 4, 17, 21, 15, 17, 4, 5, 17, 18, 12};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> influence = {215, 19, 234, 144, 188, 232, 207, 231, 157, 172, 246, 228, 46, 104, 166, 140, 186, 154, 197, 169, 75, 253, 154, 172, 148, 97, 123, 110, 173, 16, 227, 10, 92, 138, 74, 198, 18, 215, 255, 67, 113};
    vector<int> resistance = {64, 264, 200, 85, 289, 220, 207, 220, 135, 29, 123, 271, 115, 122, 273, 268, 16, 240, 279, 104, 181, 183, 40, 160, 234, 71, 263, 250, 131, 100, 174, 258, 2, 276, 83, 124, 235, 164, 232, 114, 198};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> influence = {157, 122, 233, 57, 9, 271, 331, 103, 217, 106, 297, 55, 26, 146, 362, 33, 234, 116, 107, 275, 173, 195, 338, 278, 193, 86};
    vector<int> resistance = {57, 40, 20, 26, 89, 43, 45, 56, 65, 14, 18, 56, 64, 84, 16, 89, 61, 31, 14, 83, 80, 57, 33, 53, 51, 34};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> influence = {500};
    vector<int> resistance = {499};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> influence = {499};
    vector<int> resistance = {500};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> influence = {284, 287, 178, 116, 294, 236, 287, 193, 250, 122, 63, 128, 291, 260, 264, 227, 241, 127, 173, 137, 12, 69, 268, 130, 183, 231, 63, 224, 68, 236, 30, 103, 223, 259, 270, 268, 194, 257, 212, 143, 130, 274, 22, 120, 285, 38, 99, 225, 216, 271};
    vector<int> resistance = {184, 87, 178, 116, 194, 136, 187, 93, 50, 22, 163, 28, 91, 60, 164, 127, 141, 27, 173, 137, 12, 169, 168, 30, 183, 131, 63, 124, 68, 136, 130, 3, 23, 59, 70, 168, 194, 57, 12, 43, 30, 174, 22, 120, 185, 138, 199, 125, 116, 171};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> influence = {400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400};
    vector<int> resistance = {100, 200, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 1, 500, 500, 500, 500, 500, 500, 500, 500, 14, 194, 43, 500, 500, 500, 500, 500, 500, 300, 500, 500, 500, 500, 500, 500, 500, 500, 500, 100, 200};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> influence = {48, 27, 47, 26, 91, 27, 48, 85, 38, 27, 48, 27, 47, 26, 91, 27, 48, 85, 38, 27, 48, 27, 47, 26, 91, 27, 48, 85, 38, 27, 48, 27, 47, 26, 91, 27, 48, 85, 38, 27, 48, 27, 47, 26, 91, 27, 48, 85, 38, 27};
    vector<int> resistance = {27, 48, 85, 38, 27, 48, 27, 47, 26, 91, 27, 48, 85, 38, 27, 48, 27, 47, 26, 91, 27, 48, 85, 38, 27, 48, 27, 47, 26, 91, 27, 48, 85, 38, 27, 48, 27, 47, 26, 91, 27, 48, 85, 38, 27, 48, 27, 47, 26, 91};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> influence = {500, 100, 500, 500, 500, 500, 50, 500, 400, 500, 500, 500, 201, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 497, 498, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500};
    vector<int> resistance = {500, 100, 500, 500, 500, 500, 50, 500, 400, 500, 500, 500, 201, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 497, 498, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> influence = {202, 389, 153, 97, 190, 291, 185, 24, 179, 147, 122, 14, 416, 379, 393, 305, 236, 3, 185, 226, 77, 497, 70, 204, 328, 355, 208, 274, 189, 98, 201, 31, 144, 300, 322, 296, 188, 84, 118, 102, 252, 93, 287, 221, 159, 324, 410, 483, 372, 426};
    vector<int> resistance = {101, 365, 238, 10, 312, 17, 180, 82, 241, 239, 69, 55, 31, 225, 381, 297, 424, 493, 399, 45, 405, 404, 362, 447, 471, 261, 121, 467, 120, 70, 156, 403, 28, 67, 436, 81, 16, 325, 162, 233, 422, 481, 11, 6, 110, 292, 462, 161, 276, 93};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> influence = {500, 490, 480, 470, 460, 450, 440, 430, 420, 410, 400, 490, 480, 470, 460, 450, 440, 430, 420, 410, 300, 290, 280, 270, 260, 250, 240, 230, 220, 210, 200, 290, 280, 270, 260, 250, 240, 230, 220, 210, 100};
    vector<int> resistance = {400, 100, 400, 100, 400, 100, 400, 100, 300, 300, 300, 100, 100, 100, 100, 300, 100, 100, 100, 100, 300, 100, 100, 100, 100, 400, 100, 400, 100, 300, 300, 300, 100, 100, 100, 100, 300, 100, 100, 100, 100};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> influence = {1, 1, 1, 1, 1, 1, 1, 1, 500};
    vector<int> resistance = {1, 1, 1, 1, 1, 1, 1, 1, 2};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> influence = {1, 2, 4, 8, 4, 2, 1, 10, 10, 1, 2, 4, 8, 4, 2, 1, 1, 2, 4, 8, 4, 2, 1, 1, 2, 4, 8, 4, 2, 1};
    vector<int> resistance = {1, 2, 4, 8, 4, 2, 1, 9, 9, 1, 2, 4, 8, 4, 2, 1, 1, 2, 4, 8, 4, 2, 1, 1, 2, 4, 8, 4, 2, 1};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> influence = {1};
    vector<int> resistance = {1};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> influence = {3, 2, 3};
    vector<int> resistance = {1, 2, 1};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> influence = {500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500};
    vector<int> resistance = {500, 250, 125, 62, 31, 15, 7, 3, 2, 3, 7, 15, 31, 62, 125, 250, 500, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 500, 250, 125, 62, 31, 15, 7, 3, 2, 3, 7, 15, 31, 62, 125, 250, 500};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> influence = {256, 128, 64, 32, 16, 8, 4, 2, 1, 2, 4, 8, 16, 32, 64, 128, 256, 256, 128, 64, 32, 16, 8, 4, 2, 1, 2, 4, 8, 16, 32, 64, 128, 256};
    vector<int> resistance = {1, 1, 1, 1, 1, 1, 1, 1, 17, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 17, 1, 1, 1, 1, 1, 1, 1, 1};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> influence = {500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500};
    vector<int> resistance = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> influence = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> resistance = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> influence = {6, 6, 6};
    vector<int> resistance = {5, 6, 5};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
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
    vector<int> influence = {499, 499, 499, 499, 355, 499, 499, 499, 499, 355, 499, 499, 499, 499, 355, 499, 499, 499, 499, 355, 499, 499, 499, 499, 355, 499, 499, 499, 499, 355, 499, 499, 499, 499, 355, 499, 499, 499, 499, 355, 499, 499, 499, 499, 355, 499, 499, 499, 499, 355};
    vector<int> resistance = {500, 499, 500, 499, 500, 500, 499, 500, 499, 500, 500, 499, 500, 499, 500, 500, 499, 500, 499, 500, 500, 499, 500, 499, 500, 500, 499, 500, 499, 500, 500, 499, 500, 499, 500, 500, 499, 500, 499, 500, 500, 499, 500, 499, 500, 500, 499, 500, 499, 500};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> influence = {42, 468, 335, 1, 170, 225, 479, 359, 463, 465, 206, 146, 282, 328, 462, 492, 496, 443, 328, 437, 392, 105, 403, 154, 293, 383, 422, 217, 219, 396, 448, 227, 272, 39, 370, 413, 168, 300, 36, 395, 204, 312, 323, 334, 174, 165, 142, 212, 254, 369};
    vector<int> resistance = {48, 145, 163, 258, 38, 360, 224, 242, 30, 279, 317, 36, 191, 343, 289, 107, 41, 443, 265, 149, 447, 306, 391, 230, 371, 351, 7, 102, 394, 49, 130, 124, 85, 455, 257, 341, 467, 377, 432, 309, 445, 440, 127, 324, 38, 39, 119, 83, 430, 42};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> influence = {500, 100, 500, 500, 500, 500, 50, 500, 400, 500, 500, 500, 201, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 497, 498, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500};
    vector<int> resistance = {500, 100, 500, 500, 500, 500, 50, 500, 400, 500, 500, 500, 201, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 497, 498, 500, 500, 500, 390, 500, 500, 500, 500, 500, 500, 500};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> influence = {500, 479, 340, 398, 40, 477, 181, 422, 377, 60, 486, 15, 479, 340, 398, 40, 477, 181, 422, 377, 60, 486, 15, 500, 307, 1, 2, 65, 411, 374, 446, 401, 500, 307, 1, 2, 65, 411, 374, 446, 401};
    vector<int> resistance = {20, 402, 87, 20, 76, 468, 493, 402, 87, 20, 76, 468, 493, 252, 98, 216, 58, 89, 500, 89, 26, 8, 125, 269, 116, 426, 81, 252, 98, 216, 58, 89, 500, 89, 26, 8, 125, 269, 116, 426, 81};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> influence = {100, 100, 100};
    vector<int> resistance = {100, 100, 100};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> influence = {5, 12, 53, 42, 12, 53, 12, 45, 78, 32, 12, 56, 78, 12, 45, 97, 12, 10, 10, 85, 10, 10, 12, 11, 16, 13, 13, 15, 17, 9, 5, 9, 7, 9, 22, 2, 2, 2, 2, 2, 3, 3, 5, 8};
    vector<int> resistance = {6, 5, 1, 2, 5, 7, 8, 7, 4, 6, 6, 7, 8, 9, 5, 2, 3, 5, 2, 4, 2, 5, 3, 4, 4, 5, 3, 2, 2, 1, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> influence = {4, 12, 15};
    vector<int> resistance = {5, 5, 6};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> influence = {42, 68, 135, 101, 170, 125, 79, 159, 163, 65, 106, 146, 82, 28, 162, 92, 196, 143, 28, 37, 192, 5, 103, 154, 93, 183, 22, 117, 119, 96, 48, 127, 172, 139, 70, 113, 68, 100, 36, 95, 104, 12, 123, 134, 74, 65, 142, 112, 54, 69};
    vector<int> resistance = {48, 45, 63, 58, 38, 60, 24, 42, 30, 79, 17, 36, 91, 43, 89, 7, 41, 43, 65, 49, 47, 6, 91, 30, 71, 51, 7, 2, 94, 49, 30, 24, 85, 55, 57, 41, 67, 77, 32, 9, 45, 40, 27, 24, 38, 39, 19, 83, 30, 42};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> influence = {468, 335, 1, 170, 225, 479, 359, 463, 465, 206, 146, 282, 328, 462, 492, 496, 443, 328, 437, 392, 105, 403, 154, 293, 383, 422, 217, 219, 396, 448, 227, 272, 39, 370, 413, 168, 300, 36, 395, 204, 312, 323};
    vector<int> resistance = {334, 174, 165, 142, 212, 254, 369, 48, 145, 163, 258, 38, 360, 224, 242, 30, 279, 317, 36, 191, 343, 289, 107, 41, 443, 265, 149, 447, 306, 391, 230, 371, 351, 7, 102, 394, 49, 130, 124, 85, 455, 257};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> influence = {422, 178, 341, 362, 484, 392, 161, 135, 424, 328, 190, 183, 483, 162, 98, 29, 194, 143, 384, 392, 174, 301, 143, 488, 155, 193, 282, 309, 85, 167, 46, 260, 394, 445, 286, 322, 162, 135, 167, 260, 120, 231, 110, 17, 62, 197, 383, 444, 124, 492};
    vector<int> resistance = {79, 214, 78, 52, 197, 60, 32, 235, 214, 222, 196, 170, 128, 170, 220, 57, 233, 64, 145, 155, 282, 88, 199, 37, 259, 26, 271, 110, 92, 3, 111, 8, 119, 120, 237, 198, 128, 104, 292, 41, 174, 248, 232, 134, 185, 102, 93, 98, 13, 288};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> influence = {132, 117, 31, 222, 395, 347, 40, 286, 350, 460, 491, 362, 101, 55, 480, 255, 327, 182, 222, 342, 329, 21, 119, 47, 339, 161, 469, 314, 152, 427, 180, 136, 44, 63, 357, 438, 409, 248, 75, 110, 207, 65, 471, 160, 472, 302, 414, 150, 335, 488};
    vector<int> resistance = {491, 388, 1, 126, 312, 391, 259, 205, 2, 451, 391, 428, 415, 461, 22, 499, 153, 6, 348, 48, 226, 170, 267, 160, 233, 414, 275, 290, 43, 133, 163, 386, 20, 16, 363, 183, 406, 121, 387, 407, 423, 129, 186, 338, 441, 59, 336, 93, 65, 184};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> influence = {500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500};
    vector<int> resistance = {350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> influence = {4, 2, 1, 1, 1, 2, 4};
    vector<int> resistance = {5, 4, 3, 1, 3, 4, 5};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> influence = {21, 196, 401, 157, 9, 497, 371, 84, 395, 495, 401, 190, 465, 359, 47, 441, 245, 487, 118, 405, 21, 196, 401, 157, 9, 497, 371, 84, 395, 495, 401, 190, 465, 359, 47, 441, 245, 487, 118, 405, 21, 196, 401, 157, 9, 497, 371, 84, 395, 495};
    vector<int> resistance = {127, 313, 376, 94, 66, 37, 237, 142, 315, 495, 257, 153, 437, 339, 483, 356, 16, 132, 231, 342, 127, 313, 376, 94, 66, 37, 237, 142, 315, 495, 257, 153, 437, 339, 483, 356, 16, 132, 231, 342, 127, 313, 376, 94, 66, 37, 237, 142, 315, 495};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> influence = {3, 4, 3};
    vector<int> resistance = {3, 2, 3};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> influence = {4, 6, 10, 12};
    vector<int> resistance = {4, 6, 10, 12};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> influence = {1, 1, 30, 20};
    vector<int> resistance = {10, 10, 1, 1};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> influence = {2, 3, 2};
    vector<int> resistance = {2, 2, 2};
    Bribes* pObj = new Bribes();
    clock_t start = clock();
    int result = pObj->minBribes(influence, resistance);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22654575&rd=14236&pm=11037
********************************************************************************
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
#include <queue>
 
using namespace std;
 
#define Rep(i,n) for(int i=0;i<(n);++i)
#define For(i,a,b) for(int i=(a);i<=(b);++i)
#define Ford(i,a,b) for(int i=(a);i>=(b);--i)
#define fi first
#define se second
#define pb push_back
#define MP make_pair
 
typedef pair<int,int> PII;
typedef vector<int> VI;
 
class Bribes {
public:
  int minBribes(vector <int>, vector <int>);
};
 
int F[55][1<<16];
bool b[55];
int in[55], resi[55];
int n;
 
bool check(int id){
  if(id<0) return true;
  int total=0;
  For(i,-8,8) if(0<=id+i && id+i<n) {
    if(b[id+i]) total += in[id+i] / (1 << abs(i));
  }
  return (total >= resi[id]);
}
 
int calc(int i){
  if(i==n){
    bool ok=true;
    Ford(j,8,1) if(!check(i-j)) { ok=false; break; }
    //int tt=0;
    //Rep(j,n) tt+=b[j];
    //cout<<tt<<endl;
    if(ok) return 0;
    else return 1000000000;
  }
  int s=0;
  For(j,max(i-16,0),i-1) s=s*2+b[j];
  int &ret=F[i][s];
  if(ret!=-1)return ret;
  ret=1000000000;
  b[i]=1;
  if(check(i-8)) ret=min(ret,1+calc(i+1));
  b[i]=0;
  if(check(i-8)) ret=min(ret,0+calc(i+1));
  return ret;
}
 
int Bribes::minBribes(vector <int> influence, vector <int> resistance) {
  memset(F,-1,sizeof(F));
  memset(b,0,sizeof(b));
  n=influence.size();
  Rep(i,n)in[i]=influence[i];
  Rep(i,n)resi[i]=resistance[i];
  int res = calc(0);
  if(res > 1000) return -1;
  return res;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/