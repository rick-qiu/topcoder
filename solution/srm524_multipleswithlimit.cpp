/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11629
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

class MultiplesWithLimit {
public:
    string minMultiples(int N, vector<int> forbiddenDigits);
};

string MultiplesWithLimit::minMultiples(int N, vector<int> forbiddenDigits) {
    string ret;
    return ret;
}


int test0() {
    int N = 8;
    vector<int> forbiddenDigits = {2, 3, 4, 5, 6, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "1000";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 9;
    vector<int> forbiddenDigits = {1, 3, 4, 5, 6, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "222...222(9 digits)";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 524;
    vector<int> forbiddenDigits = {5, 2, 4};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "3668";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 10000;
    vector<int> forbiddenDigits = {0};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 1;
    vector<int> forbiddenDigits = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 2007;
    vector<int> forbiddenDigits = {1, 2, 3, 4, 5, 6, 8, 9, 0};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "777...777(666 digits)";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 100;
    vector<int> forbiddenDigits = {1, 2, 3};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "400";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 200;
    vector<int> forbiddenDigits = {3, 4, 5};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "200";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 862;
    vector<int> forbiddenDigits = {1, 4, 6, 7, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "99992";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 7048;
    vector<int> forbiddenDigits = {1, 4, 5, 6, 7, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "2332888";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 4261;
    vector<int> forbiddenDigits = {0, 2, 3, 5, 6, 7, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "9199499";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 6867;
    vector<int> forbiddenDigits = {0, 4, 5, 7};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "96138";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 9543;
    vector<int> forbiddenDigits = {0, 1, 2, 3, 5, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "6479697";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 7341;
    vector<int> forbiddenDigits = {1, 2, 3, 5, 7, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "44046";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 7008;
    vector<int> forbiddenDigits = {3, 5, 6, 7, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "21024";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 4064;
    vector<int> forbiddenDigits = {0, 4, 5, 6, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "337312";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 5194;
    vector<int> forbiddenDigits = {4, 5, 7};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "10388";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 4074;
    vector<int> forbiddenDigits = {1, 2, 4, 5, 6};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "387030";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 8794;
    vector<int> forbiddenDigits = {1, 2, 3, 5, 6, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "444...404(14 digits)";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 9723;
    vector<int> forbiddenDigits = {1, 2, 3, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "466704";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 1940;
    vector<int> forbiddenDigits = {0, 3, 4, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 824;
    vector<int> forbiddenDigits = {1, 3, 4, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "20600";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 9799;
    vector<int> forbiddenDigits = {4, 7};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "19598";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 9334;
    vector<int> forbiddenDigits = {1, 2, 3, 6, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "700050";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 5310;
    vector<int> forbiddenDigits = {0, 1, 4, 6, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 1926;
    vector<int> forbiddenDigits = {2, 4, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "11556";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 2421;
    vector<int> forbiddenDigits = {0, 6, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "2421";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 1719;
    vector<int> forbiddenDigits = {0, 1, 2, 4};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "6876";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 3778;
    vector<int> forbiddenDigits = {2, 3, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "7556";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 4990;
    vector<int> forbiddenDigits = {0, 3, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 5570;
    vector<int> forbiddenDigits = {0, 3, 4, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 5334;
    vector<int> forbiddenDigits = {0, 1, 2, 4, 6, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 4892;
    vector<int> forbiddenDigits = {0, 3, 4, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "78272";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 8712;
    vector<int> forbiddenDigits = {0, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "17424";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 2568;
    vector<int> forbiddenDigits = {2, 3, 4, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "115560";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 3432;
    vector<int> forbiddenDigits = {1, 3, 5, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "24024";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 2821;
    vector<int> forbiddenDigits = {1, 2, 3, 4, 5, 6, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "777...777(9 digits)";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 7531;
    vector<int> forbiddenDigits = {0, 3, 5};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "67779";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 1630;
    vector<int> forbiddenDigits = {2, 5, 6, 7, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "11410";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 4433;
    vector<int> forbiddenDigits = {1, 2, 5, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "4433";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 1818;
    vector<int> forbiddenDigits = {0, 4, 6, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "7272";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 6221;
    vector<int> forbiddenDigits = {1, 4, 5, 6};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "80873";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 3516;
    vector<int> forbiddenDigits = {1, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "7032";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 7220;
    vector<int> forbiddenDigits = {2, 3, 4, 5, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "101080";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 9327;
    vector<int> forbiddenDigits = {1, 3, 4, 5, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "22767207";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 6143;
    vector<int> forbiddenDigits = {0, 3, 5, 6, 7};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "18429";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 76;
    vector<int> forbiddenDigits = {1, 6, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "304";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 5052;
    vector<int> forbiddenDigits = {1, 3, 5, 6};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "20208";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 2818;
    vector<int> forbiddenDigits = {0, 1, 3, 4, 5, 6, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "22977972";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 4910;
    vector<int> forbiddenDigits = {0, 3, 4, 5, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 3336;
    vector<int> forbiddenDigits = {0, 1, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "3336";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 1247;
    vector<int> forbiddenDigits = {3, 5, 7, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "2494";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 7268;
    vector<int> forbiddenDigits = {0, 2, 3, 5};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "79948";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 2102;
    vector<int> forbiddenDigits = {0, 2, 3, 4, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "5166716";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 7664;
    vector<int> forbiddenDigits = {0, 1, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "7664";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 9416;
    vector<int> forbiddenDigits = {2, 6, 7};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "404888";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 2034;
    vector<int> forbiddenDigits = {0, 1, 3, 5, 7, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "26442";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 8490;
    vector<int> forbiddenDigits = {0, 2, 3, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 1949;
    vector<int> forbiddenDigits = {0, 1, 5, 6, 7, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "23388";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 3845;
    vector<int> forbiddenDigits = {1, 2, 3, 4, 6, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "500...005(12 digits)";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 7262;
    vector<int> forbiddenDigits = {5};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "7262";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 9787;
    vector<int> forbiddenDigits = {1, 6, 7, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "342545";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 631;
    vector<int> forbiddenDigits = {0, 1, 3, 6, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "2524";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 2660;
    vector<int> forbiddenDigits = {0, 5, 7, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 9847;
    vector<int> forbiddenDigits = {0, 2, 7, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "19694";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 2561;
    vector<int> forbiddenDigits = {4, 6, 7, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "5122";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 7011;
    vector<int> forbiddenDigits = {0, 1, 2, 4, 5, 6, 7};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "33393393";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 4155;
    vector<int> forbiddenDigits = {0, 1, 2, 6, 7, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "494445";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 2969;
    vector<int> forbiddenDigits = {3, 4, 5, 6, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "112822";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 8655;
    vector<int> forbiddenDigits = {0, 2, 6, 7, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "354855";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 7782;
    vector<int> forbiddenDigits = {3, 4, 5, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "101166";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 1569;
    vector<int> forbiddenDigits = {0, 1, 2, 3, 6, 7};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "589944";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 268;
    vector<int> forbiddenDigits = {3, 4, 5, 6, 7, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "9112";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 9736;
    vector<int> forbiddenDigits = {2, 3, 4, 5, 7, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "6669160";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 686;
    vector<int> forbiddenDigits = {1, 2, 3, 4, 5, 7};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "686";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 197;
    vector<int> forbiddenDigits = {1, 2, 3};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "788";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 9316;
    vector<int> forbiddenDigits = {2, 3, 4, 7, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "680068";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 9646;
    vector<int> forbiddenDigits = {1, 4, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "67522";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 1809;
    vector<int> forbiddenDigits = {0, 2, 4, 5, 6, 7, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "3133188";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 1752;
    vector<int> forbiddenDigits = {1, 7, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "3504";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 5422;
    vector<int> forbiddenDigits = {0, 2, 4, 5, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "1371766";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 2289;
    vector<int> forbiddenDigits = {1, 2, 4, 5, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "670677";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 471;
    vector<int> forbiddenDigits = {0, 3, 4, 7, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "5652";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 1083;
    vector<int> forbiddenDigits = {4, 7, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "2166";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 6436;
    vector<int> forbiddenDigits = {3, 4, 5, 6, 7};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "180208";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 5073;
    vector<int> forbiddenDigits = {0, 1, 2, 3, 6, 7, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "4555554";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 263;
    vector<int> forbiddenDigits = {0, 1, 2, 3, 6, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "4997";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 5288;
    vector<int> forbiddenDigits = {2, 3, 4, 6, 7, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "185080";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 4677;
    vector<int> forbiddenDigits = {0, 1, 5};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "4677";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 8681;
    vector<int> forbiddenDigits = {0, 1, 4, 6, 7, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "3229332";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 4309;
    vector<int> forbiddenDigits = {4, 5, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "30163";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 1227;
    vector<int> forbiddenDigits = {0, 3, 4, 5, 6, 7, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "9112929";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 8610;
    vector<int> forbiddenDigits = {0, 1, 3, 4, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 3434;
    vector<int> forbiddenDigits = {1, 2, 4, 5, 6, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "703970";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 9974;
    vector<int> forbiddenDigits = {0, 1, 3, 5, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "9974";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 9565;
    vector<int> forbiddenDigits = {2, 4, 5};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "19130";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int N = 3904;
    vector<int> forbiddenDigits = {6, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "3904";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int N = 9704;
    vector<int> forbiddenDigits = {1, 2, 4, 5, 7};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "698688";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int N = 4784;
    vector<int> forbiddenDigits = {0, 1, 2, 4, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "368368";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int N = 4485;
    vector<int> forbiddenDigits = {6, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "4485";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int N = 4774;
    vector<int> forbiddenDigits = {3, 5, 6, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "4774";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int N = 2060;
    vector<int> forbiddenDigits = {0, 1, 5, 6, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int N = 1380;
    vector<int> forbiddenDigits = {1, 3, 4, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "5520";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int N = 4477;
    vector<int> forbiddenDigits = {4, 5, 6};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "17908";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int N = 2115;
    vector<int> forbiddenDigits = {0, 1, 2, 3, 4, 5, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int N = 8757;
    vector<int> forbiddenDigits = {2, 3, 6, 7, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "499149";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int N = 560;
    vector<int> forbiddenDigits = {2, 6, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "4480";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int N = 262;
    vector<int> forbiddenDigits = {0, 1, 2, 3, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "4454";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int N = 9981;
    vector<int> forbiddenDigits = {0, 2, 3, 4, 5, 6, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "111...111(9972 digits)";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int N = 1;
    vector<int> forbiddenDigits = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int N = 1;
    vector<int> forbiddenDigits = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "9";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int N = 1;
    vector<int> forbiddenDigits = {};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int N = 5;
    vector<int> forbiddenDigits = {5};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "10";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int N = 4;
    vector<int> forbiddenDigits = {4, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "12";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int N = 3;
    vector<int> forbiddenDigits = {3, 6, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "12";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int N = 8;
    vector<int> forbiddenDigits = {2, 4, 6, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "1000";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int N = 9;
    vector<int> forbiddenDigits = {1, 2, 3, 4, 5, 6, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "77778";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int N = 9;
    vector<int> forbiddenDigits = {1, 2, 3, 4, 5, 6, 7, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "888...888(9 digits)";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int N = 9;
    vector<int> forbiddenDigits = {0, 1, 2, 3, 4, 5, 6, 7, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "888...888(9 digits)";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int N = 10000;
    vector<int> forbiddenDigits = {};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "10000";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int N = 625;
    vector<int> forbiddenDigits = {5};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "10000";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int N = 999;
    vector<int> forbiddenDigits = {9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "111888";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int N = 7999;
    vector<int> forbiddenDigits = {9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "1007874";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int N = 9999;
    vector<int> forbiddenDigits = {9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "11118888";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int N = 399;
    vector<int> forbiddenDigits = {8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "10374";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int N = 998;
    vector<int> forbiddenDigits = {8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "111776";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int N = 3999;
    vector<int> forbiddenDigits = {8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "1011747";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int N = 9998;
    vector<int> forbiddenDigits = {8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "11117776";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int N = 172;
    vector<int> forbiddenDigits = {2, 4, 6};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "11008";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int N = 996;
    vector<int> forbiddenDigits = {2, 4, 6};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "301788";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int N = 1992;
    vector<int> forbiddenDigits = {2, 4, 6};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "1770888";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int N = 9996;
    vector<int> forbiddenDigits = {2, 4, 6};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "30017988";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int N = 8192;
    vector<int> forbiddenDigits = {2, 4, 6, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "100...000(14 digits)";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int N = 8192;
    vector<int> forbiddenDigits = {1, 2, 4, 6, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "300...000(14 digits)";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int N = 8192;
    vector<int> forbiddenDigits = {1, 2, 3, 4, 6, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "500...000(14 digits)";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int N = 7992;
    vector<int> forbiddenDigits = {2, 3, 4, 6, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "111...000(18 digits)";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int N = 9999;
    vector<int> forbiddenDigits = {1, 2, 3, 5, 6, 7, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "444...888(20 digits)";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int N = 7992;
    vector<int> forbiddenDigits = {1, 2, 3, 4, 5, 6, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "777...000(30 digits)";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int N = 9999;
    vector<int> forbiddenDigits = {1, 2, 3, 4, 5, 6, 7, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "888...888(36 digits)";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int N = 9927;
    vector<int> forbiddenDigits = {0, 1, 2, 3, 4, 5, 6, 7, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "888...888(9918 digits)";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int N = 9931;
    vector<int> forbiddenDigits = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "999...999(9930 digits)";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int N = 9949;
    vector<int> forbiddenDigits = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "999...999(9948 digits)";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int N = 9967;
    vector<int> forbiddenDigits = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "999...999(9966 digits)";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int N = 8;
    vector<int> forbiddenDigits = {2, 3, 4, 5, 6, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "1000";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int N = 524;
    vector<int> forbiddenDigits = {5, 2, 4};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "3668";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int N = 8;
    vector<int> forbiddenDigits = {};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "8";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int N = 9;
    vector<int> forbiddenDigits = {1, 3, 4, 5, 6, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "222...222(9 digits)";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int N = 8786;
    vector<int> forbiddenDigits = {1, 3, 5, 6, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "70288";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int N = 8192;
    vector<int> forbiddenDigits = {2, 3, 4, 5, 6, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "100...000(14 digits)";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int N = 1;
    vector<int> forbiddenDigits = {};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int N = 4433;
    vector<int> forbiddenDigits = {0, 2, 4, 6, 8, 9, 3, 5};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "777...777(10 digits)";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int N = 9999;
    vector<int> forbiddenDigits = {0, 2, 3, 4, 5, 6, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "111...111(36 digits)";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int N = 81;
    vector<int> forbiddenDigits = {0, 1, 3, 4, 5, 6, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "222...222(81 digits)";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int N = 6561;
    vector<int> forbiddenDigits = {1, 3, 4, 5, 6, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "200...202(13 digits)";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int N = 81;
    vector<int> forbiddenDigits = {2, 3, 4, 5, 6, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "111...101(10 digits)";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int N = 9997;
    vector<int> forbiddenDigits = {0, 2, 3, 4, 5, 6, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "111...111(192 digits)";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int N = 2121;
    vector<int> forbiddenDigits = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "999...999(12 digits)";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int N = 9999;
    vector<int> forbiddenDigits = {2, 3, 4, 5, 6, 7, 8, 9, 0};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "111...111(36 digits)";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int N = 1;
    vector<int> forbiddenDigits = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int N = 27;
    vector<int> forbiddenDigits = {1, 3, 4, 5, 6, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "220...222(10 digits)";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int N = 2;
    vector<int> forbiddenDigits = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int N = 2;
    vector<int> forbiddenDigits = {0, 2, 3, 4, 5, 6, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int N = 9;
    vector<int> forbiddenDigits = {0};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "9";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int N = 9999;
    vector<int> forbiddenDigits = {9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "11118888";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int N = 9;
    vector<int> forbiddenDigits = {1, 2, 3, 4, 5, 6, 7, 9, 0};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "888...888(9 digits)";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int N = 6561;
    vector<int> forbiddenDigits = {7};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "6561";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int N = 9999;
    vector<int> forbiddenDigits = {1, 2, 3, 5, 6, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "444...444(36 digits)";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int N = 5;
    vector<int> forbiddenDigits = {0, 5};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int N = 999;
    vector<int> forbiddenDigits = {1, 2, 3, 4, 5, 6};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "999";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int N = 1;
    vector<int> forbiddenDigits = {0, 1, 2, 3, 4, 5, 6, 7};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "8";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int N = 10000;
    vector<int> forbiddenDigits = {0};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int N = 9;
    vector<int> forbiddenDigits = {0, 1, 3, 4, 5, 6, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "222...222(9 digits)";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int N = 99;
    vector<int> forbiddenDigits = {0, 1, 3, 4, 5, 6, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "222...222(18 digits)";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int N = 9091;
    vector<int> forbiddenDigits = {1, 4, 5, 6, 7, 8, 9, 0};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "222...222(10 digits)";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    int N = 9116;
    vector<int> forbiddenDigits = {2, 3, 4, 5, 6, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "100...100(15 digits)";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    int N = 999;
    vector<int> forbiddenDigits = {2, 3, 4, 5, 6, 7, 8, 9};
    MultiplesWithLimit* pObj = new MultiplesWithLimit();
    clock_t start = clock();
    string result = pObj->minMultiples(N, forbiddenDigits);
    clock_t end = clock();
    delete pObj;
    string expected = "111...111(27 digits)";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22914195&rd=14549&pm=11629
********************************************************************************
#include <cstdio> 
#include <cstring> 
#include <iostream> 
#include <queue> 
#include <utility> 
#include <sstream> 
#define MAX 10010 
using namespace std; 
bool V[MAX]; 
bool D[10]; 
string tostring(int n){ 
  stringstream ss; 
  ss << n; 
  return ss.str(); 
} 
class MultiplesWithLimit{ 
public: 
string minMultiples(int n,vector < int > fd){ 
  memset(V,false,sizeof V); 
  memset(D,true,sizeof D); 
  queue < pair < int ,string > > Q; 
  for(int i=0;i < fd.size();i++) D[fd[i]] = false; 
  for(int i = 1;i < 10;i++){ 
    if(D[i] ){ 
      V[i%n] = true; 
      string a = ""; 
      a += char(i+48); 
      Q.push(make_pair(i%n,a)); 
    } 
  } 
  while(!Q.empty()){ 
    int m = Q.front().first; 
    string cad = Q.front().second; 
    if(m == 0){ 
      if(cad.size() >= 9) return cad.substr(0,3) + "..." + cad.substr(cad.size()-3, 3) + "(" + tostring(cad.size()) + " digits)" ; 
      else return cad; 
    } 
    Q.pop(); 
    for(int i = 0;i < 10;i++){ 
      if(!D[i]) continue; 
      int t = ((m*10) % n + (i % n)) % n; 
      if(!V[t]){ 
        string aux = cad; 
        aux += char(48+i); 
        V[t] = true; 
        Q.push(make_pair(t,aux)); 
      } 
    } 
  } 
  return "IMPOSSIBLE"; 
} 
};

********************************************************************************
*******************************************************************************/