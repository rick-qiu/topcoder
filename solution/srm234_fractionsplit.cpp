/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3055
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

class FractionSplit {
public:
    vector<string> getSum(int n, int d);
};

vector<string> FractionSplit::getSum(int n, int d) {
    vector<string> ret;
    return ret;
}


int test0() {
    int n = 4;
    int d = 5;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/4", "1/20"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 2;
    int d = 3;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/6"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 1;
    int d = 2;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 15;
    int d = 16;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/3", "1/10", "1/240"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 14;
    int d = 15;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/3", "1/10"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 2;
    int d = 3;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/6"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 2;
    int d = 4;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 3;
    int d = 4;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/4"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 2;
    int d = 5;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/3", "1/15"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 3;
    int d = 5;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/10"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 4;
    int d = 5;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/4", "1/20"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 2;
    int d = 6;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/3"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 3;
    int d = 6;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 4;
    int d = 6;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/6"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 5;
    int d = 6;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/3"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 2;
    int d = 7;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/4", "1/28"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 3;
    int d = 7;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/3", "1/11", "1/231"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 4;
    int d = 7;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/14"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 5;
    int d = 7;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/5", "1/70"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 6;
    int d = 7;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/3", "1/42"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 2;
    int d = 8;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/4"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 3;
    int d = 8;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/3", "1/24"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 4;
    int d = 8;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 5;
    int d = 8;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/8"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 6;
    int d = 8;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/4"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 7;
    int d = 8;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/3", "1/24"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 2;
    int d = 9;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/5", "1/45"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 3;
    int d = 9;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/3"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 4;
    int d = 9;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/3", "1/9"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 5;
    int d = 9;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/18"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 6;
    int d = 9;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/6"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 7;
    int d = 9;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/4", "1/36"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 8;
    int d = 9;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/3", "1/18"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 2;
    int d = 10;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/5"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 3;
    int d = 10;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/4", "1/20"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 4;
    int d = 10;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/3", "1/15"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 5;
    int d = 10;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 6;
    int d = 10;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/10"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 7;
    int d = 10;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/5"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 8;
    int d = 10;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/4", "1/20"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 9;
    int d = 10;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/3", "1/15"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 2;
    int d = 11;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/6", "1/66"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 3;
    int d = 11;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/4", "1/44"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 4;
    int d = 11;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/3", "1/33"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 5;
    int d = 11;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/3", "1/9", "1/99"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 6;
    int d = 11;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/22"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 7;
    int d = 11;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/8", "1/88"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 8;
    int d = 11;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/5", "1/37", "1/4070"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 9;
    int d = 11;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/4", "1/15", "1/660"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 10;
    int d = 11;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/3", "1/14", "1/231"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 2;
    int d = 12;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/6"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 3;
    int d = 12;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/4"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 4;
    int d = 12;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/3"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 5;
    int d = 12;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/3", "1/12"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 6;
    int d = 12;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 7;
    int d = 12;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/12"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 8;
    int d = 12;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/6"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 9;
    int d = 12;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/4"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 10;
    int d = 12;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/3"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 11;
    int d = 12;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/3", "1/12"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 2;
    int d = 13;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/7", "1/91"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 3;
    int d = 13;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/5", "1/33", "1/2145"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 4;
    int d = 13;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/4", "1/18", "1/468"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 5;
    int d = 13;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/3", "1/20", "1/780"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 6;
    int d = 13;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/3", "1/8", "1/312"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 7;
    int d = 13;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/26"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 8;
    int d = 13;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/9", "1/234"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 9;
    int d = 13;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/6", "1/39"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 10;
    int d = 13;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/4", "1/52"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 11;
    int d = 13;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/3", "1/78"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 12;
    int d = 13;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/3", "1/12", "1/156"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 2;
    int d = 14;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/7"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 3;
    int d = 14;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/5", "1/70"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 4;
    int d = 14;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/4", "1/28"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 5;
    int d = 14;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/3", "1/42"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 6;
    int d = 14;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/3", "1/11", "1/231"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 7;
    int d = 14;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 8;
    int d = 14;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/14"};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 9;
    int d = 14;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/7"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 10;
    int d = 14;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/5", "1/70"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 11;
    int d = 14;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/4", "1/28"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 12;
    int d = 14;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/3", "1/42"};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 13;
    int d = 14;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/3", "1/11", "1/231"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 2;
    int d = 15;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/8", "1/120"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 3;
    int d = 15;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/5"};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 4;
    int d = 15;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/4", "1/60"};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 5;
    int d = 15;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/3"};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int n = 6;
    int d = 15;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/3", "1/15"};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int n = 7;
    int d = 15;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/3", "1/8", "1/120"};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int n = 8;
    int d = 15;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/30"};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int n = 9;
    int d = 15;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/10"};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int n = 10;
    int d = 15;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/6"};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int n = 11;
    int d = 15;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/5", "1/30"};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int n = 12;
    int d = 15;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/4", "1/20"};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int n = 13;
    int d = 15;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/3", "1/30"};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int n = 14;
    int d = 15;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/3", "1/10"};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int n = 2;
    int d = 16;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/8"};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int n = 3;
    int d = 16;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/6", "1/48"};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int n = 4;
    int d = 16;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/4"};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int n = 5;
    int d = 16;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/4", "1/16"};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int n = 6;
    int d = 16;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/3", "1/24"};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int n = 7;
    int d = 16;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/3", "1/10", "1/240"};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int n = 8;
    int d = 16;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2"};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int n = 9;
    int d = 16;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/16"};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int n = 10;
    int d = 16;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/8"};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int n = 11;
    int d = 16;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/6", "1/48"};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int n = 12;
    int d = 16;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/4"};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int n = 13;
    int d = 16;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/4", "1/16"};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int n = 14;
    int d = 16;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/3", "1/24"};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int n = 15;
    int d = 16;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/3", "1/10", "1/240"};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int n = 1;
    int d = 16;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/16"};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int n = 1;
    int d = 11;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/11"};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int n = 1;
    int d = 2;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2"};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int n = 15;
    int d = 16;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/3", "1/10", "1/240"};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int n = 4;
    int d = 5;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/4", "1/20"};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int n = 7;
    int d = 15;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/3", "1/8", "1/120"};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int n = 14;
    int d = 15;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/3", "1/10"};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int n = 2;
    int d = 3;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/6"};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int n = 2;
    int d = 4;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2"};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int n = 2;
    int d = 10;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/5"};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int n = 3;
    int d = 10;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/4", "1/20"};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int n = 3;
    int d = 9;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/3"};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int n = 4;
    int d = 8;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2"};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int n = 8;
    int d = 11;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/5", "1/37", "1/4070"};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int n = 13;
    int d = 14;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/3", "1/11", "1/231"};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int n = 3;
    int d = 5;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2", "1/10"};
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int n = 3;
    int d = 6;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/2"};
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int n = 3;
    int d = 13;
    FractionSplit* pObj = new FractionSplit();
    clock_t start = clock();
    vector<string> result = pObj->getSum(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1/5", "1/33", "1/2145"};
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=9906197&rd=6533&pm=3055
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <set> 
#include <map> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
#include <list> 
#include <regex.h>  
using namespace std; 
 
#define FOR(i,a,b) for(int i=(a);i<int(b);++i) 
#define REP(i,n) FOR(i,0,n) 
template<class T, class U> T cast (U x) { T y; ostringstream a; a<<x; istringstream b(a.str()); b>>y; return y; } 
template<class T> vector<T> split(string s, string x) { vector<T> r; REP(i,s.size()) { string c; while(i<(int)s.size()&&x.find(s[i])==string::npos) c+=s[i++]; if(c.size()) r.push_back(cast<T>(c)); } return r; } 
 
typedef long long ll; 
 
class FractionSplit { 
public: 
    vector <string> getSum(ll n, ll d) { 
      vector<string> ret; 
      while(n!=0) { 
        for(int i=2;;++i) if(d<=n*i) { 
          ret.push_back("1/"+cast<string>(i)); 
          ll a=n*i-d,b=d*i; 
          n=a,d=b; 
          break; 
        } 
      } 
      return ret; 
    } 
 
}; 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/