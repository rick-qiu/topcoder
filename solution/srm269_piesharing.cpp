/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4620
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

class PieSharing {
public:
    int share(vector<int> pieces);
};

int PieSharing::share(vector<int> pieces) {
    int ret;
    return ret;
}


int test0() {
    vector<int> pieces = {33, 33, 34};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> pieces = {5, 17, 22, 34, 18, 4};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> pieces = {11, 1, 1, 85, 1, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> pieces = {6, 13, 14, 4, 14, 10, 1, 20, 18};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> pieces = {1, 2, 13, 1, 1, 44, 1, 36, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> pieces = {1, 1, 1, 1, 1, 1, 1, 53, 1, 1, 1, 1, 1, 1, 1, 1, 1, 15, 1, 1, 1, 1, 1, 11};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> pieces = {1, 12, 1, 1, 25, 46, 1, 1, 12};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> pieces = {69, 28, 3};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> pieces = {47, 5, 48};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> pieces = {1, 9, 1, 1, 1, 18, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 7, 14, 1, 18, 13};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> pieces = {1, 1, 1, 1, 1, 13, 18, 55, 9};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> pieces = {27, 35, 38};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> pieces = {24, 1, 75};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> pieces = {38, 61, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> pieces = {1, 5, 3, 8, 13, 11, 11, 10, 6, 14, 15, 3};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> pieces = {10, 6, 9, 5, 5, 9, 10, 8, 11, 10, 5, 12};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> pieces = {4, 12, 13, 3, 15, 11, 2, 14, 3, 9, 10, 4};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> pieces = {37, 33, 30};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> pieces = {2, 2, 3, 6, 7, 2, 2, 6, 7, 7, 6, 4, 6, 8, 4, 6, 3, 3, 2, 7, 7};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> pieces = {9, 6, 4, 7, 6, 14, 4, 14, 4, 8, 13, 11};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> pieces = {10, 46, 44};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> pieces = {23, 27, 50};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> pieces = {6, 13, 14, 4, 14, 10, 1, 20, 18};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> pieces = {12, 3, 12, 6, 8, 7, 3, 3, 6, 5, 3, 9, 8, 7, 8};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> pieces = {2, 1, 5, 5, 2, 1, 2, 5, 5, 3, 5, 3, 7, 3, 5, 1, 3, 7, 9, 5, 3, 6, 2, 1, 5, 3, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> pieces = {4, 3, 1, 7, 4, 2, 7, 4, 3, 5, 2, 5, 2, 4, 5, 6, 2, 5, 8, 4, 5, 2, 2, 3, 3, 1, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> pieces = {6, 6, 5, 2, 1, 2, 6, 1, 7, 6, 6, 5, 7, 3, 1, 3, 1, 4, 7, 2, 3, 2, 5, 4, 2, 1, 2};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> pieces = {11, 2, 5, 5, 1, 4, 4, 3, 2, 7, 6, 2, 4, 4, 1, 4, 4, 1, 5, 2, 2, 4, 5, 3, 5, 1, 3};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> pieces = {4, 5, 3, 3, 5, 6, 5, 1, 5, 3, 1, 6, 5, 3, 4, 3, 4, 2, 5, 5, 4, 2, 4, 2, 4, 5, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> pieces = {6, 7, 5, 1, 2, 1, 2, 1, 7, 4, 6, 1, 4, 3, 2, 2, 3, 5, 5, 5, 1, 7, 2, 2, 8, 3, 5};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> pieces = {7, 6, 2, 3, 3, 3, 7, 5, 8, 3, 3, 5, 3, 2, 5, 1, 3, 1, 4, 4, 2, 5, 5, 7, 1, 1, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> pieces = {3, 5, 4, 6, 1, 5, 4, 3, 3, 6, 1, 1, 4, 2, 7, 6, 1, 4, 7, 4, 2, 4, 3, 2, 5, 6, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> pieces = {4, 5, 3, 4, 2, 3, 3, 3, 4, 3, 3, 3, 10, 3, 3, 1, 4, 2, 8, 2, 6, 6, 2, 3, 6, 2, 2};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> pieces = {8, 1, 2, 3, 7, 5, 4, 2, 5, 5, 4, 2, 4, 1, 1, 2, 3, 5, 6, 4, 7, 4, 5, 1, 2, 5, 2};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> pieces = {1, 2, 1, 1, 6, 1, 1, 1, 5, 3, 9, 13, 1, 5, 5, 1, 11, 1, 11, 2, 1, 5, 3, 7, 1, 1, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> pieces = {1, 9, 1, 1, 4, 11, 1, 4, 9, 1, 7, 7, 1, 1, 1, 1, 8, 10, 1, 2, 1, 1, 1, 1, 1, 5, 9};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> pieces = {1, 4, 8, 1, 1, 2, 5, 1, 6, 1, 2, 3, 1, 12, 4, 1, 3, 8, 1, 1, 3, 2, 5, 11, 1, 2, 10};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> pieces = {1, 1, 3, 1, 6, 1, 1, 11, 10, 1, 8, 1, 6, 9, 1, 1, 1, 7, 1, 4, 1, 6, 3, 1, 1, 7, 6};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> pieces = {1, 1, 1, 1, 1, 7, 7, 1, 1, 1, 2, 8, 1, 7, 11, 2, 1, 1, 1, 6, 4, 1, 14, 4, 7, 1, 7};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> pieces = {1, 3, 7, 1, 5, 1, 3, 1, 8, 1, 4, 1, 1, 5, 1, 1, 8, 1, 1, 1, 7, 6, 6, 7, 1, 8, 10};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> pieces = {1, 1, 1, 1, 1, 3, 9, 7, 8, 5, 8, 1, 6, 7, 1, 1, 7, 5, 1, 1, 12, 1, 1, 1, 1, 1, 8};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> pieces = {1, 1, 1, 3, 1, 5, 4, 6, 7, 1, 3, 9, 4, 4, 6, 8, 1, 1, 1, 3, 14, 1, 1, 3, 1, 2, 8};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> pieces = {1, 2, 8, 1, 3, 11, 1, 1, 9, 1, 9, 6, 1, 9, 1, 5, 2, 2, 2, 2, 1, 6, 1, 2, 1, 6, 6};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> pieces = {5, 1, 1, 7, 1, 2, 1, 2, 1, 1, 6, 5, 1, 5, 4, 7, 15, 10, 1, 2, 6, 4, 6, 1, 2, 1, 2};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> pieces = {74, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> pieces = {1, 1, 1, 1, 1, 1, 1, 74, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> pieces = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 74};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> pieces = {1, 1, 1, 1, 1, 1, 2, 72, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> pieces = {4, 4, 5, 4, 3, 4, 5, 3, 4, 4, 3, 3, 4, 3, 3, 5, 4, 3, 4, 3, 4, 3, 4, 3, 4, 4, 3};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> pieces = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> pieces = {1, 1, 98};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> pieces = {1, 98, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> pieces = {98, 1, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> pieces = {1, 1, 1, 1, 1, 1, 22, 32, 22, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> pieces = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 2};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> pieces = {4, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> pieces = {3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> pieces = {3, 4, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> pieces = {4, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> pieces = {53, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> pieces = {2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 52};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> pieces = {21, 17, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 17};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> pieces = {25, 15, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 15};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> pieces = {25, 13, 3, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 14};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> pieces = {25, 13, 2, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 14};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> pieces = {25, 12, 4, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 14};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> pieces = {5, 2, 1, 2, 1, 1, 2, 2, 1, 1, 2, 4, 1, 1, 2, 4, 5, 3, 3, 4, 4, 1, 1, 2, 4, 1, 1, 2, 2, 1, 4, 1, 1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 3, 5, 3, 1, 1, 4};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> pieces = {3, 1, 1, 6, 1, 2, 1, 1, 1, 4, 5, 2, 4, 4, 3, 3, 1, 1, 4, 5, 1, 3, 1, 1, 2, 2, 3, 1, 2, 1, 2, 2, 2, 1, 4, 4, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> pieces = {4, 2, 1, 2, 4, 1, 2, 5, 1, 5, 1, 1, 3, 1, 4, 1, 1, 1, 1, 1, 3, 1, 1, 1, 1, 1, 1, 4, 1, 1, 2, 3, 1, 6, 1, 1, 5, 1, 4, 2, 2, 3, 3, 1, 2, 1, 2, 3};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> pieces = {4, 4, 2, 1, 1, 1, 1, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 1, 3, 1, 2, 2, 4, 1, 2, 1, 4, 1, 3, 3, 1, 1, 5, 3, 4, 4, 1, 3, 4, 5, 2, 1, 2, 1, 2};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> pieces = {4, 1, 1, 1, 1, 1, 1, 5, 1, 2, 4, 3, 1, 1, 2, 1, 4, 1, 1, 1, 4, 1, 1, 1, 1, 1, 6, 4, 1, 1, 3, 5, 2, 3, 1, 1, 2, 3, 3, 1, 1, 1, 4, 1, 3, 1, 5, 2};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> pieces = {4, 2, 4, 4, 3, 1, 2, 2, 3, 2, 1, 1, 1, 1, 1, 6, 1, 1, 1, 1, 5, 5, 1, 3, 3, 3, 1, 1, 1, 1, 1, 3, 1, 1, 1, 1, 1, 1, 1, 5, 1, 1, 3, 5, 1, 1, 1, 5};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> pieces = {4, 3, 3, 5, 3, 2, 1, 1, 1, 5, 4, 1, 1, 1, 2, 1, 5, 3, 1, 1, 3, 1, 3, 2, 1, 3, 4, 1, 1, 1, 1, 2, 3, 4, 1, 2, 1, 1, 1, 1, 3, 1, 1, 1, 1, 4, 1, 3};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> pieces = {2, 1, 4, 1, 1, 2, 1, 1, 2, 4, 3, 1, 1, 1, 1, 5, 1, 2, 3, 1, 2, 1, 3, 2, 1, 1, 5, 5, 1, 1, 5, 3, 3, 4, 3, 2, 1, 4, 2, 1, 1, 1, 2, 1, 1, 1, 1, 4};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> pieces = {4, 1, 3, 1, 6, 1, 1, 4, 1, 2, 1, 3, 1, 1, 1, 1, 5, 1, 1, 1, 1, 4, 1, 1, 5, 3, 4, 1, 4, 1, 2, 1, 1, 2, 1, 2, 4, 1, 4, 2, 1, 3, 3, 1, 1, 1, 3, 2};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
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
    vector<int> pieces = {5, 2, 1, 1, 1, 1, 1, 1, 1, 1, 5, 4, 1, 1, 2, 4, 5, 3, 3, 4, 4, 1, 1, 1, 4, 1, 1, 1, 1, 1, 4, 1, 1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 3, 5, 3, 1, 1, 7};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> pieces = {1, 1, 1, 2, 4, 2, 3, 3, 3, 1, 1, 5, 3, 2, 2, 1, 1, 2, 2, 1, 2, 2, 3, 6, 1, 1, 3, 3, 2, 1, 2, 1, 3, 1, 3, 4, 1, 3, 1, 2, 2, 3, 1, 2, 1, 2, 1, 2};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> pieces = {3, 2, 2, 1, 2, 4, 5, 3, 2, 4, 5, 2, 3, 1, 2, 3, 3, 1, 4, 2, 4, 4, 1, 1, 2, 3, 3, 3, 4, 3, 3, 3, 3, 1, 6, 2};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> pieces = {4, 2, 2, 1, 2, 3, 1, 4, 2, 2, 3, 2, 2, 1, 2, 2, 3, 2, 1, 3, 2, 2, 5, 2, 1, 1, 2, 2, 2, 1, 2, 2, 1, 3, 2, 1, 3, 1, 2, 3, 3, 4, 3, 4, 2};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> pieces = {3, 2, 5, 3, 7, 5, 2, 3, 4, 3, 3, 3, 2, 3, 1, 4, 2, 3, 3, 1, 4, 1, 2, 1, 1, 6, 3, 4, 2, 4, 4, 4, 2};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> pieces = {2, 1, 5, 3, 2, 1, 2, 4, 4, 3, 3, 1, 5, 1, 1, 4, 5, 3, 2, 2, 1, 2, 3, 1, 4, 2, 1, 2, 2, 3, 3, 1, 1, 2, 2, 4, 2, 2, 1, 4, 1, 2};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> pieces = {1, 2, 1, 1, 3, 1, 1, 2, 3, 1, 1, 1, 2, 1, 1, 2, 2, 3, 2, 2, 3, 2, 3, 3, 1, 2, 2, 2, 1, 2, 2, 4, 4, 1, 4, 3, 3, 4, 2, 1, 1, 1, 5, 1, 3, 2, 2, 3};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> pieces = {5, 2, 1, 2, 2, 2, 2, 2, 2, 3, 1, 2, 2, 2, 1, 2, 1, 1, 1, 3, 2, 3, 1, 1, 4, 1, 2, 3, 2, 4, 4, 3, 1, 3, 3, 4, 1, 4, 1, 1, 4, 1, 2, 4, 2};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> pieces = {2, 1, 2, 5, 4, 3, 5, 5, 4, 4, 1, 3, 4, 4, 3, 5, 4, 4, 2, 4, 3, 2, 5, 3, 3, 1, 4, 4, 2, 4};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> pieces = {2, 2, 2, 1, 4, 3, 2, 2, 4, 4, 4, 2, 2, 5, 2, 2, 1, 4, 1, 1, 2, 1, 3, 1, 2, 3, 1, 1, 2, 2, 2, 2, 4, 2, 4, 3, 2, 4, 3, 2, 1, 3};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> pieces = {1, 3, 1, 2, 1, 4, 2, 2, 4, 4, 2, 1, 2, 3, 2, 2, 3, 4, 3, 2, 2, 1, 3, 1, 2, 3, 3, 2, 2, 1, 3, 2, 3, 4, 2, 3, 2, 2, 6, 1, 3, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> pieces = {5, 5, 3, 4, 3, 2, 5, 4, 2, 3, 3, 1, 3, 3, 4, 7, 3, 2, 4, 3, 6, 1, 2, 4, 2, 4, 2, 2, 3, 5};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> pieces = {4, 2, 1, 3, 3, 2, 3, 1, 2, 3, 1, 3, 3, 2, 1, 3, 2, 4, 2, 4, 1, 1, 3, 2, 2, 6, 1, 2, 1, 1, 1, 2, 1, 3, 1, 2, 1, 2, 3, 5, 2, 2, 1, 2, 3};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> pieces = {2, 1, 3, 1, 3, 2, 2, 1, 4, 2, 2, 3, 4, 2, 2, 2, 1, 3, 2, 1, 2, 1, 1, 3, 2, 3, 5, 2, 2, 2, 1, 1, 6, 3, 2, 1, 5, 5, 3, 2, 2, 3};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> pieces = {2, 2, 3, 4, 4, 3, 2, 2, 3, 3, 3, 3, 1, 2, 2, 3, 4, 1, 3, 3, 4, 5, 2, 1, 1, 1, 2, 3, 3, 4, 3, 2, 3, 1, 3, 3, 2, 2, 2};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> pieces = {5, 1, 2, 2, 3, 1, 1, 3, 2, 1, 4, 4, 2, 7, 3, 3, 4, 2, 1, 2, 3, 1, 6, 1, 1, 1, 3, 2, 3, 2, 1, 3, 2, 5, 5, 3, 2, 2, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> pieces = {3, 2, 2, 3, 5, 2, 1, 4, 4, 2, 3, 2, 3, 2, 3, 1, 2, 6, 2, 3, 1, 2, 4, 1, 3, 2, 2, 3, 3, 1, 4, 1, 2, 1, 1, 1, 3, 2, 1, 4, 2, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> pieces = {3, 4, 4, 5, 3, 2, 2, 1, 3, 3, 4, 3, 3, 4, 2, 4, 2, 2, 4, 2, 1, 3, 2, 2, 3, 3, 4, 2, 3, 3, 1, 1, 3, 3, 5, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> pieces = {3, 1, 2, 4, 1, 1, 1, 2, 2, 2, 2, 2, 4, 3, 5, 2, 3, 4, 2, 3, 4, 2, 1, 1, 2, 3, 1, 3, 1, 1, 3, 3, 1, 4, 3, 1, 1, 3, 3, 2, 3, 5};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> pieces = {2, 3, 3, 1, 3, 3, 1, 4, 2, 2, 2, 2, 4, 2, 4, 2, 4, 1, 2, 5, 2, 1, 3, 3, 2, 3, 3, 1, 2, 3, 1, 1, 1, 2, 2, 4, 2, 3, 2, 4, 2, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> pieces = {3, 1, 2, 1, 1, 2, 4, 2, 2, 1, 1, 5, 3, 4, 2, 2, 2, 2, 1, 3, 2, 3, 4, 2, 2, 2, 2, 6, 3, 2, 2, 3, 2, 2, 1, 3, 3, 2, 3, 2, 1, 4};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> pieces = {5, 7, 1, 2, 1, 1, 11, 1, 5, 1, 1, 1, 1, 1, 6, 5, 1, 6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 9, 1, 1, 11, 1, 1, 1, 1, 8};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> pieces = {1, 1, 1, 1, 6, 1, 1, 1, 1, 1, 1, 1, 4, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 6, 1, 4, 1, 3, 10, 1, 1, 10, 3, 1, 11, 1, 1, 1, 1, 1, 1, 1, 1, 7};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> pieces = {1, 1, 1, 1, 4, 13, 1, 2, 1, 1, 1, 1, 5, 1, 1, 15, 9, 1, 1, 9, 7, 1, 4, 1, 1, 6, 1, 7, 1, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> pieces = {6, 1, 1, 1, 1, 1, 1, 1, 7, 9, 8, 1, 1, 1, 1, 1, 1, 8, 1, 1, 1, 1, 10, 1, 1, 5, 1, 4, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 1, 1, 1, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
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
    vector<int> pieces = {9, 11, 7, 1, 1, 1, 1, 1, 1, 1, 7, 1, 8, 1, 1, 1, 1, 8, 1, 1, 1, 9, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 11, 3, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> pieces = {1, 8, 21, 1, 1, 4, 1, 1, 1, 3, 1, 1, 1, 1, 11, 1, 1, 1, 1, 1, 1, 9, 1, 2, 1, 1, 14, 1, 1, 4, 1, 1, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> pieces = {1, 1, 1, 11, 1, 1, 9, 1, 1, 1, 1, 1, 1, 1, 3, 10, 9, 1, 1, 1, 10, 1, 4, 1, 1, 3, 7, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> pieces = {1, 1, 8, 1, 10, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 11, 8, 1, 6, 8, 1, 1, 1, 1, 4, 9, 1, 9, 1, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> pieces = {9, 8, 1, 1, 1, 1, 1, 4, 1, 9, 4, 1, 1, 1, 2, 2, 1, 1, 1, 3, 1, 3, 1, 1, 1, 1, 1, 10, 1, 1, 1, 1, 1, 8, 14, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> pieces = {1, 1, 4, 1, 1, 1, 1, 1, 1, 9, 1, 5, 1, 1, 10, 1, 7, 1, 1, 1, 1, 1, 1, 6, 1, 1, 5, 9, 1, 5, 1, 6, 1, 1, 1, 6, 1, 1, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> pieces = {2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> pieces = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 53};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> pieces = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 6};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> pieces = {1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 3, 3, 3, 3};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> pieces = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> pieces = {31, 30, 3, 3, 3, 30};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
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
    vector<int> pieces = {29, 30, 29, 4, 4, 4};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> pieces = {2, 1, 4, 2, 1, 1, 1, 3, 1, 1, 2, 1, 2, 1, 4, 3, 4, 1, 4, 1, 1, 3, 2, 3, 3, 2, 4, 1, 1, 3, 1, 1, 2, 1, 2, 1, 2, 2, 1, 1, 4, 4, 2, 4, 2, 2, 4, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> pieces = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 5, 4, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> pieces = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 21, 22, 12, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> pieces = {7, 7, 7, 19, 20, 19, 7, 7, 7};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> pieces = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 4};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> pieces = {1, 1, 5, 1, 6, 1, 5, 1, 1, 3, 4, 1, 5, 1, 3, 1, 3, 4, 1, 1, 1, 1, 1, 4, 4, 4, 4, 4, 1, 1, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> pieces = {1, 21, 41, 35, 1, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> pieces = {7, 5, 5, 1, 23, 24, 22, 5, 8};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> pieces = {27, 40, 27, 2, 2, 2};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> pieces = {30, 35, 30, 2, 2, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> pieces = {10, 1, 1, 1, 2, 1, 1, 1, 3, 1, 1, 1, 4, 8, 1, 1, 1, 1, 1, 5, 1, 1, 1, 1, 6, 1, 1, 1, 1, 7, 1, 1, 1, 1, 8, 1, 1, 1, 1, 9, 1, 1, 1, 1, 1, 1, 1, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> pieces = {32, 33, 32, 1, 1, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> pieces = {1, 1, 1, 31, 1, 32, 1, 31, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> pieces = {40, 27, 1, 1, 1, 30};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> pieces = {1, 2, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 2, 1, 2, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 43};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> pieces = {1, 3, 3, 1, 30, 1, 30, 1, 30};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
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
    vector<int> pieces = {6, 27, 28, 27, 6, 6};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> pieces = {1, 25, 47, 25, 1, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> pieces = {5, 5, 5, 5, 30, 5, 20, 5, 20};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> pieces = {30, 35, 30, 1, 2, 2};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
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
    vector<int> pieces = {1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 1, 5, 2, 1, 1, 5, 5, 5};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> pieces = {10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 8, 1};
    PieSharing* pObj = new PieSharing();
    clock_t start = clock();
    int result = pObj->share(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=8002&pm=4620
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define REP(i,n) for(int _n=n, i=0;i<_n;++i)
typedef vector<int> VI;
template<class T> inline int size(const T&c) { return c.size(); }
 
int n;
VI pieces;
int tab[50][50];
 
struct PieSharing {
 
  // MAIN
  int share(vector <int> pieces2) {
    pieces = pieces2;
    n = size(pieces);
    REP(i,n) tab[0][i] = 0;
    for(int len=3;len<=n;len+=3) REP(st,n) {
      int v = 0;
      for(int a=0;a<len;a+=3)
        for(int b=a+1;b<len;b+=3)
          for(int c=b+1;c<len;c+=3) {
            v >?= tab[a][st]+tab[b-a-1][(st+a+1)%n]+
              tab[c-b-1][(st+b+1)%n]+tab[len-c-1][(st+c+1)%n]+
              pieces[(st+b)%n];
          }
      tab[len][st] = v;
    }
    int res = 0;
    REP(i,n) res>?= tab[n][i];
    return res;
  }
 
};
 
// Powered by FileEdit
 
// Powered by TomekAI
// Powered by TZTester 1.01 [25-Feb-2003]
 
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/