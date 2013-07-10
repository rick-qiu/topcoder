/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11616
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

class BricksN {
public:
    int countStructures(int w, int h, int k);
};

int BricksN::countStructures(int w, int h, int k) {
    int ret;
    return ret;
}


int test0() {
    int w = 3;
    int h = 1;
    int k = 3;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int w = 3;
    int h = 2;
    int k = 3;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 83;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int w = 1;
    int h = 5;
    int k = 1;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int w = 10;
    int h = 10;
    int k = 3;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 288535435;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int w = 1;
    int h = 1;
    int k = 1;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int w = 50;
    int h = 50;
    int k = 50;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 92324271;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int w = 50;
    int h = 1;
    int k = 50;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 782204094;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int w = 50;
    int h = 50;
    int k = 1;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 370141234;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int w = 1;
    int h = 50;
    int k = 1;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int w = 24;
    int h = 11;
    int k = 13;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 226244183;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int w = 42;
    int h = 31;
    int k = 34;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 145616060;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int w = 33;
    int h = 7;
    int k = 17;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 903406539;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int w = 24;
    int h = 23;
    int k = 19;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 226815126;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int w = 20;
    int h = 22;
    int k = 6;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 671975329;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int w = 39;
    int h = 31;
    int k = 32;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 581268661;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int w = 33;
    int h = 16;
    int k = 15;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 447266089;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int w = 40;
    int h = 5;
    int k = 32;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 532852082;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int w = 18;
    int h = 4;
    int k = 5;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 892978442;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int w = 32;
    int h = 1;
    int k = 24;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 680051485;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int w = 44;
    int h = 24;
    int k = 18;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 652699350;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int w = 47;
    int h = 21;
    int k = 3;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 595660426;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int w = 47;
    int h = 18;
    int k = 38;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 577142937;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int w = 28;
    int h = 27;
    int k = 4;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 838449365;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int w = 36;
    int h = 12;
    int k = 20;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 293540022;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int w = 35;
    int h = 40;
    int k = 2;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 923407699;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int w = 32;
    int h = 6;
    int k = 30;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 455215822;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int w = 40;
    int h = 26;
    int k = 29;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 81640412;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int w = 29;
    int h = 11;
    int k = 25;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 946776653;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int w = 27;
    int h = 43;
    int k = 12;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 928823009;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int w = 26;
    int h = 33;
    int k = 21;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 936515743;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int w = 43;
    int h = 15;
    int k = 23;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 675733855;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int w = 24;
    int h = 24;
    int k = 2;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 671739533;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int w = 39;
    int h = 14;
    int k = 16;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 481294962;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int w = 21;
    int h = 25;
    int k = 19;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 218730215;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int w = 12;
    int h = 49;
    int k = 5;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 179229393;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int w = 45;
    int h = 6;
    int k = 38;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 164259191;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int w = 39;
    int h = 35;
    int k = 18;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 548296079;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int w = 46;
    int h = 15;
    int k = 27;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 91927671;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int w = 10;
    int h = 44;
    int k = 7;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 735940928;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int w = 15;
    int h = 10;
    int k = 14;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 482084640;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int w = 49;
    int h = 6;
    int k = 36;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 914876095;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int w = 44;
    int h = 22;
    int k = 34;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 701421808;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int w = 45;
    int h = 29;
    int k = 27;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 318744893;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int w = 40;
    int h = 40;
    int k = 33;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 312758978;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int w = 42;
    int h = 24;
    int k = 29;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 289635826;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int w = 47;
    int h = 26;
    int k = 35;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 447902488;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int w = 39;
    int h = 10;
    int k = 17;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 374614459;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int w = 41;
    int h = 12;
    int k = 22;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 834618603;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int w = 35;
    int h = 21;
    int k = 4;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 482134196;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int w = 33;
    int h = 39;
    int k = 7;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 864607600;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int w = 48;
    int h = 38;
    int k = 48;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 211888061;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int w = 18;
    int h = 5;
    int k = 1;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 955957503;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int w = 36;
    int h = 2;
    int k = 1;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 246336683;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int w = 20;
    int h = 27;
    int k = 14;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 928370940;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int w = 20;
    int h = 35;
    int k = 14;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 340463923;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int w = 35;
    int h = 43;
    int k = 11;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 86378826;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int w = 43;
    int h = 41;
    int k = 18;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 55222538;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int w = 27;
    int h = 6;
    int k = 26;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 147049069;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int w = 44;
    int h = 16;
    int k = 10;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 68964478;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int w = 48;
    int h = 40;
    int k = 44;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 939938014;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int w = 30;
    int h = 5;
    int k = 28;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 859768457;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int w = 40;
    int h = 11;
    int k = 1;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 216720791;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int w = 44;
    int h = 27;
    int k = 22;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 565058815;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int w = 48;
    int h = 38;
    int k = 25;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 952655565;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int w = 29;
    int h = 20;
    int k = 17;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 272635618;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int w = 33;
    int h = 21;
    int k = 32;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 48682013;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int w = 46;
    int h = 49;
    int k = 46;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 417794594;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int w = 27;
    int h = 44;
    int k = 6;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 956155233;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int w = 35;
    int h = 21;
    int k = 33;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 497283773;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int w = 47;
    int h = 24;
    int k = 46;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 919491080;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int w = 28;
    int h = 25;
    int k = 17;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 788105544;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int w = 29;
    int h = 29;
    int k = 7;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 345872887;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int w = 20;
    int h = 47;
    int k = 18;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 385728449;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int w = 15;
    int h = 34;
    int k = 3;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 886405943;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int w = 32;
    int h = 3;
    int k = 17;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 926357119;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int w = 29;
    int h = 17;
    int k = 9;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 679582522;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int w = 43;
    int h = 22;
    int k = 21;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 161481729;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int w = 9;
    int h = 7;
    int k = 3;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 952392526;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int w = 47;
    int h = 32;
    int k = 20;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 407959737;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int w = 49;
    int h = 4;
    int k = 44;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 295972292;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int w = 39;
    int h = 34;
    int k = 5;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 311372000;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int w = 33;
    int h = 44;
    int k = 14;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 915333816;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int w = 5;
    int h = 50;
    int k = 2;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 402339917;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int w = 23;
    int h = 11;
    int k = 20;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 326809311;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int w = 42;
    int h = 32;
    int k = 18;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 912682929;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int w = 24;
    int h = 5;
    int k = 24;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 674935388;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int w = 44;
    int h = 9;
    int k = 6;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 881367659;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int w = 21;
    int h = 19;
    int k = 13;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 550761840;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int w = 49;
    int h = 23;
    int k = 8;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 445590405;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int w = 19;
    int h = 7;
    int k = 1;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 67049563;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int w = 39;
    int h = 27;
    int k = 21;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 759152641;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int w = 35;
    int h = 3;
    int k = 31;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 254887395;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int w = 5;
    int h = 26;
    int k = 5;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 601868906;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int w = 47;
    int h = 10;
    int k = 25;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 344837176;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int w = 49;
    int h = 1;
    int k = 42;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 94206927;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int w = 46;
    int h = 7;
    int k = 11;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 998595812;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int w = 42;
    int h = 6;
    int k = 34;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 553996431;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int w = 26;
    int h = 40;
    int k = 1;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 761890566;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int w = 47;
    int h = 25;
    int k = 13;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 34799949;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int w = 27;
    int h = 46;
    int k = 16;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 305181494;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int w = 48;
    int h = 31;
    int k = 32;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 39006546;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int w = 44;
    int h = 21;
    int k = 14;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 435658969;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int w = 38;
    int h = 22;
    int k = 29;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 837893796;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int w = 32;
    int h = 29;
    int k = 16;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 859361536;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int w = 24;
    int h = 9;
    int k = 6;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 644523200;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int w = 30;
    int h = 22;
    int k = 30;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 89419870;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int w = 50;
    int h = 5;
    int k = 3;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 420042817;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int w = 39;
    int h = 29;
    int k = 20;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 31507160;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int w = 7;
    int h = 16;
    int k = 2;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 206268304;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int w = 46;
    int h = 18;
    int k = 27;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 206101859;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int w = 37;
    int h = 19;
    int k = 6;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 369521450;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int w = 19;
    int h = 13;
    int k = 14;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 114341966;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int w = 25;
    int h = 3;
    int k = 9;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 113819288;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int w = 31;
    int h = 46;
    int k = 15;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 144830604;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int w = 31;
    int h = 9;
    int k = 20;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 975887637;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int w = 8;
    int h = 21;
    int k = 1;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 875873158;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int w = 44;
    int h = 48;
    int k = 44;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 942955760;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int w = 34;
    int h = 14;
    int k = 8;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 472763486;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int w = 49;
    int h = 18;
    int k = 31;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 170587802;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int w = 46;
    int h = 48;
    int k = 15;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 871992056;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int w = 49;
    int h = 4;
    int k = 36;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 366419017;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int w = 43;
    int h = 34;
    int k = 5;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 904465261;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int w = 38;
    int h = 44;
    int k = 11;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 917275057;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int w = 33;
    int h = 47;
    int k = 11;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 816381674;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int w = 44;
    int h = 41;
    int k = 19;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 623651007;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int w = 38;
    int h = 7;
    int k = 14;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 911507767;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int w = 30;
    int h = 38;
    int k = 24;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 638196420;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int w = 49;
    int h = 3;
    int k = 44;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 823185529;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int w = 35;
    int h = 10;
    int k = 1;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 526144858;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int w = 43;
    int h = 44;
    int k = 1;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 168971720;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int w = 1;
    int h = 27;
    int k = 1;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int w = 42;
    int h = 38;
    int k = 8;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 891983609;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int w = 48;
    int h = 25;
    int k = 19;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 85042131;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int w = 40;
    int h = 16;
    int k = 8;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 572621259;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int w = 24;
    int h = 42;
    int k = 5;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 101904761;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int w = 22;
    int h = 33;
    int k = 12;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 577676589;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int w = 16;
    int h = 1;
    int k = 12;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3524513;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int w = 43;
    int h = 33;
    int k = 40;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 329294845;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int w = 30;
    int h = 47;
    int k = 5;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 337637190;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int w = 39;
    int h = 36;
    int k = 36;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 49889383;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int w = 35;
    int h = 6;
    int k = 10;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 410250815;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int w = 26;
    int h = 14;
    int k = 4;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 670451582;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int w = 31;
    int h = 18;
    int k = 28;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 265222851;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int w = 37;
    int h = 49;
    int k = 32;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 362916534;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int w = 46;
    int h = 42;
    int k = 35;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 787110412;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int w = 35;
    int h = 37;
    int k = 29;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 16373381;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int w = 22;
    int h = 15;
    int k = 9;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 687480309;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int w = 42;
    int h = 3;
    int k = 25;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 715579780;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int w = 48;
    int h = 5;
    int k = 9;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 557998430;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int w = 45;
    int h = 8;
    int k = 35;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 520607305;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int w = 48;
    int h = 12;
    int k = 26;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 960540959;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int w = 30;
    int h = 13;
    int k = 7;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 176027878;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int w = 35;
    int h = 22;
    int k = 12;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 384377688;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int w = 47;
    int h = 10;
    int k = 10;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 895646169;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int w = 40;
    int h = 34;
    int k = 5;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 73943471;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int w = 33;
    int h = 36;
    int k = 6;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 78747156;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int w = 30;
    int h = 47;
    int k = 9;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 398957235;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int w = 49;
    int h = 34;
    int k = 44;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 742371065;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int w = 11;
    int h = 26;
    int k = 3;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 368382950;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int w = 48;
    int h = 50;
    int k = 40;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 40308775;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int w = 47;
    int h = 50;
    int k = 41;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 92850214;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int w = 45;
    int h = 47;
    int k = 24;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 860893795;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int w = 49;
    int h = 47;
    int k = 30;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 591335981;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int w = 46;
    int h = 46;
    int k = 33;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 840110311;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int w = 47;
    int h = 50;
    int k = 14;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 632295723;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int w = 48;
    int h = 45;
    int k = 8;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 784839805;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int w = 50;
    int h = 45;
    int k = 43;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 6088545;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int w = 48;
    int h = 48;
    int k = 17;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 793179184;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int w = 48;
    int h = 47;
    int k = 46;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 254760344;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int w = 45;
    int h = 46;
    int k = 40;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 222861600;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int w = 50;
    int h = 45;
    int k = 21;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 361656963;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int w = 48;
    int h = 45;
    int k = 48;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 840227117;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int w = 50;
    int h = 47;
    int k = 41;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 447089850;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int w = 47;
    int h = 49;
    int k = 39;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 238972955;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    int w = 49;
    int h = 46;
    int k = 42;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 74798210;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    int w = 46;
    int h = 45;
    int k = 17;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 578814225;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    int w = 47;
    int h = 49;
    int k = 40;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 80475345;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    int w = 45;
    int h = 49;
    int k = 21;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 92903800;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    int w = 48;
    int h = 48;
    int k = 4;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 282743411;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    int w = 48;
    int h = 47;
    int k = 2;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 242208060;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    int w = 45;
    int h = 50;
    int k = 18;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 533936012;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    int w = 47;
    int h = 46;
    int k = 5;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 87692265;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    int w = 47;
    int h = 49;
    int k = 45;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 590164755;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    int w = 49;
    int h = 48;
    int k = 43;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 852486670;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    int w = 50;
    int h = 48;
    int k = 42;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 971818323;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    int w = 46;
    int h = 45;
    int k = 16;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 133553480;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    int w = 48;
    int h = 45;
    int k = 22;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 661433485;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    int w = 49;
    int h = 45;
    int k = 38;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 979969099;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    int w = 47;
    int h = 47;
    int k = 43;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 756499746;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    int w = 45;
    int h = 49;
    int k = 27;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 254416013;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    int w = 50;
    int h = 49;
    int k = 47;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 116403450;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    int w = 50;
    int h = 50;
    int k = 27;
    BricksN* pObj = new BricksN();
    clock_t start = clock();
    int result = pObj->countStructures(w, h, k);
    clock_t end = clock();
    delete pObj;
    int expected = 607410160;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22709180&rd=14548&pm=11616
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
 
#define re return
#define mp make_pair
#define pb push_back
#define rep(i,n) for(int i = 0; i < n; i++)
#define re return
#define fi first
#define se second
#define sz(x) ((int) (x).size())
#define all(x) (x).begin(), (x).end()
#define sqr(x) ((x) * (x))
#define y0 y3487465
#define y1 y8687969
 
typedef vector<int> vi;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<string> vs;
typedef vector<vi> vvi;
 
template<class T> T abs(T x) {
  re x > 0 ? x : -x;
}
 
class BricksN {
public:
  int countStructures(int, int, int);
};
 
const int mod = 1000000007;
 
int cnt[51];
int was[51][51];
int res[51][51];
 
int go (int w, int h) {
  if (w <= 0 || h == 0) re 1;
  if (was[w][h]) re res[w][h];
  was[w][h] = 1;
  int cur = 1;
  for (int t = 0; t < w; t++)
    for (int i = 1; i + t <= w; i++) {
      int tmp = cnt[i];
      tmp = ((ll)tmp * go (i, h - 1)) % mod;
      tmp = ((ll)tmp * go (w - i - t - 1, h)) % mod;
      cur = (cur + tmp) % mod;
    }
  re res[w][h] = cur;
}
 
int BricksN::countStructures(int w, int h, int k) {
  memset (cnt, 0, sizeof (cnt));
  cnt[0] = 1;
  for (int i = 1; i <= w; i++)
    for (int j = 1; j <= k; j++)
      cnt[i] = (cnt[i] + cnt[i - j]) % mod;
  memset (was, 0, sizeof (was));
  re go (w, h);
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/