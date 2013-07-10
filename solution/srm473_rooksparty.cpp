/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10980
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

class RooksParty {
public:
    int countArrangements(int rows, int columns, vector<int> counts);
};

int RooksParty::countArrangements(int rows, int columns, vector<int> counts) {
    int ret;
    return ret;
}


int test0() {
    int rows = 2;
    int columns = 3;
    vector<int> counts = {1, 1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int rows = 5;
    int columns = 2;
    vector<int> counts = {3};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int rows = 5;
    int columns = 2;
    vector<int> counts = {1, 1, 1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
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
    int rows = 8;
    int columns = 8;
    vector<int> counts = {1, 1, 1, 1, 1, 1, 1, 1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 625702391;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int rows = 8;
    int columns = 8;
    vector<int> counts = {2, 2, 2, 2};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 394476764;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int rows = 30;
    int columns = 30;
    vector<int> counts = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 468830579;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int rows = 30;
    int columns = 30;
    vector<int> counts = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 935915834;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int rows = 5;
    int columns = 5;
    vector<int> counts = {2, 2, 1, 1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 7200;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int rows = 30;
    int columns = 30;
    vector<int> counts = {1, 841};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 900;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int rows = 30;
    int columns = 30;
    vector<int> counts = {397, 94};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 803311538;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int rows = 30;
    int columns = 30;
    vector<int> counts = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 267002851;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int rows = 4;
    int columns = 2;
    vector<int> counts = {3, 1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int rows = 29;
    int columns = 30;
    vector<int> counts = {1, 2, 3, 4, 5, 6, 7, 8, 9, 80};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 622925491;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int rows = 30;
    int columns = 29;
    vector<int> counts = {2, 3, 4, 5, 6, 7, 8, 9, 10, 14};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 363644201;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int rows = 26;
    int columns = 29;
    vector<int> counts = {1, 2, 1, 3, 1, 2, 1, 4, 1, 2};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 915225757;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int rows = 1;
    int columns = 1;
    vector<int> counts = {1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
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
    int rows = 2;
    int columns = 2;
    vector<int> counts = {1, 1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int rows = 2;
    int columns = 2;
    vector<int> counts = {1, 2};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
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
    int rows = 2;
    int columns = 2;
    vector<int> counts = {1, 1, 1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
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
    int rows = 2;
    int columns = 2;
    vector<int> counts = {1, 3};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
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
    int rows = 2;
    int columns = 2;
    vector<int> counts = {3};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
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
    int rows = 2;
    int columns = 2;
    vector<int> counts = {4};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
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
    int rows = 1;
    int columns = 7;
    vector<int> counts = {1, 1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
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
    int rows = 7;
    int columns = 1;
    vector<int> counts = {1, 1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int rows = 7;
    int columns = 1;
    vector<int> counts = {3};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int rows = 1;
    int columns = 15;
    vector<int> counts = {13};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 105;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int rows = 30;
    int columns = 30;
    vector<int> counts = {87, 367};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 562387422;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int rows = 30;
    int columns = 30;
    vector<int> counts = {94, 80, 96};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 145737436;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int rows = 30;
    int columns = 29;
    vector<int> counts = {45, 32, 37, 14};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 250052181;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int rows = 27;
    int columns = 28;
    vector<int> counts = {32, 41, 14, 52, 23, 12};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
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
    int rows = 27;
    int columns = 29;
    vector<int> counts = {32, 11, 14, 32, 23, 12};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 767323759;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int rows = 27;
    int columns = 27;
    vector<int> counts = {3, 3, 3, 3, 3, 3, 3, 3, 3};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 991794313;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int rows = 27;
    int columns = 27;
    vector<int> counts = {9, 9, 9, 9, 9, 9, 9, 9, 9};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 319751833;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int rows = 27;
    int columns = 27;
    vector<int> counts = {9, 9, 9, 9, 9, 9, 9, 9, 9, 1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
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
    int rows = 13;
    int columns = 24;
    vector<int> counts = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int rows = 17;
    int columns = 23;
    vector<int> counts = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 774314182;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int rows = 30;
    int columns = 30;
    vector<int> counts = {29, 28, 1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 704560351;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int rows = 30;
    int columns = 30;
    vector<int> counts = {470};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 290656099;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int rows = 30;
    int columns = 19;
    vector<int> counts = {98, 5};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 742846778;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int rows = 12;
    int columns = 10;
    vector<int> counts = {5};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 190578024;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int rows = 19;
    int columns = 15;
    vector<int> counts = {1, 3, 1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 453925457;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int rows = 2;
    int columns = 20;
    vector<int> counts = {1, 2};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 6840;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int rows = 4;
    int columns = 30;
    vector<int> counts = {14, 1, 2};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 767537416;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int rows = 26;
    int columns = 2;
    vector<int> counts = {14};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 966328688;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int rows = 15;
    int columns = 4;
    vector<int> counts = {1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int rows = 26;
    int columns = 1;
    vector<int> counts = {12};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 9657700;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int rows = 12;
    int columns = 22;
    vector<int> counts = {2, 1, 1, 2};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 863097707;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int rows = 25;
    int columns = 29;
    vector<int> counts = {2, 17};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 33965938;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int rows = 30;
    int columns = 29;
    vector<int> counts = {7, 14, 68};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 940560931;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int rows = 19;
    int columns = 7;
    vector<int> counts = {3};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 383306;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int rows = 13;
    int columns = 8;
    vector<int> counts = {2, 1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 362544;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int rows = 20;
    int columns = 20;
    vector<int> counts = {12, 3};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 230276532;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int rows = 16;
    int columns = 16;
    vector<int> counts = {3, 1, 1, 7};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 993895993;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int rows = 22;
    int columns = 22;
    vector<int> counts = {5, 7, 3};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 128104149;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int rows = 13;
    int columns = 4;
    vector<int> counts = {2, 4};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 20442708;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int rows = 28;
    int columns = 14;
    vector<int> counts = {9, 4};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 546127733;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int rows = 4;
    int columns = 23;
    vector<int> counts = {6};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 713068356;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int rows = 27;
    int columns = 19;
    vector<int> counts = {1, 2, 10, 2};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 949183484;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int rows = 12;
    int columns = 26;
    vector<int> counts = {1, 3, 6};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 59838359;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int rows = 23;
    int columns = 24;
    vector<int> counts = {10};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 329551174;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int rows = 14;
    int columns = 19;
    vector<int> counts = {9, 2, 1, 1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 106818656;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int rows = 19;
    int columns = 28;
    vector<int> counts = {8, 1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 240141622;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int rows = 24;
    int columns = 6;
    vector<int> counts = {8};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 79326324;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int rows = 3;
    int columns = 5;
    vector<int> counts = {6};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 5005;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int rows = 17;
    int columns = 11;
    vector<int> counts = {2};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 17391;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int rows = 23;
    int columns = 8;
    vector<int> counts = {1, 1, 1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 3570336;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int rows = 10;
    int columns = 23;
    vector<int> counts = {57};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 761240178;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int rows = 22;
    int columns = 9;
    vector<int> counts = {6, 2};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 237115933;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int rows = 2;
    int columns = 29;
    vector<int> counts = {2};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 1653;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int rows = 19;
    int columns = 7;
    vector<int> counts = {1, 1, 1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 1220940;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int rows = 26;
    int columns = 15;
    vector<int> counts = {62};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 658858839;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int rows = 11;
    int columns = 8;
    vector<int> counts = {3, 18};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 227688066;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int rows = 13;
    int columns = 10;
    vector<int> counts = {1, 2, 1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 53745120;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int rows = 10;
    int columns = 9;
    vector<int> counts = {5};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 43949268;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int rows = 16;
    int columns = 5;
    vector<int> counts = {9, 5};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 628962191;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int rows = 23;
    int columns = 5;
    vector<int> counts = {1, 1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 10120;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int rows = 16;
    int columns = 12;
    vector<int> counts = {3, 4};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 58378339;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int rows = 28;
    int columns = 23;
    vector<int> counts = {7, 19, 3, 1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 743596612;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int rows = 24;
    int columns = 22;
    vector<int> counts = {6, 5, 98};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 740960293;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int rows = 28;
    int columns = 27;
    vector<int> counts = {1, 12, 1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 564205685;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int rows = 21;
    int columns = 23;
    vector<int> counts = {5};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 553076450;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int rows = 21;
    int columns = 25;
    vector<int> counts = {21, 2};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 34540723;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int rows = 22;
    int columns = 21;
    vector<int> counts = {9, 4, 36};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 564615880;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int rows = 25;
    int columns = 27;
    vector<int> counts = {2, 9, 3, 3};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 112135274;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int rows = 22;
    int columns = 27;
    vector<int> counts = {1, 23, 7};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 594842349;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int rows = 21;
    int columns = 26;
    vector<int> counts = {7, 4, 1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 590092512;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int rows = 26;
    int columns = 26;
    vector<int> counts = {38, 18, 2};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 798583690;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int rows = 28;
    int columns = 21;
    vector<int> counts = {72, 145};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 843854779;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int rows = 27;
    int columns = 29;
    vector<int> counts = {2, 28, 15, 1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 492933994;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int rows = 29;
    int columns = 26;
    vector<int> counts = {4, 4, 1, 12, 1, 1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 309289548;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int rows = 25;
    int columns = 24;
    vector<int> counts = {18};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 566080194;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int rows = 25;
    int columns = 25;
    vector<int> counts = {1, 2, 1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 276159550;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int rows = 21;
    int columns = 24;
    vector<int> counts = {57, 2, 10};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 276733073;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int rows = 24;
    int columns = 22;
    vector<int> counts = {4, 157, 2, 3};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 192987970;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int rows = 23;
    int columns = 22;
    vector<int> counts = {5, 15, 1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 342454571;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int rows = 27;
    int columns = 22;
    vector<int> counts = {22, 3};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 553461418;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int rows = 21;
    int columns = 28;
    vector<int> counts = {8, 18, 1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 840622781;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int rows = 24;
    int columns = 23;
    vector<int> counts = {2, 2, 1, 4, 1, 6};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 802255234;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int rows = 25;
    int columns = 26;
    vector<int> counts = {6, 7, 3};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 38458654;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int rows = 21;
    int columns = 21;
    vector<int> counts = {24, 18};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 69650857;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int rows = 25;
    int columns = 23;
    vector<int> counts = {7, 5, 10};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 821972186;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int rows = 25;
    int columns = 28;
    vector<int> counts = {8, 6};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 498642371;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int rows = 24;
    int columns = 23;
    vector<int> counts = {110, 9};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 799184574;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int rows = 26;
    int columns = 22;
    vector<int> counts = {15, 40};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 668257817;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int rows = 27;
    int columns = 23;
    vector<int> counts = {3, 1, 28, 6};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 579946758;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int rows = 22;
    int columns = 24;
    vector<int> counts = {11, 2, 4};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 898379985;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int rows = 21;
    int columns = 29;
    vector<int> counts = {1, 13, 5, 66, 7};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 338245160;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int rows = 30;
    int columns = 30;
    vector<int> counts = {5, 8, 23};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 69418122;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int rows = 30;
    int columns = 30;
    vector<int> counts = {3, 2, 1, 2, 1, 1, 1, 1, 2, 5};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 377470053;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int rows = 30;
    int columns = 30;
    vector<int> counts = {500};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 467129293;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int rows = 30;
    int columns = 29;
    vector<int> counts = {11, 3, 1, 5, 6, 7, 8, 9, 10, 3};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 716270682;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int rows = 30;
    int columns = 30;
    vector<int> counts = {1};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 900;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int rows = 30;
    int columns = 30;
    vector<int> counts = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 67443848;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int rows = 30;
    int columns = 29;
    vector<int> counts = {16, 12, 4, 9, 6, 1, 3, 2, 1, 25};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 451736225;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int rows = 29;
    int columns = 29;
    vector<int> counts = {8, 11, 123, 12, 234, 123, 11, 12, 35, 12};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int rows = 30;
    int columns = 30;
    vector<int> counts = {100, 10};
    RooksParty* pObj = new RooksParty();
    clock_t start = clock();
    int result = pObj->countArrangements(rows, columns, counts);
    clock_t end = clock();
    delete pObj;
    int expected = 762574528;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22668143&rd=14155&pm=10980
********************************************************************************
#include<iostream>
#include<set>
#include<map>
#include<string>
#include<stdio.h>
#include<sstream>
#include<algorithm>
#include<sstream>
#include<queue>
#include<cmath>
using namespace std ;
#define INF (int)1e9
typedef pair<int,int> P ;
#define MOD 1000000009
int ncr[1002][1002] ;
 
int memo[35][35][1002] ;
int solve(int n,int m,int r)
{
 int i,j,ret = 0 ;
 if(memo[n][m][r] != -1) return memo[n][m][r] ;
 for(i=0;i<=n;i++)
  for(j=0;j<=m;j++)
  {
   int c = ncr[(n-i)*(m-j)][r] ;
   c = (1LL * c * ncr[n][i])%MOD ;
   c = (1LL * c * ncr[m][j])%MOD ;
   if((i+j)%2 == 0) ret += c ;
   else ret -= c ;
   if(ret >= MOD) ret -= MOD ;
   else if(ret < 0) ret += MOD ;
  }
 return memo[n][m][r] = ret ;
}
 
vector<int> c ;
int memo1[35][35][35] ;
int solve1(int n,int m,int k)
{
 if(k == c.size()) return 1 ;
 if(memo1[n][m][k] != -1) return memo1[n][m][k] ;
 int i,j,ret = 0 ;
 for(i=1;i<=n;i++)
  for(j=1;j<=m;j++)
  {
   int ways = (1LL * ncr[n][i] * ncr[m][j])%MOD ;
   ways = (1LL * ways * solve(i,j,c[k]))%MOD ;
   ways = (1LL * ways * solve1(n-i,m-j,k+1))%MOD ;
   ret += ways ;
   if(ret >= MOD) ret -= MOD ;
  }
 return memo1[n][m][k] = ret ;
}
 
class RooksParty
{
 public :
 int countArrangements(int n,int m,vector<int> _c)
 {
  int i,j,k ;
  
  ncr[0][0] = 1 ;
  for(i=1;i<1002;i++)
  {
   ncr[i][0] = ncr[i][i] = 1 ;
   for(j=1;j<i;j++)
   {
    ncr[i][j] = ncr[i-1][j] + ncr[i-1][j-1] ;
    ncr[i][j] %= MOD ;
   }
  }
 
  memset(memo,255,sizeof memo) ;
  memset(memo1,255,sizeof memo1) ;
  
  c = _c ;
  int ret =  solve1(n,m,0) ;
  return ret ;
 }
} ;

********************************************************************************
*******************************************************************************/