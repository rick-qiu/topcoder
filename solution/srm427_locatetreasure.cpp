/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9984
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

class LocateTreasure {
public:
    string location(int K, int multi);
};

string LocateTreasure::location(int K, int multi) {
    string ret;
    return ret;
}


int test0() {
    int K = 5;
    int multi = 2;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-6 4";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int K = 99;
    int multi = 1;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "1 0";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int K = 5226;
    int multi = 4;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "10 -2";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int K = 6;
    int multi = 9;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "9 1";
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
    int multi = 2;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-6 -3";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int K = 79025992;
    int multi = 1;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 0";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int K = 219683641;
    int multi = 3;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-6 1";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int K = 247731190;
    int multi = 4;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "7 4";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int K = 920386894;
    int multi = 5;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "2 4";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int K = 888829576;
    int multi = 6;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-3 -8";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int K = 260501341;
    int multi = 7;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 1";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int K = 105476434;
    int multi = 8;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "8 1";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int K = 29;
    int multi = 9;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 1";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int K = 312553813;
    int multi = 10;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 1";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int K = 687512077;
    int multi = 11;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 1";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int K = 38;
    int multi = 12;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "3 1";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int K = 41;
    int multi = 13;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "3 -2";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int K = 44;
    int multi = 14;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-6 -3";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int K = 337774576;
    int multi = 15;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-3 -8";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int K = 442868173;
    int multi = 16;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 1";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int K = 804601048;
    int multi = 17;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 0";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int K = 56;
    int multi = 18;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 -8";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int K = 410048638;
    int multi = 19;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "1 1";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int K = 62;
    int multi = 928;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "1 1";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int K = 65;
    int multi = 734;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-3 -2";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int K = 68;
    int multi = 711;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 -8";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int K = 688266589;
    int multi = 965;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 1";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int K = 74;
    int multi = 854;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "8 1";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int K = 77;
    int multi = 422;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 1";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int K = 632756779;
    int multi = 265;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "10 -3";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int K = 71551579;
    int multi = 676;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "1 0";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int K = 712969612;
    int multi = 96;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-3 -8";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int K = 89;
    int multi = 32;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-3 -2";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int K = 92;
    int multi = 835;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "3 3";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int K = 95;
    int multi = 374;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "2 0";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int K = 738294070;
    int multi = 544;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "7 4";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int K = 547196272;
    int multi = 618;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-3 -8";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int K = 104;
    int multi = 491;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-6 -3";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int K = 655871152;
    int multi = 807;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-3 -8";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int K = 747887641;
    int multi = 637;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 1";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int K = 9796882;
    int multi = 448;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "4 7";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int K = 116;
    int multi = 672;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-3 -8";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int K = 466182835;
    int multi = 43;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "10 3";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int K = 122;
    int multi = 689;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "5 1";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int K = 210082162;
    int multi = 402;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "6 1";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int K = 75680341;
    int multi = 31;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 1";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int K = 131;
    int multi = 164;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "5 0";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int K = 502700341;
    int multi = 780;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-3 1";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int K = 217085866;
    int multi = 180;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "9 1";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int K = 389727085;
    int multi = 978;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-3 1";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int K = 292509493;
    int multi = 48;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-6 1";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int K = 278858965;
    int multi = 879;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-3 1";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int K = 351903760;
    int multi = 589;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "3 -6";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int K = 152;
    int multi = 636;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-3 -8";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int K = 7560;
    int multi = 867;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-6 -8";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int K = 6121;
    int multi = 579;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-6 1";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int K = 9941400;
    int multi = 981;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 -8";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int K = 361;
    int multi = 201;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-6 1";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int K = 952921;
    int multi = 942;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-3 1";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int K = 1000000000;
    int multi = 991;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 0";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int K = 1000000000;
    int multi = 1000;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 0";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int K = 172672312;
    int multi = 999;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 -8";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int K = 999917171;
    int multi = 971;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "8 0";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int K = 987654142;
    int multi = 847;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "1 1";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int K = 1000000000;
    int multi = 997;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "6 -3";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int K = 999999999;
    int multi = 999;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "9 -8";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int K = 1000000000;
    int multi = 779;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-3 -6";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int K = 1000000000;
    int multi = 5;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-3 -6";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int K = 1000000000;
    int multi = 989;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 0";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int K = 1000000000;
    int multi = 789;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-3 -8";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int K = 1000000000;
    int multi = 1;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 0";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int K = 100000000;
    int multi = 123;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-3 -8";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int K = 900000001;
    int multi = 9;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 1";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int K = 1000000000;
    int multi = 979;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "6 -3";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int K = 99999999;
    int multi = 999;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "9 -8";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int K = 1;
    int multi = 3;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 1";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int K = 999999991;
    int multi = 8;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "8 0";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int K = 1000000000;
    int multi = 939;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-6 -8";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int K = 1000000000;
    int multi = 9;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 -8";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int K = 999999;
    int multi = 999;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "9 -8";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int K = 954345345;
    int multi = 566;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 1";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int K = 1000000000;
    int multi = 137;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-6 -3";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int K = 840;
    int multi = 9;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 -8";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int K = 1000000000;
    int multi = 987;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-3 -8";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int K = 4;
    int multi = 3;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-6 -8";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int K = 1000000000;
    int multi = 113;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-3 -6";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int K = 1000000000;
    int multi = 999;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 -8";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int K = 998697978;
    int multi = 83;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-1 4";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int K = 1000;
    int multi = 9;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 -8";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int K = 987654321;
    int multi = 987;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-3 1";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int K = 1000000000;
    int multi = 3;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-6 -8";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int K = 3;
    int multi = 6;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "6 -8";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int K = 800007086;
    int multi = 61;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "7 1";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int K = 99;
    int multi = 3;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "3 -8";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int K = 500000001;
    int multi = 333;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 1";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int K = 199;
    int multi = 3;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "3 -8";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int K = 999999799;
    int multi = 987;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "6 -8";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int K = 1000000000;
    int multi = 986;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-3 -6";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int K = 1000000000;
    int multi = 927;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 -8";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int K = 1451521;
    int multi = 969;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-3 1";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int K = 999999994;
    int multi = 994;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "7 4";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int K = 999999999;
    int multi = 2;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "2 -3";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int K = 32675632;
    int multi = 4;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "3 -6";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int K = 1000;
    int multi = 7;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "6 -3";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int K = 15;
    int multi = 19;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "1 0";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int K = 800003778;
    int multi = 61;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "10 4";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int K = 13;
    int multi = 3;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-6 1";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int K = 1000000;
    int multi = 999;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "0 -8";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int K = 999999999;
    int multi = 19;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "1 0";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int K = 999999994;
    int multi = 996;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "6 1";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int K = 1000000000;
    int multi = 13;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "3 -6";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int K = 12;
    int multi = 3;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-6 -8";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int K = 1000000000;
    int multi = 599;
    LocateTreasure* pObj = new LocateTreasure();
    clock_t start = clock();
    string result = pObj->location(K, multi);
    clock_t end = clock();
    delete pObj;
    string expected = "-3 -6";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20463878&rd=13518&pm=9984
********************************************************************************
#include <algorithm> 
#include <string> 
#include <set> 
#include <map> 
#include <vector> 
#include <queue>  
#include <iostream> 
#include <iterator> 
#include <math.h> 
#include <cstdio> 
#include <cstdlib> 
#include <sstream> 
 
#pragma comment(linker, "/STACK:60777216") 
 
using namespace std; 
 
typedef pair<int,int> pii; 
typedef long long ll; 
typedef vector<int> vi; 
typedef pair<ll,ll> pl; 
 
#define UN(v) SORT(v),v.erase(unique(v.begin(),v.end()),v.end()) 
#define SORT(c) sort((c).begin(),(c).end()) 
#define F(i,a,b) for (int  i=(a); i < (b); i++)  
#define FD(i,a,b) for (int i=(a); i >= (b); i--)  
#define R(i,n) F(i,0,n)  
#define CL(a,b) memset(a,b,sizeof(a)) 
#define pb push_back 
 
const int inf = 1011111111; 
 
int dx[]={0,1,0,-1}; 
int dy[]={1,0,-1,0}; 
 
bool  u[10]; 
pl   p[10]; 
int   l[10]; 
 
class LocateTreasure { 
public: 
  string location(int K, int multi) { 
        int d=0; 
        ll x=0,y=0; 
        multi%=9; 
        int gold=1; 
        CL(u,false); 
        int it=0; 
        while(!u[gold]){ 
            l[gold]=it; 
            it++; 
            u[gold]=true; 
            p[gold]=pl(x,y); 
            y+=gold; 
            gold*=multi,gold%=9;if(!gold) gold=9; 
            if(it==K) break; 
            it++; 
            x+=gold; 
            gold*=multi,gold%=9;if(!gold) gold=9; 
            if(it==K) break; 
            y-=gold; 
            it++; 
            gold*=multi,gold%=9;if(!gold) gold=9; 
            if(it==K) break; 
            x-=gold; 
            it++; 
            gold*=multi,gold%=9;  if(!gold) gold=9;           
            if(it==K) break;             
        } 
        if(K>it){ 
            int nm=it-l[gold]; 
            ll c=(K-it)/nm; 
            x+=(x-p[gold].first)*c; 
            y+=(y-p[gold].second)*c; 
            it+=nm*c; 
            while(it<K){ 
                x+=dx[d]*gold, 
                  y+=dy[d]*gold; 
                d=(d+1)%4; 
                gold*=multi,gold%=9; if(!gold) gold=9; 
                it++; 
            } 
        } 
    stringstream ss; 
        ss<<x<<' '<<y; 
    return ss.str(); 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/