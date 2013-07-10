/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9830
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

class TeleportsNetwork {
public:
    int distribute(int teleportCount, vector<int> citiesX, vector<int> citiesY);
};

int TeleportsNetwork::distribute(int teleportCount, vector<int> citiesX, vector<int> citiesY) {
    int ret;
    return ret;
}


int test0() {
    int teleportCount = 1;
    vector<int> citiesX = {241, 191, 164};
    vector<int> citiesY = {96, 130, 218};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
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
    int teleportCount = 0;
    vector<int> citiesX = {218, 219, 216, 216, 71, 293};
    vector<int> citiesY = {55, 113, 154, 189, 356, 356};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
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
    int teleportCount = 1;
    vector<int> citiesX = {244, 244, 238, 114, 334, 262, 431};
    vector<int> citiesY = {41, 143, 241, 349, 362, 452, 455};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int teleportCount = 2;
    vector<int> citiesX = {244, 105, 432, 392, 127, 164, 74, 392, 474};
    vector<int> citiesY = {243, 134, 128, 382, 359, 407, 296, 78, 161};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int teleportCount = 3;
    vector<int> citiesX = {2, 8, 2, 9, 14, 14, 4, 11};
    vector<int> citiesY = {2, 2, 6, 6, 2, 8, 12, 10};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
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
    int teleportCount = 4;
    vector<int> citiesX = {2, 496, 496, 2, 243, 390, 433, 462};
    vector<int> citiesY = {2, 0, 495, 496, 222, 215, 213, 207};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
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
    int teleportCount = 0;
    vector<int> citiesX = {1000000};
    vector<int> citiesY = {1000000};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
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
    int teleportCount = 0;
    vector<int> citiesX = {1000000, 0};
    vector<int> citiesY = {1000000, 0};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int teleportCount = 1;
    vector<int> citiesX = {203, 199, 183, 168, 148, 118, 93, 82, 78, 74, 74, 73, 70, 70, 68, 60, 57, 57, 57, 54, 51, 45, 36, 36, 37, 37, 37, 37, 278, 294, 310, 329, 349, 367, 396, 403, 414, 430, 446, 446, 444, 444, 444, 116, 26, 386, 362, 336, 310, 293};
    vector<int> citiesY = {6, 25, 50, 66, 82, 98, 115, 126, 138, 146, 159, 174, 190, 200, 211, 222, 233, 242, 256, 271, 279, 290, 305, 316, 336, 348, 361, 384, 27, 37, 54, 67, 83, 101, 128, 133, 142, 163, 176, 200, 220, 237, 251, 413, 447, 250, 270, 288, 307, 400};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int teleportCount = 1;
    vector<int> citiesX = {223, 294, 141, 161, 320, 315, 325, 339, 355, 367, 384, 395, 336, 351, 369, 382, 393, 421, 438, 150, 133, 112, 96, 75, 55, 41, 118, 79, 69, 57, 58, 58, 58, 58, 67, 82, 94, 114, 132, 148, 166, 183, 194, 208, 226, 446, 407, 439, 468, 484};
    vector<int> citiesY = {230, 286, 283, 164, 169, 301, 310, 327, 343, 358, 371, 388, 144, 127, 109, 97, 88, 64, 50, 145, 126, 107, 77, 56, 37, 23, 295, 329, 340, 361, 386, 402, 423, 446, 475, 480, 486, 485, 481, 477, 476, 472, 474, 475, 476, 108, 403, 433, 467, 481};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int teleportCount = 4;
    vector<int> citiesX = {235, 234, 233, 234, 234, 235, 235, 235, 233, 287, 309, 333, 352, 370, 388, 196, 160, 128, 95, 231, 231, 231};
    vector<int> citiesY = {248, 210, 172, 139, 111, 74, 48, 24, 427, 423, 423, 423, 423, 421, 425, 425, 421, 421, 418, 466, 477, 489};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int teleportCount = 2;
    vector<int> citiesX = {228, 226, 225, 225, 224, 222, 220, 220, 216, 160, 264, 271, 153, 205};
    vector<int> citiesY = {16, 30, 39, 52, 65, 78, 92, 102, 116, 123, 113, 125, 138, 153};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
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
    int teleportCount = 4;
    vector<int> citiesX = {246, 66, 385, 14, 110, 318, 437, 316, 107, 38, 146, 239, 385, 328, 436, 188, 15, 9, 68, 34, 102, 8, 94, 175, 260, 377, 350, 413, 440, 428, 454, 339, 320, 358, 140, 204, 318, 287, 303, 233, 181, 114, 194, 249, 307, 400, 431, 448, 79, 151};
    vector<int> citiesY = {16, 53, 42, 92, 86, 104, 94, 193, 169, 212, 216, 233, 247, 319, 317, 299, 259, 318, 330, 372, 368, 443, 440, 435, 359, 364, 410, 410, 220, 385, 375, 378, 399, 391, 467, 455, 48, 54, 24, 119, 57, 233, 193, 276, 255, 88, 75, 75, 427, 161};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int teleportCount = 2;
    vector<int> citiesX = {46, 93, 164, 202, 253, 297, 343, 379, 52, 89, 133, 184, 232, 270, 321, 378, 381, 336, 285, 241, 192, 144, 93, 55, 57, 91, 143, 195, 244, 281, 336, 383, 54, 82, 139, 194, 252, 306, 361, 51, 83, 134, 198, 256, 289, 313, 331, 364, 388, 48};
    vector<int> citiesY = {28, 25, 31, 24, 27, 26, 26, 23, 75, 77, 77, 74, 69, 64, 63, 60, 101, 106, 107, 106, 103, 105, 105, 105, 128, 124, 121, 122, 123, 127, 122, 115, 149, 150, 140, 143, 138, 137, 130, 198, 197, 190, 180, 181, 181, 181, 181, 181, 181, 233};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int teleportCount = 1;
    vector<int> citiesX = {228, 137, 229, 303, 334, 351, 316, 267, 220, 166, 131, 108, 106, 171, 255, 346, 375, 389, 368, 348, 115, 381, 370, 99, 139, 158, 138, 203, 248, 315, 260, 193, 193, 181, 295, 268, 226, 174, 254, 210, 272, 178, 197, 247, 225, 266, 197, 212, 282, 249};
    vector<int> citiesY = {242, 150, 137, 152, 212, 280, 336, 359, 359, 337, 302, 250, 219, 131, 133, 163, 211, 257, 299, 314, 175, 179, 169, 187, 205, 173, 265, 323, 320, 296, 172, 172, 211, 284, 249, 213, 202, 239, 255, 266, 226, 251, 218, 212, 269, 267, 242, 182, 294, 284};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int teleportCount = 0;
    vector<int> citiesX = {232, 227, 351, 237, 112};
    vector<int> citiesY = {236, 120, 236, 332, 232};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int teleportCount = 4;
    vector<int> citiesX = {232, 243, 221, 255, 158, 203, 310};
    vector<int> citiesY = {236, 114, 327, 380, 373, 34, 58};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int teleportCount = 2;
    vector<int> citiesX = {495, 489, 4, 4, 242, 497, 233, 1, 235, 2, 491, 124, 127, 382, 368, 87, 214, 400, 271, 134, 341, 268, 368, 141, 228, 171, 198, 75, 282, 275, 349, 332, 181, 48, 97, 175, 106, 44, 60, 316, 392, 341, 211};
    vector<int> citiesY = {0, 493, 491, 4, 232, 216, 4, 232, 492, 354, 361, 487, 344, 349, 106, 113, 110, 255, 454, 219, 165, 303, 425, 385, 369, 98, 162, 315, 215, 139, 39, 317, 257, 148, 172, 61, 24, 76, 410, 264, 196, 224, 199};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int teleportCount = 3;
    vector<int> citiesX = {220, 170, 265, 292, 235, 145};
    vector<int> citiesY = {231, 290, 293, 219, 163, 194};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int teleportCount = 3;
    vector<int> citiesX = {220, 170, 265, 292, 235, 145, 212, 110, 67, 119, 195, 293, 346, 357, 332, 267, 168, 258, 163, 130, 148, 314, 233, 276, 171, 219, 450, 441, 417, 382, 484, 455, 29, 12, 28, 109, 97, 91, 140, 156, 131, 66, 102, 98, 77};
    vector<int> citiesY = {231, 290, 293, 219, 163, 194, 336, 325, 223, 128, 105, 113, 177, 256, 342, 384, 403, 322, 369, 385, 319, 393, 457, 455, 466, 485, 380, 339, 411, 375, 345, 308, 142, 183, 175, 162, 199, 133, 133, 98, 251, 290, 282, 293, 327};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
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
    int teleportCount = 2;
    vector<int> citiesX = {472, 234, 111, 322, 426, 221, 94, 59, 177, 463, 344, 331, 255, 156, 169, 71, 135, 120, 117, 107, 192, 146, 233, 375, 399, 430, 320, 272, 311, 99, 211, 277, 44, 84, 91, 123, 133, 211, 37, 472, 345, 350, 428, 51, 69, 148, 258, 262};
    vector<int> citiesY = {479, 235, 108, 114, 246, 380, 311, 212, 163, 100, 17, 195, 140, 234, 300, 276, 192, 241, 262, 280, 96, 52, 176, 78, 133, 166, 256, 304, 381, 413, 443, 44, 100, 132, 85, 359, 454, 326, 386, 308, 255, 286, 42, 448, 367, 383, 446, 374};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int teleportCount = 1;
    vector<int> citiesX = {93, 11, 12, 86, 85, 15, 169, 156, 215, 242, 240, 301, 237, 308, 345, 458, 451, 362, 396, 404, 435, 270, 125, 379, 288, 344, 181, 278, 373};
    vector<int> citiesY = {83, 84, 166, 168, 234, 234, 82, 231, 231, 230, 86, 81, 157, 155, 236, 78, 243, 78, 184, 141, 408, 386, 352, 317, 293, 414, 418, 474, 463};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int teleportCount = 3;
    vector<int> citiesX = {0, 0, 0, 0, 0, 0, 0, 166666, 166666, 166666, 166666, 166666, 166666, 166666, 333332, 333332, 333332, 333332, 333332, 333332, 333332, 499998, 499998, 499998, 499998, 499998, 499998, 499998, 666664, 666664, 666664, 666664, 666664, 666664, 666664, 833330, 833330, 833330, 833330, 833330, 833330, 833330, 999996, 999996, 999996, 999996, 999996, 999996, 999996};
    vector<int> citiesY = {0, 166666, 333332, 499998, 666664, 833330, 999996, 0, 166666, 333332, 499998, 666664, 833330, 999996, 0, 166666, 333332, 499998, 666664, 833330, 999996, 0, 166666, 333332, 499998, 666664, 833330, 999996, 0, 166666, 333332, 499998, 666664, 833330, 999996, 0, 166666, 333332, 499998, 666664, 833330, 999996, 0, 166666, 333332, 499998, 666664, 833330, 999996};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int teleportCount = 3;
    vector<int> citiesX = {650206, 645223, 233164, 915968, 186393, 45725, 566705, 706116, 850176, 307404, 119836, 104222, 923143, 616855, 44996};
    vector<int> citiesY = {45806, 350560, 774628, 8521, 663795, 772053, 786599, 464013, 918609, 593595, 246966, 137767, 45247, 543434, 893949};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int teleportCount = 2;
    vector<int> citiesX = {905804, 903191, 880268, 206050, 805706, 665662, 469480, 585999, 858722, 422889, 731866, 616293, 329416, 961415, 976863, 268414, 829898, 341915, 372586, 868888, 128329, 307794, 271528, 728170, 21380, 369379, 5036, 225943, 187770};
    vector<int> citiesY = {741757, 849124, 615481, 297879, 16328, 894599, 596633, 509805, 740712, 684691, 795604, 597787, 506844, 524660, 266108, 582803, 856729, 840387, 829763, 90195, 324599, 980330, 409631, 999876, 550253, 186898, 928137, 707501, 698142};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int teleportCount = 4;
    vector<int> citiesX = {404770, 246728, 648713, 263634, 63921, 186990, 22098, 609701, 956206};
    vector<int> citiesY = {642276, 832060, 732389, 178394, 580366, 107312, 679319, 476135, 357494};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int teleportCount = 3;
    vector<int> citiesX = {683445, 379052, 891843, 466540, 576790, 936025, 334543, 487575, 674022, 700680, 552814, 488414, 632300, 132512, 452299, 443064, 598217, 549294, 954773, 167237};
    vector<int> citiesY = {42881, 479343, 192851, 898123, 59502, 437787, 838288, 564522, 711390, 166726, 835662, 771566, 730711, 521972, 123938, 614248, 591242, 520001, 109424, 123081};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int teleportCount = 1;
    vector<int> citiesX = {31652, 380376, 721172, 460135, 972757, 359195, 766317};
    vector<int> citiesY = {156354, 226637, 861977, 491187, 207506, 678983, 428159};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
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
    int teleportCount = 4;
    vector<int> citiesX = {787344, 570347, 651352, 436716, 43435, 782339, 232031, 781673, 636823, 695127, 415701, 546004, 558838, 181488, 386212, 960381, 419009, 325097, 520634, 975366, 994982, 300447, 747395, 547382, 133501, 453639, 331514, 597684, 987401, 956932, 251161, 950117, 102279, 51874, 819627, 257929, 967049, 831347, 973719};
    vector<int> citiesY = {77109, 901698, 372464, 764602, 437425, 447443, 326226, 441966, 798898, 935937, 709807, 281910, 178264, 250628, 235125, 49726, 172173, 10181, 388389, 782416, 424184, 637836, 410973, 292243, 68099, 951713, 395711, 805562, 54910, 915650, 980105, 270740, 138723, 136858, 749206, 420075, 746803, 353955, 784152};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int teleportCount = 0;
    vector<int> citiesX = {204106};
    vector<int> citiesY = {877438};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int teleportCount = 3;
    vector<int> citiesX = {172334, 506423, 337261, 983849, 869662, 712405, 224923, 20083, 231069, 509426, 263284, 418421, 220831, 395895, 164485, 622310, 259221, 479607, 645771, 958135, 66473, 22031, 542789, 322111, 967852, 950300, 90516, 120552};
    vector<int> citiesY = {992565, 802754, 781066, 693669, 305198, 713781, 76140, 239104, 148925, 107590, 761423, 77563, 623312, 272428, 866867, 525121, 555173, 380772, 864995, 951473, 118155, 315738, 888549, 736263, 835494, 776965, 601448, 315978};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int teleportCount = 0;
    vector<int> citiesX = {962250, 879785, 916248, 301535, 605826, 964592, 257199, 966652, 616450, 725170, 592885, 652509, 399566, 128363, 868827, 963986, 331915, 708001, 814293, 524167, 412796, 730341, 508118, 659505, 727545, 909204, 782307, 349360, 741209, 24581, 922326, 211457, 663496, 100424};
    vector<int> citiesY = {843851, 359426, 901422, 401155, 573197, 222904, 654139, 411630, 243746, 225533, 695676, 327403, 420995, 537431, 470611, 37817, 546859, 573008, 325034, 142722, 592329, 231345, 545441, 972266, 745706, 807909, 234936, 936570, 548770, 342424, 208673, 385370, 156404, 754552};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int teleportCount = 0;
    vector<int> citiesX = {632262, 232913, 856827, 773744, 246762, 337695, 448573, 610358, 638019, 290561, 667881, 849244, 143588, 823600, 674262, 135247, 58206, 820655, 216130, 838029, 348677, 493393, 559724, 556580, 98538, 394427, 571469, 107095, 759009, 678258, 942164, 806267, 898123, 148105, 137794, 368299, 179318, 935663, 384887, 495217, 689941, 968198, 293565, 629758, 144311};
    vector<int> citiesY = {247097, 663682, 618469, 405277, 794360, 869819, 249774, 140096, 97723, 241589, 403584, 4780, 302081, 18920, 347410, 130649, 829312, 442284, 8891, 680889, 457346, 423364, 191622, 107600, 800567, 550082, 765243, 741208, 466388, 820633, 303132, 823865, 973658, 714536, 640929, 565600, 207865, 948473, 559236, 609685, 531940, 121252, 992217, 959555, 966731};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int teleportCount = 0;
    vector<int> citiesX = {587910, 949570, 871113, 822852, 518857, 510249, 487322, 195533, 989628, 531244, 503366, 785204, 153642, 13589, 833546, 66043, 325014, 774497, 264513, 461482, 285487};
    vector<int> citiesY = {907912, 575051, 435513, 459887, 33416, 191837, 524147, 233647, 985634, 12989, 283754, 611211, 483100, 615561, 482004, 988224, 642465, 486295, 168313, 420065, 676904};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int teleportCount = 2;
    vector<int> citiesX = {139813, 487819, 480681, 889549, 149117, 703058, 22642, 784392, 459283, 461679, 856991, 905740, 12901, 500455, 576467};
    vector<int> citiesY = {384982, 397791, 951305, 246643, 996941, 290849, 85288, 559332, 296470, 208005, 75073, 616435, 823413, 435620, 637449};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int teleportCount = 0;
    vector<int> citiesX = {53295, 106944, 243837, 857005};
    vector<int> citiesY = {947013, 657968, 50502, 279055};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int teleportCount = 1;
    vector<int> citiesX = {679242, 631419, 115451, 842993, 96232, 309525, 800898, 763115, 999593, 685781, 212672, 619712, 250574, 561098, 592195, 476487, 131177, 323147, 292912, 895493, 905714, 875318, 758054, 925018, 364423, 801042, 721846, 664466, 123301, 236880, 729028, 779175};
    vector<int> citiesY = {474189, 530484, 555708, 926371, 193767, 380545, 144620, 593581, 586530, 258775, 628813, 599, 929176, 494315, 33187, 940005, 176674, 801436, 326552, 25489, 62613, 373844, 324218, 510887, 25611, 666029, 187900, 352518, 255859, 739792, 777033, 119533};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int teleportCount = 3;
    vector<int> citiesX = {990971, 39738, 438217, 617094, 967830, 661626, 4278};
    vector<int> citiesY = {948660, 318179, 939415, 257868, 577152, 782307, 51231};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
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
    int teleportCount = 1;
    vector<int> citiesX = {501029, 329347, 418127, 542130, 85000, 403507, 553564, 449578, 681608, 68507, 242052, 461224, 439699, 614230, 106407, 398485, 456571, 620009, 316582, 933020, 980206, 148388, 76143, 998126, 828698, 85287, 97990, 36181, 421063, 232825, 907783, 6091, 964525, 600299, 518377, 199723};
    vector<int> citiesY = {589900, 883010, 394729, 112424, 318863, 323064, 692726, 824264, 505392, 564694, 20255, 418245, 320083, 572515, 230251, 855914, 696348, 194784, 229473, 387500, 385805, 702900, 81766, 749578, 93027, 461990, 553061, 727135, 21328, 425456, 42877, 232545, 532683, 94436, 795448, 385194};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int teleportCount = 0;
    vector<int> citiesX = {655490, 741783, 963673, 596607, 392848, 142350, 468795, 185546, 90378, 279459, 157395, 759110, 457478, 139508, 57683, 605890, 442894, 184935, 8620, 890974, 18958, 547321, 911599, 599159, 673291, 748456, 196516, 26840, 418219, 205404, 647734, 979737, 315801};
    vector<int> citiesY = {798934, 960323, 711089, 624784, 933642, 664680, 630777, 836970, 529994, 320277, 793670, 794262, 929011, 253804, 954603, 692719, 229189, 46083, 491449, 588857, 988955, 955836, 147539, 8712, 290109, 967429, 185387, 615031, 309666, 745723, 6820, 671767, 855630};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int teleportCount = 3;
    vector<int> citiesX = {60553, 442716, 36514, 614067, 300958, 744857, 743861, 796823, 180057, 143306, 965433, 431346, 244342, 853212, 769277, 489655, 677243, 262271, 742255, 83161, 821137, 908017, 292507, 924192, 882007, 835553, 969559, 90586, 651172, 418364, 295643, 488213};
    vector<int> citiesY = {837121, 966801, 376930, 411645, 361086, 689785, 131106, 581095, 273643, 511686, 3240, 965315, 900687, 926078, 990197, 701182, 504717, 268394, 965364, 961341, 208156, 359764, 429407, 522429, 976820, 611181, 160344, 67102, 623541, 301680, 224300, 720076};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int teleportCount = 1;
    vector<int> citiesX = {760306, 27306, 588075, 740524, 885570, 450516, 29600, 791522};
    vector<int> citiesY = {201742, 697370, 316435, 339224, 272564, 825194, 332968, 384130};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int teleportCount = 3;
    vector<int> citiesX = {252059, 710914, 728182, 388601, 448770, 329591, 478634, 645654, 828318, 659495, 509302, 693049, 363066, 927319, 992308, 233325, 248372, 969907, 606037, 38967, 368516, 297796, 225236, 786229, 29921, 724707, 599786, 965799, 170764, 33417, 701372, 719042, 733079, 900124, 921075, 440468, 654554, 327384, 62086, 847157, 40289, 509292, 163695, 795097, 803460};
    vector<int> citiesY = {768732, 907317, 211219, 83671, 956049, 816219, 845707, 422850, 977044, 939606, 755278, 937853, 251136, 86770, 826081, 770401, 813707, 138285, 74059, 128498, 59416, 486265, 350714, 920442, 891538, 810509, 109969, 191130, 825466, 567437, 378742, 407963, 626800, 44134, 117636, 825783, 251155, 591181, 469855, 517253, 862291, 729814, 195397, 371231, 868644};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int teleportCount = 1;
    vector<int> citiesX = {96895, 904378, 14523, 626509, 33557};
    vector<int> citiesY = {542573, 842069, 978487, 970071, 695516};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
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
    int teleportCount = 3;
    vector<int> citiesX = {107858, 562586, 716895, 2885, 336511};
    vector<int> citiesY = {970156, 497631, 350062, 451061, 984654};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
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
    int teleportCount = 3;
    vector<int> citiesX = {876600, 295439, 30581, 195863, 175964, 273856, 969647, 117211, 896504, 452401, 932576, 846553, 752636, 760025, 127564, 599840, 265791, 199229, 694241, 965189, 49417, 131829, 548276, 429626, 648295, 975568, 102050, 288989, 159742, 2152, 542614, 803727, 558840, 886647, 309859, 717307, 303564, 855565, 858125, 303355};
    vector<int> citiesY = {648749, 864498, 6357, 783844, 614067, 207685, 988665, 159990, 356737, 386814, 732031, 507125, 627850, 664690, 426180, 719902, 768577, 904373, 248131, 406652, 565454, 341626, 596189, 372669, 869812, 558201, 737169, 91689, 196948, 64759, 957819, 687614, 218442, 293158, 522755, 807230, 209705, 696563, 364657, 980265};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int teleportCount = 4;
    vector<int> citiesX = {458741, 333245, 504915, 885531, 108345, 455401, 773462, 173681, 823697, 448323};
    vector<int> citiesY = {209283, 64995, 380290, 243127, 44906, 543749, 52570, 775908, 257066, 164471};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
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
    int teleportCount = 2;
    vector<int> citiesX = {0, 1, 1, 1, 2, 2};
    vector<int> citiesY = {1, 0, 1, 2, 0, 2};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
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
    int teleportCount = 1;
    vector<int> citiesX = {0, 1, 1, 1, 2, 2};
    vector<int> citiesY = {1, 0, 1, 2, 0, 2};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int teleportCount = 0;
    vector<int> citiesX = {0, 1, 1, 1, 2, 3, 3, 4};
    vector<int> citiesY = {1, 1, 2, 0, 0, 0, 2, 1};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int teleportCount = 1;
    vector<int> citiesX = {0, 1, 2, 3, 4};
    vector<int> citiesY = {0, 0, 0, 0, 0};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
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
    int teleportCount = 4;
    vector<int> citiesX = {64, 200, 384, 294, 175, 107, 303, 374, 224, 220, 223, 99, 442};
    vector<int> citiesY = {79, 161, 83, 281, 344, 217, 184, 336, 431, 262, 75, 474, 257};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int teleportCount = 2;
    vector<int> citiesX = {7, 7, 6, 7, 1, 7};
    vector<int> citiesY = {5, 1, 1, 4, 3, 2};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int teleportCount = 1;
    vector<int> citiesX = {2, 2, 1, 0, 2};
    vector<int> citiesY = {9, 2, 0, 5, 0};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int teleportCount = 2;
    vector<int> citiesX = {2, 5, 6, 3, 10, 8, 7};
    vector<int> citiesY = {0, 0, 0, 0, 0, 0, 0};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
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
    int teleportCount = 0;
    vector<int> citiesX = {0, 1, 1, 1, 2, 3, 3, 4};
    vector<int> citiesY = {1, 1, 2, 0, 0, 0, 2, 1};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int teleportCount = 4;
    vector<int> citiesX = {64, 200, 384, 294, 175, 107, 303, 374, 224, 220, 223, 99, 442};
    vector<int> citiesY = {79, 161, 83, 281, 344, 217, 184, 336, 431, 262, 75, 474, 257};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
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
    int teleportCount = 4;
    vector<int> citiesX = {20000, 40000, 60000, 80000, 100000, 120000, 140000, 160000, 180000, 200000, 220000, 240000, 260000, 280000, 300000, 320000, 340000, 360000, 380000, 400000, 420000, 440000, 460000, 480000, 500000, 520000, 540000, 560000, 580000, 600000, 620000, 640000, 660000, 680000, 700000, 720000, 740000, 760000, 780000, 800000, 820000, 840000, 860000, 880000, 900000, 920000, 940000, 960000, 980000, 1000000};
    vector<int> citiesY = {20000, 40000, 60000, 80000, 100000, 120000, 140000, 160000, 180000, 200000, 220000, 240000, 260000, 280000, 300000, 320000, 340000, 360000, 380000, 400000, 420000, 440000, 460000, 480000, 500000, 520000, 540000, 560000, 580000, 600000, 620000, 640000, 660000, 680000, 700000, 720000, 740000, 760000, 780000, 800000, 820000, 840000, 860000, 880000, 900000, 920000, 940000, 960000, 980000, 1000000};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int teleportCount = 1;
    vector<int> citiesX = {0, 1, 1, 1, 2, 2};
    vector<int> citiesY = {1, 0, 1, 2, 0, 2};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int teleportCount = 4;
    vector<int> citiesX = {384, 128, 256, 128, 160, 96, 96, 64, 56, 40, 32, 24, 18, 14, 10, 8, 5, 5, 2, 2, 2, 2, 4, 4, 2, 2, 2, 2, 8, 6, 4, 4, 2, 2, 2, 2, 3, 3, 1, 1, 1, 1, 14, 43, 44, 45, 46, 47, 48, 49};
    vector<int> citiesY = {0, 1, 1, 13, 2, 2, 4, 2, 2, 9, 10, 11, 2, 13, 14, 15, 16, 17, 18, 2, 20, 21, 22, 23, 4, 45, 26, 27, 28, 29, 0, 1, 32, 33, 1, 35, 0, 37, 38, 39, 0, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int teleportCount = 0;
    vector<int> citiesX = {0, 1, 1, 1, 2, 3, 3, 4, 100, 200, 500, 700};
    vector<int> citiesY = {1, 1, 2, 0, 0, 0, 2, 1, 500, 300, 200, 600};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int teleportCount = 2;
    vector<int> citiesX = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    vector<int> citiesY = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int teleportCount = 4;
    vector<int> citiesX = {507428, 249500, 214775, 844081, 543757, 903926, 927328, 409042, 824964, 749488, 512930, 792004, 712173, 920281, 851249, 346792, 792860, 150585, 69509, 526220, 606313, 872322, 431800, 807864, 895607, 69433, 804977, 865491, 445672, 779015, 908365, 903074, 651259, 410541, 690915, 973275, 431500, 418871, 569367, 626501, 951385, 683724, 512728, 436615, 477919, 644380, 188790, 740234, 830971, 33439};
    vector<int> citiesY = {895401, 480556, 712866, 658421, 119012, 635105, 817699, 406911, 948473, 474323, 98948, 61836, 963370, 45948, 841123, 609856, 140744, 301631, 229365, 877973, 915292, 373988, 581217, 443008, 574834, 922588, 359594, 995185, 329944, 251226, 880643, 64742, 34520, 412233, 883614, 427809, 190207, 992838, 291528, 55810, 155576, 24589, 470398, 95044, 527552, 889548, 720354, 466779, 595492, 868063};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int teleportCount = 4;
    vector<int> citiesX = {331038, 457452, 300744, 201060, 491772, 530627, 763059, 565396, 806128, 179770, 269801, 540884, 278891, 287693, 346936, 809702, 120337, 396043, 760909, 98407, 406473, 112039, 232134, 733286, 610825, 625192, 139016, 138157, 557774, 915028, 620372, 456648, 798200, 46735, 17233, 139166, 667067, 530583, 778737, 661249, 870760, 662730, 123450, 788071, 31183, 779920, 462767, 927683, 425299, 722412};
    vector<int> citiesY = {641024, 847423, 562975, 78693, 275508, 767136, 957910, 496397, 736640, 895269, 844524, 866234, 285783, 53515, 702436, 925124, 946641, 219679, 514152, 404225, 604168, 286080, 882264, 690093, 977557, 784273, 242781, 569667, 432128, 703250, 193547, 203710, 203301, 955902, 763827, 676555, 767293, 471069, 166954, 584836, 469184, 490970, 342785, 137863, 410040, 22452, 718997, 319345, 975618, 200228};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int teleportCount = 4;
    vector<int> citiesX = {0, 20000, 40000, 60000, 80000, 100000, 120000, 140000, 160000, 180000, 200000, 220000, 240000, 260000, 280000, 300000, 320000, 340000, 360000, 380000, 400000, 420000, 440000, 460000, 480000, 500000, 520000, 540000, 560000, 580000, 600000, 620000, 640000, 660000, 680000, 700000, 720000, 740000, 760000, 780000, 800000, 820000, 840000, 860000, 880000, 900000, 920000, 940000, 960000, 980000};
    vector<int> citiesY = {0, 20000, 40000, 60000, 80000, 100000, 120000, 140000, 160000, 180000, 200000, 220000, 240000, 260000, 280000, 300000, 320000, 340000, 360000, 380000, 400000, 420000, 440000, 460000, 480000, 500000, 520000, 540000, 560000, 580000, 600000, 620000, 640000, 660000, 680000, 700000, 720000, 740000, 760000, 780000, 800000, 820000, 840000, 860000, 880000, 900000, 920000, 940000, 960000, 980000};
    TeleportsNetwork* pObj = new TeleportsNetwork();
    clock_t start = clock();
    int result = pObj->distribute(teleportCount, citiesX, citiesY);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22742950&rd=12181&pm=9830
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
 
using namespace std;
 
typedef long long int64;
typedef long double ldb;
typedef pair<int, int> pii;
typedef vector<string> vecst;
typedef vector<int> vecint;
 
#define sz(C) (int((C).size()))
#define sh(C) cerr << #C << ": " << (C) << endl
 
class TeleportsNetwork {
public:
  int distribute(int, vector <int>, vector <int>);
};
 
int incov();
 
const int maxN = 55;
const int maxTC = 10;
const double inf = 1e9;
const double eps = 1e-7;
vector<int> G[maxN];
 
int used[maxTC];
int dist[maxN][maxN];
int n, tc, bestIncov = 1000000000;
 
void compDist() {
  for (int i = 0; i < n; ++i) { 
    for (int j = 0; j < n; ++j)
      dist[i][j] = 1000000000;
    dist[i][i] = 0;
    for (int j = 0; j < sz(G[i]); ++j)
      dist[i][G[i][j]] = 1;
  }
  for (int k = 0; k < n; ++k)
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j)
        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
}
 
void bt(int pos, int from) {
  if (pos == tc) {
    int inc = incov();
    if (inc < bestIncov) {
//      cerr << "used: ";
//      for (int i = 0; i < tc; ++i)
//        cerr << used[i] << ' ';
//      cerr << endl;
      bestIncov = inc;
    }
    return;
  }
  for (int i = from; i < n; ++i) {
    used[pos] = i;
    bt(pos+1,i+1);
  }
}
 
int incov() {
  int ret = 0;
  for (int i = 0; i < n; ++i) {
    int thinc = dist[i][0];
    for (int j = 0; j < tc; ++j) {
      assert(used[j] >= 0 && used[j] < n);
      if (dist[i][used[j]] < thinc)
        thinc = dist[i][used[j]];
    }
//    cerr << "ret(" << i << "): " << thinc << endl;
    ret = max(ret, thinc);
  }
  return ret;
}
 
vector<int> cx, cy;
 
double eucdist(int i, int j) {
  double dx = cx[j]-cx[i], dy = cy[j]-cy[i];
  return sqrt(dx*dx+dy*dy);
}
 
int TeleportsNetwork::distribute(int telCount, vector <int> citx, vector <int> city) {
  bestIncov = 100000000;
  cx = citx;
  cy = city;
  tc = telCount;
  n = cx.size();
  for (int i = 0; i < n; ++i)
    G[i].clear();
  for (int i = 1; i < n; ++i) {
    double bestDist = inf;
    int best;
    for (int j = 0; j < n; ++j) {
      if (eucdist(j,0)+eps>eucdist(i,0))
        continue;
      double d = eucdist(i,j);
      if (abs(bestDist-d) < eps) {
        if (cx[j] < cx[best] || (cx[j]==cx[best] && cy[j] < cy[best]))
          best = j;
      } else if (d < bestDist) {
        bestDist = d;
        best = j;
      }
    }
    G[i].push_back(best);
    G[best].push_back(i);
//    cerr << "edge: " << i << ' ' << best << endl;
  }
  
  compDist();
//  for (int i = 0; i < n; ++i)
//    for (int j = 0; j < n; ++j) {
//      cerr << "dist(" << i << "," << j << ": " << dist[i][j] << endl;
//    }
  
  bt(0,1);
  return bestIncov;
}
 
 
//Powered by [KawigiEdit] 2.0!
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/