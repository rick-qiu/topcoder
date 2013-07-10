/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6400
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

class SeatingPlan {
public:
    string expectedTrial(int m, int n, int k);
};

string SeatingPlan::expectedTrial(int m, int n, int k) {
    string ret;
    return ret;
}


int test0() {
    int m = 1;
    int n = 1;
    int k = 0;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int m = 1;
    int n = 1;
    int k = 1;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int m = 1;
    int n = 2;
    int k = 0;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int m = 2;
    int n = 1;
    int k = 1;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int m = 1;
    int n = 2;
    int k = 2;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Impossible!";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int m = 1;
    int n = 3;
    int k = 0;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int m = 3;
    int n = 1;
    int k = 1;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int m = 3;
    int n = 1;
    int k = 2;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "3/1";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int m = 3;
    int n = 1;
    int k = 3;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Impossible!";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int m = 4;
    int n = 1;
    int k = 0;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int m = 4;
    int n = 1;
    int k = 1;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int m = 1;
    int n = 4;
    int k = 2;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "2/1";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int m = 1;
    int n = 4;
    int k = 3;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Impossible!";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int m = 1;
    int n = 4;
    int k = 4;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Impossible!";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int m = 80;
    int n = 1;
    int k = 0;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int m = 80;
    int n = 1;
    int k = 1;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int m = 1;
    int n = 80;
    int k = 2;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "40/39";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int m = 1;
    int n = 80;
    int k = 3;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1580/1463";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int m = 80;
    int n = 1;
    int k = 10;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "20271005/5684749";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int m = 1;
    int n = 80;
    int k = 11;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1439241355/297231162";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int m = 80;
    int n = 1;
    int k = 19;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "211129131824/779964483";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int m = 1;
    int n = 80;
    int k = 20;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "6545003086544/11546031609";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int m = 2;
    int n = 2;
    int k = 0;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int m = 2;
    int n = 2;
    int k = 1;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int m = 2;
    int n = 2;
    int k = 2;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "3/1";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int m = 2;
    int n = 2;
    int k = 3;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Impossible!";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int m = 2;
    int n = 2;
    int k = 4;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Impossible!";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int m = 2;
    int n = 3;
    int k = 0;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int m = 3;
    int n = 2;
    int k = 1;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int m = 2;
    int n = 3;
    int k = 2;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "15/8";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int m = 3;
    int n = 2;
    int k = 3;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "10/1";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int m = 2;
    int n = 3;
    int k = 4;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Impossible!";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int m = 3;
    int n = 2;
    int k = 5;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Impossible!";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int m = 2;
    int n = 3;
    int k = 6;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Impossible!";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int m = 2;
    int n = 4;
    int k = 3;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "14/3";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int m = 4;
    int n = 2;
    int k = 4;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "35/1";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int m = 3;
    int n = 3;
    int k = 2;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "3/2";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int m = 3;
    int n = 3;
    int k = 4;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "21/1";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int m = 4;
    int n = 4;
    int k = 2;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "5/4";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int m = 4;
    int n = 4;
    int k = 3;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "140/69";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int m = 4;
    int n = 4;
    int k = 4;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "364/81";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int m = 4;
    int n = 4;
    int k = 7;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "572/1";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int m = 1;
    int n = 79;
    int k = 17;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "13353917587868/169252292811";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int m = 79;
    int n = 1;
    int k = 18;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "580605112516/3899822415";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int m = 1;
    int n = 79;
    int k = 3;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1027/950";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int m = 2;
    int n = 40;
    int k = 2;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1580/1521";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int m = 40;
    int n = 2;
    int k = 1;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int m = 2;
    int n = 40;
    int k = 0;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int m = 2;
    int n = 40;
    int k = 12;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "30123321560150/1718196876321";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int m = 40;
    int n = 2;
    int k = 18;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "7722047996462800/5806958881047";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int m = 2;
    int n = 39;
    int k = 17;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1363576829755140/2035283779457";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int m = 3;
    int n = 24;
    int k = 12;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "5121094767152/149421848643";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int m = 24;
    int n = 3;
    int k = 20;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "2557779139540548/30379961477";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int m = 10;
    int n = 8;
    int k = 0;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int m = 8;
    int n = 10;
    int k = 1;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int m = 10;
    int n = 8;
    int k = 2;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1580/1509";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int m = 8;
    int n = 10;
    int k = 3;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "4108/3573";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int m = 10;
    int n = 8;
    int k = 10;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "823246055060/84792114361";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int m = 8;
    int n = 10;
    int k = 11;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "2619419266100/157449204509";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int m = 8;
    int n = 10;
    int k = 15;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1658967454185140/5954036187321";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int m = 10;
    int n = 8;
    int k = 16;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "26958221130508525/40109160071369";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int m = 10;
    int n = 8;
    int k = 18;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "44401775979661100/9072201836281";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int m = 8;
    int n = 10;
    int k = 19;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "289780011656735600/19550372084197";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int m = 8;
    int n = 10;
    int k = 20;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "441914517776521790/9099256279121";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int m = 9;
    int n = 8;
    int k = 19;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "29438590096598760/560890327267";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int m = 8;
    int n = 7;
    int k = 18;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "70775996591300/172086661";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int m = 7;
    int n = 9;
    int k = 17;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "337658324157945/17825492303";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int m = 7;
    int n = 6;
    int k = 16;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "83254860801/77948";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int m = 6;
    int n = 8;
    int k = 15;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "273315019836/10366429";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int m = 5;
    int n = 9;
    int k = 14;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "166871334960/15062843";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int m = 9;
    int n = 4;
    int k = 13;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "144424350/5429";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int m = 5;
    int n = 8;
    int k = 12;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "5586853480/3130171";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int m = 4;
    int n = 5;
    int k = 20;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Impossible!";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int m = 5;
    int n = 8;
    int k = 20;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "68923264410/1";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int m = 9;
    int n = 8;
    int k = 1;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int m = 8;
    int n = 10;
    int k = 20;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "441914517776521790/9099256279121";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int m = 10;
    int n = 8;
    int k = 20;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "441914517776521790/9099256279121";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int m = 7;
    int n = 8;
    int k = 20;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "392806781081715/28115278";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int m = 1;
    int n = 80;
    int k = 20;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "6545003086544/11546031609";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int m = 7;
    int n = 11;
    int k = 15;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1175976929548960/3344320203781";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int m = 20;
    int n = 4;
    int k = 20;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "3535316142212174320/112117346265581";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int m = 3;
    int n = 3;
    int k = 5;
    SeatingPlan* pObj = new SeatingPlan();
    clock_t start = clock();
    string result = pObj->expectedTrial(m, n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "126/1";
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=10000&pm=6400
********************************************************************************
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
 
typedef long long __int64; 
 
class SeatingPlan 
{ 
public: 
  int m,n,k; 
  __int64 f[100][256][25]; 
  bool vis[100][256][25]; 
  bool valid[256]; 
  int countbit[256]; 
  __int64 p,q; 
  void init() 
  { 
    for (int set=0;set<256;set++) 
    { 
      valid[set]=true; 
      countbit[set]=0; 
      for (int i=0;i<8;i++) 
        if ((set&(1<<i))>0) 
        { 
          countbit[set]++; 
          if (i>0 && (set&(1<<(i-1)))>0) 
            valid[set]=false; 
        } 
    } 
  } 
  __int64 gcd(__int64 a,__int64 b) 
  { 
    if (a<b) 
      return gcd(b,a); 
    if (b==0) 
      return a; 
    else 
      return gcd(b,a%b); 
  } 
  __int64 solve(int r,int data,int used) 
  { 
    if (r>m) 
      return (int)(used==k); 
    if (vis[r][data][used]) 
      return f[r][data][used]; 
    vis[r][data][used]=true; 
    __int64 &res=f[r][data][used]; 
    res=0; 
    for (int set=0;set<(1<<n);set++) 
      if (valid[set] && (set&data)==0 && countbit[set]+used<=k) 
      { 
        res+=solve(r+1,set,used+countbit[set]); 
      } 
    return res; 
  } 
  string out(__int64 v) 
  { 
    string s; 
    if (v<10) 
      s=""; 
    else 
      s=out(v/10); 
    s+=char((int)(v%10)+'0'); 
    return s; 
  } 
  string expectedTrial(int _m, int _n, int _k) 
  { 
    if (_m<_n) 
      return expectedTrial(_n,_m,_k); 
    m=_m; 
    n=_n; 
    k=_k; 
    memset(vis,false,sizeof(vis)); 
    q=1; 
    init(); 
    for (int i=1;i<=k;i++) 
    { 
      __int64 t=gcd(q,i); 
      q=q/t*((m*n+1-i)/(i/t)); 
    } 
    p=solve(1,0,0); 
    if (p==0) 
      return "Impossible!"; 
    else 
    { 
      __int64 d=gcd(p,q); 
      p/=d; 
      q/=d; 
      return out(q)+"/"+out(p); 
    } 
  } 
};

********************************************************************************
*******************************************************************************/