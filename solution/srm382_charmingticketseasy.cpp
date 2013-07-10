/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8470
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

class CharmingTicketsEasy {
public:
    int count(int K, string good);
};

int CharmingTicketsEasy::count(int K, string good) {
    int ret;
    return ret;
}


int test0() {
    int K = 1;
    string good = "0123456789";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
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
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
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
    string good = "0123456789";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
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
    int K = 10;
    string good = "731";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 207444;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int K = 50;
    string good = "0123456789";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 367584;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int K = 46;
    string good = "28759604";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 537052;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int K = 42;
    string good = "54";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 116022;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int K = 46;
    string good = "274638";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 29046;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int K = 32;
    string good = "34297";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 486282;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int K = 6;
    string good = "439875";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 580456;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int K = 4;
    string good = "028";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 1069;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int K = 32;
    string good = "861207";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 227373;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int K = 39;
    string good = "285";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 710103;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int K = 42;
    string good = "176";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 899874;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int K = 49;
    string good = "8726531049";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 876299;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int K = 47;
    string good = "402593";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 234511;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int K = 4;
    string good = "6028";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 10296;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int K = 48;
    string good = "1";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
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
    int K = 35;
    string good = "73125869";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 977384;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int K = 31;
    string good = "23810654";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 986367;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int K = 6;
    string good = "4831";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 422969;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int K = 20;
    string good = "384167";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 914891;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int K = 42;
    string good = "2148397";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 544617;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int K = 6;
    string good = "60712";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 337996;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int K = 23;
    string good = "50762";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 19513;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int K = 8;
    string good = "49321";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 389517;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int K = 11;
    string good = "371";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 493152;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int K = 40;
    string good = "125836";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 805706;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int K = 28;
    string good = "3904716";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 182674;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int K = 7;
    string good = "4670592";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 578619;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int K = 4;
    string good = "32658";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 46977;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int K = 34;
    string good = "7";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int K = 11;
    string good = "743861";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 299634;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int K = 22;
    string good = "0718239";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 34748;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int K = 49;
    string good = "89315";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 193554;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int K = 25;
    string good = "592041";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 894605;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int K = 34;
    string good = "6702";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 456512;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int K = 14;
    string good = "3692";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 676028;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int K = 31;
    string good = "375";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 61430;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int K = 4;
    string good = "0952";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 5720;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int K = 12;
    string good = "2";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int K = 9;
    string good = "6314087";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 472064;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int K = 27;
    string good = "3104972";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 753243;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int K = 25;
    string good = "789465";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 237740;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int K = 46;
    string good = "936042";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 458106;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int K = 50;
    string good = "0836";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 214321;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int K = 38;
    string good = "30";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 470649;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int K = 9;
    string good = "6784";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 38341;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int K = 49;
    string good = "806741";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 512499;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int K = 24;
    string good = "0";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
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
    int K = 38;
    string good = "23109";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 837253;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int K = 42;
    string good = "289";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 125260;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int K = 31;
    string good = "90671238";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 861199;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int K = 19;
    string good = "06783519";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 607781;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int K = 29;
    string good = "01694";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 664591;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int K = 42;
    string good = "53689012";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 986309;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int K = 12;
    string good = "9876543120";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 831746;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int K = 50;
    string good = "0145678932";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 367584;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int K = 47;
    string good = "125893";
    CharmingTicketsEasy* pObj = new CharmingTicketsEasy();
    clock_t start = clock();
    int result = pObj->count(K, good);
    clock_t end = clock();
    delete pObj;
    int expected = 473425;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22657949&rd=10805&pm=8470
********************************************************************************
#include <stdio.h> 
#include <string> 
#include <vector> 
#define MOD 999983 
using namespace std; 
 
class CharmingTicketsEasy{ 
  public: 
  int count(int K, string good){ 
    int len = strlen(good.c_str()); 
    long long c[60][600], ans = 0; 
    bool avail[10]; 
    for(int i = 0; i < 10; i++) 
      avail[i] = false; 
    for(int i = 0; i < len; i++) 
      avail[(int)(good[i] - '0')] = true; 
    c[0][0] = 1; 
    for(int i = 1; i <= K * 10; i++) 
      c[0][i] = 0; 
    for(int i = 1; i <= K; i++){ 
      for(int j = 0; j <= K * 10; j++) 
        for(int k = 0; k <= 9; k++) 
          if(avail[k] == true && j + k <= K * 10) 
            c[i][j + k] = (c[i][j + k] + c[i - 1][j]) % MOD; 
    } 
    for(int i = 0; i <= 10 * K; i++) 
      ans = (ans + 2 * c[K][i] * c[K][i]) % MOD; 
    for(int i = 0; i <= 10 * K; i++) 
      for(int j = 0; j <= 10 * K; j++){ 
        ans = (ans - ((c[K/2][i] * c[K - K/2][j]) % MOD) * ((c[K/2][i] * c[K - K/2][j]) % MOD)) % MOD; 
        if(ans < 0) 
          ans += MOD; 
      } 
    return ans; 
  } 
};

********************************************************************************
*******************************************************************************/