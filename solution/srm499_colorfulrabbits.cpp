/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11327
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

class ColorfulRabbits {
public:
    int getMinimum(vector<int> replies);
};

int ColorfulRabbits::getMinimum(vector<int> replies) {
    int ret;
    return ret;
}


int test0() {
    vector<int> replies = {1, 1, 2, 2};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> replies = {0};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> replies = {2, 2, 44, 2, 2, 2, 444, 2, 2};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 499;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> replies = {999951, 999952, 999953, 999954, 999955, 999956, 999957, 999958, 999959, 999960, 999961, 999962, 999963, 999964, 999965, 999966, 999967, 999968, 999969, 999970, 999971, 999972, 999973, 999974, 999975, 999976, 999977, 999978, 999979, 999980, 999981, 999982, 999983, 999984, 999985, 999986, 999987, 999988, 999989, 999990, 999991, 999992, 999993, 999994, 999995, 999996, 999997, 999998, 999999, 1000000};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 49998825;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> replies = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> replies = {1000000};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 1000001;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> replies = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 1000001;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> replies = {1};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> replies = {1, 1};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> replies = {1, 1, 1};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> replies = {1, 1, 1, 1};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> replies = {1, 1, 1, 1, 1};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> replies = {2};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> replies = {2, 2};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> replies = {2, 2, 2};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> replies = {2, 2, 2, 2};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> replies = {2, 2, 2, 2, 2};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> replies = {3};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> replies = {3, 3};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
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
    vector<int> replies = {3, 3, 3};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
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
    vector<int> replies = {3, 3, 3, 3};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> replies = {3, 3, 3, 3, 3};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> replies = {6, 2, 0, 2, 2, 2, 6, 0, 2, 2, 2, 2, 6, 2, 2, 6, 2, 3, 3, 3, 0, 0, 6, 6, 0};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> replies = {0, 0, 0, 0, 4, 4, 0, 0, 4, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> replies = {21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 0, 21, 21, 21, 21, 21, 0, 21, 21, 21, 21, 21, 21};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> replies = {0, 8, 6, 32, 32, 32, 6, 32, 32, 32, 32, 0, 8, 32, 8, 8, 8, 32, 8, 32, 32, 32, 32, 32, 32, 32, 0, 0, 32, 32, 32, 6, 32, 6, 32, 32, 6, 8, 32, 32, 32, 32, 32, 32, 32, 32, 8, 32, 32, 6};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> replies = {1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> replies = {18, 18, 18, 5, 18, 1, 18, 1, 5, 1, 1, 4, 18, 18, 4, 5, 5, 4, 18, 4, 4, 1, 4, 5, 4, 18, 4, 4, 5, 1, 18, 18, 1, 1, 18, 5, 1, 4, 18, 18, 18, 18, 18, 18, 1, 1, 4, 1, 18, 18};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> replies = {9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707, 9707};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 9708;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> replies = {1015, 1015, 1795, 1015, 1015, 1795, 1795, 1795, 1015, 1795, 1015, 1795, 1795, 1015, 1795, 1015, 1015, 1015, 1795, 1015, 1015, 1795, 1015, 1795, 1795, 1015, 1795, 1015, 1015, 1015, 1015, 1795, 1795, 1015};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 2812;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> replies = {76353, 359404, 60108, 236040, 266349, 402005, 41323, 98521, 239957, 236312, 197396, 32070, 45197, 48274, 119251, 429637, 42022, 133902, 236654, 27063, 224078, 367709, 108788, 293494, 353066, 46022, 176902, 405112, 157926, 26777, 254854, 404852, 280761, 187448, 213552, 295237, 273746, 323556, 182315, 350583, 247775, 468576, 53050, 263651, 273305, 33619};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 9594638;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> replies = {20762, 58420, 54736, 98660, 34578, 31136, 50482, 97674, 95866, 20762, 21553, 12324, 100841, 50482, 59466, 95310, 117057, 53676, 117057, 118736, 54806, 38140, 55732, 41651, 14710, 43490, 55732, 121601, 51185, 27789, 1613, 82088, 54548, 6503, 78206, 68198, 107881, 23480, 87840, 48202, 98660, 51185, 76534, 50482, 5787, 48630, 95866, 102045, 78206, 82088};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 2361976;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> replies = {400, 39931, 400, 39931, 39931, 13742, 39931, 400, 39931, 39931, 39931, 400, 400, 39931};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 54076;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> replies = {120788, 120788};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 120789;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> replies = {26844, 38072, 11455, 11455, 25521, 9711, 38072, 26844, 38943, 36913, 19904, 33061, 25521, 19904, 33061, 33061, 33061, 16464, 26844, 36913, 26844, 38072, 19904, 9711, 11455, 36913, 9711, 11455, 33749, 33749, 33061, 25521, 25521, 26844, 16464, 16464, 33061, 38072, 38943, 38943};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 290648;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> replies = {460594, 412437, 412437, 460594, 245352, 618221, 245352, 538444, 245352, 343729, 642569, 642569, 246473, 618221, 321138, 642569, 642569, 16281, 460594, 288537, 346279, 288537, 20330, 346279, 20330, 412437, 139090, 245352, 346279, 139090, 618221, 343729, 343729, 16281, 321138, 460594, 139090, 618221, 16281, 346279, 526777, 346279, 246473, 526777};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 5166266;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> replies = {8393, 13923, 13923, 8393, 19869, 13923};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 42188;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> replies = {20815, 1039, 23862, 14297, 9782, 21014, 46716, 2655, 49973, 22682, 1458, 13516, 15809, 2796, 23862, 2209, 30098, 13354, 41199, 12801, 15343, 27005, 10845, 2655, 36972, 13700, 30656, 50178, 34175, 36831, 15809, 34434, 1458, 2209, 20399, 3365, 43685, 7370, 15343, 1671, 36364, 36786, 5588, 22682, 26290, 18664, 3376, 50768, 15809};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 890581;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> replies = {4, 58, 1538, 1132, 4, 726, 1940, 1132, 436, 726, 4, 1132, 58, 1538, 726, 1132, 1538, 1940, 436, 1940, 436, 1925, 1925, 1304, 726, 726, 1538, 4, 1061, 436, 1304, 1061, 726, 58, 1940, 4, 1925};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 10134;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> replies = {220342, 224323, 201660, 223064, 201660, 102273, 270717, 136484, 102273, 9844, 136484, 20989, 190431, 177427, 15978, 15978, 224323, 136484, 144267, 35791, 9844, 223064, 223181, 190431, 240615, 187222, 223064, 223181, 20989, 270717, 224323, 20989, 220342, 223181, 145093, 220342, 145093, 75779, 75779, 144267, 15978, 224323, 166413, 270717, 177427, 75779, 201660, 240615, 166413, 223181};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 3011913;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> replies = {13688, 13688, 13369, 13369, 13369, 13369, 7339, 7339};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 34399;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> replies = {3994, 2964, 4012, 2925, 4012, 1509, 6, 3885, 1509, 1509, 2518, 4082, 4012, 2758, 3297, 3691, 2964, 4082, 870, 6, 4082, 3994, 679, 3297};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 37204;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> replies = {6963, 6963, 6963, 6963, 6963, 6963, 6963, 6963, 6963, 6963, 6963, 10907, 10907, 10907, 10907, 10907, 10907, 10907, 10907, 10907, 10907, 10907, 10907, 11811, 11811, 11811, 11811, 11811, 11811, 11811, 11811, 11811, 11811, 11811, 11811, 11811, 11811, 11811};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 29684;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> replies = {19393, 19393, 19393, 19393, 19393, 19393};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 19394;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> replies = {498, 498, 498, 498, 498, 498, 498, 498, 615, 615, 615, 615, 615, 615, 615, 615, 615, 1567, 1567, 1567, 1567, 1567, 1567, 1576, 1576, 1576, 1576, 1576, 1576, 2318, 2318, 2410, 2410, 2410, 2410, 2410};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 8990;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> replies = {43220, 43220, 43220, 246091, 246091, 246091, 246091, 265459, 265459, 265459, 275440, 275440, 275440, 313993, 313993, 313993, 314049, 314049, 314049};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 1458258;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> replies = {63, 63, 757, 757, 2863, 2863, 3858, 3990, 3990, 3990, 3990, 3990, 3990, 3990, 5037, 5252, 5252, 9596, 9596, 9596, 9596, 10096, 10096, 10151, 10151, 10437, 10437, 10437, 10437, 10481, 10481, 10481, 10481, 10481};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 72593;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> replies = {1831, 1831, 1831, 1831, 1831, 1831, 1389, 1831, 1389, 1831, 555, 555, 654, 1831, 555, 1389, 555, 555, 1389, 1389, 555, 654, 1831, 1389, 654, 654, 1831, 555, 1831, 555, 555, 654, 1389, 1389, 1831, 654, 654, 654, 555, 1389, 555, 1831};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 4433;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> replies = {70245, 70245, 278800, 128331, 201676, 211692, 78442, 278800, 94667, 12011, 22178, 12011, 256167, 201676, 128331, 105394, 1702, 201676, 55233};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 1516551;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> replies = {29208};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 29209;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> replies = {1212, 1212, 3522, 1212, 1212, 1212, 3522, 3522, 1212, 3522, 3522, 3522, 1212, 1212, 3522, 3522, 1212, 3522, 1212, 1212};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 4736;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> replies = {3322, 3322, 3322, 3322, 3322, 3322, 3322, 3322, 3322, 3322, 3322, 3322, 3322, 3322, 3322, 3322, 3322, 3322, 3322, 3322, 3322, 3322, 3322, 3322, 3322, 3322, 3322, 3322, 3322, 3322, 3322, 3322};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 3323;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> replies = {2, 2, 44, 2, 2, 2, 444, 2, 2};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 499;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> replies = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> replies = {2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 44, 44};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> replies = {1000000, 1000000, 1000000};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 1000001;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> replies = {0, 1, 0, 1};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> replies = {2, 2, 44, 2, 2, 2, 444, 2, 2, 4, 4, 4, 2, 3, 3};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 508;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> replies = {0, 1};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> replies = {2, 2, 2, 2};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> replies = {1, 1, 1, 2, 3, 4, 5};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> replies = {0, 0, 0, 0};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> replies = {0, 2, 1, 3, 2};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> replies = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> replies = {1, 1, 1, 1, 1};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> replies = {0, 0, 0, 0, 0};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> replies = {1, 1, 1, 1};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> replies = {1, 1, 2, 2};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
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
    vector<int> replies = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> replies = {2, 2, 2, 2, 2};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> replies = {1, 1, 2, 2, 1, 1, 1, 1, 1};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
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
    vector<int> replies = {1000000, 1000000};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 1000001;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> replies = {2, 2, 3, 2, 2, 3, 2, 2};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
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
    vector<int> replies = {1, 2, 1};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> replies = {99999, 99999, 1, 2, 999, 9876, 878678};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 989561;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> replies = {1000000, 100000, 1000000, 50, 158, 500, 10000, 10000, 75124};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 1185839;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> replies = {5};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> replies = {10};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> replies = {1000, 1000, 1000};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 1001;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> replies = {0};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> replies = {100, 100, 100, 100, 100, 100};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> replies = {5, 5, 5, 5, 5};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> replies = {5, 5, 5, 5, 5, 5};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
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
    vector<int> replies = {3, 3, 3, 3};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> replies = {4, 4, 4, 4};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> replies = {2, 2, 44, 44, 2, 44, 444, 2, 2, 44};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 496;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> replies = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> replies = {0, 0};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> replies = {999};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> replies = {1000000, 999999, 999998, 999997, 999996, 999995, 999994, 999993, 999992, 999991, 999990, 999989, 999988, 999987, 999986, 999985, 999984, 999983, 999982, 999981, 999980, 999979, 999978, 999977, 999976, 999975, 999974, 999973, 999972, 999971, 999970, 999969, 999968, 999967, 999966, 999965, 999964, 999963, 999962, 999961, 999960, 999959, 999958, 999957, 999956, 999955, 999954, 999953, 999952, 999951};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 49998825;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> replies = {2, 100, 2, 44, 2, 2, 2, 444, 2, 2, 0, 4, 3, 50, 3, 3, 4, 4, 99, 100, 1, 2, 2, 2, 2, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 784;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> replies = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> replies = {5, 6, 7, 8, 9, 10, 11, 12};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> replies = {333, 333, 333, 333, 333, 44, 1, 2, 3, 4, 11, 22, 33};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 462;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> replies = {1, 2, 2, 2, 2};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> replies = {1000000};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 1000001;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> replies = {2, 2, 2, 2, 2, 2};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> replies = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> replies = {2, 2, 3};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> replies = {1, 1, 1, 1, 1, 1};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> replies = {20, 20, 20, 20, 20, 20, 20, 20};
    ColorfulRabbits* pObj = new ColorfulRabbits();
    clock_t start = clock();
    int result = pObj->getMinimum(replies);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22887458&rd=14428&pm=11327
********************************************************************************
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <queue> 
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
 
 
class ColorfulRabbits { 
public: 
  int getMinimum(vector <int> r) { 
    int n=r.size(); 
    map<int,int> mp; 
    for(int i=0; i<n; i++){ 
        mp[r[i]]++; 
    } 
    int res=0; 
    for(map<int,int>::iterator it=mp.begin(); it!=mp.end(); it++){ 
        int a=it->first+1; 
        res+=(it->second/a) *a; 
        if(it->second%a!=0) res+=a; 
        } 
        return res; 
  } 
};

********************************************************************************
*******************************************************************************/