/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10184
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

class TheLongPalindrome {
public:
    int count(int n, int k);
};

int TheLongPalindrome::count(int n, int k) {
    int ret;
    return ret;
}


int test0() {
    int n = 1;
    int k = 1;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 2;
    int k = 10;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 3;
    int k = 2;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 728;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 44;
    int k = 7;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 240249781;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 1000000000;
    int k = 26;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 502499513;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 999999999;
    int k = 25;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 555594822;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 23;
    int k = 23;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1209505107;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 40;
    int k = 19;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 923760996;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 39;
    int k = 19;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1161532321;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 1000000000;
    int k = 1;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 74074289;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 757148;
    int k = 26;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 808142191;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 301413357;
    int k = 26;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 903541512;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 659598369;
    int k = 26;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 801376963;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 391749388;
    int k = 26;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1084608896;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 35766291;
    int k = 26;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 998485394;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 473038165;
    int k = 26;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 754312177;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 3615545;
    int k = 26;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1134947060;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 392289611;
    int k = 26;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 854429520;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 170427799;
    int k = 26;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1020182844;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 675016434;
    int k = 26;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 298581589;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 100757147;
    int k = 19;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 647481233;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 401413356;
    int k = 23;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1150834273;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 759598368;
    int k = 14;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 706606893;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 491749387;
    int k = 18;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 15745476;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 135766290;
    int k = 9;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 384108829;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 573038164;
    int k = 21;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 333945499;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 103615544;
    int k = 23;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 480834182;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 1000000000;
    int k = 20;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 198470272;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 999999999;
    int k = 17;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 517605484;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 999999999;
    int k = 16;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 652883421;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 1000000000;
    int k = 20;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 198470272;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 147;
    int k = 7;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1126070080;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 999999999;
    int k = 23;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1049716493;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 999999999;
    int k = 11;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 318667120;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 999999999;
    int k = 26;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 522071800;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 1000000000;
    int k = 23;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1232051448;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 1000000000;
    int k = 25;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 460019892;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 1000000000;
    int k = 15;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 389687257;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 1000000000;
    int k = 10;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 482302736;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 999999973;
    int k = 25;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1222160695;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 1000000000;
    int k = 19;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 868920764;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 574857047;
    int k = 23;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 946932112;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 999999997;
    int k = 23;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 138511467;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 51;
    int k = 12;
    TheLongPalindrome* pObj = new TheLongPalindrome();
    clock_t start = clock();
    int result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 776103748;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22630219&rd=13519&pm=10184
********************************************************************************
#include <algorithm> 
#include <bitset> 
#include <cctype> 
#include <cmath> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <functional> 
#include <iomanip> 
#include <iostream> 
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
 
const int MAXS = 27; 
const int MODULO = 1234567891; 
 
class Matrix { 
public: 
  static int size; 
  int mat[MAXS][MAXS]; 
 
  inline Matrix operator * (const Matrix & other) const { 
    Matrix res; 
    for (int i = 0; i < size; i++) { 
      for (int j = 0; j < size; j++) { 
        res.mat[i][j] = 0; 
        for (int k = 0; k < size; k++) { 
          res.mat[i][j] = (res.mat[i][j] + (long long) mat[i][k] * other.mat[k][j]) % MODULO; 
        } 
      } 
    } 
    return res; 
  } 
 
  // p > 0 
  inline Matrix operator ^ (int k) const { 
    Matrix cur(*this); 
    int p; 
    for (p = 1; (k & p) == 0; p <<= 1) { 
      cur = cur * cur; 
    } 
    Matrix res(cur); 
    for (p <<= 1; p <= k; p <<= 1) { 
      cur = cur * cur; 
      if (k & p) { 
        res = res * cur; 
      } 
    } 
    return res; 
  } 
}; 
 
int Matrix::size; 
 
class TheLongPalindrome { 
public: 
  int count(int n, int k); 
}; 
 
int TheLongPalindrome::count(int n, int k) { 
  if (n <= 2) { 
    return 26 * n; 
  } 
  Matrix unit; 
  Matrix::size = k + 1; 
  memset(unit.mat, 0, sizeof(unit.mat)); 
  for (int i = 1; i <= k; i++) { 
    unit.mat[i][i] = i; 
    if (i < k) { 
      unit.mat[i][i + 1] = 26 - i; 
    } 
    unit.mat[i][0] = 1; 
  } 
  unit.mat[0][0] = 1; 
  Matrix trans = unit ^ ((n - 1) / 2); 
  long long ans = 0; 
  if (n & 1) { 
    ans = trans.mat[1][0] * 52LL % MODULO; 
    for (int i = 1; i <= k; i++) { 
      ans = (ans + trans.mat[1][i] * 26LL) % MODULO; 
    } 
  } else { 
    for (int i = 0; i <= k; i++) { 
      ans = (ans + trans.mat[1][i] * 52LL) % MODULO; 
    } 
  } 
  return (int) ans; 
} 
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/