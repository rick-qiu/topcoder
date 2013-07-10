/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11469
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

class Nim {
public:
    int count(int K, int L);
};

int Nim::count(int K, int L) {
    int ret;
    return ret;
}


int test0() {
    int K = 3;
    int L = 7;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int K = 4;
    int L = 13;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int K = 10;
    int L = 100;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 294844622;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int K = 123456789;
    int L = 12345;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 235511047;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int K = 1000000000;
    int L = 50000;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 428193537;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int K = 536870911;
    int L = 50000;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 876223480;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int K = 851074452;
    int L = 2;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
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
    int K = 730089759;
    int L = 2;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int K = 1;
    int L = 40896;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int K = 47019195;
    int L = 34646;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 934738423;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int K = 28936827;
    int L = 7782;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 40794182;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int K = 15812775;
    int L = 27956;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 283434976;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int K = 190196934;
    int L = 14059;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 123197951;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int K = 716672276;
    int L = 38338;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 882439375;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int K = 564627688;
    int L = 40604;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 665233567;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int K = 551590996;
    int L = 22234;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 363992923;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int K = 501224365;
    int L = 44457;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 11964323;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int K = 750221573;
    int L = 36803;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 555800014;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int K = 122533725;
    int L = 19341;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 975271918;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int K = 227305387;
    int L = 38046;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 971447731;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int K = 565831594;
    int L = 2631;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 268604770;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int K = 481490246;
    int L = 13783;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 757550261;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int K = 228141633;
    int L = 36534;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 485594440;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int K = 54449353;
    int L = 9112;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 91977500;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int K = 194584965;
    int L = 19828;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 308223866;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int K = 550322371;
    int L = 45058;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 244221498;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int K = 171797431;
    int L = 34438;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 323320897;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int K = 281798688;
    int L = 7792;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 852963488;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int K = 321381352;
    int L = 10171;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 428007308;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int K = 85887988;
    int L = 4263;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 683469806;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int K = 323770191;
    int L = 45291;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 982869581;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int K = 699092237;
    int L = 28631;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 736598097;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int K = 16549543;
    int L = 34382;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 985165586;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int K = 767705040;
    int L = 32768;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 547625054;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int K = 666736613;
    int L = 27191;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 22019280;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int K = 31716843;
    int L = 22317;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 733222216;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int K = 365187752;
    int L = 2470;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 606299899;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int K = 481611498;
    int L = 49584;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 575100255;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int K = 668594414;
    int L = 16577;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 144766160;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int K = 387434732;
    int L = 16918;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 94933056;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int K = 766926204;
    int L = 41335;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 879472853;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int K = 904008961;
    int L = 3484;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 243215073;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int K = 458414142;
    int L = 13935;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 322381875;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int K = 341109512;
    int L = 41310;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 334115532;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int K = 505789848;
    int L = 44167;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 28677620;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int K = 10679065;
    int L = 43320;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 629488938;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int K = 953574649;
    int L = 41567;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 5594684;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int K = 43207634;
    int L = 12019;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 332758612;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int K = 398226368;
    int L = 47292;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 472446227;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int K = 873001961;
    int L = 22611;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 951945451;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int K = 373230639;
    int L = 28921;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 67506826;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int K = 745069818;
    int L = 27514;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 209099483;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int K = 334207492;
    int L = 26341;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 583664177;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int K = 358114336;
    int L = 46180;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 492261604;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int K = 953932640;
    int L = 22668;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 463193303;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int K = 319284696;
    int L = 7511;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 956907403;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int K = 49192562;
    int L = 28763;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 601521510;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int K = 249031141;
    int L = 34952;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 658152522;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int K = 211399923;
    int L = 13944;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 884881845;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int K = 845326618;
    int L = 41943;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 506577188;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int K = 955614049;
    int L = 43395;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 741376939;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int K = 910405120;
    int L = 46728;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 997288401;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int K = 814826499;
    int L = 41505;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 955918704;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int K = 858808349;
    int L = 41094;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 527296394;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int K = 911564481;
    int L = 48531;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 585709562;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int K = 953774422;
    int L = 49539;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 74925937;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int K = 866980373;
    int L = 45595;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 740963104;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int K = 812971224;
    int L = 43152;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 844436000;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int K = 964955356;
    int L = 47010;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 400946565;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int K = 2;
    int L = 50000;
    Nim* pObj = new Nim();
    clock_t start = clock();
    int result = pObj->count(K, L);
    clock_t end = clock();
    delete pObj;
    int expected = 5133;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22651527&rd=14543&pm=11469
********************************************************************************
#include <iostream> 
using namespace std; 
 
class Nim 
{ 
int N; 
 
public: 
 void mul(int* a, int* b) 
 { 
  for (int i = 0; i < N; ++i) 
   b[i] = (((long long) a[i]) * ((long long) b[i])) % 1000000007; 
 } 
  
 int add(int j, int k) 
 { 
  return (((long long) j) + k) % 1000000007; 
 } 
  
 int dif(int j, int k) 
 { 
  return (((long long) j) + (1000000007 - k)) % 1000000007; 
 } 
 
 void FT(int* a, int chg, int exp, int pow) 
 { 
  if (exp == 0) 
   return; 
  FT(a, chg, exp - 1, pow >> 1); 
  FT(a, chg + (pow >> 1), exp - 1, pow >> 1); 
  for (int z = 0; z < (pow >> 1); ++z) 
  { 
   int j = a[chg + z]; 
   int k = a[chg + z + (pow >> 1)]; 
   a[chg + z] = add(j,k); 
   a[chg + z + (pow >> 1)] = dif(j,k); 
  } 
 } 
  
 int count(int K, int L) 
 { 
  int pow = 1; 
  int exp = 0; 
  while (pow <= L) 
  { 
   pow *= 2; 
   exp += 1; 
  } 
  N = pow; 
  int* a = new int[pow]; 
  int* b = new int[pow]; 
  for (int i = 0; i < pow; ++i) 
   a[i] = 0; 
  for (int i = 2; i <= L; ++i) 
   a[i] = 1; 
  for (int i = 2; i * i <= L; ++i) 
   if (a[i]) 
    for (int j = i * i; j <= L; j += i) 
     a[j] = 0; 
  FT(a,0,exp,pow); 
  b[0] = 1; 
  for (int i = 1; i < pow; ++i) 
   b[i] = 1; 
  int pw2 = 1; 
  while (K > 0) 
  { 
   if (K & pw2) 
   { 
    K -= pw2; 
    mul(a,b); 
   } 
   mul(a,a); 
   pw2 = pw2 << 1; 
  } 
  int ans = 0; 
  for (int i = 0; i < pow; ++i) 
   ans = add(ans, b[i]); 
  while (exp > 0) 
  { 
   if (ans & 1) 
    ans = (((long long) ans) + 1000000007) / 2; 
   else 
    ans = ans / 2; 
   --exp; 
  } 
  delete [] a; 
  delete [] b; 
  return ans; 
 } 
};

********************************************************************************
*******************************************************************************/