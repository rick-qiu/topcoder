/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=818
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

class Average {
public:
    int belowAvg(vector<int> math, vector<int> verbal);
};

int Average::belowAvg(vector<int> math, vector<int> verbal) {
    int ret;
    return ret;
}


int test0() {
    vector<int> math = {200, 250, 700, 700};
    vector<int> verbal = {400, 400, 400, 400};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
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
    vector<int> math = {500, 400};
    vector<int> verbal = {300, 400};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
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
    vector<int> math = {293};
    vector<int> verbal = {799};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
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
    vector<int> math = {400, 400, 400, 400, 400, 400, 401};
    vector<int> verbal = {400, 400, 400, 400, 400, 400, 400};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> math = {707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707};
    vector<int> verbal = {707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> math = {707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707};
    vector<int> verbal = {707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 708, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> math = {707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 706, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707};
    vector<int> verbal = {707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707, 707};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
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
    vector<int> math = {800, 300, 799};
    vector<int> verbal = {800, 800, 800};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> math = {350, 350, 450};
    vector<int> verbal = {350, 450, 450};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> math = {350, 351, 450};
    vector<int> verbal = {350, 448, 450};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> math = {249, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 249, 253, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 249};
    vector<int> verbal = {250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> math = {400, 400, 400, 401};
    vector<int> verbal = {400, 400, 400, 400};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> math = {200, 300, 250, 400};
    vector<int> verbal = {200, 400, 640, 245};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> math = {400, 400, 400, 401};
    vector<int> verbal = {400, 400, 400, 400};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
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
    vector<int> math = {400, 400, 400, 400, 400, 400, 401};
    vector<int> verbal = {400, 400, 400, 400, 400, 400, 400};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> math = {400, 400};
    vector<int> verbal = {400, 400};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> math = {300, 300, 300};
    vector<int> verbal = {300, 302, 305};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> math = {400, 400, 401};
    vector<int> verbal = {400, 400, 400};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> math = {400, 400, 400, 400, 400, 400, 401};
    vector<int> verbal = {400, 400, 400, 400, 400, 400, 400};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> math = {400, 400, 400, 400, 400, 400, 401};
    vector<int> verbal = {400, 400, 400, 400, 400, 400, 400};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
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
    vector<int> math = {400, 400};
    vector<int> verbal = {400, 401};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> math = {400, 400, 400, 400, 400, 400, 401};
    vector<int> verbal = {400, 400, 400, 400, 400, 400, 400};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> math = {200, 200, 800};
    vector<int> verbal = {200, 200, 800};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> math = {300, 300, 300};
    vector<int> verbal = {300, 302, 305};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> math = {200, 200, 201};
    vector<int> verbal = {200, 200, 200};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> math = {200};
    vector<int> verbal = {200};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> math = {201, 200, 200, 200, 200};
    vector<int> verbal = {200, 200, 200, 200, 200};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> math = {200, 201};
    vector<int> verbal = {200, 200};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> math = {200, 201};
    vector<int> verbal = {200, 201};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> math = {200, 200, 201};
    vector<int> verbal = {200, 200, 200};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> math = {551, 440, 400};
    vector<int> verbal = {410, 440, 400};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
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
    vector<int> math = {300, 500, 500};
    vector<int> verbal = {300, 500, 500};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
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
    vector<int> math = {201, 200, 200, 200, 200};
    vector<int> verbal = {200, 200, 200, 200, 200};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> math = {551, 440, 400};
    vector<int> verbal = {410, 440, 400};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> math = {300, 301};
    vector<int> verbal = {300, 300};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> math = {200, 200, 201};
    vector<int> verbal = {200, 200, 200};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> math = {200, 200, 201};
    vector<int> verbal = {200, 200, 200};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> math = {400, 400, 400, 400, 400, 400, 401};
    vector<int> verbal = {400, 400, 400, 400, 400, 400, 400};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> math = {400, 600, 800};
    vector<int> verbal = {400, 600, 800};
    Average* pObj = new Average();
    clock_t start = clock();
    int result = pObj->belowAvg(math, verbal);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=277202&rd=5851&pm=818
********************************************************************************
#include <string>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <math.h>
#include <sstream>
using namespace std;
class Average {
  public:
  int belowAvg(vector <int> math, vector <int> verbal) {
    
// BEGIN CUT HERE
    static bool s_FirstTime = true; if (s_FirstTime) { s_FirstTime = false; run_test(-1); }
// END CUT HERE
 
double avg=0;
int ret=0;
for(int x=0; x<math.size(); x++)
{
  avg+=math[x];
  avg+=verbal[x];
}
avg/=math.size();
for(int x=0; x<math.size(); x++)
{
  if(math[x]+verbal[x]<avg)
  ret++;
}
return ret;
  } // end method
  
// BEGIN CUT HERE
  public:
  void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
  private:
  template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
  void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
  void test_case_0() { int Arr0[] = {200,250,700,700}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {400,400,400,400}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 2; verify_case(0, Arg2, belowAvg(Arg0, Arg1)); }
  void test_case_1() { int Arr0[] = {500,400}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {300,400}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 0; verify_case(1, Arg2, belowAvg(Arg0, Arg1)); }
  void test_case_2() { int Arr0[] = {293}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {799}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 0; verify_case(2, Arg2, belowAvg(Arg0, Arg1)); }
  void test_case_3() { int Arr0[] = {400,400,400,400,400,400,401}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {400,400,400,400,400,400,400}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 6; verify_case(3, Arg2, belowAvg(Arg0, Arg1)); }
 
// END CUT HERE
 
}; // end class
 
// Powered by PopsEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/