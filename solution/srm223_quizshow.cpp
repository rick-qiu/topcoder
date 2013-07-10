/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2989
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

class QuizShow {
public:
    int wager(vector<int> scores, int wager1, int wager2);
};

int QuizShow::wager(vector<int> scores, int wager1, int wager2) {
    int ret;
    return ret;
}


int test0() {
    vector<int> scores = {100, 100, 100};
    int wager1 = 25;
    int wager2 = 75;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> scores = {10, 50, 60};
    int wager1 = 30;
    int wager2 = 41;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
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
    vector<int> scores = {10, 50, 60};
    int wager1 = 31;
    int wager2 = 41;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> scores = {2, 2, 12};
    int wager1 = 0;
    int wager2 = 9;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> scores = {2, 2, 12};
    int wager1 = 0;
    int wager2 = 10;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
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
    vector<int> scores = {2, 2, 12};
    int wager1 = 0;
    int wager2 = 11;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
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
    vector<int> scores = {2, 2, 12};
    int wager1 = 0;
    int wager2 = 12;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> scores = {8243, 4248, 7923};
    int wager1 = 4248;
    int wager2 = 3942;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 3623;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> scores = {10000, 10000, 10000};
    int wager1 = 9998;
    int wager2 = 9997;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 9999;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> scores = {5824, 4952, 6230};
    int wager1 = 364;
    int wager2 = 287;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 694;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> scores = {2983, 2348, 3849};
    int wager1 = 492;
    int wager2 = 952;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
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
    vector<int> scores = {429, 23, 238};
    int wager1 = 23;
    int wager2 = 214;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> scores = {500, 1000, 1000};
    int wager1 = 5;
    int wager2 = 10;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 496;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> scores = {1000, 1000, 1000};
    int wager1 = 1000;
    int wager2 = 1000;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
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
    vector<int> scores = {1, 10000, 10000};
    int wager1 = 9999;
    int wager2 = 9999;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> scores = {10000, 2, 9998};
    int wager1 = 0;
    int wager2 = 9998;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 9997;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> scores = {10000, 3, 9998};
    int wager1 = 0;
    int wager2 = 9998;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
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
    vector<int> scores = {0, 0, 0};
    int wager1 = 0;
    int wager2 = 0;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> scores = {1, 0, 0};
    int wager1 = 0;
    int wager2 = 0;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> scores = {0, 1, 1};
    int wager1 = 1;
    int wager2 = 1;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> scores = {0, 1, 1};
    int wager1 = 0;
    int wager2 = 0;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> scores = {1, 1, 1};
    int wager1 = 0;
    int wager2 = 0;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> scores = {7904, 1734, 8495};
    int wager1 = 267;
    int wager2 = 7710;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> scores = {8122, 2393, 6614};
    int wager1 = 2106;
    int wager2 = 3586;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 2079;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> scores = {1485, 35, 6757};
    int wager1 = 22;
    int wager2 = 3052;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> scores = {7292, 7914, 4968};
    int wager1 = 6764;
    int wager2 = 2358;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> scores = {4603, 2136, 5438};
    int wager1 = 1020;
    int wager2 = 5146;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> scores = {785, 5615, 7865};
    int wager1 = 1283;
    int wager2 = 3999;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> scores = {3699, 9403, 3084};
    int wager1 = 7144;
    int wager2 = 1396;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 782;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> scores = {7808, 944, 3818};
    int wager1 = 270;
    int wager2 = 581;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
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
    vector<int> scores = {7442, 45, 1991};
    int wager1 = 6;
    int wager2 = 1348;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> scores = {2534, 3273, 5848};
    int wager1 = 2916;
    int wager2 = 4935;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> scores = {2207, 2284, 4150};
    int wager1 = 2268;
    int wager2 = 3378;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> scores = {1793, 6040, 7100};
    int wager1 = 175;
    int wager2 = 5610;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> scores = {7634, 6189, 2922};
    int wager1 = 2773;
    int wager2 = 1256;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 1329;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> scores = {7607, 5750, 767};
    int wager1 = 4045;
    int wager2 = 383;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 2189;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> scores = {3169, 226, 782};
    int wager1 = 196;
    int wager2 = 575;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> scores = {5964, 3745, 9524};
    int wager1 = 1006;
    int wager2 = 2101;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 5662;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> scores = {6075, 431, 6331};
    int wager1 = 418;
    int wager2 = 2503;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> scores = {1689, 6174, 4623};
    int wager1 = 38;
    int wager2 = 3184;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> scores = {6000, 3386, 7074};
    int wager1 = 670;
    int wager2 = 4016;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
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
    vector<int> scores = {5727, 7418, 7365};
    int wager1 = 678;
    int wager2 = 6688;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 2370;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> scores = {8555, 7234, 9747};
    int wager1 = 1213;
    int wager2 = 7872;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> scores = {3745, 9091, 7426};
    int wager1 = 6674;
    int wager2 = 6073;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> scores = {1892, 6505, 2211};
    int wager1 = 6088;
    int wager2 = 325;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> scores = {9823, 1537, 9521};
    int wager1 = 911;
    int wager2 = 1025;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 724;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> scores = {7391, 9445, 3162};
    int wager1 = 2520;
    int wager2 = 2915;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
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
    vector<int> scores = {1330, 3900, 9728};
    int wager1 = 877;
    int wager2 = 5003;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> scores = {3751, 3051, 6680};
    int wager1 = 2306;
    int wager2 = 609;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 3539;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> scores = {3603, 3028, 766};
    int wager1 = 1726;
    int wager2 = 361;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 1152;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> scores = {9100, 1779, 3337};
    int wager1 = 1468;
    int wager2 = 2792;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> scores = {6197, 4296, 8347};
    int wager1 = 1554;
    int wager2 = 695;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 2846;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> scores = {3698, 2693, 8175};
    int wager1 = 2270;
    int wager2 = 3224;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 1266;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> scores = {6520, 1786, 3556};
    int wager1 = 354;
    int wager2 = 1183;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> scores = {9422, 9142, 9571};
    int wager1 = 3332;
    int wager2 = 6069;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 6219;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> scores = {851, 2090, 6421};
    int wager1 = 1139;
    int wager2 = 5420;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 151;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> scores = {8373, 1439, 4336};
    int wager1 = 1176;
    int wager2 = 3560;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> scores = {3817, 5763, 9005};
    int wager1 = 5362;
    int wager2 = 4673;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 516;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> scores = {9332, 6790, 743};
    int wager1 = 5355;
    int wager2 = 160;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 2814;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> scores = {8770, 6431, 144};
    int wager1 = 2557;
    int wager2 = 28;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 219;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> scores = {9461, 7496, 609};
    int wager1 = 3029;
    int wager2 = 245;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 1065;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> scores = {1030, 3812, 3304};
    int wager1 = 1922;
    int wager2 = 740;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> scores = {3229, 425, 8323};
    int wager1 = 262;
    int wager2 = 7591;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> scores = {4372, 3233, 6893};
    int wager1 = 3089;
    int wager2 = 4121;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> scores = {5680, 5172, 8584};
    int wager1 = 937;
    int wager2 = 880;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 3785;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> scores = {1081, 8183, 4151};
    int wager1 = 3120;
    int wager2 = 3740;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> scores = {5085, 2567, 4171};
    int wager1 = 815;
    int wager2 = 2501;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 1588;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> scores = {3558, 6631, 6412};
    int wager1 = 5746;
    int wager2 = 6184;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> scores = {6554, 6330, 8481};
    int wager1 = 6255;
    int wager2 = 6423;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> scores = {6045, 4734, 7491};
    int wager1 = 145;
    int wager2 = 5286;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> scores = {9572, 8253, 9487};
    int wager1 = 7335;
    int wager2 = 3553;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 6017;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> scores = {6840, 4983, 2677};
    int wager1 = 4233;
    int wager2 = 1996;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 2377;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> scores = {1, 0, 0};
    int wager1 = 0;
    int wager2 = 0;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> scores = {1000, 5, 5};
    int wager1 = 2;
    int wager2 = 2;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> scores = {1, 1, 2};
    int wager1 = 1;
    int wager2 = 1;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> scores = {100, 10, 10};
    int wager1 = 0;
    int wager2 = 0;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> scores = {10, 1, 1};
    int wager1 = 1;
    int wager2 = 1;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> scores = {1000, 100, 100};
    int wager1 = 25;
    int wager2 = 75;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> scores = {10000, 0, 0};
    int wager1 = 0;
    int wager2 = 0;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> scores = {5, 5, 0};
    int wager1 = 4;
    int wager2 = 0;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> scores = {100, 50, 50};
    int wager1 = 0;
    int wager2 = 0;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> scores = {888, 888, 444};
    int wager1 = 98;
    int wager2 = 97;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> scores = {10, 10, 20};
    int wager1 = 5;
    int wager2 = 6;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> scores = {9, 10, 2};
    int wager1 = 3;
    int wager2 = 1;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> scores = {1, 0, 0};
    int wager1 = 0;
    int wager2 = 0;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> scores = {1000, 5, 5};
    int wager1 = 2;
    int wager2 = 2;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> scores = {1, 1, 2};
    int wager1 = 1;
    int wager2 = 1;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> scores = {100, 10, 10};
    int wager1 = 0;
    int wager2 = 0;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> scores = {10, 1, 1};
    int wager1 = 1;
    int wager2 = 1;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> scores = {1000, 100, 100};
    int wager1 = 25;
    int wager2 = 75;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> scores = {10000, 0, 0};
    int wager1 = 0;
    int wager2 = 0;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> scores = {5, 5, 0};
    int wager1 = 4;
    int wager2 = 0;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> scores = {100, 50, 50};
    int wager1 = 0;
    int wager2 = 0;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> scores = {888, 888, 444};
    int wager1 = 98;
    int wager2 = 97;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> scores = {10, 10, 20};
    int wager1 = 5;
    int wager2 = 6;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> scores = {9, 10, 2};
    int wager1 = 3;
    int wager2 = 1;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> scores = {1, 0, 0};
    int wager1 = 0;
    int wager2 = 0;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> scores = {1000, 5, 5};
    int wager1 = 2;
    int wager2 = 2;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> scores = {1, 1, 2};
    int wager1 = 1;
    int wager2 = 1;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> scores = {100, 10, 10};
    int wager1 = 0;
    int wager2 = 0;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> scores = {10, 1, 1};
    int wager1 = 1;
    int wager2 = 1;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> scores = {1000, 100, 100};
    int wager1 = 25;
    int wager2 = 75;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> scores = {10000, 0, 0};
    int wager1 = 0;
    int wager2 = 0;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> scores = {5, 5, 0};
    int wager1 = 4;
    int wager2 = 0;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> scores = {100, 50, 50};
    int wager1 = 0;
    int wager2 = 0;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> scores = {888, 888, 444};
    int wager1 = 98;
    int wager2 = 97;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> scores = {10, 10, 20};
    int wager1 = 5;
    int wager2 = 6;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> scores = {9, 10, 2};
    int wager1 = 3;
    int wager2 = 1;
    QuizShow* pObj = new QuizShow();
    clock_t start = clock();
    int result = pObj->wager(scores, wager1, wager2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=275071&rd=5869&pm=2989
********************************************************************************
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <set>
#include <map>
#include <queue>
using namespace std;
 
#define si size()
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ii;
#define rev(A) reverse((A).begin(), (A).end())
#define s(A) sort((A).begin(), (A).end())
 
//----------------------------
 
class QuizShow {
  public:
  int wager(vector <int> a, int b, int c) {
    int s = -1, B = 0;
    vi bets(3);
    bets[1] = b;
    bets[2] = c;
    for (int i = 0; i <= a[0]; i++) {
      bets[0] = i;
      int C = 0;
      for (int j = 0; j < 8; j++) {
        vi scores = a;
        for (int k = 0; k < 3; k++) {
          if ((1<<k) & j) {
            scores[k] += bets[k];
          } else scores[k] -= bets[k];
        }
        if (scores[0] > scores[1] && scores[0] > scores[2]) C++;
      }
      if (C > s) s = C, B = i;
    }
    return B;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/