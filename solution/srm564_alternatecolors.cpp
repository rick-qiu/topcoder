/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12343
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

class AlternateColors {
public:
    string getColor(long r, long g, long b, long k);
};

string AlternateColors::getColor(long r, long g, long b, long k) {
    string ret;
    return ret;
}


int test0() {
    long r = 1;
    long g = 1;
    long b = 1;
    long k = 3;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    long r = 3;
    long g = 4;
    long b = 5;
    long k = 4;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    long r = 7;
    long g = 7;
    long b = 1;
    long k = 7;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    long r = 1000000000000;
    long g = 1;
    long b = 1;
    long k = 1000000000002;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    long r = 653;
    long g = 32;
    long b = 1230;
    long k = 556;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    long r = 39;
    long g = 4;
    long b = 29;
    long k = 7;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    long r = 35;
    long g = 41;
    long b = 37;
    long k = 106;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    long r = 29;
    long g = 48;
    long b = 24;
    long k = 94;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    long r = 32;
    long g = 29;
    long b = 25;
    long k = 30;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    long r = 26;
    long g = 36;
    long b = 22;
    long k = 74;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    long r = 4;
    long g = 15;
    long b = 34;
    long k = 50;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    long r = 19;
    long g = 36;
    long b = 31;
    long k = 25;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    long r = 20;
    long g = 11;
    long b = 6;
    long k = 24;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    long r = 28;
    long g = 4;
    long b = 16;
    long k = 40;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    long r = 21;
    long g = 38;
    long b = 50;
    long k = 22;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    long r = 38;
    long g = 26;
    long b = 21;
    long k = 70;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    long r = 33;
    long g = 38;
    long b = 18;
    long k = 85;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    long r = 1362806;
    long g = 9637722;
    long b = 7058502;
    long k = 1977778;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    long r = 1159652;
    long g = 9711153;
    long b = 312878;
    long k = 1495426;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    long r = 3377413;
    long g = 9950084;
    long b = 2868413;
    long k = 11985971;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    long r = 689008;
    long g = 3508527;
    long b = 5686348;
    long k = 615514;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    long r = 4140848;
    long g = 5815343;
    long b = 5146349;
    long k = 14109660;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    long r = 7048211;
    long g = 8685039;
    long b = 7549598;
    long k = 22481440;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    long r = 4430179;
    long g = 9355845;
    long b = 4672706;
    long k = 12194599;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    long r = 7985930;
    long g = 9569776;
    long b = 6121529;
    long k = 18475752;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    long r = 2010344;
    long g = 3004454;
    long b = 1800498;
    long k = 6278167;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    long r = 5885057;
    long g = 2687399;
    long b = 8951175;
    long k = 5035557;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    long r = 4792000;
    long g = 1785765;
    long b = 4144844;
    long k = 8883598;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    long r = 2810158;
    long g = 4898812;
    long b = 406946;
    long k = 7000645;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    long r = 18190633489;
    long g = 83578833264;
    long b = 20863098676;
    long k = 52515023334;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    long r = 57814135262;
    long g = 46171158951;
    long b = 13343448109;
    long k = 68951653520;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    long r = 20846177809;
    long g = 30860288026;
    long b = 987779564;
    long k = 46565755486;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    long r = 17964018705;
    long g = 65273511246;
    long b = 31105494141;
    long k = 50314587302;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    long r = 28133773839;
    long g = 72608065996;
    long b = 5681311908;
    long k = 43120633686;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    long r = 66977089037;
    long g = 56944425814;
    long b = 82337384434;
    long k = 197258589648;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    long r = 98564133914;
    long g = 53043597217;
    long b = 21180174395;
    long k = 34013735008;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    long r = 64139288192;
    long g = 34311997200;
    long b = 48112755322;
    long k = 121348738051;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    long r = 51741562991;
    long g = 99687325033;
    long b = 13939616071;
    long k = 144233234402;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    long r = 72283793455;
    long g = 66061351779;
    long b = 86535283095;
    long k = 355975292;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    long r = 47897402498;
    long g = 58932763704;
    long b = 55080125866;
    long k = 152946315811;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    long r = 43310090212;
    long g = 21475482273;
    long b = 20328413513;
    long k = 70841109725;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    long r = 626333460107;
    long g = 666760469323;
    long b = 313414761518;
    long k = 656725177609;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    long r = 503832174890;
    long g = 917383384318;
    long b = 845748922941;
    long k = 1647508415774;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    long r = 706484443531;
    long g = 466016836073;
    long b = 435981479176;
    long k = 1514977500901;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    long r = 100489160883;
    long g = 923912918759;
    long b = 462258494532;
    long k = 95912411851;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    long r = 392857606821;
    long g = 404636675251;
    long b = 534279348968;
    long k = 1179342316622;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    long r = 844166403055;
    long g = 777778961952;
    long b = 108199579541;
    long k = 1722942659245;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    long r = 410989660016;
    long g = 590114992301;
    long b = 572561515508;
    long k = 763788223944;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    long r = 418496129223;
    long g = 300609398790;
    long b = 530300495241;
    long k = 1015225961325;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    long r = 244407534832;
    long g = 956536017325;
    long b = 744413242574;
    long k = 1797565825952;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    long r = 892437032669;
    long g = 635246552291;
    long b = 194241815394;
    long k = 105429236738;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    long r = 580783397299;
    long g = 349383150298;
    long b = 207889734969;
    long k = 690164647590;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    long r = 271281576404;
    long g = 789227539981;
    long b = 962212822048;
    long k = 1863718050608;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    long r = 26;
    long g = 26;
    long b = 26;
    long k = 33;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    long r = 61;
    long g = 61;
    long b = 61;
    long k = 97;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    long r = 85;
    long g = 85;
    long b = 85;
    long k = 119;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    long r = 79;
    long g = 79;
    long b = 79;
    long k = 216;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    long r = 32;
    long g = 32;
    long b = 32;
    long k = 18;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    long r = 31;
    long g = 31;
    long b = 31;
    long k = 12;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    long r = 68;
    long g = 68;
    long b = 68;
    long k = 191;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    long r = 45;
    long g = 45;
    long b = 45;
    long k = 129;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    long r = 86;
    long g = 86;
    long b = 86;
    long k = 82;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    long r = 13;
    long g = 13;
    long b = 13;
    long k = 12;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    long r = 32701729912;
    long g = 32701729912;
    long b = 32701729912;
    long k = 98064180824;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    long r = 46291568432;
    long g = 46291568432;
    long b = 46291568432;
    long k = 79822121054;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    long r = 60221394423;
    long g = 60221394423;
    long b = 60221394423;
    long k = 20767837386;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    long r = 35489922699;
    long g = 35489922699;
    long b = 35489922699;
    long k = 4913886416;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    long r = 56555791800;
    long g = 56555791800;
    long b = 56555791800;
    long k = 23213053963;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    long r = 68260176158;
    long g = 68260176158;
    long b = 68260176158;
    long k = 52267160656;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    long r = 85106989680;
    long g = 85106989680;
    long b = 85106989680;
    long k = 20509960668;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    long r = 18121898115;
    long g = 18121898115;
    long b = 18121898115;
    long k = 22097435614;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    long r = 55551446643;
    long g = 55551446643;
    long b = 55551446643;
    long k = 37599143362;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    long r = 56305412628;
    long g = 56305412628;
    long b = 56305412628;
    long k = 65705003776;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    long r = 65647735755;
    long g = 65647735755;
    long b = 65647735755;
    long k = 180537813277;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    long r = 66821215108;
    long g = 66821215108;
    long b = 66821215108;
    long k = 26015361630;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    long r = 422956283443;
    long g = 422956283443;
    long b = 422956283443;
    long k = 87027816312;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    long r = 228133154414;
    long g = 228133154414;
    long b = 228133154414;
    long k = 507231850784;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    long r = 222181153250;
    long g = 222181153250;
    long b = 222181153250;
    long k = 428718850508;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    long r = 330907710080;
    long g = 330907710080;
    long b = 330907710080;
    long k = 632493751189;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    long r = 680476675966;
    long g = 680476675966;
    long b = 680476675966;
    long k = 670069102921;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    long r = 891982839604;
    long g = 891982839604;
    long b = 891982839604;
    long k = 1781660401300;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    long r = 737297275510;
    long g = 737297275510;
    long b = 737297275510;
    long k = 1043058569267;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    long r = 924923630217;
    long g = 924923630217;
    long b = 924923630217;
    long k = 235115274967;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    long r = 915754740899;
    long g = 915754740899;
    long b = 915754740899;
    long k = 1685177154207;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    long r = 898069788816;
    long g = 898069788816;
    long b = 898069788816;
    long k = 1650509712088;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    long r = 726158833853;
    long g = 726158833853;
    long b = 726158833853;
    long k = 932704193638;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    long r = 654823868612;
    long g = 654823868612;
    long b = 654823868612;
    long k = 1464208169353;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    long r = 12;
    long g = 12;
    long b = 59;
    long k = 21;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    long r = 39;
    long g = 49;
    long b = 39;
    long k = 70;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    long r = 98;
    long g = 77;
    long b = 77;
    long k = 239;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    long r = 67;
    long g = 67;
    long b = 75;
    long k = 23;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    long r = 14;
    long g = 14;
    long b = 6;
    long k = 10;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    long r = 47;
    long g = 47;
    long b = 49;
    long k = 143;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    long r = 62;
    long g = 62;
    long b = 18;
    long k = 20;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    long r = 75;
    long g = 8;
    long b = 8;
    long k = 20;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    long r = 45;
    long g = 58;
    long b = 45;
    long k = 137;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    long r = 19;
    long g = 19;
    long b = 9;
    long k = 5;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    long r = 91;
    long g = 91;
    long b = 9;
    long k = 29;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    long r = 54;
    long g = 54;
    long b = 75;
    long k = 168;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    long r = 37946;
    long g = 37946;
    long b = 92329;
    long k = 35350;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    long r = 92424;
    long g = 58936;
    long b = 92424;
    long k = 144202;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    long r = 82153;
    long g = 9362;
    long b = 9362;
    long k = 22355;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    long r = 99913;
    long g = 2753;
    long b = 2753;
    long k = 25082;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    long r = 28973;
    long g = 83433;
    long b = 28973;
    long k = 124635;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    long r = 28257;
    long g = 28257;
    long b = 27927;
    long k = 83919;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    long r = 3654;
    long g = 3654;
    long b = 31248;
    long k = 18552;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    long r = 88535;
    long g = 59293;
    long b = 88535;
    long k = 44603;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    long r = 3924;
    long g = 70696;
    long b = 70696;
    long k = 24199;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    long r = 24369;
    long g = 24369;
    long b = 27043;
    long k = 30105;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    long r = 6183;
    long g = 83041;
    long b = 6183;
    long k = 5679;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    long r = 1077;
    long g = 1077;
    long b = 40737;
    long k = 25362;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    long r = 63930398284;
    long g = 63930398284;
    long b = 30378117417;
    long k = 48312793795;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    long r = 45571515417;
    long g = 45571515417;
    long b = 29456008186;
    long k = 91869353001;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    long r = 92090466298;
    long g = 31190728339;
    long b = 31190728339;
    long k = 128742689017;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    long r = 23998268886;
    long g = 91584426694;
    long b = 91584426694;
    long k = 196164386862;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    long r = 90694269533;
    long g = 92351177;
    long b = 90694269533;
    long k = 26997767;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    long r = 24865128007;
    long g = 53593715204;
    long b = 24865128007;
    long k = 89477595470;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    long r = 43118509150;
    long g = 43118509150;
    long b = 42502386666;
    long k = 128416263047;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    long r = 39177990775;
    long g = 39177990775;
    long b = 7640149761;
    long k = 4511435474;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    long r = 21580785752;
    long g = 21580785752;
    long b = 28080423121;
    long k = 19325998009;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    long r = 31043135663;
    long g = 831337362;
    long b = 31043135663;
    long k = 1376466048;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    long r = 89284296662;
    long g = 40657861169;
    long b = 40657861169;
    long k = 154805329697;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    long r = 46152004189;
    long g = 46152004189;
    long b = 42079772218;
    long k = 130145169291;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    long r = 460837220854;
    long g = 460837220854;
    long b = 299774813721;
    long k = 325014188660;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    long r = 884634120889;
    long g = 437379550020;
    long b = 437379550020;
    long k = 1306653465466;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    long r = 151369432901;
    long g = 151369432901;
    long b = 182241941000;
    long k = 462720469723;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    long r = 119755690359;
    long g = 119755690359;
    long b = 878819376049;
    long k = 276314988056;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    long r = 777229231787;
    long g = 365144179599;
    long b = 777229231787;
    long k = 127733006877;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    long r = 411818993712;
    long g = 171482843497;
    long b = 411818993712;
    long k = 641325335864;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    long r = 267800814278;
    long g = 267800814278;
    long b = 505207425358;
    long k = 951345112894;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    long r = 769229758967;
    long g = 769229758967;
    long b = 836214927899;
    long k = 168741377475;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    long r = 579190957167;
    long g = 579190957167;
    long b = 362324512540;
    long k = 968643772132;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    long r = 826093310321;
    long g = 826093310321;
    long b = 771643087115;
    long k = 1390815007575;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    long r = 496424179646;
    long g = 289161382390;
    long b = 289161382390;
    long k = 613723873622;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    long r = 957887351385;
    long g = 247067893127;
    long b = 247067893127;
    long k = 611944281520;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    long r = 40099900800;
    long g = 40099900800;
    long b = 40099900800;
    long k = 99999999999;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    long r = 100000000000;
    long g = 100000000000;
    long b = 100000000000;
    long k = 245489794516;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    long r = 1000000000;
    long g = 1000000000;
    long b = 1000000000;
    long k = 3000000000;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    long r = 1000000000000;
    long g = 1000000000000;
    long b = 1000000000000;
    long k = 3000000000000;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    long r = 1000000000000;
    long g = 1000000000000;
    long b = 1000000000000;
    long k = 1000000000000;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    long r = 1000000000000;
    long g = 1000000000000;
    long b = 1000000000000;
    long k = 1000000000002;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    long r = 999999999999;
    long g = 999999999999;
    long b = 999999999999;
    long k = 999999999999;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    long r = 10000000000;
    long g = 10000000000;
    long b = 10000000000;
    long k = 30000000000;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    long r = 999999999999;
    long g = 999999999999;
    long b = 999999999999;
    long k = 2874536542514;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    long r = 1000000000000;
    long g = 1000000000000;
    long b = 1000000000000;
    long k = 200000000007;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    long r = 1000000000000;
    long g = 100000000000;
    long b = 10000000000;
    long k = 23423434;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    long r = 100000000000;
    long g = 100000000000;
    long b = 99999999999;
    long k = 200000009000;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    long r = 250000000000;
    long g = 500000000000;
    long b = 1000000000000;
    long k = 999999987655;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    long r = 1000000000000;
    long g = 1000000000000;
    long b = 1000000000000;
    long k = 2999999999999;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    long r = 300000000000;
    long g = 300000000000;
    long b = 300000000000;
    long k = 900000000000;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    long r = 9;
    long g = 8;
    long b = 7;
    long k = 1;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    long r = 1000000000000;
    long g = 100000000000;
    long b = 1;
    long k = 1100000000001;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    long r = 3;
    long g = 3;
    long b = 3;
    long k = 5;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    long r = 1000000000000;
    long g = 1;
    long b = 1000000000000;
    long k = 1000000000000;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    long r = 3;
    long g = 7;
    long b = 5;
    long k = 15;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    long r = 1000000000000;
    long g = 1000000000000;
    long b = 300000000000;
    long k = 900000000000;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    long r = 10000000000;
    long g = 100000000000;
    long b = 900000000000;
    long k = 100000000005;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    long r = 2;
    long g = 1000;
    long b = 1;
    long k = 1000;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    long r = 2;
    long g = 1;
    long b = 3;
    long k = 1;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    long r = 1;
    long g = 2;
    long b = 4;
    long k = 1;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    long r = 999999999;
    long g = 999999999;
    long b = 999999999;
    long k = 999999999;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    long r = 1;
    long g = 1;
    long b = 1;
    long k = 2;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    long r = 100;
    long g = 101;
    long b = 300;
    long k = 449;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    long r = 999999999997;
    long g = 999999999859;
    long b = 999999999869;
    long k = 2999999999720;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    long r = 1;
    long g = 2;
    long b = 2;
    long k = 4;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    long r = 10;
    long g = 20;
    long b = 30;
    long k = 31;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    long r = 4;
    long g = 4;
    long b = 4;
    long k = 3;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    long r = 1;
    long g = 2;
    long b = 1000;
    long k = 10;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    long r = 2;
    long g = 3;
    long b = 4;
    long k = 7;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    long r = 100000000000;
    long g = 100000000000;
    long b = 100000000000;
    long k = 300000000000;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    long r = 1230;
    long g = 32;
    long b = 653;
    long k = 1915;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    long r = 1;
    long g = 10;
    long b = 100;
    long k = 60;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    long r = 1466076707;
    long g = 205375936;
    long b = 1303299017;
    long k = 820489468;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    long r = 100;
    long g = 100;
    long b = 200;
    long k = 350;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    long r = 1;
    long g = 2;
    long b = 100;
    long k = 6;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    long r = 4;
    long g = 4;
    long b = 4;
    long k = 5;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    long r = 1000000000000;
    long g = 999999999999;
    long b = 999999999999;
    long k = 1999999999999;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    long r = 2;
    long g = 3;
    long b = 5;
    long k = 7;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    long r = 1000000000000;
    long g = 99999999999;
    long b = 999999999999;
    long k = 999999999999;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    long r = 1;
    long g = 1000000000000;
    long b = 1000000000000;
    long k = 1000000000009;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    long r = 7;
    long g = 4;
    long b = 3;
    long k = 10;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    long r = 10000000000;
    long g = 20000000000;
    long b = 30000000000;
    long k = 50000000000;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    long r = 1;
    long g = 2;
    long b = 3;
    long k = 5;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    long r = 9999999999;
    long g = 9999999999;
    long b = 9999999999;
    long k = 10000000000;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    long r = 4;
    long g = 4;
    long b = 2;
    long k = 9;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    long r = 3;
    long g = 4;
    long b = 5;
    long k = 10;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    long r = 2;
    long g = 5;
    long b = 5;
    long k = 9;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    long r = 1;
    long g = 3;
    long b = 3;
    long k = 5;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    long r = 2;
    long g = 1;
    long b = 1;
    long k = 2;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    long r = 100;
    long g = 100;
    long b = 50;
    long k = 151;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    long r = 1000000000;
    long g = 1000000000;
    long b = 1000000000;
    long k = 2;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    long r = 100;
    long g = 300;
    long b = 200;
    long k = 401;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    long r = 10000000000;
    long g = 10000000000;
    long b = 10000000000;
    long k = 10000000000;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    long r = 1000000000000;
    long g = 999999999999;
    long b = 99999999999;
    long k = 1999999999999;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    long r = 7;
    long g = 3;
    long b = 3;
    long k = 10;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    long r = 2;
    long g = 5;
    long b = 8;
    long k = 11;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    long r = 2;
    long g = 2;
    long b = 1;
    long k = 3;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    long r = 3;
    long g = 6;
    long b = 4;
    long k = 13;
    AlternateColors* pObj = new AlternateColors();
    clock_t start = clock();
    string result = pObj->getColor(r, g, b, k);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22920525&rd=15186&pm=12343
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
 
#define ALL(v) (v).begin(),(v).end()
#define RALL(v) (v).rbegin(),(v).rend()
#define UNIQ(v) sort(ALL(v)),v.erase(unique(ALL(v)),(v).end())
 
class AlternateColors {
public:
  string getColor(long long, long long, long long, long long);
};
 
string AlternateColors::getColor(long long r, long long g, long long b, long long k) 
{
  vector< pair<long long, string> > v;
  v.push_back(make_pair(r, "RED"));
  v.push_back(make_pair(g, "GREEN"));
  v.push_back(make_pair(b, "BLUE"));
  
  --k;
  while (k >= v.size())
  {
    long long d = k / v.size();
    d = min(d, min_element(ALL(v))->first);
    for (size_t i = 0; i < v.size(); ++i)
      v[i].first -= d;
    k -= d * v.size();
    vector< pair<long long, string> >:: iterator it;
    while (!(it = min_element(ALL(v)))->first)
      v.erase(it);
  }
  return v[k].second;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/