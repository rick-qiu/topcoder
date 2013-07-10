/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8483
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

class RussianSpeedLimits {
public:
    int getCurrentLimit(vector<string> signs);
};

int RussianSpeedLimits::getCurrentLimit(vector<string> signs) {
    int ret;
    return ret;
}


int test0() {
    vector<string> signs = {"80"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> signs = {"40", "70", "default", "20", "50"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> signs = {"40", "70", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> signs = {"40", "80", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> signs = {"city", "60"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> signs = {"city", "50", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> signs = {"city", "city", "city", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> signs = {"57"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> signs = {"60"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> signs = {"90"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> signs = {"city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> signs = {"default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> signs = {"city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> signs = {"city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> signs = {"default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> signs = {"city", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> signs = {"90", "60", "14", "60", "city", "default", "79", "60", "city", "60", "90", "city", "default", "60", "city", "city", "default", "default", "73", "default", "60", "default", "94", "city", "default", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> signs = {"default", "60", "default", "city", "90", "city", "33", "default", "city", "default", "default", "60", "city", "city", "60", "city", "90", "default", "default", "city", "40"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> signs = {"90", "city", "city", "default", "default", "city", "default", "default", "default", "city", "default", "default", "city", "90", "default", "default", "default", "default", "90", "default", "default", "default", "default", "67", "default", "60", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> signs = {"90", "3", "city", "city", "default", "city", "city", "city", "23", "default", "90", "city", "29", "90", "4"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
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
    vector<string> signs = {"default", "default", "default", "default", "default", "default", "default", "city", "default", "default", "default", "city", "default", "city", "default", "default", "default", "city", "city", "default", "default", "60", "default", "default", "default", "default", "city", "default", "city", "default", "90", "default", "default", "default", "default", "default", "default", "city", "default", "city", "default", "default", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> signs = {"default", "city", "default", "90", "default", "city", "90", "default", "default", "default", "60", "36", "city", "default", "city", "default", "default", "city", "60", "38", "default", "default", "90", "default", "default", "default", "default", "90", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> signs = {"default", "city", "90", "60", "default", "city", "60", "default", "default", "city", "default", "city", "city", "default", "city", "city", "city", "city", "default", "default", "default", "city", "city", "default", "city", "city", "default", "default", "default", "default", "default", "city", "city", "default", "default", "default", "default", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> signs = {"city", "default", "default", "city", "default", "city", "default", "default", "default", "default", "city", "default", "city", "default", "default", "default", "city", "default", "city", "city", "default", "city", "city", "default", "default", "default", "city", "default", "default", "default", "default", "default", "default", "default", "default", "default", "city", "city", "default", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> signs = {"city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> signs = {"city", "43", "city", "60", "city", "city", "city", "34", "60", "city", "city", "city", "city", "city", "city", "8", "city", "24", "city", "60", "city", "60", "92", "city", "city", "city", "city", "city", "city", "city", "city", "89", "60", "city", "city", "60", "city", "26", "city", "city", "city", "city", "city", "city", "60", "6"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> signs = {"90", "90", "60", "60", "default", "60", "4", "city", "default", "default", "90", "54", "city", "67", "60", "90", "60", "90", "90", "90", "90", "60", "90", "city", "60", "58", "60", "default", "73", "default", "60", "90"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> signs = {"default", "60", "default", "city", "city", "91", "default", "default", "60", "city", "57", "default", "default", "60", "default", "city", "default", "89", "city", "60", "default", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> signs = {"default", "default", "default", "default", "default", "city", "default", "default", "90", "default", "default", "97", "default", "60", "default", "90", "default", "default", "default", "default", "default", "default", "default", "default", "6", "default", "default", "city", "default", "city", "90", "90", "default", "69", "default", "default", "default", "city", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> signs = {"city", "60", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> signs = {"46", "60", "default", "default", "city", "60", "25", "default", "60", "city", "city", "default", "87", "city", "default", "60", "26", "default", "city", "city", "47", "default", "city", "60", "default", "60", "city", "city", "41", "85", "city", "city", "city", "60"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> signs = {"city", "city", "default", "default", "city", "city", "default", "city", "city", "default", "city", "default", "city", "default", "city", "city", "default", "default", "default", "60", "city", "city", "city", "city", "default", "default", "default", "city", "city", "60", "default", "default", "default", "90", "default", "default", "city", "default", "default", "city", "city", "default", "city", "90", "city", "default", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> signs = {"46", "default", "90", "90", "60", "60", "5", "default", "default", "79", "city", "90", "default", "default", "default", "city", "60", "city", "default", "56", "default", "90", "default", "default", "14", "default", "21", "city", "36", "48", "default", "60", "default", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> signs = {"60", "city", "city", "default", "default", "60", "city", "city", "90", "city", "60", "60", "60", "60", "default", "default", "60", "default", "60", "city", "90", "69", "90"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> signs = {"90", "default", "90", "39", "default", "default", "default", "79", "default", "60", "39", "60", "default", "default", "default", "90", "default", "2", "city", "default", "90"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> signs = {"90", "10", "7", "90", "default", "90", "60", "90", "city", "default", "90", "default", "default", "90", "90", "66", "city", "90", "city", "city", "default", "90", "90", "default", "60", "default", "60", "90", "default", "60", "default", "60", "90", "90", "city", "default", "city", "60", "90", "58", "default", "default", "60", "90", "90", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> signs = {"60", "city", "city", "city", "city", "city", "default", "city", "city", "city", "default", "city", "29", "city", "city", "39", "14", "city", "city", "90", "city", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> signs = {"60", "60", "city", "default", "default", "default", "default", "59", "60", "city", "60", "city", "60", "60", "57", "60", "city", "city", "default", "60", "default", "79", "60", "default", "default", "default", "60", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> signs = {"90", "city", "90", "60", "city", "city", "60", "60"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> signs = {"city", "79", "default", "60", "default", "city", "62", "default", "default", "default", "default", "default", "city", "default", "city", "default", "default", "default", "city", "city", "default", "default", "default", "default", "default", "default", "60", "city", "default", "default", "default", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> signs = {"default", "default", "default", "default", "default", "city", "default", "default", "city", "city", "default", "city", "city", "default", "90", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> signs = {"city", "60", "default", "90", "default", "city", "city", "city", "city", "60", "90", "default", "city", "city", "city", "default", "default", "city", "default", "city", "60", "90", "60", "city", "default", "default", "60", "default", "city", "city", "default", "city", "city", "default", "default", "city", "60", "city", "90"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> signs = {"60", "city", "94", "default", "default", "70", "60", "default", "default", "default", "default", "default", "25", "default", "default", "default", "default", "60", "default", "default", "73", "default", "default", "default", "default", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> signs = {"60", "19", "60", "75", "88", "80", "default", "default", "58", "60", "61", "default", "default", "90", "90", "default", "60", "default", "82", "default", "17", "city", "60", "60", "90", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> signs = {"default", "city", "90", "default", "default", "default", "city", "city", "city", "60", "default", "city", "city", "default", "default", "default", "default", "city", "90", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> signs = {"default", "90", "default", "90", "default", "default", "default", "default", "60", "50", "default", "city", "default", "90", "city", "default", "default", "69", "default", "default", "default", "60", "default", "90", "default", "default", "default", "default", "default", "default", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> signs = {"city", "city", "90", "default", "city", "default", "city", "60", "default", "city", "90", "90", "60", "city", "city", "city", "90", "default", "61", "default", "city", "90", "city", "default", "90", "city", "42", "default", "city", "default", "default", "city", "default", "city", "90", "97", "default", "60", "90", "default", "city", "default", "city", "90", "90", "90", "93", "default", "98", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> signs = {"default", "default", "default", "default", "25", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "90", "city", "default", "60", "default", "90", "default", "90", "60", "city", "90", "default", "90", "default", "90", "90", "default", "60", "default", "default", "90", "default", "default", "default", "city", "default", "90", "city", "default", "city", "90"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> signs = {"city", "default", "city", "default", "default", "60", "city", "default", "city", "default", "default", "default", "default", "city", "default", "default", "city", "60", "default", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> signs = {"default", "city", "city", "60", "default", "default", "60", "60", "default", "default", "98", "default", "default", "city", "60", "default", "default", "city", "city", "city", "60", "city", "default", "city", "default", "city", "default", "default", "city", "60", "city", "default", "city", "city", "city", "60", "city", "city", "60", "9", "city", "city", "default", "city", "city", "90", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> signs = {"city", "city", "city", "city", "city", "city", "city", "city", "54", "city", "city", "79", "city", "city", "city", "city", "city", "city", "city", "35", "city", "90", "default", "city", "60", "city", "city", "city", "city", "city", "default", "city", "city", "67", "63"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> signs = {"90", "city", "90", "68", "60", "default", "97", "default", "default", "city", "34", "default", "90", "93", "default", "default", "44", "city", "9", "47", "city", "default", "1", "default", "default", "72", "default", "default", "default", "default", "27", "city", "city", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> signs = {"default", "90", "default", "default", "default", "60", "60", "default", "default", "60", "90", "default", "90", "60", "90", "60", "90", "city", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> signs = {"73", "city", "city", "city", "90", "city", "city", "city", "90", "48", "city", "city", "60", "90", "90", "60", "city", "city", "90", "default", "city", "default", "27", "city", "77", "73", "city", "90", "17", "city", "90", "65", "city", "60", "city", "city", "city", "97", "90", "city", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> signs = {"city", "default", "90", "default", "90", "90", "90", "city", "default", "default", "city", "90"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> signs = {"10", "60", "city", "city", "default", "default", "default", "city", "default", "90", "city", "city", "default", "60", "city", "default", "90", "default", "60", "60", "default", "city", "default", "60", "city", "60", "city", "city", "79", "31", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> signs = {"60", "90", "90", "55", "city", "60", "city", "37", "90", "city", "20", "30", "city", "90", "30", "60", "90", "city", "90", "90", "90", "90", "city", "city", "city", "36", "default", "90", "default", "60", "60", "city", "city", "17", "default", "67", "city", "city", "60", "default", "70", "default", "60", "default", "90", "60"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> signs = {"60", "city", "city", "60", "city", "city", "city", "60", "city", "60", "city", "60", "city", "60", "city", "city", "city", "city", "60", "city", "city", "60", "city", "city", "90", "60", "city", "city", "90"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> signs = {"default", "90", "90", "60", "city", "90", "90", "city", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> signs = {"city", "city", "city", "44", "default", "city", "city", "default", "city", "default", "default", "default", "city", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> signs = {"default", "default", "60", "90", "city", "default", "default", "60", "city", "90", "90", "60", "90", "60", "60", "default", "default", "default", "default", "60", "90", "default", "default", "city", "90", "90", "90", "default", "90", "60", "90", "90", "60", "default", "default", "90", "60", "60", "default", "default", "city", "city", "60", "default", "90"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> signs = {"default", "default", "default", "69", "90", "city", "60", "city", "39", "default", "60", "city", "default", "60", "city", "67", "city", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> signs = {"default", "default", "city", "default", "default", "city", "default", "90", "90", "default", "city", "default", "90", "default", "default", "default", "57", "80", "default", "default", "default", "default", "default", "default", "default", "default", "city", "default", "default", "default", "default", "city", "default", "default", "90", "city", "90", "default", "city", "81", "default", "default", "city", "city", "default", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> signs = {"default", "85", "city", "90", "city", "60", "60", "city", "60", "90", "52", "90", "90", "default", "default", "default", "city", "default", "90", "90", "city", "default", "city", "90", "60", "38", "90", "city", "90", "city", "70", "90", "city", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> signs = {"41", "60", "default", "52", "default", "60", "60", "city", "default", "33", "60", "default", "25", "60", "city", "60", "77", "72", "90", "8", "90", "default", "city", "60", "default", "38", "city", "default", "default", "city", "5", "city", "default", "default", "98", "4", "60", "39", "90"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> signs = {"79", "city", "city", "city", "60", "city", "city", "city", "city", "city", "city", "city", "default", "default", "city", "default", "city", "16", "city", "city", "city", "51", "city", "city", "city", "city", "city", "city", "city", "default", "city", "city", "city", "city", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> signs = {"60", "90", "city", "city", "city", "city", "60", "city", "city", "city", "city", "city", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> signs = {"default", "default", "default", "default", "24", "city", "default", "city", "city", "default", "city", "60", "60", "90", "default", "city", "60", "60", "city", "city", "default", "39", "city", "default", "city", "90", "default", "city", "default", "default", "90", "default", "28", "city", "default", "90", "city", "city", "61", "default", "city", "default", "default", "90", "default", "city", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> signs = {"city", "60", "city", "city", "city", "city", "city", "city", "90", "city", "city", "city", "city", "city", "city", "city", "city", "default", "city", "city", "city", "city", "city", "default", "city", "city", "city", "city", "city", "90", "city", "city", "city", "47", "city", "90", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> signs = {"69", "city", "city", "city", "city", "city", "city", "60", "city", "60", "city", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> signs = {"54", "default", "40", "default", "42", "90", "99", "60", "53", "city", "city", "default", "90", "city", "default", "city", "city", "90", "90", "82", "city", "69", "default", "60", "default", "city", "60", "default", "default", "default", "default", "90", "city", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> signs = {"default", "city", "default", "default", "default", "default", "city", "default", "default", "default", "default", "default", "default", "default", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> signs = {"default", "90", "city", "90", "default", "default", "default", "2", "city", "60", "default", "city", "default", "city", "city", "60", "city", "default", "13", "60", "60", "city", "city", "60", "default", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> signs = {"61", "city", "60", "default", "default", "default", "30", "default", "city", "default", "city", "default", "default", "default", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> signs = {"60", "city", "90", "90", "city", "60", "90", "47", "90", "60", "city", "city", "90", "city", "90", "city", "city", "default", "city", "default", "city", "60", "default", "90", "default", "default", "92", "default", "60", "94", "city", "50", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> signs = {"90", "42", "default", "city", "city", "default", "default", "90", "27", "default", "city", "city", "90", "city", "90", "default", "90", "default", "60"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> signs = {"default", "default", "city", "city", "14", "city", "city", "90", "city", "city", "60", "city", "default", "city", "61", "default", "city", "city", "90", "city", "80", "default", "default", "90", "60", "60", "91", "60", "default", "default", "city", "default", "city", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> signs = {"default", "60", "26", "60", "city", "default", "city", "city", "city", "city", "default", "default", "default", "city", "city", "default", "city", "90", "city", "city", "default", "default", "default", "default", "city", "city", "default", "city", "city", "default", "default", "city", "city", "city", "default", "default", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> signs = {"city", "default", "city", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> signs = {"city", "90", "city", "90", "60", "default", "city", "default", "city", "93", "90", "default", "60", "city", "44", "90", "90", "65", "default", "default", "9", "90", "default", "default", "92", "90", "default", "90", "2", "default", "default", "default", "90", "default", "default", "default", "default", "default", "city", "default", "90", "17", "60", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> signs = {"city", "default", "city", "city", "default", "city", "city", "94", "68", "default", "default", "city", "city", "city", "city", "default", "default", "60", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> signs = {"60", "default", "city", "default", "default", "city", "city", "78", "city", "90", "38", "default", "default", "90", "68", "city", "default", "default", "64", "city", "default", "default", "city", "90", "city", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> signs = {"default", "90", "60", "default", "default", "city", "default", "default", "90", "city", "city", "32", "city", "42", "default", "default", "24", "city", "city", "default", "city", "city", "city", "90", "90", "13", "city", "1", "default", "city", "default", "44", "default", "45", "default", "60", "city", "city", "92", "90", "90", "default", "city", "default", "90", "60", "city", "city", "city", "60"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> signs = {"city", "city", "city", "default", "default", "city", "default", "city", "14", "city", "default", "default", "59", "90"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> signs = {"90", "73", "66", "default", "city", "90", "city", "city", "64", "60", "default", "default", "67", "default", "60", "42"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> signs = {"90"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> signs = {"51", "city", "default", "default", "60", "50", "default", "60", "default", "60", "city", "default", "city", "default", "city", "98", "90", "city", "60", "default", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> signs = {"city", "city", "45", "90", "10", "90", "city", "60", "60", "city", "city", "city", "100", "city", "city", "city", "60", "47", "90", "city", "city", "90", "city", "90", "90", "90", "45", "city", "city", "90", "city", "13", "city", "city", "city", "city", "90", "90", "city", "city", "90", "city", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> signs = {"90", "default", "city", "90", "city", "default", "18", "default", "default", "23", "default", "default", "default", "default", "city", "90", "city", "default", "90", "30", "60", "10", "default", "90", "33", "default", "90", "90", "90", "90", "default", "default", "city", "default", "city", "default", "90", "90", "city", "60", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> signs = {"60", "60", "60", "city", "60", "60", "60", "default", "60", "60", "60", "76", "90", "60", "90", "60", "default", "default", "90", "60", "90", "default", "60", "30", "default", "27", "default", "78", "city", "default", "city", "default", "60"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> signs = {"default", "city", "city", "90", "default", "city", "city", "default", "default", "default", "default", "city", "default", "default", "default", "default", "default", "default", "default", "default", "default", "default", "city", "default", "default", "default", "city", "default", "default", "city", "city", "default", "46", "default", "default", "default", "city", "default", "default", "94"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> signs = {"default", "default", "default", "84", "51", "default", "60", "city", "city", "21", "default", "city", "60", "60", "city", "60", "default", "city", "default", "default", "city", "default", "60"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> signs = {"54", "city", "61", "90", "city", "city", "60", "default", "city", "city", "city", "city", "city", "97", "city", "default", "city", "city", "39", "57"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> signs = {"city", "city", "default", "city", "60", "default", "city", "5", "default", "city", "default", "city", "90", "default", "city", "default", "city", "city", "60", "city", "city", "default", "default", "city", "city", "60", "90", "city", "city", "60"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> signs = {"default", "90", "default", "90", "90", "90", "default", "90", "90", "90", "90", "60", "60", "default", "90", "90", "90", "90", "90", "default", "90", "90", "60", "default", "90", "default", "90", "90", "default", "90", "60", "default", "default", "default", "90", "38", "90", "default", "90", "default", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> signs = {"city", "8", "60", "84", "city", "city", "city", "90", "city", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> signs = {"city", "city", "city", "90", "city", "city", "city", "city", "default", "90", "60", "default", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> signs = {"60"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> signs = {"60", "city", "default", "2", "90", "60", "90", "default", "96", "60", "60", "60", "default", "60", "11", "60", "city", "city", "city", "60", "default", "city", "city", "city", "60", "city", "60", "city", "city", "21"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> signs = {"50", "default", "default", "60", "60", "60", "57", "45", "default", "default", "default", "city", "default", "60", "default", "default", "city", "city", "default", "default", "73", "city", "default", "default", "60", "75", "default", "city", "60", "60", "60", "60", "default", "city", "default", "57", "city", "60", "city", "city", "60", "default", "default", "12", "15", "60"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> signs = {"city", "city", "60", "29", "city", "90", "60", "70", "city", "13", "25", "90"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> signs = {"default", "94", "default", "city", "city", "default", "default", "7", "47", "city", "90", "default", "city", "city", "95", "75", "city", "default", "city", "default", "9", "city", "default", "city", "default", "city", "default", "city", "13", "38", "city", "90", "28", "city", "default", "default", "90", "60", "60", "90", "60", "79", "60"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> signs = {"default", "default", "default", "default", "85", "default", "4", "60", "default", "default", "city", "90", "default", "90", "default", "default", "58", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> signs = {"city", "city", "city", "city", "city", "default", "city", "city", "60", "city", "default", "default", "default", "city", "city", "city", "city", "default", "default", "city", "default", "default", "90", "default", "default", "default", "city", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> signs = {"90", "default", "90", "90", "default", "60", "60", "city", "60", "city", "60", "90", "default", "90", "default", "90", "16", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> signs = {"city", "city", "default", "city", "city", "default", "default", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> signs = {"city", "city", "90", "city", "58", "71", "city", "37", "60", "city", "60", "city", "city", "24", "city", "city", "60", "default", "city", "city", "90", "default", "82", "city", "60", "60", "city", "city", "city", "72", "60", "60", "60", "60", "60", "60", "10", "city", "city", "77"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> signs = {"default", "city", "default", "31", "14", "city", "city", "city", "default", "city", "default", "city", "city", "default", "default", "city", "90", "22", "city", "90", "15", "default", "default", "default", "default", "default", "default", "city", "city", "default", "default", "city", "city", "84", "default", "city", "city", "city", "100", "city", "90", "city", "city", "city", "default", "default", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> signs = {"55", "city", "90", "5", "90", "60", "city", "90", "default", "60", "90", "60"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> signs = {"default", "default", "city", "city", "60", "default", "default", "8", "90", "default", "default", "default", "default", "city", "60", "city", "3", "90", "default", "default", "city", "90", "default", "city", "city", "city", "default", "12", "default", "90", "city", "default", "city", "default", "default", "default", "42", "default", "default", "90", "default", "default", "52", "90", "90", "city", "default", "default", "31"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> signs = {"60", "90", "90", "city", "city", "90", "90", "default", "90", "82", "74", "63", "90", "90", "default", "90", "70", "90", "city", "city", "city", "93", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> signs = {"17", "city", "city", "97", "default", "city", "city", "90", "city", "city", "city", "city", "city", "11", "city", "city", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> signs = {"default", "default", "city", "city", "default", "default", "city", "city", "city", "city", "9", "14", "default", "city", "city", "city", "default", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> signs = {"default", "default", "16", "90", "60", "default", "default", "90", "default", "city", "default", "city", "default", "city", "90", "city", "default", "90", "city", "default", "90", "city", "city", "60", "city", "60", "city", "67", "city", "60", "41", "default", "city", "city", "city", "60", "90", "default", "90", "default", "21", "city", "90", "city", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> signs = {"default", "default", "60", "90", "city", "60", "60", "default", "60", "default", "default", "default", "default", "default", "60", "46", "default", "default", "22", "60", "default", "default", "default", "default", "default", "79"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> signs = {"20", "city", "city", "50", "60"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> signs = {"100"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> signs = {"city", "50", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> signs = {"default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> signs = {"city", "city", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> signs = {"city", "100", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> signs = {"city", "city", "city", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> signs = {"city", "98"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> signs = {"100", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> signs = {"city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> signs = {"city", "50", "city", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> signs = {"40"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> signs = {"34", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> signs = {"40", "70", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> signs = {"40", "80", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> signs = {"city", "city", "city", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> signs = {"100"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> signs = {"40", "70", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> signs = {"100", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> signs = {"1"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
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
    vector<string> signs = {"city", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> signs = {"30", "30"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> signs = {"60", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> signs = {"city", "city", "default"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> signs = {"90", "city"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> signs = {"city", "city", "70"};
    RussianSpeedLimits* pObj = new RussianSpeedLimits();
    clock_t start = clock();
    int result = pObj->getCurrentLimit(signs);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22695552&rd=10810&pm=8483
********************************************************************************
#include<iostream> 
#include<vector> 
#include<string> 
#include<algorithm> 
using namespace std; 
class RussianSpeedLimits 
{ 
public: 
  int change(string x) 
{ 
  int i,n,t=0; 
  n=x.size(); 
  for(i=0;i<n;i++) 
  t=10*t+x[i]-'0'; 
  return t; 
} 
  int getCurrentLimit(vector <string> signs) 
  { 
    int now=0,i,len,c=0; 
    len=signs.size(); 
    for(i=0;i<len;i++) 
    { 
      if(signs[i]=="city") 
      { 
        c++; 
        if(c%2==0) now=60; 
        else if(c%2!=0) now=90; 
      } 
      else if(signs[i]=="default") 
      { 
        if(c%2==0) now=60; 
        else now=90; 
      } 
      else 
        now=change(signs[i]); 
    } 
    return now; 
  } 
};

********************************************************************************
*******************************************************************************/