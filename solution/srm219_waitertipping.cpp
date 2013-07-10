/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3111
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

class WaiterTipping {
public:
    int maxPercent(int total, int taxPercent, int money);
};

int WaiterTipping::maxPercent(int total, int taxPercent, int money) {
    int ret;
    return ret;
}


int test0() {
    int total = 500;
    int taxPercent = 10;
    int money = 600;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
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
    int total = 500;
    int taxPercent = 10;
    int money = 604;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int total = 850;
    int taxPercent = 8;
    int money = 870;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
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
    int total = 23975;
    int taxPercent = 13;
    int money = 27834;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int total = 53039;
    int taxPercent = 96;
    int money = 6297;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
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
    int total = 8288;
    int taxPercent = 2;
    int money = 40158;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 382;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int total = 5753;
    int taxPercent = 19;
    int money = 7189;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int total = 6526;
    int taxPercent = 13;
    int money = 6037;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
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
    int total = 4333;
    int taxPercent = 12;
    int money = 13999;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 211;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int total = 4839;
    int taxPercent = 16;
    int money = 14498;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 183;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int total = 4115;
    int taxPercent = 16;
    int money = 6257;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int total = 4866;
    int taxPercent = 19;
    int money = 13398;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 156;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int total = 5051;
    int taxPercent = 19;
    int money = 13364;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 145;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int total = 3637;
    int taxPercent = 16;
    int money = 10242;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 165;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int total = 3296;
    int taxPercent = 17;
    int money = 6830;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int total = 2481;
    int taxPercent = 16;
    int money = 12440;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 385;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int total = 126;
    int taxPercent = 40;
    int money = 950;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 615;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int total = 267;
    int taxPercent = 56;
    int money = 701;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 107;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int total = 212;
    int taxPercent = 25;
    int money = 947;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 322;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int total = 107;
    int taxPercent = 15;
    int money = 589;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 436;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int total = 166;
    int taxPercent = 98;
    int money = 409;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int total = 167;
    int taxPercent = 97;
    int money = 371;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int total = 102;
    int taxPercent = 18;
    int money = 281;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 158;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int total = 424;
    int taxPercent = 82;
    int money = 1093;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int total = 206;
    int taxPercent = 87;
    int money = 671;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 139;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int total = 194;
    int taxPercent = 30;
    int money = 779;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 272;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int total = 256;
    int taxPercent = 16;
    int money = 912;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 241;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int total = 128;
    int taxPercent = 67;
    int money = 526;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 245;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int total = 248;
    int taxPercent = 3;
    int money = 1065;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 327;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int total = 127;
    int taxPercent = 90;
    int money = 493;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 199;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int total = 783;
    int taxPercent = 5;
    int money = 1072;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int total = 226;
    int taxPercent = 48;
    int money = 584;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 111;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int total = 281;
    int taxPercent = 24;
    int money = 558;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int total = 123;
    int taxPercent = 52;
    int money = 696;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 415;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int total = 100;
    int taxPercent = 0;
    int money = 100000;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 99900;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int total = 500;
    int taxPercent = 10;
    int money = 550;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int total = 500;
    int taxPercent = 10;
    int money = 604;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int total = 123;
    int taxPercent = 52;
    int money = 696;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 415;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int total = 226;
    int taxPercent = 48;
    int money = 584;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 111;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int total = 100;
    int taxPercent = 0;
    int money = 100000;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 99900;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int total = 100;
    int taxPercent = 10;
    int money = 1000;
    WaiterTipping* pObj = new WaiterTipping();
    clock_t start = clock();
    int result = pObj->maxPercent(total, taxPercent, money);
    clock_t end = clock();
    delete pObj;
    int expected = 890;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10396368&rd=5865&pm=3111
********************************************************************************
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <iostream>
 
using namespace std;
 
class WaiterTipping {
  public:
  int maxPercent(int total, int taxPercent, int money) {
    int tip = 0;
    
    while(((int) total+floor((double) total*taxPercent/100)+floor((double) total*tip/100))<=money)
    tip++;
    
    return tip-1;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/