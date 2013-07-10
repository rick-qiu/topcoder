/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7773
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

class CoinsExchange {
public:
    int countExchanges(int G1, int S1, int B1, int G2, int S2, int B2);
};

int CoinsExchange::countExchanges(int G1, int S1, int B1, int G2, int S2, int B2) {
    int ret;
    return ret;
}


int test0() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 0;
    int G2 = 0;
    int S2 = 0;
    int B2 = 81;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int G1 = 1;
    int S1 = 100;
    int B1 = 12;
    int G2 = 5;
    int S2 = 53;
    int B2 = 33;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int G1 = 1;
    int S1 = 100;
    int B1 = 12;
    int G2 = 5;
    int S2 = 63;
    int B2 = 33;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
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
    int G1 = 5;
    int S1 = 10;
    int B1 = 12;
    int G2 = 3;
    int S2 = 7;
    int B2 = 9;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int G1 = 27985;
    int S1 = 26108;
    int B1 = 47060;
    int G2 = 27974;
    int S2 = 25981;
    int B2 = 54185;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int G1 = 87311;
    int S1 = 35048;
    int B1 = 19897;
    int G2 = 87355;
    int S2 = 35886;
    int B2 = 14050;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
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
    int G1 = 78411;
    int S1 = 85679;
    int B1 = 46508;
    int G2 = 78459;
    int S2 = 86037;
    int B2 = 39109;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int G1 = 55990;
    int S1 = 66382;
    int B1 = 85681;
    int G2 = 56085;
    int S2 = 65848;
    int B2 = 80734;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int G1 = 54911;
    int S1 = 30405;
    int B1 = 32049;
    int G2 = 54912;
    int S2 = 31237;
    int B2 = 28987;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int G1 = 19114;
    int S1 = 67139;
    int B1 = 45873;
    int G2 = 19163;
    int S2 = 66198;
    int B2 = 43254;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int G1 = 53826;
    int S1 = 50790;
    int B1 = 47880;
    int G2 = 53859;
    int S2 = 51317;
    int B2 = 40122;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int G1 = 44258;
    int S1 = 43905;
    int B1 = 57795;
    int G2 = 44307;
    int S2 = 43485;
    int B2 = 63474;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int G1 = 52075;
    int S1 = 75946;
    int B1 = 64914;
    int G2 = 52137;
    int S2 = 76243;
    int B2 = 59861;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
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
    int G1 = 52217;
    int S1 = 36358;
    int B1 = 39147;
    int G2 = 52167;
    int S2 = 35365;
    int B2 = 34636;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int G1 = 45851;
    int S1 = 33544;
    int B1 = 64983;
    int G2 = 45781;
    int S2 = 34008;
    int B2 = 63273;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int G1 = 57163;
    int S1 = 77152;
    int B1 = 66323;
    int G2 = 57165;
    int S2 = 76760;
    int B2 = 61161;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int G1 = 89251;
    int S1 = 70030;
    int B1 = 89004;
    int G2 = 89201;
    int S2 = 70458;
    int B2 = 91425;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
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
    int G1 = 72158;
    int S1 = 15257;
    int B1 = 53088;
    int G2 = 72209;
    int S2 = 15479;
    int B2 = 58334;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int G1 = 78550;
    int S1 = 44487;
    int B1 = 20031;
    int G2 = 78552;
    int S2 = 45468;
    int B2 = 21067;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int G1 = 43221;
    int S1 = 19236;
    int B1 = 74947;
    int G2 = 43210;
    int S2 = 20088;
    int B2 = 69406;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int G1 = 83852;
    int S1 = 87090;
    int B1 = 33217;
    int G2 = 83878;
    int S2 = 87668;
    int B2 = 38560;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int G1 = 31226;
    int S1 = 40430;
    int B1 = 34088;
    int G2 = 31201;
    int S2 = 41303;
    int B2 = 42484;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int G1 = 41933;
    int S1 = 72383;
    int B1 = 55226;
    int G2 = 41996;
    int S2 = 71483;
    int B2 = 54043;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int G1 = 39593;
    int S1 = 89404;
    int B1 = 61686;
    int G2 = 39613;
    int S2 = 88486;
    int B2 = 71285;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
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
    int G1 = 44653;
    int S1 = 84467;
    int B1 = 67835;
    int G2 = 44704;
    int S2 = 84081;
    int B2 = 71943;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int G1 = 89101;
    int S1 = 27940;
    int B1 = 33403;
    int G2 = 89187;
    int S2 = 28392;
    int B2 = 41514;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int G1 = 77214;
    int S1 = 49684;
    int B1 = 24876;
    int G2 = 77301;
    int S2 = 49209;
    int B2 = 31081;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int G1 = 53506;
    int S1 = 72393;
    int B1 = 70986;
    int G2 = 53475;
    int S2 = 71551;
    int B2 = 74736;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 417;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int G1 = 26727;
    int S1 = 56852;
    int B1 = 32096;
    int G2 = 26662;
    int S2 = 57652;
    int B2 = 33273;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int G1 = 14438;
    int S1 = 21397;
    int B1 = 15024;
    int G2 = 14450;
    int S2 = 20998;
    int B2 = 14393;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int G1 = 48912;
    int S1 = 19571;
    int B1 = 34265;
    int G2 = 48955;
    int S2 = 20083;
    int B2 = 27781;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int G1 = 42120;
    int S1 = 44494;
    int B1 = 18156;
    int G2 = 42181;
    int S2 = 44829;
    int B2 = 24936;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int G1 = 43854;
    int S1 = 57033;
    int B1 = 15005;
    int G2 = 43758;
    int S2 = 56904;
    int B2 = 24805;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int G1 = 35196;
    int S1 = 78208;
    int B1 = 18473;
    int G2 = 35262;
    int S2 = 78671;
    int B2 = 19672;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int G1 = 1000000;
    int S1 = 0;
    int B1 = 0;
    int G2 = 0;
    int S2 = 0;
    int B2 = 1000000;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 123458;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 1000000;
    int G2 = 1000000;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 1000000;
    int G2 = 10000;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 0;
    int G2 = 1000000;
    int S2 = 1000000;
    int B2 = 1000000;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int G1 = 1000000;
    int S1 = 1000000;
    int B1 = 1000000;
    int G2 = 0;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 0;
    int G2 = 0;
    int S2 = 0;
    int B2 = 100;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 0;
    int G2 = 0;
    int S2 = 10;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int G1 = 0;
    int S1 = 1;
    int B1 = 0;
    int G2 = 0;
    int S2 = 0;
    int B2 = 10;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 100;
    int G2 = 1;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int G1 = 0;
    int S1 = 10;
    int B1 = 0;
    int G2 = 1;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 10;
    int G2 = 0;
    int S2 = 1;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int G1 = 1000000;
    int S1 = 0;
    int B1 = 1000000;
    int G2 = 0;
    int S2 = 1000000;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 111112;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int G1 = 10000;
    int S1 = 0;
    int B1 = 200000;
    int G2 = 0;
    int S2 = 1000000;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int G1 = 1000;
    int S1 = 0;
    int B1 = 100000;
    int G2 = 0;
    int S2 = 1000000;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 0;
    int G2 = 0;
    int S2 = 0;
    int B2 = 81;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 0;
    int G2 = 0;
    int S2 = 9;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int G1 = 0;
    int S1 = 1;
    int B1 = 0;
    int G2 = 0;
    int S2 = 0;
    int B2 = 9;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 121;
    int G2 = 1;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int G1 = 0;
    int S1 = 11;
    int B1 = 0;
    int G2 = 1;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 11;
    int G2 = 0;
    int S2 = 1;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int G1 = 10000;
    int S1 = 0;
    int B1 = 1000000;
    int G2 = 0;
    int S2 = 100000;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 20000;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int G1 = 16445;
    int S1 = 23850;
    int B1 = 32319;
    int G2 = 16423;
    int S2 = 23059;
    int B2 = 30780;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int G1 = 30620;
    int S1 = 71423;
    int B1 = 74945;
    int G2 = 30529;
    int S2 = 70253;
    int B2 = 76750;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int G1 = 73762;
    int S1 = 25692;
    int B1 = 73548;
    int G2 = 73752;
    int S2 = 24265;
    int B2 = 62650;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int G1 = 68151;
    int S1 = 15093;
    int B1 = 59855;
    int G2 = 68028;
    int S2 = 13845;
    int B2 = 47931;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int G1 = 49361;
    int S1 = 30312;
    int B1 = 43530;
    int G2 = 49457;
    int S2 = 29333;
    int B2 = 29685;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 173;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int G1 = 20535;
    int S1 = 57118;
    int B1 = 16760;
    int G2 = 20614;
    int S2 = 57698;
    int B2 = 20566;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int G1 = 81658;
    int S1 = 21407;
    int B1 = 19132;
    int G2 = 81681;
    int S2 = 20261;
    int B2 = 21700;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 309;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int G1 = 41925;
    int S1 = 24951;
    int B1 = 34095;
    int G2 = 41976;
    int S2 = 24002;
    int B2 = 35453;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 202;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int G1 = 20897;
    int S1 = 36257;
    int B1 = 78470;
    int G2 = 20829;
    int S2 = 35367;
    int B2 = 65553;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int G1 = 64128;
    int S1 = 37933;
    int B1 = 40129;
    int G2 = 64202;
    int S2 = 37695;
    int B2 = 41491;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int G1 = 58032;
    int S1 = 71824;
    int B1 = 12598;
    int G2 = 58111;
    int S2 = 71560;
    int B2 = 21478;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int G1 = 35716;
    int S1 = 69749;
    int B1 = 86896;
    int G2 = 35591;
    int S2 = 69252;
    int B2 = 72473;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int G1 = 32570;
    int S1 = 34195;
    int B1 = 87007;
    int G2 = 32468;
    int S2 = 33486;
    int B2 = 76488;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int G1 = 33388;
    int S1 = 83773;
    int B1 = 14657;
    int G2 = 33454;
    int S2 = 84709;
    int B2 = 18285;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int G1 = 43366;
    int S1 = 29786;
    int B1 = 69818;
    int G2 = 43459;
    int S2 = 28668;
    int B2 = 56158;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int G1 = 44966;
    int S1 = 66538;
    int B1 = 14175;
    int G2 = 44940;
    int S2 = 65088;
    int B2 = 21617;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 827;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int G1 = 34090;
    int S1 = 78670;
    int B1 = 44619;
    int G2 = 34173;
    int S2 = 77467;
    int B2 = 34656;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 83;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int G1 = 28337;
    int S1 = 10562;
    int B1 = 10741;
    int G2 = 28317;
    int S2 = 11246;
    int B2 = 3802;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 524;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int G1 = 30944;
    int S1 = 47303;
    int B1 = 86569;
    int G2 = 30925;
    int S2 = 46031;
    int B2 = 87766;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 133;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int G1 = 16540;
    int S1 = 40549;
    int B1 = 24867;
    int G2 = 16441;
    int S2 = 39709;
    int B2 = 26459;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 177;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 1000000;
    int G2 = 8264;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 99168;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 1000000;
    int G2 = 0;
    int S2 = 90909;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 90909;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int G1 = 0;
    int S1 = 1000000;
    int B1 = 0;
    int G2 = 90909;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 90909;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int G1 = 2;
    int S1 = 6;
    int B1 = 0;
    int G2 = 1;
    int S2 = 6;
    int B2 = 72;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int G1 = 0;
    int S1 = 110;
    int B1 = 1000;
    int G2 = 12;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int G1 = 5;
    int S1 = 0;
    int B1 = 18;
    int G2 = 1;
    int S2 = 20;
    int B2 = 1;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int G1 = 10;
    int S1 = 200;
    int B1 = 10;
    int G2 = 21;
    int S2 = 10;
    int B2 = 18;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int G1 = 2;
    int S1 = 2;
    int B1 = 2;
    int G2 = 0;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int G1 = 10000;
    int S1 = 9;
    int B1 = 270000;
    int G2 = 1;
    int S2 = 30000;
    int B2 = 810000;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 69999;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int G1 = 10;
    int S1 = 0;
    int B1 = 1000;
    int G2 = 0;
    int S2 = 99;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int G1 = 3;
    int S1 = 1;
    int B1 = 250;
    int G2 = 1;
    int S2 = 21;
    int B2 = 1;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int G1 = 2;
    int S1 = 1;
    int B1 = 12;
    int G2 = 1;
    int S2 = 11;
    int B2 = 11;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 120;
    int G2 = 0;
    int S2 = 1;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int G1 = 2;
    int S1 = 0;
    int B1 = 0;
    int G2 = 0;
    int S2 = 0;
    int B2 = 82;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int G1 = 1;
    int S1 = 10;
    int B1 = 11;
    int G2 = 2;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int G1 = 1000000;
    int S1 = 1;
    int B1 = 1;
    int G2 = 1;
    int S2 = 1000000;
    int B2 = 1000000;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 234568;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int G1 = 10000;
    int S1 = 3245;
    int B1 = 1245;
    int G2 = 2457;
    int S2 = 12135;
    int B2 = 21456;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 3484;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int G1 = 0;
    int S1 = 5;
    int B1 = 66;
    int G2 = 1;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int G1 = 0;
    int S1 = 12;
    int B1 = 420;
    int G2 = 3;
    int S2 = 15;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int G1 = 0;
    int S1 = 10;
    int B1 = 11;
    int G2 = 1;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int G1 = 0;
    int S1 = 14;
    int B1 = 1000;
    int G2 = 5;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int G1 = 0;
    int S1 = 5;
    int B1 = 123456;
    int G2 = 1019;
    int S2 = 10;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 12233;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int G1 = 1000;
    int S1 = 0;
    int B1 = 0;
    int G2 = 1;
    int S2 = 0;
    int B2 = 100;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int G1 = 1;
    int S1 = 3;
    int B1 = 100000;
    int G2 = 2;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int G1 = 31;
    int S1 = 22;
    int B1 = 260;
    int G2 = 34;
    int S2 = 12;
    int B2 = 1000;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int G1 = 300000;
    int S1 = 598999;
    int B1 = 1000000;
    int G2 = 310000;
    int S2 = 500000;
    int B2 = 32098;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 21001;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 99;
    int G2 = 0;
    int S2 = 9;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int G1 = 999999;
    int S1 = 11;
    int B1 = 100000;
    int G2 = 9999;
    int S2 = 54353;
    int B2 = 654644;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 74514;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int G1 = 4;
    int S1 = 3;
    int B1 = 2;
    int G2 = 3;
    int S2 = 3;
    int B2 = 3;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int G1 = 1000000;
    int S1 = 0;
    int B1 = 0;
    int G2 = 0;
    int S2 = 100000;
    int B2 = 1000000;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 134569;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int G1 = 6;
    int S1 = 4;
    int B1 = 4;
    int G2 = 5;
    int S2 = 12;
    int B2 = 13;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int G1 = 4;
    int S1 = 0;
    int B1 = 0;
    int G2 = 0;
    int S2 = 10;
    int B2 = 82;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 1000;
    int G2 = 1;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int G1 = 4556;
    int S1 = 455;
    int B1 = 44;
    int G2 = 44;
    int S2 = 566;
    int B2 = 4566;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 572;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 20;
    int G2 = 1;
    int S2 = 1;
    int B2 = 2;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int G1 = 1;
    int S1 = 1;
    int B1 = 1;
    int G2 = 1000;
    int S2 = 1000;
    int B2 = 1000;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int G1 = 12;
    int S1 = 11;
    int B1 = 6;
    int G2 = 2;
    int S2 = 11;
    int B2 = 7;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int G1 = 8264;
    int S1 = 100;
    int B1 = 5;
    int G2 = 3;
    int S2 = 100;
    int B2 = 1000000;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int G1 = 1;
    int S1 = 11;
    int B1 = 2;
    int G2 = 2;
    int S2 = 1;
    int B2 = 2;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 308;
    int G2 = 2;
    int S2 = 0;
    int B2 = 10;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int G1 = 1;
    int S1 = 1;
    int B1 = 1;
    int G2 = 1;
    int S2 = 1;
    int B2 = 1;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 200;
    int G2 = 1;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int G1 = 22;
    int S1 = 1;
    int B1 = 1;
    int G2 = 2;
    int S2 = 2;
    int B2 = 2;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int G1 = 1;
    int S1 = 1;
    int B1 = 0;
    int G2 = 0;
    int S2 = 0;
    int B2 = 81;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int G1 = 1;
    int S1 = 12;
    int B1 = 13;
    int G2 = 2;
    int S2 = 14;
    int B2 = 16;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int G1 = 10000;
    int S1 = 10000;
    int B1 = 1000000;
    int G2 = 20000;
    int S2 = 20001;
    int B2 = 20;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int G1 = 10;
    int S1 = 0;
    int B1 = 1000;
    int G2 = 5;
    int S2 = 9;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 0;
    int G2 = 0;
    int S2 = 0;
    int B2 = 10;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int G1 = 2;
    int S1 = 10;
    int B1 = 11;
    int G2 = 1;
    int S2 = 19;
    int B2 = 11;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 22;
    int G2 = 0;
    int S2 = 2;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int G1 = 1;
    int S1 = 1;
    int B1 = 1;
    int G2 = 2;
    int S2 = 2;
    int B2 = 2;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int G1 = 1000;
    int S1 = 10;
    int B1 = 0;
    int G2 = 1;
    int S2 = 20;
    int B2 = 100;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int G1 = 1000;
    int S1 = 10;
    int B1 = 0;
    int G2 = 0;
    int S2 = 0;
    int B2 = 1;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int G1 = 6;
    int S1 = 4;
    int B1 = 3;
    int G2 = 5;
    int S2 = 12;
    int B2 = 13;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 9;
    int G2 = 0;
    int S2 = 1;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int G1 = 0;
    int S1 = 10;
    int B1 = 120;
    int G2 = 1;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int G1 = 100;
    int S1 = 3000;
    int B1 = 1000000;
    int G2 = 500;
    int S2 = 300;
    int B2 = 1000000;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int G1 = 1000000;
    int S1 = 100000;
    int B1 = 100000;
    int G2 = 33333;
    int S2 = 33333;
    int B2 = 333333;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 25926;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 121;
    int G2 = 1;
    int S2 = 1;
    int B2 = 1;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int G1 = 2;
    int S1 = 1;
    int B1 = 1;
    int G2 = 1;
    int S2 = 0;
    int B2 = 3;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 123;
    int G2 = 1;
    int S2 = 0;
    int B2 = 1;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int G1 = 3;
    int S1 = 4;
    int B1 = 100;
    int G2 = 3;
    int S2 = 5;
    int B2 = 2;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 1000000;
    int G2 = 9000;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int G1 = 121;
    int S1 = 0;
    int B1 = 0;
    int G2 = 0;
    int S2 = 0;
    int B2 = 1;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int G1 = 0;
    int S1 = 5;
    int B1 = 500;
    int G2 = 5;
    int S2 = 10;
    int B2 = 22;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int G1 = 2;
    int S1 = 1;
    int B1 = 100;
    int G2 = 1;
    int S2 = 3;
    int B2 = 50;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int G1 = 100;
    int S1 = 0;
    int B1 = 0;
    int G2 = 0;
    int S2 = 0;
    int B2 = 50;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 20;
    int G2 = 0;
    int S2 = 1;
    int B2 = 19;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 1111;
    int G2 = 0;
    int S2 = 10;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int G1 = 5;
    int S1 = 0;
    int B1 = 0;
    int G2 = 2;
    int S2 = 10;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 132;
    int G2 = 1;
    int S2 = 1;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int G1 = 0;
    int S1 = 1000000;
    int B1 = 0;
    int G2 = 10000;
    int S2 = 999;
    int B2 = 10000;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 11112;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int G1 = 10;
    int S1 = 9;
    int B1 = 100000;
    int G2 = 10;
    int S2 = 10;
    int B2 = 1;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int G1 = 10;
    int S1 = 0;
    int B1 = 100000;
    int G2 = 0;
    int S2 = 99;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int G1 = 0;
    int S1 = 1;
    int B1 = 110;
    int G2 = 1;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int G1 = 16;
    int S1 = 26;
    int B1 = 36;
    int G2 = 7;
    int S2 = 33;
    int B2 = 28;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int G1 = 1;
    int S1 = 1;
    int B1 = 0;
    int G2 = 0;
    int S2 = 0;
    int B2 = 90;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int G1 = 20;
    int S1 = 0;
    int B1 = 0;
    int G2 = 0;
    int S2 = 5;
    int B2 = 1000000;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int G1 = 93223;
    int S1 = 435555;
    int B1 = 43243;
    int G2 = 94000;
    int S2 = 2;
    int B2 = 12;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 777;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int G1 = 0;
    int S1 = 10;
    int B1 = 150;
    int G2 = 1;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int G1 = 10;
    int S1 = 0;
    int B1 = 0;
    int G2 = 0;
    int S2 = 1;
    int B2 = 1;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 0;
    int G2 = 0;
    int S2 = 0;
    int B2 = 1;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int G1 = 0;
    int S1 = 10;
    int B1 = 1;
    int G2 = 1;
    int S2 = 1;
    int B2 = 1;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int G1 = 100;
    int S1 = 100;
    int B1 = 0;
    int G2 = 0;
    int S2 = 200;
    int B2 = 9;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int G1 = 3;
    int S1 = 2;
    int B1 = 121;
    int G2 = 2;
    int S2 = 9;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int G1 = 0;
    int S1 = 99;
    int B1 = 99;
    int G2 = 1;
    int S2 = 1;
    int B2 = 1;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int G1 = 100;
    int S1 = 19;
    int B1 = 34;
    int G2 = 24;
    int S2 = 233;
    int B2 = 112;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int G1 = 1;
    int S1 = 15;
    int B1 = 12;
    int G2 = 2;
    int S2 = 1;
    int B2 = 1;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int G1 = 1000000;
    int S1 = 0;
    int B1 = 1000000;
    int G2 = 0;
    int S2 = 100;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int G1 = 1000;
    int S1 = 0;
    int B1 = 0;
    int G2 = 0;
    int S2 = 1;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 11;
    int G2 = 0;
    int S2 = 10;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int G1 = 7;
    int S1 = 6;
    int B1 = 5;
    int G2 = 6;
    int S2 = 5;
    int B2 = 6;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int G1 = 0;
    int S1 = 10;
    int B1 = 19;
    int G2 = 1;
    int S2 = 0;
    int B2 = 8;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int G1 = 1;
    int S1 = 1;
    int B1 = 0;
    int G2 = 0;
    int S2 = 0;
    int B2 = 100000;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 1000000;
    int G2 = 8264;
    int S2 = 5;
    int B2 = 1;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 99173;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int G1 = 100;
    int S1 = 12;
    int B1 = 1654;
    int G2 = 20;
    int S2 = 10000;
    int B2 = 4;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int G1 = 1;
    int S1 = 9;
    int B1 = 17;
    int G2 = 2;
    int S2 = 1;
    int B2 = 7;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int G1 = 0;
    int S1 = 1000000;
    int B1 = 1000000;
    int G2 = 90000;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 90000;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int G1 = 999100;
    int S1 = 19;
    int B1 = 34;
    int G2 = 99924;
    int S2 = 233;
    int B2 = 112;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    int G1 = 10;
    int S1 = 1;
    int B1 = 10000;
    int G2 = 5;
    int S2 = 10;
    int B2 = 5;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    int G1 = 100;
    int S1 = 0;
    int B1 = 1000;
    int G2 = 0;
    int S2 = 100;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 0;
    int G2 = 0;
    int S2 = 1;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    int G1 = 600000;
    int S1 = 400000;
    int B1 = 880000;
    int G2 = 520000;
    int S2 = 999000;
    int B2 = 100000;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 66556;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    int G1 = 2;
    int S1 = 10;
    int B1 = 22;
    int G2 = 1;
    int S2 = 19;
    int B2 = 11;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    int G1 = 100;
    int S1 = 1;
    int B1 = 100;
    int G2 = 10;
    int S2 = 100;
    int B2 = 10;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    int G1 = 100;
    int S1 = 1000;
    int B1 = 10000;
    int G2 = 110;
    int S2 = 1008;
    int B2 = 8000;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 5;
    int G2 = 0;
    int S2 = 1;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    int G1 = 50;
    int S1 = 0;
    int B1 = 99999;
    int G2 = 0;
    int S2 = 1000;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 600;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 100;
    int G2 = 0;
    int S2 = 2;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 100000;
    int G2 = 0;
    int S2 = 81;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 0;
    int G2 = 0;
    int S2 = 0;
    int B2 = 61;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 0;
    int G2 = 0;
    int S2 = 0;
    int B2 = 1;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    int G1 = 6;
    int S1 = 0;
    int B1 = 1;
    int G2 = 5;
    int S2 = 20;
    int B2 = 1;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 131;
    int G2 = 1;
    int S2 = 1;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    int G1 = 5;
    int S1 = 0;
    int B1 = 11;
    int G2 = 0;
    int S2 = 1;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 88;
    int G2 = 1;
    int S2 = 1;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    int G1 = 0;
    int S1 = 10;
    int B1 = 12;
    int G2 = 1;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    int G1 = 9999;
    int S1 = 999999;
    int B1 = 99998;
    int G2 = 120;
    int S2 = 899999;
    int B2 = 999999;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 100002;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    int G1 = 6;
    int S1 = 4;
    int B1 = 5;
    int G2 = 4;
    int S2 = 5;
    int B2 = 120;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    int G1 = 12;
    int S1 = 15;
    int B1 = 18;
    int G2 = 6;
    int S2 = 55;
    int B2 = 22;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    int G1 = 100000;
    int S1 = 0;
    int B1 = 1000000;
    int G2 = 12;
    int S2 = 900999;
    int B2 = 23;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 101095;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    int G1 = 5;
    int S1 = 6;
    int B1 = 9;
    int G2 = 3;
    int S2 = 10;
    int B2 = 80;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 1000;
    int G2 = 0;
    int S2 = 9;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 120;
    int G2 = 1;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    int G1 = 0;
    int S1 = 1;
    int B1 = 1;
    int G2 = 0;
    int S2 = 0;
    int B2 = 11;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    int G1 = 5;
    int S1 = 756;
    int B1 = 66;
    int G2 = 8;
    int S2 = 765;
    int B2 = 100;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 0;
    int G2 = 1;
    int S2 = 0;
    int B2 = 1;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    int G1 = 1;
    int S1 = 5;
    int B1 = 0;
    int G2 = 0;
    int S2 = 5;
    int B2 = 9;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    int G1 = 2;
    int S1 = 1;
    int B1 = 1;
    int G2 = 1;
    int S2 = 2;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 12;
    int G2 = 1;
    int S2 = 1;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    int G1 = 0;
    int S1 = 12;
    int B1 = 0;
    int G2 = 1;
    int S2 = 0;
    int B2 = 10;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    int G1 = 0;
    int S1 = 50000;
    int B1 = 660000;
    int G2 = 10000;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 70000;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 0;
    int G2 = 0;
    int S2 = 100;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    int G1 = 3;
    int S1 = 20;
    int B1 = 100;
    int G2 = 3;
    int S2 = 22;
    int B2 = 50;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    int G1 = 1;
    int S1 = 7;
    int B1 = 500;
    int G2 = 0;
    int S2 = 9;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    int G1 = 5;
    int S1 = 10;
    int B1 = 11;
    int G2 = 1;
    int S2 = 19;
    int B2 = 11;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    int G1 = 0;
    int S1 = 11;
    int B1 = 132;
    int G2 = 1;
    int S2 = 12;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    int G1 = 1;
    int S1 = 1;
    int B1 = 10;
    int G2 = 0;
    int S2 = 11;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 1000000;
    int G2 = 8263;
    int S2 = 1;
    int B2 = 10;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 99157;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    int G1 = 1000000;
    int S1 = 0;
    int B1 = 0;
    int G2 = 0;
    int S2 = 1000000;
    int B2 = 1000000;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 234569;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 12;
    int G2 = 0;
    int S2 = 1;
    int B2 = 2;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    int G1 = 1000000;
    int S1 = 12313;
    int B1 = 565666;
    int G2 = 1;
    int S2 = 121323;
    int B2 = 564665;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 12113;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 121;
    int G2 = 2;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    int G1 = 1000000;
    int S1 = 0;
    int B1 = 0;
    int G2 = 0;
    int S2 = 0;
    int B2 = 8200;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1014;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    int G1 = 1;
    int S1 = 1;
    int B1 = 100000;
    int G2 = 2;
    int S2 = 2;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 100;
    int G2 = 0;
    int S2 = 10;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    int G1 = 1;
    int S1 = 3;
    int B1 = 200;
    int G2 = 2;
    int S2 = 3;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 1000000;
    int G2 = 5000;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 60000;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    int G1 = 100;
    int S1 = 100;
    int B1 = 100;
    int G2 = 0;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    int G1 = 10;
    int S1 = 1;
    int B1 = 10;
    int G2 = 2;
    int S2 = 2;
    int B2 = 2;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    int G1 = 10;
    int S1 = 1;
    int B1 = 1;
    int G2 = 10;
    int S2 = 10;
    int B2 = 1;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 1000000;
    int G2 = 2;
    int S2 = 2;
    int B2 = 10;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    int G1 = 2;
    int S1 = 1;
    int B1 = 300;
    int G2 = 1;
    int S2 = 20;
    int B2 = 2;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    int G1 = 2;
    int S1 = 0;
    int B1 = 100;
    int G2 = 0;
    int S2 = 2;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 176;
    int G2 = 2;
    int S2 = 11;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    int G1 = 5;
    int S1 = 1000;
    int B1 = 1000;
    int G2 = 1;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    int G1 = 156976;
    int S1 = 0;
    int B1 = 0;
    int G2 = 100000;
    int S2 = 512100;
    int B2 = 6156;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 57660;
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    int G1 = 5;
    int S1 = 1;
    int B1 = 1;
    int G2 = 1;
    int S2 = 10;
    int B2 = 20;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 0;
    int G2 = 0;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    int G1 = 100;
    int S1 = 0;
    int B1 = 0;
    int G2 = 0;
    int S2 = 0;
    int B2 = 30;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    int G1 = 2;
    int S1 = 9;
    int B1 = 30;
    int G2 = 1;
    int S2 = 17;
    int B2 = 30;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 0;
    int G2 = 0;
    int S2 = 8;
    int B2 = 9;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    int G1 = 0;
    int S1 = 1;
    int B1 = 10000;
    int G2 = 1;
    int S2 = 0;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 0;
    int G2 = 0;
    int S2 = 0;
    int B2 = 3;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    int G1 = 10;
    int S1 = 1;
    int B1 = 100;
    int G2 = 1;
    int S2 = 10;
    int B2 = 1;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test240() {
    int G1 = 0;
    int S1 = 1;
    int B1 = 1000;
    int G2 = 2;
    int S2 = 8;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 240: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 240: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test241() {
    int G1 = 2;
    int S1 = 2;
    int B1 = 221;
    int G2 = 0;
    int S2 = 11;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 241: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 241: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test242() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 120;
    int G2 = 1;
    int S2 = 11;
    int B2 = 110;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 242: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 242: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test243() {
    int G1 = 1000000;
    int S1 = 0;
    int B1 = 0;
    int G2 = 999998;
    int S2 = 1;
    int B2 = 1;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 243: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 243: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test244() {
    int G1 = 0;
    int S1 = 0;
    int B1 = 1000000;
    int G2 = 8200;
    int S2 = 709;
    int B2 = 1;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 99109;
    if(result == expected) {
        cout << "Test Case 244: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 244: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test245() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 1000;
    int G2 = 0;
    int S2 = 10;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 245: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 245: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test246() {
    int G1 = 1;
    int S1 = 100;
    int B1 = 1;
    int G2 = 2;
    int S2 = 1;
    int B2 = 1;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 246: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 246: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test247() {
    int G1 = 1;
    int S1 = 1;
    int B1 = 0;
    int G2 = 0;
    int S2 = 0;
    int B2 = 9;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 247: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 247: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test248() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 0;
    int G2 = 0;
    int S2 = 20;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 248: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 248: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test249() {
    int G1 = 1;
    int S1 = 0;
    int B1 = 100;
    int G2 = 1;
    int S2 = 2;
    int B2 = 0;
    CoinsExchange* pObj = new CoinsExchange();
    clock_t start = clock();
    int result = pObj->countExchanges(G1, S1, B1, G2, S2, B2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 249: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 249: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    test224() == 0 ? ++passed : ++failed;
    test225() == 0 ? ++passed : ++failed;
    test226() == 0 ? ++passed : ++failed;
    test227() == 0 ? ++passed : ++failed;
    test228() == 0 ? ++passed : ++failed;
    test229() == 0 ? ++passed : ++failed;
    test230() == 0 ? ++passed : ++failed;
    test231() == 0 ? ++passed : ++failed;
    test232() == 0 ? ++passed : ++failed;
    test233() == 0 ? ++passed : ++failed;
    test234() == 0 ? ++passed : ++failed;
    test235() == 0 ? ++passed : ++failed;
    test236() == 0 ? ++passed : ++failed;
    test237() == 0 ? ++passed : ++failed;
    test238() == 0 ? ++passed : ++failed;
    test239() == 0 ? ++passed : ++failed;
    test240() == 0 ? ++passed : ++failed;
    test241() == 0 ? ++passed : ++failed;
    test242() == 0 ? ++passed : ++failed;
    test243() == 0 ? ++passed : ++failed;
    test244() == 0 ? ++passed : ++failed;
    test245() == 0 ? ++passed : ++failed;
    test246() == 0 ? ++passed : ++failed;
    test247() == 0 ? ++passed : ++failed;
    test248() == 0 ? ++passed : ++failed;
    test249() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=21468741&rd=10675&pm=7773
********************************************************************************
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <map>
#include <set>
#include <string>
#include <utility>
#include <vector>
 
using namespace std;
 
typedef long long Long;
typedef double dbl;
typedef vector <int> VI;
typedef pair <int, int> PII;
 
#define FI first
#define MP make_pair
#define PB push_back
#define SE second
 
class CoinsExchange
{
  public:
    int countExchanges( int G1, int S1, int B1, int G2, int S2, int B2 )
    {
      int ans = 0;
      while (G1 < G2)
      {
        while (S1 < 11)
        {
          if (B1 < 11)
            return -1;
          B1 -= 11, S1++;
          ans++;
        }
        S1 -= 11, G1++;
        ans++;
      }
      while (S1 < S2)
      {
        if (G1 > G2)
        {
          S1 += 9, G1--;
          ans++;
        }
        else
        {
          if (B1 < 11)
            return -1;
          B1 -= 11, S1++;
          ans++;
        }
      }
      while (B1 < B2)
      {
        while (S1 <= S2)
        {
          if (G1 <= G2)
            return -1;
          S1 += 9, G1--;
          ans++;
        }
        B1 += 9, S1--;
        ans++;
      }
      return ans;
    }
};
 
// Code by Burunduk3 =)
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/