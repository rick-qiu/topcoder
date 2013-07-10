/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11364
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

class FoxAndGCDLCM {
public:
    long get(long G, long L);
};

long FoxAndGCDLCM::get(long G, long L) {
    long ret;
    return ret;
}


int test0() {
    long G = 2;
    long L = 20;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    long G = 5;
    long L = 8;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    long G = 1000;
    long L = 100;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    long G = 100;
    long L = 1000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 700;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    long G = 10;
    long L = 950863963000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 6298430;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    long G = 1;
    long L = 1;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    long G = 1;
    long L = 2;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    long G = 1;
    long L = 3;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    long G = 1;
    long L = 4;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    long G = 10;
    long L = 100;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 70;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    long G = 100;
    long L = 100;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 200;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    long G = 1000000000000;
    long L = 1000000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 2000000000000;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    long G = 1;
    long L = 1000000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 244144721;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    long G = 1;
    long L = 999999999989;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999990;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    long G = 999999999989;
    long L = 999999999989;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 1999999999978;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    long G = 999999999999;
    long L = 999999999999;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 1999999999998;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    long G = 2;
    long L = 999999999999;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    long G = 3;
    long L = 999999999999;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 3474462;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    long G = 4;
    long L = 1000000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 976566596;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    long G = 5;
    long L = 999999999999;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    long G = 6;
    long L = 999999999996;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 4999998;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    long G = 7;
    long L = 1000000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    long G = 100000;
    long L = 100;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    long G = 2;
    long L = 1;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    long G = 123456789;
    long L = 1234567890;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 864197523;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    long G = 19690;
    long L = 85411282000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 103510330;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    long G = 91;
    long L = 974879385662;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 19173063;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    long G = 369;
    long L = 641851989165;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 248299362;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    long G = 3;
    long L = 122110961292;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 41884935;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    long G = 182;
    long L = 863259682740;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 25069954;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    long G = 3281;
    long L = 717632203782;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 97193063;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    long G = 72350;
    long L = 925524930800;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 652524650;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    long G = 2;
    long L = 397120903970;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 23721028;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    long G = 27;
    long L = 953698097898;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 10151703;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    long G = 31;
    long L = 449521949054;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 19611561;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    long G = 69;
    long L = 841048183521;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 15249414;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    long G = 32578;
    long L = 622426993188;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 284959766;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    long G = 247531;
    long L = 28163582118;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 311641529;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    long G = 1090;
    long L = 698178988380;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 55680470;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    long G = 222;
    long L = 871431576786;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 292015248;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    long G = 6;
    long L = 762083046;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 152652;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    long G = 2125;
    long L = 563403387750;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 79353875;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    long G = 4909;
    long L = 385994876178;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 87738557;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    long G = 6;
    long L = 102991956030;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 1864572;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    long G = 28;
    long L = 511253791776;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 8518804;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    long G = 14;
    long L = 646803209150;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 13589996;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    long G = 1;
    long L = 108371180946;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 685553;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    long G = 170;
    long L = 638273737150;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 20989560;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    long G = 1619;
    long L = 942870265325;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 178323136;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    long G = 3;
    long L = 736626285213;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 13372560;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    long G = 18780;
    long L = 860762595120;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 623214300;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    long G = 2;
    long L = 222499279704;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 1335994;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    long G = 17;
    long L = 92945485908;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 78257137;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    long G = 1481;
    long L = 7850792848;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 29266041;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    long G = 17;
    long L = 69582930095;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 2176408;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    long G = 12764;
    long L = 625037188820;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 178644944;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    long G = 3;
    long L = 587347286976;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 4214901;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    long G = 186;
    long L = 227988011070;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 13051992;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    long G = 5;
    long L = 198567696250;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 1992885;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    long G = 19;
    long L = 282175860786;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 4901905;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    long G = 2;
    long L = 663725951812;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 87972414;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    long G = 10;
    long L = 827402333520;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 6407830;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    long G = 1;
    long L = 198856990744;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 4051801;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    long G = 15;
    long L = 987671321910;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 7732875;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    long G = 83;
    long L = 943705089305;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 17933644;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    long G = 2226;
    long L = 749365445216;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    long G = 7751;
    long L = 96333565096;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    long G = 4652;
    long L = 288500735569;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    long G = 8227;
    long L = 857477448634;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    long G = 255;
    long L = 777831771063;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    long G = 9812;
    long L = 432810069345;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    long G = 6562;
    long L = 128303313570;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    long G = 8749;
    long L = 161734062610;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    long G = 7403;
    long L = 989921186969;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 171483092;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    long G = 7910;
    long L = 954118069709;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    long G = 163751967973;
    long L = 904315130722;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    long G = 735535648965;
    long L = 772186675910;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    long G = 987509887063;
    long L = 994467244792;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    long G = 710875448198;
    long L = 774452058479;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    long G = 106095868877;
    long L = 386899551256;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    long G = 463982085303;
    long L = 618570719610;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    long G = 679081528294;
    long L = 845480558019;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    long G = 235677577222;
    long L = 478865972561;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    long G = 519414588838;
    long L = 853840888864;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    long G = 127799255701;
    long L = 568145978603;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    long G = 8271781382;
    long L = 306055911134;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 314327692516;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    long G = 15424328614;
    long L = 215940600596;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 138818957526;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    long G = 55899795662;
    long L = 167699386986;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 223599182648;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    long G = 43733415291;
    long L = 87466830582;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 131200245873;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    long G = 79278881041;
    long L = 554952167287;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 634231048328;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    long G = 91687851397;
    long L = 825190662573;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 916878513970;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    long G = 91686164344;
    long L = 916861643440;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 641803150408;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    long G = 75299138487;
    long L = 451794830922;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 376495692435;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    long G = 9546805544;
    long L = 57280833264;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 47734027720;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    long G = 13218893807;
    long L = 541974646087;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 555193539894;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    long G = 499999999979;
    long L = 999999999958;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 1499999999937;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    long G = 499999999979;
    long L = 499999999979;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999958;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    long G = 772797527;
    long L = 499999999969;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 500772797496;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    long G = 499999999943;
    long L = 999999999886;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 1499999999829;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    long G = 499999999943;
    long L = 499999999943;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999886;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    long G = 999999999961;
    long L = 999999999961;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 1999999999922;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    long G = 999999999959;
    long L = 999999999959;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 1999999999918;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    long G = 499999999901;
    long L = 999999999802;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 1499999999703;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    long G = 333333333323;
    long L = 333333333323;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 666666666646;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    long G = 333333333323;
    long L = 999999999969;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 1333333333292;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    long G = 10;
    long L = 998862962000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 4994316810;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    long G = 2;
    long L = 1000000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 488285346;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    long G = 2;
    long L = 16;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 18;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    long G = 963761198400;
    long L = 963761198400;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 1927522396800;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    long G = 68719476736;
    long L = 412316860416;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 343597383680;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    long G = 1;
    long L = 99999999977;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 99999999978;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    long G = 1;
    long L = 187473;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 866;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    long G = 99999999977;
    long L = 99999999977;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 199999999954;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    long G = 1;
    long L = 10000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 9766649;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    long G = 1;
    long L = 100;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 29;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    long G = 1000000000;
    long L = 1000000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 133000000000;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    long G = 500000000000;
    long L = 1000000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 1500000000000;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    long G = 10000000000;
    long L = 100000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 70000000000;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    long G = 999999999989;
    long L = 1000000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    long G = 100000000000;
    long L = 1000000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 700000000000;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    long G = 10000000000;
    long L = 1000000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 290000000000;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    long G = 89876476576;
    long L = 84787483738;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    long G = 1;
    long L = 5;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    long G = 5;
    long L = 5;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    long G = 2;
    long L = 549753716734;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 549753716736;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    long G = 2000000000;
    long L = 2000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 4000000000;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    long G = 2;
    long L = 2;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    long G = 1;
    long L = 29;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 30;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    long G = 4;
    long L = 4;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    long G = 35309;
    long L = 10723661081;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 46254790;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    long G = 6;
    long L = 216;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 78;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    long G = 1;
    long L = 12;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    long G = 10;
    long L = 950863664450;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 6167220;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    long G = 2;
    long L = 4;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    long G = 2;
    long L = 100000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 97658298;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    long G = 1000000000;
    long L = 1000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    long G = 2;
    long L = 19153781534;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 19153781536;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    long G = 107913405600;
    long L = 971220650400;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 1079134056000;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    long G = 250000000000;
    long L = 1000000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 1250000000000;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    long G = 8;
    long L = 16;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    long G = 999999999997;
    long L = 1000000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    long G = 2;
    long L = 18;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    long G = 1000000000000;
    long L = 99999999999;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    long G = 200000;
    long L = 100000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 3131400000;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    long G = 2;
    long L = 200000014;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 200000016;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    long G = 1;
    long L = 549755813888;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 549755813889;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    long G = 100000000000;
    long L = 500000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 600000000000;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    long G = 10000000000;
    long L = 50000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 60000000000;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    long G = 1;
    long L = 100233665123;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 100233665124;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    long G = 1;
    long L = 20;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    long G = 200560490130;
    long L = 200560490130;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 401120980260;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    long G = 10;
    long L = 240;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 110;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    long G = 2;
    long L = 14;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    long G = 1;
    long L = 521240920200;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 1470457;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    long G = 87178291199;
    long L = 87178291199;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 174356582398;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    long G = 10;
    long L = 10;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    long G = 100000000;
    long L = 1000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 700000000;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    long G = 30;
    long L = 30000000210;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 30000000240;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    long G = 5;
    long L = 5040;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 395;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    long G = 2;
    long L = 549755813888;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 549755813890;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    long G = 1;
    long L = 14100827177;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 14100827178;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    long G = 10000000000;
    long L = 90000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 100000000000;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    long G = 2;
    long L = 94385732726;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 71561192;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    long G = 1000000000;
    long L = 10000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 7000000000;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    long G = 10;
    long L = 9003500059;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    long G = 1;
    long L = 95;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    long G = 5;
    long L = 210;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 65;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    long G = 1000000007;
    long L = 34000000238;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 19000000133;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    long G = 1;
    long L = 2310;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 97;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    long G = 17179869184;
    long L = 34359738368;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 51539607552;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    long G = 999999999961;
    long L = 999999999989;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    long G = 2;
    long L = 5;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    long G = 900000000025;
    long L = 999999999999;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    long G = 123211123;
    long L = 150863961;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    long G = 2;
    long L = 6;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    long G = 11111111111;
    long L = 22222222222;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 33333333333;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    long G = 10000000;
    long L = 1000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 290000000;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    long G = 1;
    long L = 16;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 17;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    long G = 1000000;
    long L = 950863963000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    long G = 999999999999;
    long L = 1000000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    long G = 1;
    long L = 87178291200;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 590539;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    long G = 100000000;
    long L = 1000000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 64100000000;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    long G = 1;
    long L = 1000000007;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000008;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    long G = 1;
    long L = 1000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 15689;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    long G = 1;
    long L = 100000000003;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 100000000004;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    long G = 1;
    long L = 999999999091;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999092;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    long G = 1;
    long L = 963761198400;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 1963583;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    long G = 1;
    long L = 455;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 48;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    long G = 44628547775;
    long L = 454786481517;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    long G = 500000000000;
    long L = 500000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    long G = 1;
    long L = 999962000357;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 1999962;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    long G = 1;
    long L = 21;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    long G = 601681470393;
    long L = 601681470393;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 1203362940786;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    long G = 999999999999;
    long L = 888888888888;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    long G = 1000000000;
    long L = 2000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 3000000000;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    long G = 1000000;
    long L = 1000000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 15689000000;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    long G = 2;
    long L = 99999999999;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    long G = 145;
    long L = 145;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 290;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    long G = 1;
    long L = 15;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    long G = 871782912000;
    long L = 871782912000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 1743565824000;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    long G = 1;
    long L = 900000000013;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 900000000014;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    long G = 34359738368;
    long L = 68719476736;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 103079215104;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    long G = 1000000007;
    long L = 221000001547;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 30000000210;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    long G = 500;
    long L = 100000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 195568500;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    long G = 4;
    long L = 100;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 104;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    long G = 185285839890;
    long L = 185285839890;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 370571679780;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    long G = 10;
    long L = 6061000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 15610;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    long G = 5456;
    long L = 654;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    long G = 5;
    long L = 125;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 130;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    long G = 1;
    long L = 30030;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 347;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    long G = 4294967296;
    long L = 4294967296;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 8589934592;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    long G = 1;
    long L = 999999999958;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 499999999981;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    long G = 1;
    long L = 7;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    long G = 1;
    long L = 32416190071;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 32416190072;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    long G = 3763;
    long L = 94997732756;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 23749448241;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    long G = 1;
    long L = 100000000000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 48830173;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    long G = 1;
    long L = 30;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    long G = 2;
    long L = 318821883888;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 1623130;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    long G = 1;
    long L = 4032;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 127;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    long G = 2;
    long L = 13;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    long G = 1;
    long L = 180;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 29;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    long G = 9326317000;
    long L = 699473775000;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 261136876000;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    long G = 9999999999;
    long L = 9999999999;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 19999999998;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    long G = 2;
    long L = 21;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    long G = 2;
    long L = 999999999958;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999960;
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    long G = 87178291199;
    long L = 174356582398;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 261534873597;
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    long G = 1;
    long L = 87178291199;
    FoxAndGCDLCM* pObj = new FoxAndGCDLCM();
    clock_t start = clock();
    long result = pObj->get(G, L);
    clock_t end = clock();
    delete pObj;
    long expected = 87178291200;
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=15037&pm=11364
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
template<class T> inline T gcd(T a,T b) 
  {if(a<0)return gcd(-a,b);if(b<0)return gcd(a,-b);return (b==0)?a:gcd(b,a%b);} 
 
class FoxAndGCDLCM 
{ 
public: 
  int64 solve(int64 L) 
  { 
    int64 ret=-1; 
    for (int64 a=1;a*a<=L;a++) 
      if (L%a==0 && gcd(a,L/a)==1) 
      { 
        int64 s=a+L/a; 
        if (ret<0 || s<ret) ret=s; 
      } 
    return ret; 
  } 
  int64 get(int64 G, int64 L) 
  { 
    if (L%G!=0) return -1; 
    int64 ret=solve(L/G); 
    if (ret<0) return -1; 
    return ret*G; 
  } 
};

********************************************************************************
*******************************************************************************/