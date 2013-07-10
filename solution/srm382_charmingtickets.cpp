/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8316
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

class CharmingTickets {
public:
    int count(int K, string good);
};

int CharmingTickets::count(int K, string good) {
    int ret;
    return ret;
}


int test0() {
    int K = 1;
    string good = "0123456789";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
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
    int K = 2;
    string good = "21";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int K = 2;
    string good = "0987654321";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 1240;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int K = 137;
    string good = "0123456789";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 630063;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int K = 1000;
    string good = "0123456789";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 495241;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int K = 1000;
    string good = "8";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int K = 1;
    string good = "2";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
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
    int K = 123;
    string good = "8123";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 894140;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int K = 971;
    string good = "82109467";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 166953;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int K = 344;
    string good = "01459";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 602881;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int K = 714;
    string good = "124";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 295799;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int K = 497;
    string good = "03489";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 488908;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int K = 668;
    string good = "1249";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 477485;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int K = 870;
    string good = "1456";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 528790;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int K = 844;
    string good = "01234579";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 364947;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int K = 698;
    string good = "2356789";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 190291;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int K = 241;
    string good = "06789";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 163911;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int K = 544;
    string good = "0235689";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 885452;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int K = 133;
    string good = "1345678";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 802975;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int K = 331;
    string good = "01379";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 441028;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int K = 624;
    string good = "378";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 968384;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int K = 497;
    string good = "268";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 503714;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int K = 827;
    string good = "01247";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 657824;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int K = 164;
    string good = "13478";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 744157;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int K = 69;
    string good = "013468";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 638607;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int K = 454;
    string good = "23456789";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 544434;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int K = 798;
    string good = "0124678";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 790574;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int K = 515;
    string good = "0345789";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 799664;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int K = 804;
    string good = "134678";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 802394;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int K = 441;
    string good = "34567";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 275003;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int K = 825;
    string good = "35678";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 269447;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int K = 478;
    string good = "23479";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 168286;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int K = 416;
    string good = "123456";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 299125;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int K = 625;
    string good = "127";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 542970;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int K = 333;
    string good = "017";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 246964;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int K = 680;
    string good = "35";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 313797;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int K = 504;
    string good = "36";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 427660;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int K = 797;
    string good = "03458";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 2384;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int K = 858;
    string good = "23789";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 60151;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int K = 256;
    string good = "1479";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 206840;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int K = 88;
    string good = "0158";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 472753;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int K = 999;
    string good = "012489";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 523582;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int K = 124;
    string good = "1236789";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 771748;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int K = 572;
    string good = "056";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 599803;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int K = 488;
    string good = "1678";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 678740;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int K = 924;
    string good = "135689";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 517709;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int K = 871;
    string good = "0128";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 287954;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int K = 693;
    string good = "159";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 239627;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int K = 852;
    string good = "13469";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 880393;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int K = 82;
    string good = "01249";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 969980;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int K = 759;
    string good = "014679";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 228180;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int K = 155;
    string good = "167";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 77111;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int K = 112;
    string good = "03568";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 844094;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int K = 754;
    string good = "01245";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 163928;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int K = 991;
    string good = "0123568";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 149620;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int K = 793;
    string good = "12346789";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 824626;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int K = 54;
    string good = "134567";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 41292;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int K = 917;
    string good = "012458";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 287836;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int K = 637;
    string good = "12459";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 354079;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int K = 951;
    string good = "915274";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 843299;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int K = 994;
    string good = "16380";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 851803;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int K = 940;
    string good = "31";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 779467;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int K = 975;
    string good = "4621058";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 109284;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int K = 905;
    string good = "691324";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 365437;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int K = 911;
    string good = "5620";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 630933;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int K = 981;
    string good = "074196";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 560739;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int K = 975;
    string good = "82";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 374506;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int K = 971;
    string good = "7";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int K = 922;
    string good = "7";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int K = 923;
    string good = "51208";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 711795;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int K = 980;
    string good = "967";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 445137;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int K = 960;
    string good = "210479";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 849236;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int K = 935;
    string good = "45728";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 781311;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int K = 928;
    string good = "6145";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 118977;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int K = 976;
    string good = "736";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 308731;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int K = 911;
    string good = "6910";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 40764;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int K = 985;
    string good = "7";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int K = 953;
    string good = "017";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 186397;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int K = 989;
    string good = "327860";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 896026;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int K = 954;
    string good = "30165";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 482722;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int K = 904;
    string good = "8";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int K = 923;
    string good = "3729540";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 306376;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int K = 954;
    string good = "89576";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 565142;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int K = 912;
    string good = "941603";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 456578;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int K = 961;
    string good = "541";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 83565;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int K = 963;
    string good = "41";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 865968;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int K = 985;
    string good = "5";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int K = 967;
    string good = "624";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 807788;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int K = 975;
    string good = "269";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 74120;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int K = 1000;
    string good = "0124568";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 80329;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int K = 999;
    string good = "012345678";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 509255;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int K = 995;
    string good = "0251947";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 95279;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int K = 1000;
    string good = "8302457";
    CharmingTickets* pObj = new CharmingTickets();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 4446;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14970299&rd=10805&pm=8316
********************************************************************************
#include <algorithm> 
#include <bitset> 
#include <cassert> 
#include <cctype> 
#include <cmath> 
#include <complex> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <ctime> 
#include <deque> 
#include <functional> 
#include <iostream> 
#include <iterator> 
#include <list> 
#include <map> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <string> 
#include <valarray> 
#include <vector> 
#include <utility> 
 
using namespace std; 
 
#define all(v) (v).begin(), (v).end() 
 
// Types 
typedef long double ld; 
typedef long long ll; 
typedef pair <int, int> pii; 
typedef vector <int> vi; 
typedef vector <pii> vp; 
typedef vector <ld> vd; 
typedef vector <string> vs; 
typedef vector <bool> vb; 
typedef queue <pii> qp; 
typedef map <string, int> msi; 
 
// Constants 
const int INF = 1000000000; 
const ld EPS = 1e-10L; 
const ld PI = 3.14159265358979L; 
const int MOD = 999983; 
 
// Vars 
vi d; 
 
// Functions 
ll go(int k) { 
  vector <vector <int> > a(k + 1, vector <int> (k * 9 + 1)); 
  a[0][0] = 1; 
  for (int i = 0; i < k; ++i) { 
    for (int j = 0; j <= 9 * i; ++j) { 
      for (int l = 0; l < d.size(); ++l) { 
        a[i + 1][j + d[l]] += a[i][j]; 
      } 
    } 
    for (int j = 0; j <= 9 * (i + 1); ++j) { 
      a[i + 1][j] %= MOD; 
    } 
  } 
  ll res = 0; 
  for (int i = 0; i <= 9 * k; ++i) { 
    res += ll(a[k][i]) * a[k][i]; 
  } 
  return res % MOD; 
} 
 
//Interface 
class CharmingTickets { 
public: 
  int count(int K, string good) { 
    int res; 
    int n; 
    d.clear(); 
    for (int i = 0; i < good.size(); ++i) { 
      d.push_back(good[i] - '0'); 
    } 
    res = (2 * go(K) - go(K / 2) * go((K + 1) / 2)) % MOD; 
    if (res < 0) { 
      res += MOD; 
    } 
    return res; 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/