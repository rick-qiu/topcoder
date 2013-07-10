/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4527
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

class OddDigitable {
public:
    string findMultiple(int N, int M);
};

string OddDigitable::findMultiple(int N, int M) {
    string ret;
    return ret;
}


int test0() {
    int N = 10;
    int M = 7;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "7";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 22;
    int M = 12;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "-1";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 29;
    int M = 0;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "319";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 5934;
    int M = 2735;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "791957";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 2;
    int M = 0;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "-1";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 2;
    int M = 1;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 3;
    int M = 0;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "3";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 3;
    int M = 1;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 3;
    int M = 2;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "5";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 4;
    int M = 0;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "-1";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 4;
    int M = 1;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 4;
    int M = 2;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "-1";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 4;
    int M = 3;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "3";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 5;
    int M = 0;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "5";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 5;
    int M = 1;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 5;
    int M = 2;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "7";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 5;
    int M = 3;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "3";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 5;
    int M = 4;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "9";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 7;
    int M = 0;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "7";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 7;
    int M = 1;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 7;
    int M = 2;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "9";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 7;
    int M = 3;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "3";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 7;
    int M = 5;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "5";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 7;
    int M = 6;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "13";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 87412;
    int M = 21742;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "-1";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 33541;
    int M = 15899;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1357539";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 31886;
    int M = 23932;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "-1";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 91589;
    int M = 14136;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "9997337";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 71505;
    int M = 37965;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "11335755";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 7111;
    int M = 3800;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "39355";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 14199;
    int M = 1040;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1151159";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 11961;
    int M = 8831;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "511193";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 88472;
    int M = 2076;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "-1";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 14413;
    int M = 6566;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "193935";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 3126;
    int M = 2304;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "-1";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 91915;
    int M = 40145;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "7577175";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 64065;
    int M = 17098;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "33779353";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 2061;
    int M = 1746;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "57393";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 51071;
    int M = 25711;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1353557";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 55733;
    int M = 49889;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "3951199";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 71425;
    int M = 60765;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "3917715";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 39228;
    int M = 4488;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "-1";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 71741;
    int M = 14593;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "3171197";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 61177;
    int M = 54349;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1155535";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 81855;
    int M = 16802;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1735757";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 36096;
    int M = 17664;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "-1";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 56375;
    int M = 30913;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "59111913";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 54507;
    int M = 29485;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1991737";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 21846;
    int M = 678;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "-1";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 5813;
    int M = 4708;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "33773";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 91957;
    int M = 50531;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "5935779";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 51551;
    int M = 37119;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "37119";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 75737;
    int M = 297;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "151771";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 66311;
    int M = 16143;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "7177731";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 85799;
    int M = 38857;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "9133551";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 80391;
    int M = 273;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "11737359";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 85561;
    int M = 17450;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "59995711";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 69730;
    int M = 24386;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "-1";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 9813;
    int M = 6183;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "555711";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 45073;
    int M = 18540;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "153759";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 60165;
    int M = 46235;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1971515";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 79747;
    int M = 26351;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "9595991";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 79681;
    int M = 51280;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "9373957";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 5518;
    int M = 3348;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "-1";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 99999;
    int M = 21333;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "313339199997999";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 99990;
    int M = 21339;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "3133919997999";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 90009;
    int M = 51015;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "315119399799";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 89991;
    int M = 2119;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "315397939171";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 83325;
    int M = 64874;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "155199959999";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 80008;
    int M = 51013;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "313113199197";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 79992;
    int M = 22153;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "317791999777";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 76923;
    int M = 44968;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "111111395395";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 70007;
    int M = 1010;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "313115199399";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 69993;
    int M = 32132;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "313597999199";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 66666;
    int M = 14881;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "3115191195991";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 60006;
    int M = 51015;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "313113159195";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 59994;
    int M = 2133;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "313395999399";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 50005;
    int M = 10109;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "3131131191919";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 49995;
    int M = 21339;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "3133919997999";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 40004;
    int M = 11009;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "313113159193";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 39996;
    int M = 22133;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "313791999797";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 33333;
    int M = 14881;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "3115191195991";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 30003;
    int M = 21012;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "313113159195";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 29997;
    int M = 2133;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "313395999399";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 20002;
    int M = 11011;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "313113119191";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 19998;
    int M = 2133;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "313391999799";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 10001;
    int M = 1010;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "313113119191";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 9999;
    int M = 2133;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "313391999799";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 99990;
    int M = 99988;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "-1";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 99990;
    int M = 0;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "-1";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 100000;
    int M = 99999;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "99999";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 100000;
    int M = 59009;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "-1";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 100000;
    int M = 0;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "-1";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 19998;
    int M = 4674;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "-1";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 99001;
    int M = 2506;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "17393191193";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 99001;
    int M = 0;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1199199113";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int N = 99999;
    int M = 0;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "99999";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int N = 99899;
    int M = 0;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "375919937";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int N = 99999;
    int M = 2000;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "31111911179777";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int N = 99999;
    int M = 2;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "31999979999";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int N = 99999;
    int M = 1234;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "13111993179991";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int N = 99997;
    int M = 99989;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "3333199993";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int N = 99999;
    int M = 21111;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "311119199997999";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int N = 99999;
    int M = 21333;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "313339199997999";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int N = 99999;
    int M = 1000;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "11111991179977";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int N = 99999;
    int M = 14;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "151999979999";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int N = 10100;
    int M = 3023;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "-1";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int N = 29;
    int M = 0;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "319";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int N = 200;
    int M = 21;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "-1";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int N = 99999;
    int M = 10001;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "111119911199777";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int N = 99999;
    int M = 100;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1111999179997";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int N = 2;
    int M = 1;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
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
    int N = 9999;
    int M = 8911;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "91119799";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int N = 100000;
    int M = 2735;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "-1";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int N = 95642;
    int M = 12225;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "13115179";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int N = 9999;
    int M = 9240;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "193199919";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int N = 100;
    int M = 21;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "-1";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int N = 40;
    int M = 21;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "-1";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int N = 99999;
    int M = 6;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "71999979999";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int N = 99999;
    int M = 21353;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "311139111999119";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int N = 3;
    int M = 2;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "5";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int N = 4995;
    int M = 2217;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "3119119977";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int N = 82;
    int M = 27;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "191";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int N = 99999;
    int M = 97680;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "19771999959";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int N = 90000;
    int M = 10001;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "-1";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int N = 3;
    int M = 0;
    OddDigitable* pObj = new OddDigitable();
    clock_t start = clock();
    string result = pObj->findMultiple(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "3";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=347569&rd=7228&pm=4527
********************************************************************************
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <cmath> 
#include <cctype> 
#include <vector> 
#include <string> 
#include <set> 
#include <queue> 
#include <map> 
#include <utility> 
#include <algorithm> 
#include <iostream> 
#include <sstream> 
using namespace std; 
 
#define VAR(i,a) typeof(a) i=(a) 
#define FOR(i,a,b) for(int i=(a),_b=(b);i<=_b;++i) 
#define FORD(i,a,b) for(int i=(a),_b=(b);i>=_b;--i) 
#define FORI(i,a) for(VAR(i,(a).begin());i!=(a).end();++i) 
const double EPS=1e-9; 
typedef vector<int> VI; 
typedef vector<string> VS; 
typedef long long I64; typedef unsigned long long U64; 
 
const int MAXN=100000+10; 
 
struct Node { 
  string s; 
  int u; 
}; 
 
int n,m; 
bool flag[MAXN]; 
Node q[MAXN]; 
int p1,p2; 
 
class OddDigitable { 
public: 
  //Parms: int N, int M 
  string findMultiple(int _n,int _m) 
  { 
    n=_n,m=_m; 
    memset(flag,0,sizeof(flag)); 
 
    p1=p2=0; 
    q[0].s="",q[0].u=0; 
    while(p1<=p2) { 
      for(int i=1;i<=9;i+=2) { 
        int u=(q[p1].u*10+i)%n; 
        if(flag[u]) continue; 
        p2++; 
        q[p2].s=q[p1].s+char(i+'0'); 
        q[p2].u=u; 
        if(u==m) return q[p2].s; 
        flag[u]=1; 
      } 
      p1++; 
    } 
 
    return "-1"; 
  } 
   
 
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/