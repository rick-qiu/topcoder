/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4495
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

class Musical {
public:
    string loser(int n, double time);
};

string Musical::loser(int n, double time) {
    string ret;
    return ret;
}


int test0() {
    int n = 3;
    double time = 1.2;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 3;
    double time = 12.0;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 26;
    double time = 100.0;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "N";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 3;
    double time = 13.33333333;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 7;
    double time = 1.0;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "G";
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
    double time = 15.0;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
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
    double time = 97.5001;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 2;
    double time = 97.4999999;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 26;
    double time = 6.32;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "S";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 26;
    double time = 6.3333;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "R";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 26;
    double time = 30.0;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "N";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 3;
    double time = 95.01;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 6;
    double time = 6.0;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "D";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 5;
    double time = 5.01;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 4;
    double time = 4.0;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 3;
    double time = 3.0;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 2;
    double time = 2.0;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 11;
    double time = 93.11360627157264;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "E";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 4;
    double time = 82.43353272623155;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "D";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 16;
    double time = 94.73354925417038;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "G";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 12;
    double time = 48.85784498751542;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "J";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 2;
    double time = 68.07855395827394;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 20;
    double time = 70.8611484776482;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "R";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 19;
    double time = 3.801045115813053;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "N";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 21;
    double time = 59.67468011687829;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "D";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 12;
    double time = 50.81878818026858;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "H";
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
    double time = 5.035596525341242;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 6;
    double time = 8.703510843974115;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 6;
    double time = 45.57191009502199;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "E";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 20;
    double time = 48.72814037961462;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "S";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 22;
    double time = 2.4714514233909637;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "H";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 2;
    double time = 40.51384648826714;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 24;
    double time = 72.27015306351026;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "H";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 22;
    double time = 10.454591349893066;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 22;
    double time = 71.18307498198075;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 2;
    double time = 58.729590324359236;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 11;
    double time = 32.06796037119692;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "F";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 13;
    double time = 21.950078722452687;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 4;
    double time = 96.39913781226532;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 17;
    double time = 92.37193925720291;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 19;
    double time = 57.882195261500314;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "G";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 21;
    double time = 10.334375459755545;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "R";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 21;
    double time = 25.129838215553992;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "F";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 23;
    double time = 96.20017182231156;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "U";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 7;
    double time = 37.31630188409941;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 10;
    double time = 23.442684470686224;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "E";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 21;
    double time = 16.49982024781516;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "L";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 4;
    double time = 70.38569894825125;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 19;
    double time = 27.080594596354683;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "O";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 9;
    double time = 1.622759706506978;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 14;
    double time = 90.57025603905608;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "L";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 21;
    double time = 77.85968940211978;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "Q";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 12;
    double time = 83.75177773745783;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "E";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 14;
    double time = 29.063417048572123;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "K";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 18;
    double time = 81.3810101977034;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "D";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 21;
    double time = 3.902506663747165;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "P";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 4;
    double time = 62.26724378357364;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "D";
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
    double time = 7.886449303491099;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 9;
    double time = 15.858421492892282;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "H";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 17;
    double time = 84.88476130187354;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 20;
    double time = 63.7338434125554;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "I";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 25;
    double time = 24.89741776988311;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "T";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 26;
    double time = 67.84381998604206;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "X";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 14;
    double time = 43.04228911630176;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "I";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 16;
    double time = 43.574054990036345;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 24;
    double time = 60.76295388997509;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "S";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 3;
    double time = 51.419011033556586;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 23;
    double time = 56.0;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "H";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 25;
    double time = 99.98;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "O";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 2;
    double time = 5.0;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 23;
    double time = 89.37584682273902;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "U";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 3;
    double time = 12.0;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 26;
    double time = 1.0;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 14;
    double time = 57.5723;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "J";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 2;
    double time = 6.0;
    Musical* pObj = new Musical();
    clock_t start = clock();
    string result = pObj->loser(n, time);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=270505&rd=7222&pm=4495
********************************************************************************
#include <vector>
#include <string>
#include <cstdio>
using namespace std;
 
#define V(x) vector<x >
#define vs V(string)
#define vi V(int)
#define vd V(double)
 
#define fr(x,y,z) for((x)=(y);(x)<(z);(x)++)
#define fo(x,y) fr(x,0,y)
#define fir(n) fo(i,n)
#define fjr(n) fo(j,n)
#define fkr(n) fo(k,n)
#define fi fir(n)
#define fj fjr(n)
 
#define pb push_back
#define sz size()
#define cs c_str()
 
#define df double
 
df foo(df x) {
while(x<0) x+=1.0;
while(x>=1) x-=1.0;
return x <? (1.0-x);
}
 
class Musical { public: string loser(int n, df t) {
int i,j,k;
V(df) dist(n,1e10);
fi fjr(n-1) { dist[i]<?=foo(t*0.1-(i/(df)n)-(j/(df)(n-1))); }
j=0; fi if(dist[i]>dist[j]) j=i;
string ret="A"; ret[0]='A'+j;
return ret;
 
}};

********************************************************************************
*******************************************************************************/