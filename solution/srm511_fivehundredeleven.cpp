/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11484
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

class FiveHundredEleven {
public:
    string theWinner(vector<int> cards);
};

string FiveHundredEleven::theWinner(vector<int> cards) {
    string ret;
    return ret;
}


int test0() {
    vector<int> cards = {3, 5, 7, 9, 510};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> cards = {0, 0, 0, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> cards = {511};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> cards = {0, 0, 0, 0, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> cards = {7, 56, 448};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> cards = {511, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> cards = {511, 1};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> cards = {1, 2, 4, 8, 16, 32, 64, 128, 256};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> cards = {5, 58, 192, 256};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> cards = {141, 248, 387, 366, 145, 54, 339, 246, 246, 273, 119, 484, 301, 423, 294, 81, 441, 150, 45, 396, 127, 169, 414, 397, 161, 413, 412, 106, 397, 407, 330, 380, 425, 482, 356, 37, 291, 24, 334, 456, 69, 13, 351, 279, 141, 64, 152, 449, 347, 179};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> cards = {363, 6, 332, 264, 500, 471, 16, 59, 337, 72, 402, 61, 223, 489, 2, 84, 401, 128, 122, 285, 310, 337, 234, 207, 179, 379, 314, 490, 142, 53, 38, 361, 493, 464, 142, 57, 199, 150, 90, 444, 360, 287, 272, 293, 343, 429, 455, 277, 226, 71};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> cards = {305, 183, 352, 175, 220, 212, 27, 421, 241, 221, 221, 244, 136, 487, 350, 132, 253, 46, 197, 241, 351, 403, 230, 404, 246, 176, 195, 15, 127, 96, 263, 199, 188, 308, 121, 219, 93, 318, 460, 73, 475, 62, 91, 141, 411, 328, 221, 310, 470, 265};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> cards = {77, 389, 61, 361, 289, 255, 195, 13, 485, 476, 239, 317, 234, 310, 372, 426, 478, 29, 356, 30, 60, 439, 349, 261, 440, 117, 459, 253, 289, 495, 350, 167, 115, 492, 338, 394, 429, 243, 177, 368, 11, 282, 393, 227, 405, 372, 364, 56, 276, 160};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> cards = {73, 400, 385, 275, 132, 9, 372, 111, 352, 386, 249, 301, 464, 250, 144, 1, 445, 76, 355, 184, 90, 410, 270, 301, 346, 264, 295, 22, 202, 254, 199, 403, 256, 479, 455, 65, 2, 208, 206, 409, 161, 107, 293, 314, 96, 450, 186, 373, 317, 318};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> cards = {495, 255, 511, 510, 511, 507, 511, 495, 239, 407, 511, 223, 351, 255, 511, 511, 511, 221, 511, 347, 383, 479, 383, 511, 507, 247, 511, 247, 475, 383, 511, 495, 511, 479, 255, 510, 447, 503, 511, 427, 255, 383, 503, 159, 379, 510, 509, 125, 473, 509};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> cards = {511, 255, 511, 255, 511, 511, 511, 511, 447, 509, 479, 319, 495, 511, 511, 511, 511, 247, 511, 479, 479, 511, 503, 478, 479, 511, 511, 509, 511, 511, 253, 511, 468, 479, 511, 507, 255, 511, 511, 503, 495, 382, 491, 511, 447, 510, 507, 511, 511, 511};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> cards = {443, 503, 511, 479, 239, 383, 238, 455, 383, 191, 446, 431, 437, 249, 475, 495, 494, 479, 511, 319, 479, 511, 319, 495, 347, 511, 107, 367, 509, 447, 494, 495, 459, 511, 115, 382, 447, 509, 511, 511, 239, 463, 511, 378, 495, 447, 443, 220, 503, 479};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> cards = {2, 0, 0, 0, 32, 0, 0, 0, 0, 64, 0, 32, 0, 0, 128, 8, 128, 0, 4, 0, 0, 1, 0, 0, 64, 0, 0, 128, 0, 16, 0, 8, 0, 18, 260, 257, 2, 0, 64, 0, 0, 0, 40, 0, 0, 1, 0, 0, 1, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> cards = {479, 511, 511, 511, 510, 511, 243, 511, 511, 511, 511, 487, 495, 511, 341, 509, 511, 479, 495, 443, 491, 511, 511, 507, 447, 375, 511, 479, 507, 479, 511, 479, 495, 479, 383, 367, 511, 511, 406, 511, 507, 507, 319, 511, 511, 510, 511, 447, 511, 509};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> cards = {511, 509, 511, 511, 511, 511, 447, 510, 383, 511, 511, 127, 511, 351, 495, 506, 511, 187, 503, 255, 509, 255, 511, 511, 479, 511, 479, 383, 511, 187, 383, 383, 475, 511, 511, 447, 511, 507, 507, 509, 254, 479, 503, 511, 279, 507, 511, 509, 441, 495};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> cards = {367, 14, 411, 32, 132, 82, 413, 367, 139, 380, 209, 296, 268, 152, 66, 286, 272, 22, 56, 353, 269, 323, 368, 481, 8, 342, 434, 389, 294, 462, 143, 238, 348, 454, 312, 120, 61, 230, 471, 162, 29, 475, 7, 359, 6, 105, 78, 482, 494, 276};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> cards = {511, 510, 191, 507, 510, 511, 447, 503, 495, 511, 509, 499, 503, 511, 511, 511, 431, 379, 511, 503, 507, 511, 431, 511, 511, 495, 509, 511, 511, 510, 511, 507, 511, 494, 511, 375, 509, 509, 479, 382, 379, 511, 511, 247, 511, 511, 479, 510, 511, 511};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> cards = {505, 215, 501, 254, 255, 186, 505, 88, 475, 414, 440, 504, 511, 439, 351, 503, 55, 250, 340, 187, 241, 95, 285, 374, 350, 370, 495, 225, 498, 408, 216, 474, 381, 46, 125, 403, 285, 504, 207, 153, 262, 225, 215, 495, 467, 497, 223, 311, 412, 303};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> cards = {0, 6, 0, 256, 192, 2, 33, 320, 0, 288, 0, 32, 0, 64, 26, 4, 0, 256, 0, 0, 1, 0, 8, 64, 0, 16, 0, 4, 0, 32, 192, 64, 0, 384, 4, 0, 130, 128, 1, 1, 0, 0, 8, 257, 0, 256, 0, 0, 16, 32};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> cards = {170, 256, 478, 508, 347, 137, 218, 478, 42, 69, 96, 420, 48, 0, 110, 178, 29, 449, 101, 161, 16, 250, 364, 276, 261, 23, 144, 321, 103, 474, 202, 128, 431, 149, 145, 146, 318, 264};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> cards = {471, 40, 419, 88, 18, 60, 232, 229, 402, 397, 391, 221, 320, 464, 10, 284, 84, 64, 123, 436, 509};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> cards = {16, 128, 178, 16, 0, 21, 48, 34, 0, 29, 193, 0, 272, 16, 4, 2, 140, 40, 65, 3, 171, 280, 19, 73, 129, 225, 68, 50, 2, 42, 0, 64, 128, 28, 18, 78, 136, 272, 75, 1};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> cards = {461, 443, 177, 366, 499, 384, 125, 499, 372, 374, 39, 285, 203, 33, 429, 469, 458, 163, 154, 438, 508};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> cards = {156, 65, 473, 94, 57, 262};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> cards = {217, 42, 4, 397, 281, 451, 245, 234, 353, 467, 35, 65, 412, 287, 247, 196, 419, 188, 28, 501, 105, 245, 194, 345, 421, 302, 87};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> cards = {159, 16, 176, 141, 132, 1, 132, 264, 74, 50, 199, 287, 337, 386, 313, 26, 495, 281, 206, 481, 136, 185, 96, 479, 430, 1, 18, 128, 343, 483, 19, 70, 14, 401, 115, 19, 64, 326, 382, 74, 227, 50, 509};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> cards = {438, 477, 381, 503, 399, 106, 501, 509, 494, 495, 383, 502, 241, 475, 493, 186, 505, 246, 414, 205};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> cards = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> cards = {399, 351, 286, 155, 41, 214, 18, 415, 267, 503, 293, 369, 394, 118, 297, 406, 73, 227, 397, 342, 394, 490};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> cards = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> cards = {511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511, 511};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> cards = {0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> cards = {1, 193, 0, 37, 272, 134, 264, 396, 64};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> cards = {132, 0, 4, 5, 0, 2, 80, 256, 256, 1, 0, 6, 130, 130, 96, 33, 0, 32, 160, 128, 8, 452, 0, 16, 192, 216, 40, 128, 0, 136, 81, 18, 148};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> cards = {181, 225, 80, 450, 352, 399, 126, 63, 260, 409, 63, 484, 339, 383, 98, 300, 125, 158, 204, 267};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> cards = {5, 144, 256, 0, 0, 224, 36, 0, 0, 1, 2, 64, 64, 0, 49, 0, 4, 256, 0, 33, 0, 0, 4, 4};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> cards = {483, 239, 481, 241, 453, 226, 510, 511, 482, 244, 481};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> cards = {237, 479, 398, 374, 413, 263, 494, 411, 423, 437, 317, 489, 92, 283, 488, 430, 479, 287, 474};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> cards = {163, 404, 132, 283, 2, 416, 265, 344, 283, 9, 176, 368};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> cards = {141, 128, 9, 16, 8, 8, 268, 4, 384, 128, 32, 128, 34, 20, 1, 256, 336, 130, 3, 132, 68, 8};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> cards = {0, 2, 256, 6, 256, 92, 256, 264, 1, 64, 0, 8, 64, 4, 256, 0, 64, 1, 0, 0, 3, 260, 0, 48, 2, 80, 256, 0, 2, 256, 257, 16, 0, 32, 32, 130, 0, 64, 80, 0, 266, 80, 80, 1, 273};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> cards = {141, 235, 461, 118, 57, 152, 478, 398, 440, 350, 185, 302, 383, 230, 253, 511, 113};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> cards = {38, 32, 9, 10, 212, 162, 256, 281, 64, 326, 97, 85, 16, 9, 0, 32, 0, 0, 356, 108, 65, 132, 8, 31, 4, 264, 168, 256, 32, 5, 32, 385, 16, 4, 1, 48, 69, 164, 133, 0, 1, 136, 129, 283, 240, 168, 32, 133, 420, 128};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> cards = {423, 167, 93, 113, 115, 160, 111, 419, 56, 298, 181, 393, 254, 206, 8, 501, 140, 140, 151, 179, 501, 386, 172, 241, 46, 275, 45, 92, 122, 457, 139, 345, 485, 1, 377, 31, 187, 317, 382, 349, 191, 370, 172, 70, 406, 473, 429, 255, 433, 87};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> cards = {484, 484, 16, 168, 186, 288, 52, 322, 0, 2, 49, 200, 8, 40, 168, 144, 128, 116, 1, 140, 4, 40, 386, 256, 256, 16, 88, 0, 113, 34, 32, 12, 260, 65, 256, 32, 16, 32, 5, 0, 321, 64, 144, 67, 112, 464, 68, 48, 141, 132};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> cards = {34, 97, 0, 2, 32, 8, 129, 17, 0, 322, 0, 24, 16, 32, 18, 288, 260, 4, 2, 192, 0, 68, 0, 96, 8, 0, 64, 64, 272, 4, 272, 0, 268, 2, 128, 112, 2, 448, 128, 4, 128, 64, 6, 32, 96, 8, 4, 0, 8, 256};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> cards = {40, 97, 218, 333, 370, 266, 55, 450, 260, 209, 377, 228, 97, 0, 32, 146, 324, 96, 141, 1, 348, 52, 328, 336, 65, 209, 48, 244, 8, 292, 34, 58, 16, 211, 433, 28, 4, 389, 74, 97, 86, 436, 164, 362, 418, 2, 8, 0, 50, 467};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> cards = {128, 207, 40, 36, 296, 4, 17, 82, 258, 129, 266, 8, 32, 2, 132, 224, 0, 178, 12, 0, 1, 96, 1, 12, 64, 32, 65, 96, 256, 18, 80, 22, 128, 128, 9, 263, 384, 164, 420, 0, 288, 0, 304, 471, 1, 1, 0, 64, 70, 42};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> cards = {68, 0, 256, 16, 448, 28, 160, 0, 402, 267, 4, 40, 8, 137, 322, 0, 33, 16, 48, 1, 2, 0, 32, 32, 276, 130, 136, 10, 1, 16, 128, 2, 325, 4, 8, 0, 128, 18, 16, 258, 36, 146, 2, 0, 130, 16, 24, 2, 0, 260};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> cards = {3, 170, 387, 48, 368, 194, 388, 120, 432, 46, 72, 47, 78, 12, 110, 341, 161, 177, 320, 4, 312, 80, 295, 304, 283, 148, 8, 353, 413, 165, 70, 166, 374, 226, 316, 123, 120, 71, 35, 192, 441, 303, 77, 81, 275, 404, 17, 14, 132, 337};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> cards = {0, 0, 0, 0, 4, 0, 1, 2, 18, 144, 96, 160, 65, 0, 4, 8, 16, 8, 12, 16, 64, 64, 100, 0, 64, 128, 2, 0, 4, 72, 0, 1, 16, 48, 6, 64, 384, 256, 32, 133, 20, 7, 0, 1, 0, 40, 64, 392, 65, 18};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> cards = {152, 24, 131, 64, 338, 9, 168, 32, 0, 12, 130, 12, 16, 68, 133, 0, 32, 40, 0, 40, 0, 0, 64, 32, 8, 0, 0, 2, 234, 8, 264, 2, 304, 0, 256, 16, 9, 64, 256, 386, 8, 73, 0, 41, 17, 224, 16, 9, 91, 3};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> cards = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> cards = {256, 8, 8, 1, 8, 1, 4, 32, 32, 32, 256, 128, 0, 1, 8, 1, 16, 1, 8, 0, 2, 16, 0, 32, 256, 256, 64, 16, 2, 16, 16, 1, 8, 64, 256, 256, 32, 64, 1, 2, 32, 256, 1, 0, 128, 64, 128, 2, 1, 16};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> cards = {32, 256, 256, 2, 4, 4, 8, 4, 2, 1, 2, 128, 16, 4, 32, 16, 256, 256, 32, 8, 2, 1, 32, 0, 128, 8, 32, 8, 4, 32, 128, 16, 16, 2, 2, 32, 4, 32, 4, 1, 64, 128, 8, 1, 64, 256, 2, 256, 16, 128};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> cards = {127, 511, 7, 1, 3, 127, 1, 1, 511, 7, 31, 3, 15, 31, 7, 127, 1, 3, 31, 255, 3, 511, 1, 31, 15, 1, 63, 255, 255, 15, 15, 63, 255, 7, 31, 7, 511, 31, 63, 15, 255, 15, 63, 63, 1, 127, 1, 127, 127, 15};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> cards = {255, 1, 127, 511, 0, 511, 0, 31, 7, 127, 0, 511, 63, 511, 127, 511, 0, 7, 3, 7, 7, 511, 0, 1, 0, 511, 31, 255, 0, 127, 255, 255, 31, 1, 63, 15, 255, 3, 127, 127, 15, 15, 255, 127, 127, 31, 1, 63, 3, 31};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> cards = {128, 256, 0, 0, 64, 4, 2, 4, 32, 1, 4, 32, 128, 64, 128, 128, 128, 2, 32, 16, 256, 128, 256, 16, 4, 16, 16, 256, 8, 1, 16, 128, 1, 8, 256, 32, 32, 8, 32, 128, 32, 4, 16, 2, 1, 1, 128, 256, 4, 2};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> cards = {0, 128, 2, 64, 2, 64, 0, 4, 32, 64, 16, 1, 32, 256, 16, 128, 256, 32, 256, 0, 0, 1, 32, 0, 2, 2, 64, 2, 64, 0, 64, 0, 0, 4, 32, 32, 32, 64, 0, 2, 1, 0, 64, 4, 8, 0, 16, 128, 4, 8};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> cards = {0, 0, 0, 0, 0, 127, 511, 0, 0, 0, 0, 1, 511, 255, 255, 0, 255, 127, 0, 0, 0, 0, 31, 15, 0, 0, 255, 31, 3, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 63, 0, 0, 127, 0, 0, 3, 7, 0, 63};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> cards = {0, 15, 0, 127, 3, 63, 0, 127, 63, 0, 511, 3, 0, 31, 63, 0, 15, 511, 7, 255, 127, 0, 63, 7, 127, 1, 511, 511, 0, 511, 255, 7, 1, 511, 1, 3, 0, 127, 511, 511, 63, 0, 0, 63, 15, 511, 255, 1, 31, 31};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> cards = {4, 32, 0, 64, 2, 1, 64, 32, 0, 1, 4, 2, 32, 4, 0, 16, 2, 32, 128, 0, 16, 128, 128, 0, 0, 0, 64, 0, 32, 8, 0, 0, 2, 16, 1, 64, 8, 4, 1, 4, 0, 0, 256, 0, 16, 2, 2, 1, 128, 1};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> cards = {16, 2, 32, 2, 1, 8, 4, 1, 16, 32, 16, 8, 16, 256, 64, 32, 8, 8, 128, 256, 64, 1, 8, 8, 8, 1, 2, 1, 16, 4, 128, 4, 1, 8, 64, 2, 32, 32, 256, 64, 128, 8, 1, 32, 8, 2, 8, 128, 64, 2};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> cards = {15, 31, 63, 0, 31, 15, 3, 15, 0, 3, 3, 0, 255, 15, 0, 63, 0, 0, 7, 255, 0, 0, 31, 0, 7, 0, 31, 7, 1, 127, 7, 0, 0, 1, 511, 1, 255, 0, 63, 1, 0, 0, 255, 255, 1, 0, 31, 0, 511, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> cards = {1, 255, 511, 255, 1, 31, 7, 511, 3, 511, 255, 31, 1, 255, 255, 63, 7, 255, 1, 511, 1, 255, 255, 63, 127, 63, 15, 3, 1, 15, 31, 31, 127, 63, 127, 255, 511, 127, 127, 31, 31, 127, 255, 63, 511, 3, 3, 3, 63, 511};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> cards = {16, 128, 4, 4, 8, 2, 8, 256, 8, 32, 16, 8, 2, 64, 0, 0, 2, 4, 16, 8, 1, 0, 64, 8, 8, 64, 128, 1, 8, 2, 4, 1, 1, 32, 256, 0, 64, 2, 0, 256, 64, 64, 16, 8, 32, 0, 8, 128, 2, 16};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> cards = {8, 0, 0, 16, 128, 256, 4, 32, 8, 1, 0, 2, 2, 0, 16, 0, 64, 4, 0, 0, 4, 0, 0, 8, 0, 4, 2, 0, 16, 32, 32, 0, 0, 128, 1, 32, 32, 64, 1, 0, 16, 0, 64, 16, 64, 256, 16, 128, 0, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> cards = {31, 511, 63, 3, 3, 511, 127, 511, 7, 63, 63, 1, 0, 3, 3, 7, 0, 127, 7, 511, 127, 3, 0, 127, 511, 15, 127, 0, 7, 511, 7, 127, 1, 7, 511, 15, 31, 255, 1, 15, 3, 31, 15, 0, 127, 511, 7, 255, 31, 31};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> cards = {63, 0, 7, 31, 0, 0, 0, 0, 0, 31, 511, 63, 0, 31, 511, 255, 1, 31, 1, 0, 0, 0, 1, 511, 1, 0, 0, 0, 1, 0, 0, 0, 15, 31, 7, 63, 511, 0, 0, 0, 255, 127, 3, 63, 511, 511, 7, 511, 7, 127};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> cards = {1, 128, 4, 1, 32, 128, 4, 8, 8, 0, 32, 4, 128, 8, 0, 0, 8, 32, 0, 8, 0, 0, 4, 256, 8, 0, 16, 0, 1, 64, 1, 128, 0, 256, 32, 16, 2, 2, 2, 64, 8, 16, 2, 2, 0, 64, 128, 2, 128, 64};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> cards = {8, 1, 256, 64, 1, 1, 8, 4, 0, 8, 4, 2, 4, 8, 256, 32, 8, 2, 0, 128, 16, 64, 16, 64, 128, 0, 8, 1, 4, 64, 1, 128, 1, 1, 4, 2, 128, 16, 2, 4, 16, 2, 64, 16, 1, 256, 128, 256, 1, 8};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> cards = {0, 31, 511, 511, 1, 0, 7, 0, 127, 511, 3, 7, 31, 7, 511, 15, 15, 1, 15, 31, 15, 0, 15, 511, 15, 3, 127, 3, 1, 255, 0, 63, 255, 0, 63, 127, 1, 511, 7, 3, 3, 511, 511, 63, 1, 63, 0, 0, 0, 255};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> cards = {7, 3, 3, 7, 15, 31, 0, 1, 127, 1, 255, 255, 31, 31, 3, 511, 7, 31, 31, 7, 0, 511, 255, 255, 63, 15, 7, 3, 15, 15, 15, 63, 127, 127, 31, 255, 255, 3, 255, 255, 7, 1, 63, 3, 127, 1, 63, 3, 31, 511};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> cards = {1, 16, 256, 1, 64, 16, 1, 32, 8, 2, 128, 128, 16, 16, 16, 64, 16, 8, 16, 1, 32, 2, 16, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> cards = {1, 0, 16};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> cards = {63, 1, 31, 7, 3, 127, 7, 511, 127, 1, 1, 127, 1, 63, 127, 3, 0, 3, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> cards = {3, 1, 1, 63, 1, 511, 0, 1};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> cards = {1, 256, 16, 256, 1, 128, 4, 256, 128, 16, 256, 1, 4, 128, 64, 16, 8, 1, 16, 16, 32, 16, 16, 8, 16, 16, 32, 32, 16, 2, 16, 64};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> cards = {0, 128, 8, 64, 8, 1, 8, 4, 32, 256, 8, 2, 1, 128, 8, 2, 64, 4, 1, 32, 256, 8, 4, 256, 128};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> cards = {511, 3, 511, 255, 0, 255, 3, 1, 31, 1, 63, 31, 63, 15, 0, 1};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> cards = {3, 511, 127, 255, 31, 1, 3, 31, 1, 127, 31, 7, 3, 511, 7, 511, 511};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> cards = {8, 4, 16, 256, 32, 0, 4, 0, 0, 4, 64, 2, 0, 32, 256, 256, 4, 16, 256, 4};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> cards = {0, 16, 0, 0, 0, 0, 16, 128, 0, 0, 0, 0, 2, 0, 0, 128, 0, 0, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> cards = {1, 7, 63, 31, 1, 7, 7, 1, 127, 15, 1, 3, 1, 255, 7, 3, 1, 7, 15, 127, 1, 15, 511, 1, 127};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> cards = {0, 7, 1, 15, 0, 0, 127, 0, 7, 0, 31, 0, 1, 63, 0, 0, 255, 0, 0, 127, 0, 511, 0, 127, 63, 1, 0, 15, 31, 1, 0, 31, 127, 3, 511, 1, 0, 0, 63, 7, 127, 1, 7, 511, 511, 7, 31, 3, 1};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> cards = {256, 0, 8, 0, 0, 8, 0, 0, 0, 128, 16, 0, 0, 2, 4, 0, 4, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> cards = {0, 0, 8};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> cards = {7, 7, 127, 31, 1, 0, 31, 63, 1, 0, 63, 3, 63, 15, 0, 7, 3, 15};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> cards = {31, 0, 15, 7, 0, 0, 127, 255, 63, 0, 7, 0, 0, 0, 0, 0, 0, 0, 31};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> cards = {128, 32, 0, 8, 64, 128, 2, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> cards = {0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 4, 64, 64, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 128, 128, 32, 16, 0, 256, 128, 0, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> cards = {1, 511, 1, 511, 127, 31, 63, 127, 255, 15, 127, 1, 127, 255, 1, 7, 3, 3, 31, 31, 1, 15, 127, 127, 63, 127, 1, 511, 3, 255, 3, 15, 63, 3, 255};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> cards = {255, 0, 0, 1, 0, 0, 0, 7, 0, 63, 0, 1, 0, 0, 127};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> cards = {196, 22, 265, 68, 371, 155, 250, 408, 224, 452, 222, 510, 400, 511, 78, 189, 155, 467, 140, 0, 213, 141, 41, 35, 459, 287, 164, 38, 184, 119, 500, 380, 142, 254, 448, 1, 409, 186, 409, 122, 126, 119, 120, 14, 275, 199, 204, 430, 154, 344};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> cards = {1, 1, 510, 510};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> cards = {511};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> cards = {3, 5, 7, 9, 510};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> cards = {1, 2, 4, 8, 16, 32, 64, 128, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 250, 260, 270, 280, 290, 300, 310, 320, 330, 340, 350, 360, 370, 380, 390, 400, 410, 420, 430, 440, 450, 460, 470, 480, 490, 500};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> cards = {0, 0, 0, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> cards = {510};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> cards = {0, 1, 2, 64, 4, 128, 6, 256, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> cards = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 201, 202, 203, 204, 205, 192, 193, 64, 88, 500, 501, 502, 68, 68, 64, 64, 499, 511, 393, 423, 431, 54, 31, 456, 67, 44, 13};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> cards = {128, 1, 2, 3, 4, 5, 6, 129, 8, 9, 10, 12, 258, 256, 16, 17, 18, 20, 24, 132, 260, 32, 33, 34, 36, 40, 257, 48, 136, 192, 64, 65, 66, 68, 130, 72, 160, 288, 80, 320, 384, 96, 144, 272, 264, 0, 0, 0, 0, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> cards = {2, 4, 8, 16, 32, 64, 128, 256, 1, 1, 2, 4, 298, 154, 35, 267, 324, 233, 169, 243, 433, 159, 124, 486, 296, 493, 455, 350, 478, 292, 63, 350, 390, 160, 373, 99, 205, 165, 348, 475, 406, 330, 29, 192, 484, 65, 460, 296, 298, 117};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> cards = {256, 128, 64, 32, 16, 8, 4, 1, 2, 33, 34, 36, 144, 80, 40, 288, 160, 272, 48, 264, 72, 260, 258, 257, 192, 68, 66, 65, 3, 18, 17, 129, 5, 20, 130, 384, 12, 24, 96, 132, 10, 9, 136, 6, 320, 104, 112, 176, 193, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> cards = {269, 171, 303, 86, 338, 219, 335, 393, 418, 359, 457};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> cards = {29, 29, 23, 43, 45, 65, 453, 432, 234, 211, 123, 29, 29, 23, 43, 45, 65, 453, 432, 234, 211, 123, 29, 29, 23, 43, 45, 65, 453, 432, 234, 211, 123, 29, 29, 23, 43, 45, 65, 453};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> cards = {511, 12, 324, 5, 7, 8};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> cards = {0, 0, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> cards = {81, 504, 0, 348, 64, 348, 155, 343, 365, 383, 378, 33, 148, 375, 267, 132, 235, 117, 140, 468, 385, 151, 304, 328, 392, 159, 196, 328, 338, 356, 466, 391, 152, 135, 70, 403, 128, 41, 271, 491, 287, 155, 392, 464, 125, 470, 88, 286, 345};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> cards = {23, 40, 462, 2, 7};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> cards = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 23, 24, 25, 26, 71, 72, 73, 74, 110, 111, 112, 113, 200, 210, 220, 300, 400, 401, 402, 403, 510, 450, 480, 300, 400, 1, 2, 119, 118, 117, 250, 280, 281, 283, 285, 289};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> cards = {2, 2, 511};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> cards = {511, 12, 2, 1};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> cards = {511, 511};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> cards = {1, 2, 4, 8, 16, 32, 64, 128, 256, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> cards = {511, 12, 324, 5, 7, 8, 34, 67, 89};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> cards = {0, 511};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> cards = {510, 510, 1, 1};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> cards = {1, 2, 4, 8, 16, 32, 64, 128, 256, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> cards = {1, 2, 4, 8, 16, 32, 64, 128, 256, 40, 307, 11, 233, 173, 77, 107, 57, 270, 321, 319, 296, 28, 266, 25, 267, 218, 15, 146, 5, 4, 140, 246, 252, 115, 217, 59, 82, 273, 128, 164, 85, 299, 274, 276, 10, 20, 72, 50, 119};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> cards = {511, 2};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> cards = {3, 3, 510, 510};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> cards = {510, 510};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> cards = {1, 2, 4, 8, 16, 32, 64, 128, 256, 3, 5, 6, 9, 10, 12, 17, 18, 20, 24, 33, 34, 36, 40, 48, 65, 66, 68, 72, 80, 96, 129, 130, 132, 136, 144, 160, 192, 257, 258, 260, 264, 272, 288, 320, 384, 7, 11, 13, 14, 19};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> cards = {511, 1};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> cards = {0, 1, 2, 4, 8, 16, 32, 64, 128, 256, 0, 1, 2, 4, 8, 16, 32, 64, 128, 256, 0, 1, 2, 4, 8, 16, 32, 64, 128, 256, 0, 1, 2, 4, 8, 16, 32, 64, 128, 256, 0, 1, 2, 4, 8, 16, 32, 64, 128, 256};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> cards = {1, 2, 2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, 8, 8, 8, 8, 8, 8, 16, 16, 16, 16, 16, 16, 32, 32, 32, 32, 32, 32, 64, 64, 64, 64, 64, 64, 128, 128, 128, 128, 128, 128, 256, 256, 2, 2, 2, 2, 2};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> cards = {500, 10, 1};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> cards = {510, 2, 1};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> cards = {511, 0, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> cards = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> cards = {1, 2, 6, 89, 434, 432, 213, 243, 64, 82, 21, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 14, 15, 13, 16, 18, 12, 56, 51, 111, 511, 23, 321, 435, 64, 78, 88, 2, 4, 3, 7, 13, 31, 63, 127, 255, 511, 2};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> cards = {1};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> cards = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 4, 8, 16, 32, 64, 128, 256, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> cards = {41, 35, 190, 388, 225, 364, 214, 174, 338, 400, 73, 497, 241, 443, 233, 491, 435, 166, 219, 316, 135, 268, 318, 153, 292, 94, 13, 284, 262, 439, 327, 222, 435, 274, 333, 456, 67, 187, 139, 166, 31, 259, 90, 125, 265, 56, 293, 31, 93, 212};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> cards = {2, 510, 3};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> cards = {0, 0, 0, 0, 511};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> cards = {79, 13, 32, 208, 296, 496, 46, 360, 315, 3, 355, 163, 86, 442, 35, 100, 279, 281, 421, 493, 41, 382, 178, 78, 432, 185, 182, 461, 158, 49, 150, 220, 508, 486, 283, 108, 220, 501, 461, 65, 484, 168, 396, 60, 56, 234, 382, 412, 14, 394};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> cards = {2, 0, 1, 2, 4, 0, 1, 8, 10, 256, 1, 64, 32, 1, 8, 8, 8, 12, 15, 500, 6, 120, 1, 3, 7, 16, 15, 3, 8, 19, 480, 2, 3, 1, 35, 22, 33, 18, 22, 111, 100, 99, 80, 5, 355, 455, 400, 8};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> cards = {1, 2, 4, 8, 16, 32, 64, 128, 256, 1, 2, 4, 8, 16, 32, 64, 128, 256, 1, 2, 4, 8, 16, 32, 64, 128, 256, 1, 2, 4, 8, 16, 32, 64, 128, 256, 1, 2, 4, 8, 16, 32, 64, 128, 256, 1, 2, 4, 8, 16};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> cards = {135, 112, 489, 62, 161, 65, 225, 508, 359, 62, 257, 126, 151, 490, 220};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> cards = {3, 5, 6, 7, 14, 17, 21, 22, 26, 34, 35, 38, 40, 48, 50, 52, 56, 65, 66, 72, 76, 81, 84, 88, 97, 130, 131, 134, 136, 144, 146, 148, 162, 168, 194, 208, 260, 261, 268, 274, 276, 280, 292, 296, 304, 321, 328, 352, 388, 392};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> cards = {5, 7, 9, 510};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> cards = {0, 0, 0, 511, 1};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> cards = {511, 510, 509, 508, 123, 124, 134, 35, 54, 12, 1, 34, 54, 77, 85, 78, 12, 11, 10, 9, 8, 7, 8, 4, 5, 33, 44, 55, 66, 77, 88, 99, 14, 88};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> cards = {510, 508, 506, 504, 507};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> cards = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 448};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> cards = {5, 58, 192, 256};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> cards = {229, 102, 196, 62, 75, 228, 42, 253, 69, 58, 126, 157, 33, 37, 72, 238, 50, 45, 223, 135, 254, 42, 194, 208, 86, 148, 34, 213, 54, 225, 123, 91, 235, 201, 75, 205, 201, 141, 19, 61, 144, 84, 240, 147, 63, 183, 90, 246, 430, 256};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> cards = {0, 0, 511};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> cards = {511, 1, 1};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> cards = {7};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> cards = {1, 23, 511, 245, 89, 67, 234, 345, 321, 501, 23, 456, 34, 35, 38, 53, 56, 212, 222, 267};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> cards = {511, 1, 510};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> cards = {127, 128, 256};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> cards = {511, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> cards = {336, 114, 85, 454, 347, 339, 499, 111, 23};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> cards = {1, 7, 510};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> cards = {1, 2, 510};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> cards = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 511};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> cards = {3, 60, 60, 60, 448, 60};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> cards = {448, 56, 7};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> cards = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 64, 128, 256, 65, 66, 257, 300};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> cards = {256, 128, 64, 32, 16, 8, 4, 2, 1, 256, 128, 64, 32, 16, 8, 4, 2, 1, 256, 128, 64, 32, 16, 8, 4, 2, 1, 256, 128, 64, 32, 16, 8, 4, 2, 1, 256, 128, 64, 32, 16, 8, 4, 2, 1, 0, 0, 0, 0, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> cards = {504, 283, 488, 487, 397, 374, 346, 302};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> cards = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> cards = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> cards = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 511};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> cards = {255, 256, 1};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> cards = {1, 2, 4, 8, 16, 32, 64, 128, 256, 1, 1, 5};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> cards = {1, 2, 4, 8, 16, 32, 64, 128, 256, 0, 1, 2, 4, 8, 16, 32, 64, 128, 256, 0, 1, 2, 4, 8, 16, 32, 64, 128, 256, 0, 1, 2, 4, 8, 16, 32, 64, 128, 256, 0, 1, 2, 4, 8, 16, 32, 64, 128, 256, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> cards = {0, 1, 2, 4, 8, 16, 32, 64, 128, 256};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> cards = {3, 5, 7, 9, 510, 1, 1, 1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> cards = {1, 2, 4, 8, 16, 32, 64, 128, 256, 3, 5, 9, 17, 33, 65, 129, 257, 6, 10, 18, 34, 66, 130, 258, 12, 20, 36, 68, 132, 260, 24, 40, 72, 136, 264, 48, 80, 144, 272, 96, 160, 288, 192, 320, 384};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> cards = {1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 8, 8, 8, 8, 8, 8, 16, 16, 16, 16, 16, 32, 32, 32, 32, 32, 32, 64, 64, 64, 64, 64, 128, 128, 128, 128, 128, 128, 256, 256, 256, 256, 256};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> cards = {3, 5, 7, 9, 510, 1, 2, 3, 4, 5, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 5, 5, 5, 5, 5, 5, 5, 5};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> cards = {336, 263, 318, 468, 58, 389, 318, 217, 43, 306, 325, 374, 98, 416, 248, 377, 483, 161, 222, 144, 289, 189, 491};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> cards = {0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> cards = {65, 34, 98, 45, 1, 32, 45, 90, 123, 32, 345, 268, 188};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> cards = {1, 255, 256};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> cards = {1, 2, 508, 1};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> cards = {510, 127, 120};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> cards = {142, 466, 338, 450, 414, 366, 56, 341};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> cards = {3, 5, 7, 9, 510, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> cards = {5, 58, 192, 256, 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 23, 34, 56, 35, 123, 34, 87, 125, 167, 134, 345, 124, 153, 34, 87, 67, 90, 78, 65, 43, 12, 45, 67, 345, 65};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<int> cards = {127, 256, 128, 63, 64, 62};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<int> cards = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 480};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<int> cards = {1, 3, 5, 7, 9, 510, 412, 89, 13};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<int> cards = {10, 5, 1, 10, 12, 4, 5, 9, 1, 6, 2, 5, 15, 10, 5, 11, 7, 7, 10, 8, 4, 6, 7, 10, 0, 3, 5, 8, 0, 13, 4, 11, 3, 12, 9, 0, 2, 0, 3, 14, 12, 0, 1, 13, 6, 16, 32, 64, 128, 256};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<int> cards = {1, 2, 511};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<int> cards = {1, 1, 1, 1, 1, 1, 1, 1, 1, 510};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<int> cards = {4, 510, 3};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<int> cards = {0, 1, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 55, 5, 6, 7, 8, 8, 7, 8, 7, 6, 5, 4};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<int> cards = {1, 2, 4, 8, 16, 32, 64, 128, 256, 5, 15, 25, 35, 45, 55, 65, 75, 85, 95, 105, 11, 12, 14, 18, 116, 132, 164, 228, 356, 87, 415, 425, 435, 445, 455, 465, 475, 485, 495, 505, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<int> cards = {434, 418, 213, 230, 420, 198, 188, 119, 351, 397, 195, 143, 214, 298, 33, 276, 425, 212, 260, 17, 1, 280, 141, 430, 187, 371, 28, 96, 202, 32, 463, 349, 470, 47, 69, 339, 41, 471, 424, 345, 460, 269, 490, 38, 237, 85, 78, 384, 388, 473};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<int> cards = {511, 0, 0, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<int> cards = {41, 35, 190, 388, 225, 364, 214, 174, 338, 400, 73, 497, 241, 443, 233, 491, 435, 166, 219, 316, 135, 268, 318, 153, 292, 94, 13, 284, 262, 439, 327, 222, 274, 333, 456, 67, 187, 139, 31, 259, 90, 125, 265, 56, 293, 93, 212, 459, 508, 406};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<int> cards = {15, 240, 256};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<int> cards = {1, 10, 100, 200, 511, 124, 111, 123, 345, 231, 213, 456, 345, 12, 35, 65, 145, 136, 198, 178, 165, 354, 355, 356, 357, 358, 359, 360, 425, 426, 427, 428, 429, 430};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<int> cards = {1, 2, 4, 8, 16, 32, 64, 128, 256, 3, 5, 9, 17, 33, 65, 129, 257, 6, 10, 18, 34, 66, 130, 258, 12, 20, 36, 68, 132, 260, 24, 40, 72, 136, 264, 48, 80, 144, 272, 96, 160, 288, 192, 320, 384, 0, 0, 0, 0, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<int> cards = {1, 1, 1, 2, 2, 508, 508};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<int> cards = {198, 155, 180, 84, 17, 14, 386, 116, 65};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<int> cards = {1, 324, 23, 3, 376, 50, 100, 200, 399, 12, 123, 55, 46, 66, 55, 77, 44, 10};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<int> cards = {510, 1, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<int> cards = {128, 291, 285, 506, 24, 416, 155, 219, 46, 190, 289, 24, 70, 486, 52, 101, 247, 493, 292, 158, 419, 283, 33, 188, 309, 335, 491, 297, 250, 286, 63, 220, 137, 379, 183, 41, 376, 144, 305, 55, 79, 59, 145, 500, 205, 10, 289, 195, 304, 107};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<int> cards = {510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<int> cards = {0, 1, 2, 4, 6, 8, 16, 32, 64, 128, 256, 511, 0, 1, 2, 3, 2, 2, 2, 2, 2, 2, 2, 3, 2, 1, 2, 3, 4, 5, 6, 4, 3, 3, 2, 2, 3, 3, 4, 4, 45, 5, 5, 5, 5, 5, 2, 2, 0};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<int> cards = {510, 510, 1};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<int> cards = {1, 1, 1, 2, 2, 508};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Fox Ciel";
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<int> cards = {1, 2, 4, 8, 16, 32, 64, 128, 256, 1, 2, 4, 8, 16, 32, 64, 128, 256};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<int> cards = {0, 1, 511};
    FiveHundredEleven* pObj = new FiveHundredEleven();
    clock_t start = clock();
    string result = pObj->theWinner(cards);
    clock_t end = clock();
    delete pObj;
    string expected = "Toastman";
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20463878&rd=14536&pm=11484
********************************************************************************
#include <algorithm>   
#include <string>   
#include <set>   
#include <map>   
#include <vector>   
#include <queue>    
#include <iostream>   
#include <iterator>   
#include <math.h>   
#include <cstdio>   
#include <cstdlib>   
#include <sstream>   
 
#pragma comment(linker, "/STACK:60777216")   
 
using namespace std;   
 
typedef pair<int,int> pii;   
typedef long long ll;   
typedef vector<int> vi;   
 
#define UN(v) SORT(v),v.erase(unique(v.begin(),v.end()),v.end())   
#define SORT(c) sort((c).begin(),(c).end())   
#define FOR(i,a,b) for (int  i=(a); i < (b); i++)    
#define REP(i,n) FOR(i,0,n)    
#define CL(a,b) memset(a,b,sizeof(a))   
#define pb push_back   
 
vi c; 
int r[555][55]; 
 
bool go(int mask,int moves){ 
  if(mask==511) return 1; 
  if(r[mask][moves]!=-1) return r[mask][moves]==1; 
   
  vi c1,c2; 
  REP(i,c.size()) if((mask&c[i])==c[i]) c1.pb(c[i]); 
  else c2.pb(c[i]); 
 
  if(c1.size() > moves && !go(mask,moves+1)) return r[mask][moves]=1; 
  REP(i,c2.size()) 
    if(!go(mask|c2[i],moves+1)) 
      return r[mask][moves]=1; 
  return r[mask][moves]=0; 
} 
 
class FiveHundredEleven { 
public: 
 string theWinner(vector <int> cards) { 
   CL(r,-1); 
  c = cards; 
  return go(0,0) ? "Fox Ciel" : "Toastman"; 
 } 
  
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/