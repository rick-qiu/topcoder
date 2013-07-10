/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6408
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

class PowerCollector {
public:
    string countPowers(string N);
};

string PowerCollector::countPowers(string N) {
    string ret;
    return ret;
}


int test0() {
    string N = "1";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string N = "10";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "4";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string N = "100";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "13";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string N = "1000";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "41";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string N = "10000";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "125";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string N = "100000";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "367";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string N = "1000000";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "1111";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string N = "10000000";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "3395";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string N = "100000000";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "10491";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string N = "1000000000";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "32670";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string N = "10000000000";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "102231";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string N = "100000000000";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "320990";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string N = "1000000000000";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "1010196";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string N = "10000000000000";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "3184138";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string N = "100000000000000";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "10046921";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string N = "1000000000000000";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "31723592";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string N = "10000000000000000";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "100216745";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string N = "100000000000000000";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "316694005";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string N = "36";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "9";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string N = "1000000000000000000";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "1001003332";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string N = "2199023255552";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "1496144";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string N = "98765432187654321";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "314733995";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string N = "88888888888888888";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "298590714";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string N = "71717171717171717";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "268218034";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string N = "576460752303423488";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "760085356";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string N = "576460752303423489";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "760085356";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string N = "576460752303423487";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "760085355";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string N = "687200388";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "27140";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string N = "936110805";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "31620";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string N = "656449788";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "26534";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string N = "278707968";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "17382";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string N = "480149050";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "22735";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string N = "912111010";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "31216";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string N = "99304405";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "10455";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string N = "775208921";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "28804";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string N = "885693852";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "30766";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string N = "121731885";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "11557";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string N = "38324423";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "6549";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string N = "162564109";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "13326";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string N = "165948320";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "13463";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string N = "399394232";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "20757";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string N = "877398903";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "30623";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string N = "141211836";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "12434";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string N = "750490913";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "28347";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string N = "738924655";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "28131";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string N = "686678221";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "27130";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string N = "207042284";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "15013";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string N = "891362005010843013";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "945085342";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string N = "948109531949661697";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "974694852";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string N = "219116072012441625";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "468703669";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string N = "34684278340628421";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "186564952";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string N = "402596504242004229";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "635246089";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string N = "735928620977808553";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "858768792";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string N = "967639384006961027";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "984679033";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string N = "385330919810226815";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "621480713";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string N = "213701209863625600";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "462878572";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string N = "919815404676557696";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "960045871";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string N = "82445632911393680";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "287570707";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string N = "507034236367319424";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "712863671";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string N = "778612105045962624";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "883313131";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string N = "213165238134857760";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "462298001";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string N = "921029276804327936";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "960678930";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string N = "552065572305274688";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "743834449";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string N = "10424720949497908";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "102321287";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string N = "656046857759866240";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "810839167";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string N = "40721664333540416";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "202141866";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string N = "239200131475964768";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "489704145";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string N = "99999887887776765";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "316693826";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string N = "922337203685477580";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "961360572";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string N = "1000000000000000000";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "1001003332";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string N = "505447028499293770";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "711747448";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string N = "999999999999999999";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "1001003331";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string N = "99999887887776765";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "316693826";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string N = "922337203685477580";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "961360572";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string N = "1000000000000000000";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "1001003332";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string N = "505447028499293770";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "711747448";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string N = "999999999999999999";
    PowerCollector* pObj = new PowerCollector();
    clock_t start = clock();
    string result = pObj->countPowers(N);
    clock_t end = clock();
    delete pObj;
    string expected = "1001003331";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14946025&rd=9826&pm=6408
********************************************************************************
#include <algorithm> 
#include <cassert> 
#include <cctype> 
#include <cmath> 
#include <complex> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <ctime> 
#include <deque> 
#include <functional> 
#include <iterator> 
#include <iostream> 
#include <list> 
#include <map> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <string> 
#include <valarray> 
#include <vector> 
 
using namespace std; 
 
const int MaxN=1100; 
const int inf=1000000000; 
const double eps=1e-8; 
const double PI=3.1415926535897932384626433832795; 
 
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef long double ld; 
typedef vector<ld> vd; 
typedef pair<int,int> pii; 
typedef vector<pii> vp; 
 
#define MP make_pair 
 
#ifdef  WIN32 
typedef __int64 int64; 
#define min __min 
#define max __max 
#define for if(false); else for 
#else 
typedef long long int64; 
#endif 
 
int pows[70]; 
 
int meb(int n) 
{ 
  int res = -1; 
  for(int i = 2; i * i <= n; i++) 
    if(n % i == 0) 
    { 
      if(n % (i * i) == 0) 
        return 0; 
      n /= i; 
      res = - res; 
    } 
  if(n) 
    res = - res; 
  return res; 
} 
 
class PowerCollector { 
  public: 
  string countPowers(string N) { 
    istringstream in(N); 
    int64 n = 0; 
    for(int i = 0; i < N.length(); i++) 
    { 
      n = n * 10 + (N[i] - '0'); 
    } 
    string result; 
 
    for(int i = 2; i < 70; i++) 
    { 
      double k = pow((double)n, 1.0 / (double) i); 
      int64 l = k - 1; 
      while(1) 
      { 
        int64 a = l + 1; 
        int64 p = 1; 
        bool good = true; 
        for(int j = 0; j < i; j++) 
        { 
          if(p > n / a) 
          { 
            good = false; 
            break; 
          } 
          p *= a; 
        } 
        if(good) 
          l ++; 
        else 
          break; 
      } 
      pows[i] = l; 
    } 
    int64 res = 0; 
    for(int i = 2; i < 70; i++) 
      res += meb(i) * pows[i]; 
    res --; 
     
    char s[100]; 
#ifdef WIN32 
    sprintf(s,"%I64d",res); 
#else 
    sprintf(s,"%Ld",res); 
#endif 
    result=s; 
    return result; 
  } 
   
 
}; 
 
 
 
     
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/