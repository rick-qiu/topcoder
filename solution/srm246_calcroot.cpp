/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4519
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

class CalcRoot {
public:
    string approximate(int N, int D);
};

string CalcRoot::approximate(int N, int D) {
    string ret;
    return ret;
}


int test0() {
    int N = 4;
    int D = 10;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "2/1";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 5;
    int D = 3;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "7/3";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 12;
    int D = 10;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "31/9";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 23743;
    int D = 763;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "98462/639";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 991746;
    int D = 903;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "837522/841";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 69;
    int D = 5;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "25/3";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 29;
    int D = 32;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "70/13";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 53;
    int D = 1;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "7/1";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 73;
    int D = 61;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "487/57";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 21;
    int D = 1;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "5/1";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 41;
    int D = 81;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "397/62";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 17;
    int D = 25;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "33/8";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 65;
    int D = 7;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "8/1";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 46;
    int D = 47;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "156/23";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 622311;
    int D = 92;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "11833/15";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 264041;
    int D = 50;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "16957/33";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 756386;
    int D = 81;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "38267/44";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 426901;
    int D = 1;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "653/1";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 426901;
    int D = 13;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "5227/8";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 267545;
    int D = 68;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "33621/65";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 267545;
    int D = 68;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "33621/65";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 407369;
    int D = 15;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "2553/4";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 407369;
    int D = 19;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "2553/4";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 330966;
    int D = 93;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "15533/27";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 630297;
    int D = 511;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "299305/377";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 845032;
    int D = 412;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "369541/402";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 844899;
    int D = 763;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "649863/707";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 987955;
    int D = 551;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "268369/270";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 30230;
    int D = 123;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "21038/121";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 30230;
    int D = 123;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "21038/121";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 831401;
    int D = 705;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "504232/553";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 822089;
    int D = 958;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "651911/719";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 802089;
    int D = 958;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "836485/934";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 306283;
    int D = 374;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "3874/7";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 852501;
    int D = 187;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "169889/184";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 852301;
    int D = 187;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "123709/134";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 679471;
    int D = 361;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "266249/323";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 409096;
    int D = 787;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "292300/457";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 677285;
    int D = 297;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "153896/187";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 673283;
    int D = 297;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "236315/288";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 513729;
    int D = 826;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "493840/689";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 864738;
    int D = 810;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "555158/597";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 893057;
    int D = 725;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "670017/709";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 405537;
    int D = 11;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "7005/11";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 923273;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "29787/31";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 911323;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "371352/389";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 964997;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "564847/575";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 932436;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "588067/609";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 971073;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "707539/718";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 963341;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "770477/785";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 943089;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "585590/603";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 959967;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "851428/869";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 958146;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "948505/969";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 927561;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "608679/632";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 927561;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "608679/632";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 938401;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "968711/1000";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 942491;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "560163/577";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 917827;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "844985/882";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 950896;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "357876/367";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 923141;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "592815/617";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 938598;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "687857/710";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 945350;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "798251/821";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 915881;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "915865/957";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 990329;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "560271/563";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 1;
    int D = 1;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 2;
    int D = 1;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 1;
    int D = 2;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 2;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "1393/985";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 999993;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "856997/857";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 998001;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "999/1";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 998000;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "998999/1000";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 998002;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "999001/1000";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 671348;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "667777/815";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 234728;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "210752/435";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 896649;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "549211/580";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 872865;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "895033/958";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 105462;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "280908/865";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 117609;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "158782/463";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 161840;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "238560/593";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 767095;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "606081/692";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 894579;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "233618/247";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 468639;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "279990/409";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 499455;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "677039/958";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 771858;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "459484/523";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 102134;
    int D = 776;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "172895/541";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 382098;
    int D = 938;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "505021/817";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 24806;
    int D = 789;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "99067/629";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 931221;
    int D = 522;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "465129/482";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 362520;
    int D = 956;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "443745/737";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 470436;
    int D = 829;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "317564/463";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 798602;
    int D = 554;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "488824/547";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 718484;
    int D = 369;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "305996/361";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 736680;
    int D = 564;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "402543/469";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 131689;
    int D = 616;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "134995/372";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 656496;
    int D = 948;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "470752/581";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 138067;
    int D = 857;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "259730/699";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int N = 923780;
    int D = 659;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "592059/616";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int N = 983580;
    int D = 914;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "906465/914";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int N = 57840;
    int D = 963;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "231120/961";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int N = 953235;
    int D = 871;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "850390/871";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int N = 951698;
    int D = 998;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "973599/998";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int N = 949181;
    int D = 706;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "661522/679";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int N = 945035;
    int D = 883;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "858390/883";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int N = 206654;
    int D = 711;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "323215/711";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int N = 996183;
    int D = 959;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "367297/368";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int N = 991746;
    int D = 841;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "837522/841";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int N = 987222;
    int D = 608;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "499776/503";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int N = 11745;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "62532/577";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int N = 15770;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "91798/731";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int N = 40602;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "162207/805";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int N = 150290;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "264005/681";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int N = 193857;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "131207/298";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int N = 218378;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "376184/805";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int N = 87;
    int D = 83;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "513/55";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int N = 23743;
    int D = 763;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "98462/639";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int N = 991746;
    int D = 903;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "837522/841";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int N = 999999;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "999999/1000";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int N = 536538;
    int D = 923;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "676086/923";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int N = 1;
    int D = 1;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int N = 990021;
    int D = 498;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "494514/497";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int N = 980002;
    int D = 999;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "980051/990";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int N = 999999;
    int D = 1;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "1000/1";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int N = 593021;
    int D = 982;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "686140/891";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int N = 998634;
    int D = 1000;
    CalcRoot* pObj = new CalcRoot();
    clock_t start = clock();
    string result = pObj->approximate(N, D);
    clock_t end = clock();
    delete pObj;
    string expected = "864409/865";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8527113&rd=7221&pm=4519
********************************************************************************
#include <algorithm> 
#include <cctype> 
#include <cmath> 
#include <cstdlib> 
#include <cstring> 
#include <functional> 
#include <iostream> 
#include <iomanip> 
#include <limits> 
#include <list> 
#include <map> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <string> 
#include <utility> 
#include <vector> 
 
using namespace std; 
 
#define FORI(p, x) for(int i = p; i < x; ++i) 
 
#define OSS ostringstream 
 
#define LL long long 
 
class CalcRoot{ 
public: 
 
string approximate(int N, int D){ 
  double sq = sqrt(0.0 + N); 
 
  LL p = 0.0; 
  LL q = 1.0; 
 
  FORI(1, D + 1){ 
    LL cand = sq * i; 
 
    if(abs(cand * q - (sq * i) * q) < abs(p * i - (sq * i) * q)){ 
      p = cand; 
      q = i; 
    } 
    ++cand; 
    if(abs(cand * q - (sq * i) * q) < abs(p * i - (sq * i) * q)){ 
      p = cand; 
      q = i; 
    } 
  } 
  OSS oss; 
  oss << p << "/" << q; 
  return oss.str(); 
} 
 
}; 
 
// Powered by KrzysanCleanupProcessor 1.2.1 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/