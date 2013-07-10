/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1973
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

class Removal {
public:
    int finalPos(int n, int k, vector<string> remove);
};

int Removal::finalPos(int n, int k, vector<string> remove) {
    int ret;
    return ret;
}


int test0() {
    int n = 8;
    int k = 3;
    vector<string> remove = {"3-4", "4-5"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
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
    int n = 100;
    int k = 13;
    vector<string> remove = {"19-50", "19-50", "19-19"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 100;
    int k = 39;
    vector<string> remove = {"19-50", "19-50", "19-19"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 2000000000;
    int k = 2000000000;
    vector<string> remove = {"1-1"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
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
    int n = 2000000000;
    int k = 1999999999;
    vector<string> remove = {"1-1"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 2000000000;
    int k = 2000000000;
    vector<string> remove = {"1-1999999003"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 1000000000;
    int k = 9;
    vector<string> remove = {"20-100", "100-200", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 1000000000;
    int k = 30;
    vector<string> remove = {"20-100", "100-200", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100", "20-100"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 4100;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 1000000000;
    int k = 30;
    vector<string> remove = {"20-100", "100-200", "20-100"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 293;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 2000000000;
    int k = 30;
    vector<string> remove = {"30-100", "100-200", "20-100"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 283;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 2000000000;
    int k = 30;
    vector<string> remove = {"30-100", "100-200", "31-100"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 1995999999;
    int k = 1000000000;
    vector<string> remove = {"1000000000-1100000000", "5-100000", "17-895000000", "1000000000-1000000000"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 1995099982;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 2000000000;
    int k = 1000000000;
    vector<string> remove = {"1-1000000000", "1000000000-1000000000"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
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
    int n = 2000000000;
    int k = 1000000000;
    vector<string> remove = {"12-1000000010", "1000000000-1000000000"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 700;
    int k = 500;
    vector<string> remove = {"3-3", "3-3", "3-3", "3-3", "3-3", "3-3", "3-3", "3-3", "3-3", "3-3", "3-3", "3-3", "3-3", "3-3", "3-3", "3-3", "3-3", "3-3", "3-3", "3-3", "3-3", "3-3", "3-3", "3-3", "3-3", "3-3", "3-3", "3-3", "3-3", "3-3"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 530;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 700;
    int k = 500;
    vector<string> remove = {"498-500", "500-503", "600-603"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 507;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 100;
    int k = 39;
    vector<string> remove = {"19-50", "19-50", "19-19"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 200000000;
    int k = 19999;
    vector<string> remove = {"19-50", "99-500", "19-1999", "19-50", "19-50", "19-1999", "19-50", "19-50", "19-1999", "1799999-19999999"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 26504;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 8;
    int k = 3;
    vector<string> remove = {"3-4", "4-5"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 1999999999;
    int k = 7000;
    vector<string> remove = {"9-9000", "70-700000"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 715923;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 2000000000;
    int k = 39;
    vector<string> remove = {"19-50", "19-50", "19-19"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 104;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 2000000000;
    int k = 1;
    vector<string> remove = {"1-10"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 2000000000;
    int k = 3;
    vector<string> remove = {"3-4", "4-5"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 2000000000;
    int k = 2000000000;
    vector<string> remove = {"1-2000000000"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 2000000000;
    int k = 1999999995;
    vector<string> remove = {"1999999990-1999999993"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 1999999999;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 2000000000;
    int k = 500000;
    vector<string> remove = {"2-1000000000"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 1000499999;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 2000000000;
    int k = 1;
    vector<string> remove = {"5000-500000"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 1999999999;
    int k = 100;
    vector<string> remove = {"1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2", "1-2"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 182;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 2000000000;
    int k = 1000000000;
    vector<string> remove = {"1-1"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000001;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 2000000000;
    int k = 1;
    vector<string> remove = {"1-1"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
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
    int n = 2000000000;
    int k = 20;
    vector<string> remove = {"1-1000000000", "50-100000", "100-10000000", "200-1000000"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000020;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 2000000000;
    int k = 1000000000;
    vector<string> remove = {"10000000-500000000"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 1490000001;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 2000000000;
    int k = 100000000;
    vector<string> remove = {"1-1000000", "1000000000-1500000000"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 101000000;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 8;
    int k = 3;
    vector<string> remove = {"4-5", "3-4"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 2000000000;
    int k = 45;
    vector<string> remove = {"8-2000", "34-234245"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 236250;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 200000000;
    int k = 199999;
    vector<string> remove = {"19-50", "99-500", "19-1999", "19-50", "19-50", "19-1999", "19-50", "19-50", "19-1999", "1799999-19999999"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 206504;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 2000000000;
    int k = 1999999;
    vector<string> remove = {"19-50", "99-500", "19-1999", "19-50", "19-50", "19-1999", "19-50", "19-50", "19-1999", "1799999-19999999"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 20206505;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 2000000000;
    int k = 13;
    vector<string> remove = {"19-50", "19-50", "19-19"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 8;
    int k = 2;
    vector<string> remove = {"3-6", "2-3"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 2000000000;
    int k = 1;
    vector<string> remove = {"5-2000000000"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
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
    int n = 2000000000;
    int k = 1;
    vector<string> remove = {"1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999", "1-39999999"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 1959999952;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 2000000000;
    int k = 200000000;
    vector<string> remove = {"1-2"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 200000002;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 1999999999;
    int k = 7000;
    vector<string> remove = {"8-80000", "1000000-1000001", "90-10000000"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 10086906;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 10;
    int k = 5;
    vector<string> remove = {"6-8", "3-4"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 2000000000;
    int k = 1000000000;
    vector<string> remove = {"1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3", "1-3"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000150;
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
    int k = 2;
    vector<string> remove = {"3-4", "2-3"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 10000000;
    int k = 1000;
    vector<string> remove = {"1000-5000", "2000-30000", "1500-2500", "100-200", "100-1500", "50000-100000"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 35505;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 100;
    int k = 50;
    vector<string> remove = {"51-56", "48-49"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 100;
    int k = 2;
    vector<string> remove = {"1-2", "3-4", "1-2", "3-4", "1-2", "3-4"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 50;
    int k = 8;
    vector<string> remove = {"4-5", "4-9", "15-18"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 4;
    int k = 2;
    vector<string> remove = {"3-3", "2-2"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 100;
    int k = 30;
    vector<string> remove = {"32-40", "32-40", "1-6"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 5;
    int k = 2;
    vector<string> remove = {"3-3", "1-1"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 3;
    int k = 2;
    vector<string> remove = {"1-1"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 20;
    int k = 2;
    vector<string> remove = {"5-10", "1-4"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 10000;
    int k = 99;
    vector<string> remove = {"100-100", "80-80", "78-78", "56-112", "12-58", "72-111", "1111-1115", "12-13", "101-110", "111-123", "105-106"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 248;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 3;
    int k = 2;
    vector<string> remove = {"2-3"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
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
    int n = 20;
    int k = 5;
    vector<string> remove = {"6-7", "1-4"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 2000000000;
    int k = 2000000000;
    vector<string> remove = {"1-2"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
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
    int n = 100;
    int k = 2;
    vector<string> remove = {"3-3", "2-4"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
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
    int n = 100;
    int k = 11;
    vector<string> remove = {"14-15", "2-13"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 1999999999;
    int k = 2;
    vector<string> remove = {"2-3", "3-4", "4-5", "5-6", "2-3", "3-4", "4-5", "5-6", "7-1929", "393-203093", "29382-199299", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1", "1-1"};
    Removal* pObj = new Removal();
    clock_t start = clock();
    int result = pObj->finalPos(n, k, remove);
    clock_t end = clock();
    delete pObj;
    int expected = 1979;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=308953&rd=4690&pm=1973
********************************************************************************
#include <iostream> 
#include <vector> 
#include <set> 
#include <string> 
#include <cmath> 
#include <sstream> 
#include <map> 
#include <algorithm> 
 
using namespace std; 
 
 
#ifdef __GNUC__ 
typedef long long i64; 
#endif 
 
#ifdef __WIN32__ 
typedef __int64 i64; 
#endif 
 
#define VI vector <int> 
#define VVI vector < VI > 
#define VS vector <string> 
#define VVS vector < VS > 
 
#define forn(i, n) for(int i = 0; i < (n); i++) 
#define fors(i, s) forn(i, s.length()) 
#define forv(i, v) forn(i, v.size()) 
 
#define pb push_back 
 
int str2int(string s); 
string int2str(int ind); 
vector <string> tokenize(string s, string tokens); 
 
int str2int(string s) { 
        stringstream ss; 
        int res; 
        ss << s; 
        ss >> res; 
        return res; 
} 
 
string int2str(int ind) { 
        stringstream ss; 
        string res; 
        ss << ind; 
        ss >> res; 
        return res; 
} 
 
vector <string> tokenize(string s, string tokens) { 
        s = s + tokens; 
        vector <string> res; 
        string tmp; 
        for (int i = 0; i < s.length(); i++) { 
                if (tokens.find(s[i]) != string::npos) { 
                        if (tmp != "") { 
                                res.push_back(tmp); 
                                tmp = ""; 
                        } 
                } else  
                        tmp += s[i]; 
        } 
        return res; 
} 
 
//--------------------------------------------------- 
 
int read_int(void) { 
        int res; 
        cin >> res; 
        return res; 
} 
 
int readln_int(void) { 
        int res = read_int(); 
        string s; 
        getline(cin, s); 
        return res; 
} 
 
string readln_string(void) { 
        string s, res; 
        getline(cin, s); 
        for (int i = 0; i < s.length(); i++) 
                if (s[i] > 13) res += s[i]; 
        return res; 
} 
 
vector <int> read_vector_int(void) { 
        vector <int> res; 
        string tmp; 
        char ch = ' '; 
        while (ch != '{') cin >> ch; 
        cin >> ch; 
        while (ch != '}') { 
                if (ch == ',') { 
                        if (tmp != "") { 
                                stringstream ss; 
                                int r; 
                                ss << tmp; 
                                ss >> r; 
                                res.push_back(r); 
                                tmp = ""; 
                        } 
                } else { 
                        if ((ch >= '0' && ch <= '9') || (ch == '-')) tmp += ch; 
                } 
                cin >> ch; 
        } 
        if (tmp != "") { 
                stringstream ss; 
                int r; 
                ss << tmp; 
                ss >> r; 
                res.push_back(r); 
        } 
        return res; 
} 
 
void write_vector_int(vector <int> data) { 
        cout << "SIZE = " << data.size() << endl; 
        for (int i = 0; i < data.size(); i++) 
                cout << "x[" << i << "] = " << data[i] << endl; 
} 
 
vector <string> read_vector_string(void) { 
        vector <string> res; 
        string tmp; 
        char ch = ' '; 
        while (ch != '{') cin >> ch; 
        while (ch != '}') { 
                while (ch != '"') cin.get(ch); 
                cin.get(ch); 
                while (ch != '"') { 
                        if (ch > 13) tmp += ch; 
                        cin.get(ch); 
                } 
                cin.get(ch); 
                while (ch == ' ') cin.get(ch); 
                res.push_back(tmp); 
                tmp = ""; 
        } 
        return res; 
} 
 
void write_vector_string(vector <string> data) { 
        cout << "SIZE = " << data.size() << endl; 
        for (int i = 0; i < data.size(); i++) 
                cout << "x[" << i << "] = " << data[i] << endl; 
} 
 
//------------------------------------------------------------------------------------- 
 
int n; 
int ans; 
 
class Removal { 
    public : 
    int finalPos(int n, int k, vector <string> r) { 
        int res; 
        ans = 0; 
        i64 cur = k; 
        if (r.size() == 0) 
            return k; 
        for(int i = r.size() - 1; i >= 0; i--) 
        { 
            int lo, hi; 
            sscanf(r[i].c_str(), "%d-%d", &lo, &hi); 
            if (lo > cur) continue; 
            cur = i64(hi) + cur - i64(lo) + 1; 
            if (cur > n) 
                return -1; 
        } 
        return cur; 
    } 
     
  
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/