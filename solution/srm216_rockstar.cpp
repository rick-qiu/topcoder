/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2984
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

class RockStar {
public:
    int getNumSongs(int ff, int fs, int sf, int ss);
};

int RockStar::getNumSongs(int ff, int fs, int sf, int ss) {
    int ret;
    return ret;
}


int test0() {
    int ff = 100;
    int fs = 0;
    int sf = 0;
    int ss = 200;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int ff = 0;
    int fs = 0;
    int sf = 20;
    int ss = 200;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int ff = 1;
    int fs = 2;
    int sf = 1;
    int ss = 1;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int ff = 192;
    int fs = 279;
    int sf = 971;
    int ss = 249;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int ff = 1000;
    int fs = 1000;
    int sf = 1000;
    int ss = 1000;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 4000;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int ff = 100;
    int fs = 0;
    int sf = 0;
    int ss = 0;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int ff = 0;
    int fs = 100;
    int sf = 0;
    int ss = 0;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
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
    int ff = 0;
    int fs = 0;
    int sf = 100;
    int ss = 0;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int ff = 0;
    int fs = 0;
    int sf = 0;
    int ss = 100;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int ff = 350;
    int fs = 585;
    int sf = 193;
    int ss = 0;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 737;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int ff = 304;
    int fs = 711;
    int sf = 174;
    int ss = 823;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 1476;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int ff = 989;
    int fs = 147;
    int sf = 0;
    int ss = 0;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 990;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int ff = 532;
    int fs = 0;
    int sf = 0;
    int ss = 119;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 532;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int ff = 57;
    int fs = 451;
    int sf = 166;
    int ss = 602;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 992;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int ff = 956;
    int fs = 876;
    int sf = 520;
    int ss = 784;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 2781;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int ff = 209;
    int fs = 235;
    int sf = 1;
    int ss = 539;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 751;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int ff = 297;
    int fs = 392;
    int sf = 1000;
    int ss = 844;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 1925;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int ff = 0;
    int fs = 56;
    int sf = 92;
    int ss = 23;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 135;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int ff = 485;
    int fs = 838;
    int sf = 588;
    int ss = 276;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 1938;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int ff = 1;
    int fs = 745;
    int sf = 458;
    int ss = 744;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 1662;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int ff = 225;
    int fs = 361;
    int sf = 609;
    int ss = 385;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 1332;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int ff = 657;
    int fs = 345;
    int sf = 990;
    int ss = 803;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 2150;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int ff = 141;
    int fs = 1;
    int sf = 505;
    int ss = 63;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 206;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int ff = 683;
    int fs = 0;
    int sf = 426;
    int ss = 693;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 683;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int ff = 475;
    int fs = 178;
    int sf = 582;
    int ss = 878;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 1709;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int ff = 756;
    int fs = 569;
    int sf = 405;
    int ss = 504;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 2071;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int ff = 0;
    int fs = 835;
    int sf = 1;
    int ss = 475;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 478;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int ff = 346;
    int fs = 922;
    int sf = 104;
    int ss = 663;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 1218;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int ff = 298;
    int fs = 272;
    int sf = 317;
    int ss = 375;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 1217;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int ff = 891;
    int fs = 398;
    int sf = 762;
    int ss = 567;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 2254;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int ff = 194;
    int fs = 0;
    int sf = 573;
    int ss = 0;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 194;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int ff = 1;
    int fs = 123;
    int sf = 198;
    int ss = 627;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 874;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int ff = 835;
    int fs = 140;
    int sf = 286;
    int ss = 314;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 1429;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int ff = 0;
    int fs = 1;
    int sf = 252;
    int ss = 600;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 602;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int ff = 14;
    int fs = 115;
    int sf = 853;
    int ss = 0;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 244;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int ff = 0;
    int fs = 543;
    int sf = 752;
    int ss = 1;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 1087;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int ff = 533;
    int fs = 232;
    int sf = 290;
    int ss = 202;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 1199;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int ff = 336;
    int fs = 925;
    int sf = 963;
    int ss = 160;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 2346;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int ff = 94;
    int fs = 0;
    int sf = 998;
    int ss = 996;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int ff = 769;
    int fs = 290;
    int sf = 0;
    int ss = 932;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 1702;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int ff = 635;
    int fs = 466;
    int sf = 604;
    int ss = 202;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 1769;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int ff = 738;
    int fs = 375;
    int sf = 721;
    int ss = 829;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 2317;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int ff = 351;
    int fs = 699;
    int sf = 189;
    int ss = 905;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 1635;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int ff = 149;
    int fs = 691;
    int sf = 612;
    int ss = 80;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 1454;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int ff = 977;
    int fs = 43;
    int sf = 615;
    int ss = 868;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 1931;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int ff = 852;
    int fs = 1;
    int sf = 174;
    int ss = 569;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 1423;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int ff = 820;
    int fs = 0;
    int sf = 79;
    int ss = 155;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 820;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int ff = 323;
    int fs = 501;
    int sf = 299;
    int ss = 448;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 1370;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int ff = 944;
    int fs = 725;
    int sf = 960;
    int ss = 314;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 2708;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int ff = 957;
    int fs = 525;
    int sf = 0;
    int ss = 1;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 959;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int ff = 0;
    int fs = 0;
    int sf = 2;
    int ss = 0;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
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
    int ff = 192;
    int fs = 279;
    int sf = 971;
    int ss = 249;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int ff = 10;
    int fs = 1;
    int sf = 0;
    int ss = 10;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int ff = 1000;
    int fs = 888;
    int sf = 889;
    int ss = 988;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 3764;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int ff = 0;
    int fs = 0;
    int sf = 0;
    int ss = 200;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int ff = 1;
    int fs = 1;
    int sf = 1;
    int ss = 1;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int ff = 0;
    int fs = 0;
    int sf = 0;
    int ss = 1;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int ff = 0;
    int fs = 0;
    int sf = 0;
    int ss = 10;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int ff = 0;
    int fs = 1;
    int sf = 0;
    int ss = 1;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int ff = 0;
    int fs = 0;
    int sf = 100;
    int ss = 1;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int ff = 0;
    int fs = 0;
    int sf = 0;
    int ss = 1000;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int ff = 10;
    int fs = 10;
    int sf = 10;
    int ss = 10;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int ff = 0;
    int fs = 1;
    int sf = 2;
    int ss = 0;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int ff = 0;
    int fs = 12;
    int sf = 800;
    int ss = 0;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int ff = 0;
    int fs = 0;
    int sf = 0;
    int ss = 3;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int ff = 0;
    int fs = 1;
    int sf = 0;
    int ss = 10;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int ff = 1000;
    int fs = 1000;
    int sf = 1000;
    int ss = 1000;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 4000;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int ff = 0;
    int fs = 5;
    int sf = 1;
    int ss = 6;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int ff = 1;
    int fs = 3;
    int sf = 1;
    int ss = 0;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int ff = 0;
    int fs = 0;
    int sf = 467;
    int ss = 2;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int ff = 0;
    int fs = 0;
    int sf = 5;
    int ss = 0;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int ff = 0;
    int fs = 0;
    int sf = 6;
    int ss = 0;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int ff = 5;
    int fs = 5;
    int sf = 0;
    int ss = 5;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int ff = 0;
    int fs = 2;
    int sf = 1;
    int ss = 0;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int ff = 1;
    int fs = 6;
    int sf = 5;
    int ss = 3;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int ff = 2;
    int fs = 2;
    int sf = 2;
    int ss = 2;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int ff = 1;
    int fs = 1;
    int sf = 0;
    int ss = 1;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int ff = 1;
    int fs = 0;
    int sf = 1;
    int ss = 1;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int ff = 655;
    int fs = 499;
    int sf = 796;
    int ss = 163;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 1816;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int ff = 0;
    int fs = 1;
    int sf = 0;
    int ss = 0;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int ff = 3;
    int fs = 0;
    int sf = 5;
    int ss = 4;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
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
    int ff = 5;
    int fs = 1;
    int sf = 0;
    int ss = 4;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int ff = 0;
    int fs = 2;
    int sf = 0;
    int ss = 0;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int ff = 1;
    int fs = 1;
    int sf = 1;
    int ss = 0;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int ff = 0;
    int fs = 1;
    int sf = 3;
    int ss = 1;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int ff = 980;
    int fs = 980;
    int sf = 980;
    int ss = 980;
    RockStar* pObj = new RockStar();
    clock_t start = clock();
    int result = pObj->getNumSongs(ff, fs, sf, ss);
    clock_t end = clock();
    delete pObj;
    int expected = 3920;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=5862&pm=2984
********************************************************************************
// Warning: no successful challenges against me yet. 
// Note: I'm now automatically removing unused routines. 
 
#include <algorithm> 
using namespace std; 
 
#line 3 "RockStar.cc" 
 
class RockStar { 
  public: 
  int getNumSongs(int ff, int fs, int sf, int ss) { 
    // !FDI 
    if(ff == 0 && fs == 0) return ss + (sf ? 1 : 0); 
    else if(fs == 0) return ff; 
    else if(sf < fs) return ff + ss + (sf+1) + sf; 
    else return ff + ss + fs + fs; 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/