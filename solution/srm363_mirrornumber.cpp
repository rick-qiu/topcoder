/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7869
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

class MirrorNumber {
public:
    int count(string A, string B);
};

int MirrorNumber::count(string A, string B) {
    int ret;
    return ret;
}


int test0() {
    string A = "0";
    string B = "10";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string A = "0";
    string B = "100";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
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
    string A = "143";
    string B = "23543";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string A = "1234";
    string B = "23452354235234";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 87478;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string A = "0";
    string B = "1000000000000000000";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3124999;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string A = "1";
    string B = "1000000000";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2498;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string A = "102";
    string B = "10000000000001234";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 624992;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string A = "0";
    string B = "200000004";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1374;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string A = "3456";
    string B = "365426457654646453";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2343720;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string A = "3453426345";
    string B = "3453453455";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string A = "64575675";
    string B = "6786897866";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3500;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string A = "0";
    string B = "0";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string A = "0";
    string B = "1";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
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
    string A = "354758";
    string B = "456472905830476354";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2343600;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string A = "88";
    string B = "100";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string A = "84902";
    string B = "3464576867980563";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 468656;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string A = "9999999";
    string B = "10000001";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string A = "9999999999999";
    string B = "10000000000001";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string A = "999";
    string B = "100000001";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 981;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string A = "4762198";
    string B = "23456456456345";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 87150;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string A = "22";
    string B = "333333333";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1745;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string A = "200004";
    string B = "200000004";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1250;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string A = "0";
    string B = "20000004";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 624;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string A = "0";
    string B = "20000000000005";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 78125;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string A = "200000000000000004";
    string B = "200000000000000005";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string A = "1";
    string B = "825522225255552258";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2948437;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string A = "0";
    string B = "985218125012580150";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3124999;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string A = "12345";
    string B = "98765432198765432";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1562452;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string A = "502";
    string B = "299999995212555555";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2343736;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string A = "2";
    string B = "1000000000000000000";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3124997;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string A = "135";
    string B = "88828888888888828";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1558740;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string A = "183410081237571912";
    string B = "988018741012831234";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1203125;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string A = "2123521082";
    string B = "2172858103";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string A = "51555122212";
    string B = "1555555522222220";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 361688;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string A = "1328500121615471";
    string B = "810120434455345681";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2457575;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string A = "11";
    string B = "700000000000000000";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2734371;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string A = "0";
    string B = "100000000000000";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 124999;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string A = "13132134124";
    string B = "2343414212431313";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 431375;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string A = "0";
    string B = "888888888888888888";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3124999;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string A = "582";
    string B = "525252528252525";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 244125;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string A = "10000000000";
    string B = "100000000000";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 7500;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string A = "456";
    string B = "609005240670030000";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2734361;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string A = "0";
    string B = "4";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string A = "7";
    string B = "85270391700472531";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1494997;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string A = "12321";
    string B = "1000000000000000000";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3124952;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string A = "1435";
    string B = "28825025883";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 8691;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string A = "458943";
    string B = "321412341441344334";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2343600;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string A = "1";
    string B = "53674575473745745";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1234373;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string A = "251";
    string B = "285";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string A = "999999999999999999";
    string B = "999999999999999999";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string A = "12";
    string B = "12545674000005678";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 752495;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string A = "0";
    string B = "3";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string A = "888888888888888888";
    string B = "1000000000000000000";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
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
    string A = "1";
    string B = "999999999999999999";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3124998;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string A = "1";
    string B = "1000000000000000000";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3124998;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string A = "151";
    string B = "171";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
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
    string A = "111111111111111111";
    string B = "999999999999999999";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1464844;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string A = "0";
    string B = "109";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string A = "707";
    string B = "10770";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string A = "0";
    string B = "53";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
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
    string A = "23135165316";
    string B = "999999999999999999";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3117000;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string A = "1521";
    string B = "85555555822222228";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1503884;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string A = "58";
    string B = "100";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string A = "867254749";
    string B = "1013063236";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 115;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string A = "123";
    string B = "1000000000000000000";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3124990;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string A = "52355";
    string B = "463412312312312347";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2343672;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string A = "888888888";
    string B = "11111111111111111";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 681096;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string A = "3";
    string B = "76";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string A = "0";
    string B = "9";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string A = "81";
    string B = "81";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string A = "8";
    string B = "25008888188880025";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1001871;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string A = "73";
    string B = "104";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string A = "1251";
    string B = "1251";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string A = "0";
    string B = "23";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string A = "12312312";
    string B = "125000821085212";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 148824;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string A = "222555";
    string B = "222555";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string A = "0";
    string B = "99999999999999999";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1562499;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string A = "0";
    string B = "1000000";
    MirrorNumber* pObj = new MirrorNumber();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 199;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=10777&pm=7869
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
typedef long long int64;
 
class MirrorNumber
{
public:
  int64 countAll(int L)
  {
    if (L==1) return 2;
    int64 result=1;
    if (L%2==1) result=3;
    result*=4;
    for (int i=1;i<L/2;i++)
      result*=5;
    return result;
  }
  int64 search(int L,int D,int64 now,int64 limit)
  {
    if (D>(L+1)/2)
      return (int)(now<=limit);
    int64 result=0;
    int64 p1=1,p2=1;
    for (int i=0;i<D-1;i++) p2*=10;
    for (int i=0;i<L-D;i++) p1*=10;
    for (int i=0;i<10;i++)
    {
      if (D==1 && i==0) continue;
      int k=-1;
      if (i==0 || i==1 || i==8) k=i;
      if (i==2 || i==5) k=7-i;
      if (k==-1) continue;
      if (L%2==1 && D==(L+1)/2)
      {
        if (i!=k) continue;
        result+=search(L,D+1,now+p1*i,limit);
      }
      else
        result+=search(L,D+1,now+p1*i+p2*k,limit);
    }
    return result;
  }
  int64 solve(int64 n)
  {
    if (n<0) return 0;
    if (n==0) return 1;
    int64 result=1;
    int L=0;
    for (int64 m=n;m>0;m/=10) L++;
    for (int p=1;p<L;p++) result+=countAll(p);
    result+=search(L,1,0,n);
    return result;
  }
  int count(string A, string B)
  {
    int64 nA=0;
    int64 nB=0;
    for (int i=0;i<A.size();i++) nA=nA*10+(int)(A[i]-'0');
    for (int i=0;i<B.size();i++) nB=nB*10+(int)(B[i]-'0');
    int64 r1=solve(nA-1);
    int64 r2=solve(nB);
    return r2-r1;
  }
};
 
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/