/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7716
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

class BrokenButtons {
public:
    int minPresses(int page, vector<int> broken);
};

int BrokenButtons::minPresses(int page, vector<int> broken) {
    int ret;
    return ret;
}


int test0() {
    int page = 5457;
    vector<int> broken = {6, 7, 8};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int page = 100;
    vector<int> broken = {1, 0, 5};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
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
    int page = 99999;
    vector<int> broken = {0, 2, 3, 4, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 11118;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int page = 158;
    vector<int> broken = {1, 9, 2, 5, 4};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int page = 151241;
    vector<int> broken = {0, 1, 2, 3, 4, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 84580;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int page = 14124;
    vector<int> broken = {};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int page = 124;
    vector<int> broken = {0, 1, 2, 4};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int page = 115;
    vector<int> broken = {1, 4};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int page = 1;
    vector<int> broken = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
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
    int page = 1;
    vector<int> broken = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int page = 202;
    vector<int> broken = {0, 1, 3, 4, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int page = 500000;
    vector<int> broken = {};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
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
    int page = 100000;
    vector<int> broken = {1, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 11117;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int page = 137;
    vector<int> broken = {1, 2, 3, 4, 5, 6};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int page = 427;
    vector<int> broken = {1, 2, 3, 4, 5, 6};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 276;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int page = 101;
    vector<int> broken = {};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
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
    int page = 15124;
    vector<int> broken = {1, 2, 3, 4, 5, 6};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 5129;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int page = 312523;
    vector<int> broken = {1, 2, 3, 4, 5, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 234751;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int page = 87212;
    vector<int> broken = {1, 2, 3, 4, 5, 6};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 118;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int page = 9999;
    vector<int> broken = {1, 2, 4, 6, 3, 5, 7, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 1115;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int page = 12;
    vector<int> broken = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int page = 88888;
    vector<int> broken = {8};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 1117;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int page = 500000;
    vector<int> broken = {0, 1, 2, 3, 4, 5, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 166672;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int page = 500000;
    vector<int> broken = {0, 1, 2, 3, 4, 5, 6, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 277783;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int page = 500000;
    vector<int> broken = {0, 1, 2, 3, 4, 5, 6, 7, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 388894;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int page = 500000;
    vector<int> broken = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 400006;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int page = 500000;
    vector<int> broken = {0, 2, 3, 4, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 388895;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int page = 500000;
    vector<int> broken = {1, 3, 4, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 277784;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int page = 498992;
    vector<int> broken = {1, 2, 3, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 54554;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int page = 22;
    vector<int> broken = {1, 2, 3, 4, 5, 6};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int page = 13;
    vector<int> broken = {0, 2, 4, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int page = 4567;
    vector<int> broken = {0, 1, 2, 3, 4, 9, 6};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 992;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int page = 277;
    vector<int> broken = {0, 2, 4, 6, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int page = 500000;
    vector<int> broken = {1, 2, 3, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 55562;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int page = 500000;
    vector<int> broken = {0, 1, 2, 3, 5, 6, 7, 8};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int page = 234;
    vector<int> broken = {0, 1, 2, 3, 4, 5};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 134;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int page = 777;
    vector<int> broken = {7, 0};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int page = 80000;
    vector<int> broken = {8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 2228;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int page = 9231;
    vector<int> broken = {1, 0, 4, 6, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 347;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int page = 11111;
    vector<int> broken = {0, 1, 2};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 1116;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int page = 432102;
    vector<int> broken = {0, 3, 2, 4, 6, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 79015;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int page = 80000;
    vector<int> broken = {8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 2228;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int page = 500000;
    vector<int> broken = {0, 1, 2, 3, 4, 5, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 166672;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int page = 500000;
    vector<int> broken = {1, 2, 3, 4, 5, 6, 7, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 300006;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int page = 500000;
    vector<int> broken = {0, 1, 2, 3, 4, 5, 6, 7, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 388894;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int page = 500000;
    vector<int> broken = {0, 1, 3, 4, 5, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 122228;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int page = 500000;
    vector<int> broken = {0, 1, 2, 3, 4, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 55561;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int page = 500000;
    vector<int> broken = {0, 2, 3, 4, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 11117;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int page = 9999;
    vector<int> broken = {9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int page = 99;
    vector<int> broken = {};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int page = 500000;
    vector<int> broken = {1, 2, 3, 4, 5, 6, 7, 9, 0};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 388894;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int page = 98;
    vector<int> broken = {8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int page = 0;
    vector<int> broken = {0, 1, 2, 3, 4, 5};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int page = 500000;
    vector<int> broken = {3, 4, 5};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 100006;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int page = 1234;
    vector<int> broken = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 1134;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int page = 199;
    vector<int> broken = {2, 3, 4, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int page = 99;
    vector<int> broken = {9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
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
    int page = 499999;
    vector<int> broken = {1, 2, 3, 4, 5, 6, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 200007;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int page = 5;
    vector<int> broken = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int page = 500000;
    vector<int> broken = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 400006;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int page = 102;
    vector<int> broken = {1, 2, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int page = 1;
    vector<int> broken = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int page = 102;
    vector<int> broken = {0, 1, 2, 3, 4, 5, 6, 7};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int page = 500000;
    vector<int> broken = {1, 2, 3, 4, 5, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 100006;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int page = 499912;
    vector<int> broken = {6, 7, 8, 9, 4};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int page = 0;
    vector<int> broken = {0};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int page = 102;
    vector<int> broken = {};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int page = 300000;
    vector<int> broken = {2, 3, 4, 5, 6, 7, 8, 9, 0};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 188895;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int page = 99;
    vector<int> broken = {9, 0};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int page = 0;
    vector<int> broken = {};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int page = 97;
    vector<int> broken = {4, 5, 6, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int page = 500000;
    vector<int> broken = {0, 1, 2, 3, 4, 6, 7, 8};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 55561;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int page = 499999;
    vector<int> broken = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 499899;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int page = 1;
    vector<int> broken = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int page = 80000;
    vector<int> broken = {8, 9, 7, 6, 5, 4, 3, 2};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 20006;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int page = 0;
    vector<int> broken = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int page = 5000;
    vector<int> broken = {1, 2, 3, 5, 6, 7, 8, 9, 0};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 560;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int page = 101;
    vector<int> broken = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int page = 54240;
    vector<int> broken = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 54140;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int page = 0;
    vector<int> broken = {0, 2, 1, 3, 4, 5, 8, 7, 6, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int page = 101;
    vector<int> broken = {2};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int page = 1;
    vector<int> broken = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int page = 10;
    vector<int> broken = {0};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int page = 500000;
    vector<int> broken = {0, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 11117;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int page = 500000;
    vector<int> broken = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 499900;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int page = 105;
    vector<int> broken = {1, 0, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int page = 500000;
    vector<int> broken = {1, 0, 2, 3, 4, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 55561;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int page = 1000;
    vector<int> broken = {9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int page = 121;
    vector<int> broken = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int page = 500000;
    vector<int> broken = {0, 1, 2, 4, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 33339;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int page = 499999;
    vector<int> broken = {3, 4, 5};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 100007;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int page = 80901;
    vector<int> broken = {8, 9, 7, 0};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 14240;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int page = 500000;
    vector<int> broken = {1, 2, 3, 4, 5, 7, 8, 9, 0};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 166672;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int page = 124398;
    vector<int> broken = {0, 9, 1, 2, 3};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 35515;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int page = 500000;
    vector<int> broken = {9, 8, 7, 0, 6};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 11117;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int page = 500000;
    vector<int> broken = {1, 2, 3, 4, 5};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 100006;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int page = 1234;
    vector<int> broken = {};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int page = 101;
    vector<int> broken = {1};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int page = 0;
    vector<int> broken = {1, 2, 3, 4, 5};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
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
    int page = 99999;
    vector<int> broken = {9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int page = 0;
    vector<int> broken = {0, 1, 2, 3, 4, 5, 6, 7, 9, 8};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int page = 500000;
    vector<int> broken = {0, 1, 2, 3, 4, 5};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 166672;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int page = 98;
    vector<int> broken = {8};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int page = 1;
    vector<int> broken = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int page = 100000;
    vector<int> broken = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int page = 500000;
    vector<int> broken = {1, 2, 3, 4, 5, 6, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 200006;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int page = 500000;
    vector<int> broken = {0, 2, 3, 6, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 11117;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int page = 99;
    vector<int> broken = {3};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
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
    int page = 102;
    vector<int> broken = {1, 0};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int page = 13;
    vector<int> broken = {1, 2, 3, 0, 4};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int page = 0;
    vector<int> broken = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int page = 1000;
    vector<int> broken = {1};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int page = 1;
    vector<int> broken = {0, 1, 2};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int page = 500000;
    vector<int> broken = {0, 1, 2, 3, 4, 5, 6, 7};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 388894;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int page = 499999;
    vector<int> broken = {4, 9, 0};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 11118;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int page = 100;
    vector<int> broken = {};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int page = 0;
    vector<int> broken = {0, 1, 2};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int page = 500000;
    vector<int> broken = {2, 3, 4, 5, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 100006;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int page = 123456;
    vector<int> broken = {};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int page = 101;
    vector<int> broken = {1, 0};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
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
    int page = 101;
    vector<int> broken = {2, 3, 4, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int page = 9999;
    vector<int> broken = {9, 8, 7};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int page = 500000;
    vector<int> broken = {6, 7, 8, 5, 4, 3, 2, 1, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 499900;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int page = 102;
    vector<int> broken = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int page = 3;
    vector<int> broken = {0, 1, 2, 3, 4, 5, 6, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int page = 1999;
    vector<int> broken = {3, 4, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int page = 0;
    vector<int> broken = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int page = 499999;
    vector<int> broken = {4, 0};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 11118;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int page = 1;
    vector<int> broken = {0, 2, 3, 4, 5, 6, 7, 9, 8};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int page = 3;
    vector<int> broken = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int page = 2166;
    vector<int> broken = {0, 1, 2, 4, 5, 6, 7, 8};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 1170;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int page = 1001;
    vector<int> broken = {2, 3, 4, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int page = 495321;
    vector<int> broken = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 395327;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int page = 611;
    vector<int> broken = {0, 2, 3, 4, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 503;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int page = 0;
    vector<int> broken = {1};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int page = 101;
    vector<int> broken = {1, 0, 5};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int page = 1000;
    vector<int> broken = {2, 3, 4, 5, 6, 7, 8, 9, 0};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 115;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int page = 999;
    vector<int> broken = {2, 3, 4, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int page = 500000;
    vector<int> broken = {9, 8, 7, 6, 4, 3, 2, 0};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 11117;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int page = 97;
    vector<int> broken = {9, 8, 7};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int page = 70000;
    vector<int> broken = {2, 3, 4, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 30006;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int page = 1000;
    vector<int> broken = {0, 1, 2, 3, 4, 6, 7, 8, 5};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int page = 500000;
    vector<int> broken = {0, 2, 3, 4, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 388895;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int page = 500000;
    vector<int> broken = {0, 4};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 11117;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int page = 500000;
    vector<int> broken = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 499900;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int page = 100;
    vector<int> broken = {1, 0, 5};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int page = 99;
    vector<int> broken = {1};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int page = 1;
    vector<int> broken = {1, 2, 3, 4, 5, 6, 7, 8};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int page = 0;
    vector<int> broken = {1, 2, 3, 4, 5, 7, 8, 9, 0};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int page = 2111;
    vector<int> broken = {0, 2, 3, 4, 5, 6, 7, 8, 9};
    BrokenButtons* pObj = new BrokenButtons();
    clock_t start = clock();
    int result = pObj->minPresses(page, broken);
    clock_t end = clock();
    delete pObj;
    int expected = 1004;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20286298&rd=10768&pm=7716
********************************************************************************
#include <algorithm>
#include <vector>
#include <sstream>
#include <cmath>
#include <iostream>
#include <map>
using namespace std;
 
struct BrokenButtons {
  int minPresses(int page, vector<int> broken) {
    bool ok[20];
    for (int i = 0; i < 10; i++) ok[i] = true;
    for (int i = 0; i < (int)broken.size(); i++) ok[broken[i]] = false;
 
    int best = abs(page - 100);
    for (int p = 0; p <= 1000000; p++) {
      char s[10];
      sprintf(s, "%d", p);
 
      for (int i = 0; s[i]; i++)
        if (!ok[s[i] - '0']) goto skip;
 
      best <?= strlen(s) + abs(p - page);
skip:;
    }
 
    return best;
  }
};

********************************************************************************
*******************************************************************************/