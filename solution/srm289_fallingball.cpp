/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5911
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

class FallingBall {
public:
    int howMany(vector<string> cells, int n);
};

int FallingBall::howMany(vector<string> cells, int n) {
    int ret;
    return ret;
}


int test0() {
    vector<string> cells = {"3 2", "5 2"};
    int n = 7;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"0 0", "0 0"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 536870912;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> cells = {"0 0", "29 0"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"10 0", "10 1"};
    int n = 15;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> cells = {"0 0", "4 0"};
    int n = 5;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"2 2"};
    int n = 4;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> cells = {"13 7", "7 5", "19 11", "19 11", "14 7", "11 6"};
    int n = 21;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1680;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> cells = {"16 11", "5 4"};
    int n = 18;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3300;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> cells = {"5 3"};
    int n = 6;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> cells = {"0 0", "3 0"};
    int n = 4;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"0 0"};
    int n = 3;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"11 5", "8 4", "11 5", "11 5", "8 4", "7 3"};
    int n = 12;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 105;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> cells = {"12 9", "11 8", "10 8", "6 6", "11 8"};
    int n = 13;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> cells = {"14 7", "15 7"};
    int n = 17;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 6864;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> cells = {"11 6", "26 16", "10 6", "24 16", "26 16"};
    int n = 27;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 60060;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> cells = {"11 11", "7 7", "11 11", "9 9", "10 10", "1 1", "11 11"};
    int n = 12;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"3 0", "13 4", "12 3", "12 3"};
    int n = 17;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 672;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> cells = {"2 0", "14 5", "14 5", "9 2", "14 5", "13 5"};
    int n = 15;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> cells = {"3 1", "4 1", "2 0"};
    int n = 5;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"21 16", "1 0", "19 16", "21 16", "21 16", "16 15"};
    int n = 23;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> cells = {"6 4", "25 14", "23 14", "13 9", "9 7"};
    int n = 26;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 22680;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> cells = {"15 6", "15 6", "15 6"};
    int n = 16;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5005;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> cells = {"12 0", "14 2", "16 2", "16 2"};
    int n = 17;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"14 2", "9 0"};
    int n = 15;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> cells = {"21 7", "20 6", "11 4", "21 7", "1 0"};
    int n = 22;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 7560;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> cells = {"0 0"};
    int n = 10;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 512;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> cells = {"12 7", "4 1", "13 8", "8 4", "10 6", "10 6", "11 7"};
    int n = 14;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> cells = {"1 1", "13 11", "1 1"};
    int n = 15;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 132;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> cells = {"5 0", "11 1", "10 0"};
    int n = 16;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> cells = {"7 1"};
    int n = 16;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1792;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> cells = {"5 5", "6 6", "6 6", "5 5"};
    int n = 7;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> cells = {"5 0", "5 0", "3 0", "4 0"};
    int n = 6;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> cells = {"13 3", "6 1", "11 2", "14 3", "12 2", "10 2"};
    int n = 15;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> cells = {"16 5", "16 5", "15 4"};
    int n = 17;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1365;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> cells = {"8 5", "1 1"};
    int n = 12;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 280;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> cells = {"15 10", "6 5", "6 5", "13 8", "13 8"};
    int n = 16;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 210;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> cells = {"23 9", "18 4", "2 2"};
    int n = 24;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> cells = {"22 16", "23 16", "11 8"};
    int n = 24;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 27225;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> cells = {"11 7", "6 6", "6 6"};
    int n = 29;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 655360;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> cells = {"1 1", "0 0"};
    int n = 2;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> cells = {"0 0"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 536870912;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> cells = {"12 9", "19 9", "19 9", "18 9", "18 9"};
    int n = 20;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 220;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> cells = {"4 0", "2 0", "5 0"};
    int n = 7;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> cells = {"21 17", "21 17", "21 17", "21 17"};
    int n = 22;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5985;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> cells = {"16 4", "22 6"};
    int n = 23;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 27300;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> cells = {"4 0", "4 0"};
    int n = 16;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2048;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> cells = {"1 1"};
    int n = 5;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> cells = {"0 0"};
    int n = 15;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 16384;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> cells = {"3 1", "6 1", "7 1", "6 1", "1 1", "7 1", "7 1", "6 1"};
    int n = 9;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"23 16", "23 16", "22 16"};
    int n = 24;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 74613;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> cells = {"27 4", "27 4"};
    int n = 29;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 35100;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> cells = {"1 1", "0 0", "0 0", "0 0"};
    int n = 2;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"0 0"};
    int n = 1;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"16 16"};
    int n = 20;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> cells = {"3 2", "4 2"};
    int n = 5;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> cells = {"22 13", "15 9"};
    int n = 23;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 175175;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> cells = {"0 0", "3 1"};
    int n = 4;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> cells = {"14 7", "1 1", "1 1", "10 7"};
    int n = 15;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> cells = {"8 3", "28 9", "28 9", "27 8", "27 8", "29 10"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 651168;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> cells = {"16 9", "16 9"};
    int n = 17;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 11440;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> cells = {"14 13", "16 13", "14 13"};
    int n = 23;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 896;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> cells = {"0 0", "15 0"};
    int n = 19;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> cells = {"10 6", "17 13", "13 9"};
    int n = 21;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1680;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> cells = {"13 0", "16 0", "13 0"};
    int n = 17;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> cells = {"22 2", "9 0"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 9984;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> cells = {"13 7", "12 6"};
    int n = 14;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 924;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> cells = {"20 5", "22 6", "21 6", "23 7", "23 7", "22 6"};
    int n = 26;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 62016;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> cells = {"0 0"};
    int n = 8;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> cells = {"20 12", "20 12", "20 12", "18 12", "19 12", "9 3", "7 1"};
    int n = 21;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> cells = {"19 17", "3 3"};
    int n = 25;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3840;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> cells = {"7 0", "7 0"};
    int n = 8;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> cells = {"13 12", "26 17"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 133848;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> cells = {"1 0"};
    int n = 4;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> cells = {"9 5", "17 9"};
    int n = 18;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 8820;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> cells = {"13 8", "13 8"};
    int n = 16;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5148;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> cells = {"0 0", "0 0"};
    int n = 3;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> cells = {"15 9", "0 0"};
    int n = 26;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5125120;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> cells = {"2 2"};
    int n = 3;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"12 12", "27 13", "27 13", "27 13", "23 13"};
    int n = 28;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> cells = {"2 1"};
    int n = 4;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> cells = {"15 2", "1 0"};
    int n = 22;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5824;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> cells = {"6 4", "13 6"};
    int n = 20;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 20160;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> cells = {"5 1", "5 1"};
    int n = 6;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> cells = {"1 0", "2 0"};
    int n = 3;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> cells = {"20 17", "14 4", "10 8", "16 3", "16 12", "24 5", "10 8", "0 0", "15 11", "20 7", "3 0", "0 0", "10 5", "22 3", "8 0", "20 10", "16 5"};
    int n = 25;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"6 1", "6 4", "2 1", "5 1", "0 0", "2 0", "6 1", "2 2", "1 0"};
    int n = 7;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"1 1", "2 2", "2 1", "1 0", "2 1"};
    int n = 3;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> cells = {"24 1", "19 0", "1 1", "18 2", "2 0", "24 5", "16 0", "10 4", "9 5", "24 5", "19 18", "1 1", "17 3"};
    int n = 29;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"6 0", "10 7", "6 4", "8 5", "2 0", "4 0", "1 0", "17 2", "9 8", "3 0", "0 0", "17 17", "16 16", "17 16", "10 3", "15 5", "13 2", "6 4", "0 0", "0 0", "17 7", "1 0", "6 2", "17 12", "8 3", "5 4", "15 12", "3 2", "4 1", "9 1", "2 2", "6 4", "10 10", "5 4", "6 0", "11 3", "17 5", "14 4", "7 1", "9 3", "8 6", "15 0", "15 5", "16 3", "17 8"};
    int n = 19;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"15 11", "27 17", "26 13", "20 3", "3 2", "18 11", "6 0", "26 6", "9 5", "15 9", "13 2", "26 2", "19 13", "11 8", "9 3", "14 5", "7 4", "6 2", "17 11", "27 23", "3 0", "1 0", "3 1", "7 0", "7 4", "9 7", "7 1", "12 1", "10 7", "8 4", "23 18", "27 6", "11 11", "0 0", "13 10", "25 24", "13 1", "20 9", "26 10", "28 10", "22 14", "15 1", "9 6", "1 0", "16 13", "14 13", "5 1"};
    int n = 29;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"1 0", "14 7", "12 6", "19 14", "15 4", "14 1", "15 1", "5 4"};
    int n = 21;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"13 9", "9 2", "0 0", "2 2", "18 9", "2 0", "15 10", "1 0", "14 8", "10 10", "3 3", "15 13", "8 5", "17 17", "3 2", "7 4", "0 0", "16 14", "17 6", "1 0", "7 5", "11 9", "5 5", "12 10", "2 2", "12 0", "15 11", "11 10", "18 17", "1 1", "12 8", "10 10", "0 0", "15 2", "14 0", "10 4", "7 3", "16 12"};
    int n = 19;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"1 0", "4 1", "9 1", "3 3", "0 0", "11 1", "0 0", "1 0", "12 6", "4 4", "7 7", "2 0", "12 2", "11 2", "1 1", "5 5", "6 2", "8 7", "1 0", "11 11", "11 9", "0 0", "0 0", "5 3", "9 3", "4 4", "12 4"};
    int n = 13;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"1 0", "2 2", "0 0", "5 3", "1 1", "5 4", "2 1", "1 0", "5 5", "3 1", "1 1", "6 2", "4 2", "4 1", "3 3", "5 1", "2 2", "4 0", "2 1", "1 0", "6 5", "3 3", "4 0", "5 0", "0 0", "5 1", "2 1", "3 2", "4 3", "1 1", "1 0", "2 0", "5 0", "0 0"};
    int n = 7;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"17 15", "17 1", "15 13", "9 1", "4 4", "21 5", "12 8", "23 7", "20 18", "8 0", "8 2", "14 13", "22 9", "27 10", "20 18", "9 1", "15 5", "1 1", "2 0", "22 17", "19 9", "2 1", "10 9", "6 1", "28 27", "11 3", "16 16", "10 3", "21 2", "13 2", "12 3", "23 22", "0 0"};
    int n = 29;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> cells = {"19 14", "22 11", "11 4", "23 3", "2 1", "19 11", "2 2", "15 8", "15 0", "22 2", "7 0", "16 7", "0 0", "12 5", "13 3"};
    int n = 25;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"9 6", "13 13", "12 7", "11 3", "11 3", "7 0"};
    int n = 21;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"9 9", "7 1", "0 0", "28 18", "26 11", "15 14", "22 1", "8 6", "3 3", "2 1", "19 10", "27 15", "1 1", "5 0", "29 1", "18 8", "1 1", "26 19", "3 1", "10 8", "14 10", "24 15", "24 7", "18 12", "6 5", "23 16", "17 17", "14 9", "6 5", "29 8", "19 13", "18 18", "22 5", "27 21", "1 1", "5 1", "23 15", "15 15"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"2 1", "14 7", "0 0", "9 8", "24 18", "17 6", "20 1", "15 1", "0 0", "14 5", "11 5", "10 6", "17 5", "15 11", "11 8", "5 3", "23 12", "6 1", "11 11", "6 5", "5 2", "14 14", "5 5", "6 4", "15 13", "16 7", "10 1", "16 10", "25 24", "17 13", "10 2", "20 16", "4 3", "11 5", "3 0", "24 10", "13 10", "20 11", "9 6", "2 1"};
    int n = 27;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> cells = {"5 2", "4 4", "4 3", "7 2", "8 6", "2 1", "4 2", "4 2", "6 4", "4 4", "6 1", "8 3", "0 0", "7 0", "5 5", "5 5", "3 3", "1 0", "8 0", "2 2", "4 2", "6 5", "7 1", "2 2", "2 2", "8 6", "8 2", "5 2", "0 0", "4 4", "6 3", "2 1", "5 1", "6 4", "0 0", "2 1", "0 0", "6 1"};
    int n = 9;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"1 1", "2 0", "2 0", "1 0", "0 0", "1 0", "2 2"};
    int n = 3;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"5 0", "7 7", "2 2", "24 11"};
    int n = 25;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"6 0", "10 1", "9 9", "3 3", "12 8", "13 5", "12 5", "0 0", "13 11", "1 1", "4 1", "2 1", "0 0", "17 15", "7 1", "10 10", "16 10", "12 5", "1 0", "16 13", "12 1", "15 3", "13 9", "16 0", "12 2", "6 6", "1 1", "12 8", "15 3", "16 2", "17 1", "3 0", "5 1", "8 0", "4 4", "17 1", "11 11", "14 12", "16 13", "15 0", "7 1", "10 9", "15 15", "17 1", "8 7", "17 5"};
    int n = 18;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"1 1", "4 1", "0 0", "0 0", "3 3", "1 1", "3 2"};
    int n = 6;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 536870912;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> cells = {"0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0", "0 0"};
    int n = 1;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> cells = {"29 29"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> cells = {"29 0"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"28 0"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"28 28"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> cells = {"28 28", "28 28"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> cells = {"10 0", "10 1"};
    int n = 15;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> cells = {"0 0", "1 0", "3 1", "6 3", "10 5", "15 7", "21 10", "28 14", "3 1", "10 5", "28 14", "0 0", "15 7", "10 5"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 504000;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> cells = {"0 0", "29 0"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> cells = {"3 2", "5 0"};
    int n = 7;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"0 0", "21 12", "20 11", "21 12", "28 7"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
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
    vector<string> cells = {"1 1", "29 14"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 37442160;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> cells = {"10 0", "20 0", "15 3", "5 3", "3 2", "22 1", "5 3", "25 1"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> cells = {"0 0", "29 0", "2 2", "3 3"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> cells = {"0 0"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 536870912;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> cells = {"29 14"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 77558760;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> cells = {"1 1", "1 1"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 268435456;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> cells = {"0 0", "1 0", "2 0", "3 0", "4 0", "5 0", "6 0", "7 0", "8 0", "9 0", "10 0", "11 0", "12 0", "13 0"};
    int n = 14;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> cells = {"0 0", "0 0", "20 10"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 94595072;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> cells = {"6 0", "3 0"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 8388608;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> cells = {"1 1", "2 2", "5 4", "6 3", "7 2", "15 2", "16 3", "25 5", "10 6", "13 4", "27 4"};
    int n = 29;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> cells = {"10 1", "9 0", "0 0"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 524288;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> cells = {"29 15"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 77558760;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> cells = {"5 2", "8 3", "5 2"};
    int n = 10;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> cells = {"10 1", "11 0"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> cells = {"29 1", "1 1"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> cells = {"0 0", "0 0"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 536870912;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> cells = {"5 2", "3 2"};
    int n = 7;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> cells = {"10 1", "1 1", "2 1"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 524288;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> cells = {"0 0", "3 1", "4 2", "10 8", "10 9", "16 8"};
    int n = 24;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> cells = {"1 0", "29 14"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 40116600;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> cells = {"29 2", "3 1"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> cells = {"29 15", "0 0"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 77558760;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> cells = {"29 0", "0 0"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> cells = {"0 0", "29 15"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 77558760;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> cells = {"5 1", "3 2", "6 4"};
    int n = 8;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> cells = {"10 0", "2 0"};
    int n = 20;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 512;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> cells = {"9 1", "11 1"};
    int n = 20;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2304;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> cells = {"0 0", "4 2"};
    int n = 14;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3072;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> cells = {"20 0", "10 10"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> cells = {"3 1", "5 2", "9 4", "8 4"};
    int n = 11;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> cells = {"25 0", "26 1"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> cells = {"1 1", "0 0", "3 3", "2 2"};
    int n = 10;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> cells = {"1 1", "0 0"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 268435456;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> cells = {"5 2", "0 0"};
    int n = 7;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> cells = {"1 1", "1 1"};
    int n = 2;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> cells = {"29 24", "29 24", "2 1"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 35100;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> cells = {"25 0", "26 1", "28 3"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> cells = {"0 0", "1 1", "29 14"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 37442160;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> cells = {"10 8", "11 8"};
    int n = 13;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> cells = {"1 1", "1 1"};
    int n = 7;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> cells = {"1 1", "2 0"};
    int n = 20;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> cells = {"25 25", "25 25"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> cells = {"0 0", "20 10", "10 5", "5 3"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 12902400;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> cells = {"0 0", "1 0", "2 1", "3 1", "4 2", "5 2", "6 3"};
    int n = 11;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> cells = {"0 0", "29 10", "2 2", "3 3", "5 5"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 42504;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> cells = {"2 2", "3 1", "4 1"};
    int n = 5;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> cells = {"29 10"};
    int n = 30;
    FallingBall* pObj = new FallingBall();
    clock_t start = clock();
    int result = pObj->howMany(cells, n);
    clock_t end = clock();
    delete pObj;
    int expected = 20030010;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=307060&rd=9810&pm=5911
********************************************************************************
#include <string> 
#include <vector> 
#include <algorithm> 
#include <sstream> 
#include <cstdio> 
#include <cmath> 
#include <map> 
#include <set> 
#include <cstdlib> 
#include <queue> 
using namespace std; 
 
class FallingBall { 
  public: 
  int howMany(vector <string> cells, int n) { 
    int wanted[50]; 
    memset(wanted,-1,sizeof(wanted)); 
    for (int i=0; i<(int)cells.size(); i++) { 
      int r,c; 
      sscanf(cells[i].c_str(),"%d %d",&r,&c); 
      if (wanted[r] >= 0 && wanted[r] != c) 
        return 0; 
      wanted[r] = c; 
    } 
    int dp[50][50]; 
    dp[0][0] = 1; 
    for (int i=1; i<n; i++) { 
      dp[i][0] = dp[i-1][0]; 
      dp[i][i] = dp[i-1][i-1]; 
      for (int j=1; j<i; j++) 
        dp[i][j] = dp[i-1][j-1]+dp[i-1][j]; 
      if (wanted[i] >= 0) 
        for (int j=0; j<=i; j++) 
          if (j != wanted[i]) 
            dp[i][j] = 0; 
    } 
    int s = 0; 
    for (int i=0; i<n; i++) 
      s += dp[n-1][i]; 
    return s; 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/