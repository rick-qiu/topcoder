/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11341
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

class SRMCards {
public:
    int maxTurns(vector<int> cards);
};

int SRMCards::maxTurns(vector<int> cards) {
    int ret;
    return ret;
}


int test0() {
    vector<int> cards = {498, 499};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
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
    vector<int> cards = {491, 492, 495, 497, 498, 499};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
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
    vector<int> cards = {1};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
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
    vector<int> cards = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> cards = {2, 4, 6, 8, 10};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> cards = {1, 2};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
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
    vector<int> cards = {100, 200, 300, 400};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> cards = {11, 12, 102, 13, 100, 101, 99, 9, 8, 1};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
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
    vector<int> cards = {5, 55, 155, 255, 355, 455};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> cards = {42};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> cards = {110};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> cards = {153, 151, 152};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> cards = {67, 296, 68, 297};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
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
    vector<int> cards = {162, 229};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> cards = {118, 321, 322, 119, 120, 320};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> cards = {10, 11, 12, 13, 14, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> cards = {325, 170, 48, 171};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> cards = {229, 230, 87, 86, 343, 344};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> cards = {167, 168, 215, 8, 394, 393};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> cards = {127, 123, 124, 117, 135, 130, 131, 116, 119, 125, 129, 122, 134, 121, 120, 132, 126, 133, 128, 118};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> cards = {25, 18, 33, 21, 30, 36, 29, 17, 27, 24, 22, 19, 34, 23, 28, 20, 32, 31, 26, 35};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> cards = {151, 168, 161, 154, 163, 153, 157, 150, 166, 162, 169, 160, 159, 152, 149, 164, 165, 155, 170, 158, 167, 156};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> cards = {235, 110, 109, 113, 111, 115, 238, 241, 240, 243, 118, 242, 236, 234, 114, 108, 117, 239, 116, 237, 112};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> cards = {55, 52, 61, 204, 207, 54, 60, 202, 57, 58, 53, 210, 51, 59, 209, 205, 208, 201, 206, 211, 203, 56};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
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
    vector<int> cards = {74, 260, 67, 69, 65, 265, 268, 262, 270, 263, 71, 261, 269, 76, 267, 72, 73, 70, 68, 266, 259, 75, 66, 264};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> cards = {294, 287, 112, 290, 115, 288, 132, 119, 289, 114, 129, 116, 113, 130, 118, 133, 293, 291, 292, 135, 117, 131, 134};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
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
    vector<int> cards = {253, 187, 183, 259, 13, 186, 8, 7, 15, 9, 257, 184, 14, 182, 181, 11, 255, 188, 258, 185, 256, 260, 254, 12, 10};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
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
    vector<int> cards = {299, 183, 184, 296, 298, 48, 300, 186, 55, 180, 182, 49, 179, 185, 51, 53, 295, 297, 301, 181, 54, 302, 50, 52, 178};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
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
    vector<int> cards = {353, 355, 121, 242, 238, 53, 52, 241, 236, 49, 240, 119, 50, 356, 124, 351, 123, 51, 122, 354, 54, 352, 237, 120, 239};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
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
    vector<int> cards = {407, 406, 203, 54, 53, 109, 204, 205, 408, 107, 278, 56, 277, 276, 110, 55, 108};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> cards = {23, 385, 286, 203, 288, 20, 386, 289, 204, 22, 287, 387, 201, 99, 21, 202, 101, 100};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> cards = {99, 100, 98, 239, 73, 294, 240, 71, 293, 74, 292, 348, 72, 347, 350, 291, 237, 238, 349};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> cards = {418, 5, 170, 250, 133, 169, 4, 325, 134, 419, 251, 324};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> cards = {70, 219, 216, 365, 108, 202, 296, 364, 69, 67, 362, 218, 363, 217, 107, 295, 204, 109, 203, 294, 106, 68};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> cards = {225, 75, 72, 376, 157, 74, 159, 226, 51, 158, 375, 332, 54, 52, 331, 373, 160, 374, 333, 224, 227, 53, 73};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> cards = {95, 234, 93, 176, 369, 290, 177, 426, 36, 35, 425, 289, 94, 367, 368, 424, 235, 34};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> cards = {192, 366, 393, 391, 115, 127, 193, 365, 126, 262, 113, 263, 364, 49, 392, 47, 264, 48, 194, 114};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> cards = {335, 272, 244, 417, 245, 155, 116, 25, 418, 24, 273, 26, 117, 336, 153, 246, 419, 154, 416, 334, 115, 271};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> cards = {244, 356, 104, 103, 390, 182, 152, 355, 243, 277, 354, 6, 180, 276, 389, 153, 181, 242, 5};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> cards = {126, 131, 138, 154, 152, 156, 125, 139, 143, 166, 153, 140, 134, 167, 142, 148, 146, 141, 133, 137, 144, 161, 151, 127, 169, 130, 155, 158, 165, 163, 160, 147, 128, 162, 145, 132, 164, 157, 150, 135, 170, 124, 159, 171, 168, 129, 136, 149, 172};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> cards = {210, 208, 8, 13, 17, 220, 215, 16, 212, 205, 21, 227, 219, 24, 224, 226, 216, 204, 3, 15, 211, 203, 20, 209, 213, 5, 7, 18, 2, 11, 221, 9, 218, 223, 23, 22, 12, 10, 214, 207, 19, 14, 225, 222, 217, 6, 25, 4, 206};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> cards = {349, 157, 37, 163, 155, 159, 354, 348, 32, 150, 33, 35, 152, 149, 44, 40, 43, 34, 38, 355, 350, 351, 151, 358, 360, 29, 39, 160, 346, 164, 156, 162, 42, 158, 357, 161, 153, 347, 31, 352, 356, 36, 30, 154, 359, 353, 41};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> cards = {36, 178, 43, 169, 380, 235, 374, 371, 175, 231, 44, 381, 176, 40, 237, 375, 379, 378, 37, 177, 241, 168, 170, 238, 234, 377, 173, 376, 167, 373, 372, 41, 39, 230, 35, 171, 240, 174, 239, 38, 236, 232, 46, 45, 172, 233, 42};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> cards = {148, 198, 199, 406, 205, 204, 265, 152, 150, 407, 263, 72, 197, 154, 66, 200, 261, 69, 401, 151, 264, 260, 70, 64, 403, 147, 398, 65, 202, 156, 149, 153, 68, 404, 259, 402, 201, 400, 67, 203, 262, 155, 399, 266, 258, 405, 257, 71};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
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
    vector<int> cards = {117, 159, 393, 272, 56, 331, 330, 328, 399, 57, 329, 120, 327, 326, 59, 160, 53, 124, 121, 271, 397, 276, 163, 58, 398, 270, 275, 396, 55, 164, 165, 158, 122, 277, 123, 273, 119, 274, 392, 332, 161, 395, 394, 54, 118, 162};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> cards = {94, 215, 27, 160, 155, 216, 390, 391, 303, 305, 348, 92, 26, 301, 352, 347, 217, 350, 95, 28, 351, 349, 29, 392, 307, 90, 219, 157, 353, 221, 159, 304, 394, 93, 91, 395, 156, 24, 218, 220, 306, 25, 302, 393, 158};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> cards = {80, 82, 118, 335, 322, 169, 249, 47, 245, 168, 123, 49, 81, 396, 321, 78, 172, 48, 392, 120, 337, 45, 119, 395, 325, 246, 170, 247, 394, 79, 122, 339, 393, 334, 77, 336, 338, 323, 44, 46, 171, 324, 248, 121};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> cards = {229, 420, 83, 11, 361, 273, 360, 12, 87, 274, 324, 10, 9, 232, 231, 86, 8, 423, 325, 85, 323, 84, 118, 419, 421, 272, 116, 364, 321, 170, 230, 271, 322, 422, 362, 117, 169, 171, 172, 228, 363, 119, 275};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
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
    vector<int> cards = {11, 232, 288, 414, 233, 381, 230, 321, 229, 82, 157, 108, 284, 81, 287, 380, 413, 185, 83, 415, 13, 158, 156, 186, 323, 15, 231, 109, 80, 416, 159, 379, 107, 184, 286, 12, 320, 285, 187, 14, 322, 382, 110};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> cards = {151, 131, 16, 169, 319, 410, 309, 175, 1, 390, 355, 100, 30, 115, 415, 248, 205, 125, 442, 282, 303, 224, 50, 269, 78, 42, 230, 348, 363, 431, 437, 326, 160, 190, 339, 83, 386, 138, 259, 398, 376, 215, 69, 275, 24, 237, 187, 95, 293, 62};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> cards = {204, 414, 238, 14, 28, 103, 211, 393, 144, 476, 5, 46, 287, 343, 76, 89, 247, 65, 353, 122, 335, 309, 256, 464, 409, 182, 161, 273, 116, 431, 485, 135, 158, 378, 367, 445, 323, 266, 297, 172, 56, 38, 454, 92, 383, 421, 192, 312, 226};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> cards = {294, 153, 342, 39, 247, 401, 357, 13, 446, 468, 219, 191, 375, 2, 301, 202, 266, 272, 115, 45, 82, 68, 364, 225, 176, 324, 166, 78, 21, 126, 411, 239, 59, 319, 334, 133, 98, 144, 103, 393, 436, 183, 423, 256, 383, 471, 282, 457};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> cards = {46, 73, 21, 375, 254, 151, 358, 236, 166, 336, 147, 425, 95, 57, 469, 18, 305, 202, 328, 413, 127, 437, 131, 271, 286, 401, 397, 248, 87, 361, 175, 261, 451, 191, 218, 63, 181, 448, 116, 344, 315, 385, 34, 9, 103, 226, 296};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> cards = {69, 22, 445, 226, 151, 419, 253, 219, 283, 458, 385, 184, 42, 435, 311, 355, 401, 293, 123, 146, 336, 241, 59, 365, 342, 36, 113, 325, 372, 131, 308, 77, 12, 197, 172, 424, 84, 164, 264, 207, 238, 96, 106, 3, 391, 276};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> cards = {10, 11, 12, 13, 14, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> cards = {1, 3, 2, 8, 7, 9, 10, 11, 12, 400, 13, 89, 14, 123, 15, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31, 30, 489, 488, 487, 486, 485};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> cards = {1};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
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
    vector<int> cards = {100};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> cards = {5, 10};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
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
    vector<int> cards = {10, 11, 12, 13, 14, 1, 2, 3, 4, 5, 6, 7, 8, 9, 15, 16, 17, 18, 19, 20, 21};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> cards = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 15, 16, 14, 18, 19, 20, 21, 22, 23, 30, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 120, 121, 122, 123, 124, 125, 126, 128, 140, 141, 142, 152, 153, 400, 401, 402};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> cards = {2, 1, 3};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
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
    vector<int> cards = {3};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
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
    vector<int> cards = {1, 2, 3, 4};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> cards = {1, 2, 3, 5, 6, 4};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> cards = {24};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
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
    vector<int> cards = {20, 50, 48, 49};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> cards = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> cards = {1, 2, 3};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> cards = {1, 2, 3, 4, 5, 56, 7, 10, 11, 20, 21, 34, 35, 36};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> cards = {1, 2, 3, 4, 5, 6, 7, 8, 9, 21, 12, 54, 45, 65, 56};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> cards = {33};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> cards = {2, 4, 1, 3};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> cards = {10, 11, 12, 13, 14, 1, 2, 3, 4, 5, 6, 8, 7, 9};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
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
    vector<int> cards = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 22, 23, 24, 266, 27};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> cards = {1, 5, 4, 6};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> cards = {1, 3, 2, 4, 5, 6, 7, 9, 32, 33, 34, 35, 36, 37, 38, 39, 112};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> cards = {5, 6, 7, 8, 9};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> cards = {3, 4, 2, 7, 9, 11};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> cards = {3, 4, 2};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
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
    vector<int> cards = {1, 2, 3, 4, 5};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> cards = {3, 1, 2};
    SRMCards* pObj = new SRMCards();
    clock_t start = clock();
    int result = pObj->maxTurns(cards);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22911647&rd=14429&pm=11341
********************************************************************************
#include <sstream> 
#include <queue> 
#include <set> 
#include <map> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
 
using namespace std; 
 
 
class SRMCards 
{ 
public: 
  int maxTurns(vector <int> c) 
  { 
      int ran=c.size(); 
      int count=0; 
      int k; 
      sort(c.begin(),c.end()); 
      for(k=0;k<ran;k++) 
      { 
          if((c[k]+1)==c[k+1]) k++; 
          count++; 
      } 
 
       return count; 
  } 
};

********************************************************************************
*******************************************************************************/