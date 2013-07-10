/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8010
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

class WhiteHats {
public:
    int whiteNumber(vector<int> count);
};

int WhiteHats::whiteNumber(vector<int> count) {
    int ret;
    return ret;
}


int test0() {
    vector<int> count = {2, 1, 1};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
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
    vector<int> count = {2, 2, 2};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> count = {0, 0};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> count = {1, 1, 1, 2};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> count = {10, 10};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> count = {7, 8, 7, 8, 8, 7, 8, 7, 8, 7, 8, 7, 7, 8, 7, 8};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
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
    vector<int> count = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
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
    vector<int> count = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 1, 2, 2, 2};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
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
    vector<int> count = {7, 8, 7, 8, 8, 7, 8, 7, 8, 7, 8, 7, 7, 8, 7, 8};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> count = {17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> count = {1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
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
    vector<int> count = {1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
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
    vector<int> count = {5, 5, 5, 5, 5, 5, 5};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> count = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
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
    vector<int> count = {49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> count = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> count = {28, 29, 29, 28, 28, 28, 28, 29, 29, 29, 29, 28, 28, 29, 28, 28, 28, 28, 29, 28, 28, 29, 29, 28, 29, 28, 28, 28, 28, 29, 28, 28, 29, 28, 28, 29, 29, 29, 28, 28, 28, 29, 28, 28, 29, 28, 29, 28, 29, 29};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> count = {19, 19, 19, 19, 18, 18, 18, 18, 18, 18, 18, 18, 19, 18, 18, 19, 19, 18, 19, 18, 19, 18, 19, 19, 18, 18, 18, 18, 19, 18, 18, 19};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> count = {18, 18, 17, 17, 17, 17, 18, 17, 17, 17, 17, 17, 17, 17, 18, 17, 17, 17, 18, 18, 17, 17, 18, 17, 17, 18};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> count = {7, 7, 7, 7, 7, 7, 7, 7};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> count = {8, 7, 8, 8, 7, 8, 7, 7, 8, 8, 8, 8, 8, 8, 7, 8, 7, 7, 8, 8, 7, 8};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> count = {29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 30};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> count = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> count = {20, 21, 21, 21, 20, 20, 21, 21, 21, 20, 21, 20, 20, 21, 21, 21, 20, 20, 20, 21, 20, 20, 20, 20, 20, 20, 21, 20, 20, 20, 20, 20, 20, 21, 21, 21, 21, 21};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> count = {19, 19, 20, 19, 19, 20, 19, 19, 20, 19, 20, 20, 19, 19, 20, 20, 20, 19, 19, 20, 20, 20, 19, 20, 20, 19, 19, 19, 19, 19, 19, 20, 20, 20, 19, 20, 19, 20};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> count = {4, 5, 5, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 5, 5, 5, 5, 5, 5, 4, 5, 5, 5, 5, 5, 5};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> count = {11, 12, 11, 11, 12, 11, 11, 11, 12, 11, 11, 11, 11, 11, 11, 12};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> count = {20, 21, 20, 20, 21, 21, 20, 21, 21, 21, 20, 21, 21, 20, 21, 21, 21, 21, 20, 20, 21, 20, 20, 20, 21, 20, 20, 21, 20, 21, 20, 20, 20, 20, 21, 20, 21, 20, 21, 21, 21, 20, 21, 21};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> count = {2, 2, 2};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> count = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
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
    vector<int> count = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
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
    vector<int> count = {26, 25, 25, 25, 26, 25, 25, 25, 26, 25, 25, 26, 25, 25, 25, 25, 25, 25, 25, 25, 26, 25, 25, 25, 25, 26, 26, 25, 26, 25, 25, 25, 25, 25, 26};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> count = {26, 26, 27, 26, 26, 26, 26, 26, 26, 27, 26, 27, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 27, 26, 26, 26, 26, 26, 26, 26, 26, 27, 27};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> count = {19, 19, 20, 19, 20, 20, 19, 19, 19, 19, 20, 20, 19, 19, 19, 20, 19, 19, 20, 19, 19, 19, 19, 19, 20, 20, 19, 20, 20, 19, 19, 20, 20};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> count = {4, 4, 3, 3, 3, 4, 3, 4, 4, 4};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> count = {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 17, 16, 16, 16, 16, 16, 16, 17};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> count = {20, 20, 20, 19, 19, 19, 20, 20, 20, 19, 20, 20, 19, 20, 20, 19, 19, 20, 20, 19, 19, 20, 20, 20, 19, 19, 20, 20, 19, 19, 19, 19, 19, 19, 19, 20, 19, 19, 20, 20};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> count = {3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> count = {10, 11, 11, 10, 10, 10, 10, 11, 11, 11, 10, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 10, 10, 10, 11, 10, 10, 11, 11, 11};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
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
    vector<int> count = {9, 9, 9, 9, 9, 9, 9, 8, 9, 9, 8, 9, 9, 9, 9, 8, 9, 9, 8, 9, 9, 9, 9, 9, 8, 9, 9, 8, 8, 8, 8, 9};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> count = {1, 1, 2};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> count = {27, 28, 27, 28, 28, 27, 28, 27, 27, 28, 28, 28, 27, 27, 27, 27, 28, 27, 27, 27, 27, 27, 27, 27, 27, 28, 27, 27, 27, 27, 27, 27, 28, 27, 27, 27, 28, 28, 27, 28, 27, 28};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> count = {41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 42, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 42, 41, 41, 41, 41, 41, 42, 42};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> count = {8, 8, 7, 8, 7, 8, 7, 8, 7, 7, 7, 8, 7, 7, 8};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> count = {18, 19, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 19, 18, 19, 18, 18, 19, 19, 19};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> count = {14, 13, 13, 13, 13, 13, 14, 13, 13, 13, 13, 13, 14, 14, 14, 14, 14, 13, 13, 13, 13, 14};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> count = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
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
    vector<int> count = {5, 5, 5, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 5, 5, 4, 5, 5, 5, 5, 5, 5, 4, 4, 5, 5, 5, 5, 5, 5};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> count = {9, 8, 8, 8, 9, 9, 8, 8, 8, 8, 9, 9, 9, 9, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 8, 9, 9};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> count = {12, 11, 11, 11, 11, 12, 12, 12, 11, 11, 12, 12, 12, 12, 11, 11, 12, 12, 12, 12, 12, 11, 11, 12, 12, 12, 12, 12, 11, 11, 12, 12, 12, 12, 12, 12, 12, 12, 12};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> count = {23, 22, 22, 22, 22, 23, 22, 22, 22, 22, 22, 22, 22, 22, 23, 22, 22, 22, 22, 22, 22, 23, 22, 22, 23, 22, 22, 23, 22, 23, 23, 0};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> count = {21, 21, 21, 21, 21, 22, 21, 22, 22, 22, 21, 22, 22, 21, 22, 22, 22, 21, 21, 22, 22, 21, 22, 21, 22, 22, 22, 22, 21, 21, 21, 21, 22, 21, 21, 21, 22, 21, 21, 22, 22, 22, 21, 21};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
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
    vector<int> count = {4, 4, 4, 6, 4, 4, 6};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
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
    vector<int> count = {2, 2, 2, 2, 4, 4};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> count = {5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 0};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> count = {2, 2};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> count = {1, 1, 1, 1, 1, 1, 1, 1, 8};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> count = {34, 34, 33, 33, 33, 33, 34, 34, 33, 34, 33, 33, 34, 34, 33, 34, 33, 33, 34, 33, 33, 33, 33, 33, 34, 33, 33, 33, 33, 34, 32, 33, 33, 33, 33, 33, 33, 33, 34, 34, 34, 33, 33, 33, 33, 33, 33, 33, 34, 34};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> count = {25, 25, 25, 25, 26, 26, 26, 26, 26, 26, 26, 25, 25, 25, 26, 25, 25, 26, 25, 25, 25, 26, 25, 25, 26, 25, 26, 25, 25, 26, 25, 26, 26, 26, 25, 26, 25, 25, 26, 25, 26, 26, 25, 25, 26, 25, 26, 26, 26};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> count = {0, 0};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> count = {1, 1};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
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
    vector<int> count = {1, 0};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> count = {0, 0, 1};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> count = {0, 2};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> count = {4, 4, 3, 5, 4, 5};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> count = {4, 3, 1, 0, 0};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> count = {3, 3, 3, 3, 3};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> count = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> count = {2, 2, 2};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> count = {5, 0, 0, 0, 0, 0};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> count = {5, 5, 5, 5, 5, 5, 5, 5};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
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
    vector<int> count = {1, 1, 1, 1, 2, 2};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> count = {1, 1, 1, 2};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
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
    vector<int> count = {0, 0, 1, 2};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> count = {3, 3, 3, 4, 4, 4, 4, 3};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
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
    vector<int> count = {1, 1, 1, 1, 1, 1, 1};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
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
    vector<int> count = {2, 2, 0};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
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
    vector<int> count = {0, 0, 0, 3};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> count = {3, 3, 3, 4, 4, 4, 4};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
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
    vector<int> count = {1, 1, 1, 1, 1, 1};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> count = {1, 1, 1, 3};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> count = {1, 1, 2};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
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

int test82() {
    vector<int> count = {0, 1, 2, 0};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> count = {2, 2, 2, 2, 2, 2};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> count = {2, 2, 2, 2, 2, 2, 2};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> count = {25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> count = {2, 2, 2, 2};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> count = {1, 1, 3, 4};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> count = {1, 0};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> count = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> count = {4, 4, 4, 4, 4, 5, 5, 5};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> count = {3, 3, 2, 3, 1};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> count = {2, 2, 2, 2, 2, 2, 1};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> count = {1, 1, 1};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> count = {0, 1};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> count = {3, 3, 3, 3, 4, 4, 4};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> count = {3, 0, 1};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> count = {1, 2, 3};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
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
    vector<int> count = {3, 3, 0, 0};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> count = {1, 0, 3, 0, 0, 0};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> count = {3, 3, 3, 3, 3, 3};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
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
    vector<int> count = {2, 0, 0};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> count = {1, 4, 1, 3};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
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
    vector<int> count = {0, 1, 2};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> count = {2, 2, 2, 2, 3, 4};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> count = {5, 4, 4, 4, 4};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> count = {1, 2};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> count = {4, 4, 4, 4};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> count = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> count = {2, 2, 2, 0};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> count = {0, 0, 2, 2};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> count = {3, 3, 3, 3, 3, 3, 3, 3};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> count = {0, 0, 2};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> count = {4, 0, 0, 0, 0};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> count = {2, 2};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> count = {2, 3, 1};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> count = {2, 2, 2, 1, 1};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> count = {10, 11};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> count = {4, 1, 1, 1, 1};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> count = {2, 2, 1, 1, 1};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> count = {2, 1, 1, 3, 3};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> count = {1, 1};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> count = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> count = {1, 1, 2, 3};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
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
    vector<int> count = {0, 1, 2, 2, 3};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> count = {6, 10, 6, 6, 6, 6, 6, 5, 5, 6};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> count = {1, 2, 3, 0};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> count = {1, 2, 3, 3, 3, 3, 3};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> count = {0, 1, 1};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
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
    vector<int> count = {0, 1, 1, 1, 1};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> count = {1, 1, 2, 2, 2, 2, 2};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
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

int test131() {
    vector<int> count = {1, 0, 1};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> count = {2, 0};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> count = {2, 2, 2, 2, 2};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> count = {3, 3, 3, 3, 3, 3, 3};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> count = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> count = {4, 0, 0};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> count = {0, 0, 0, 0, 1};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> count = {0, 2, 2, 2, 2};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> count = {3, 3, 2, 2, 2};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
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
    vector<int> count = {1, 0, 1, 1};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> count = {2, 1, 2, 3};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> count = {1, 1, 3};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> count = {2, 3, 2, 2, 1};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> count = {0, 0, 0, 0, 12};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> count = {2, 2, 2, 2, 2, 5};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> count = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> count = {1, 1, 3, 1, 2};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> count = {3, 2, 1, 3};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> count = {0, 1, 1, 1};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> count = {3, 3, 3, 3, 4};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> count = {49, 49, 49, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> count = {4, 4, 4, 4, 4, 5, 5};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> count = {3, 3, 3, 3, 3, 5};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> count = {3, 4, 4, 4, 3};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> count = {2, 4, 3, 2, 1};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> count = {1, 2, 3, 4, 2};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> count = {2, 1, 2};
    WhiteHats* pObj = new WhiteHats();
    clock_t start = clock();
    int result = pObj->whiteNumber(count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20286298&rd=10773&pm=8010
********************************************************************************
#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
 
struct WhiteHats {
  int whiteNumber(vector<int> c) {
    int n = c.size();
    sort(c.begin(), c.end());
    for (int w = 0; w <= n; w++) {
      vector<int> d;
      for (int i = 0; i < w; i++) d.push_back(w-1);
      for (int i = w; i < n; i++) d.push_back(w);
      sort(d.begin(), d.end());
      if (c == d) return w;
    }
    return -1;
  }
};

********************************************************************************
*******************************************************************************/