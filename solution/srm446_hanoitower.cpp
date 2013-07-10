/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10573
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

class HanoiTower {
public:
    int moves(string pegA, string pegB, string pegC);
};

int HanoiTower::moves(string pegA, string pegB, string pegC) {
    int ret;
    return ret;
}


int test0() {
    string pegA = "A";
    string pegB = "AA";
    string pegC = "AA";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string pegA = "B";
    string pegB = "C";
    string pegC = "A";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string pegA = "CBA";
    string pegB = "";
    string pegC = "";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
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
    string pegA = "BBBBBBBBBA";
    string pegB = "";
    string pegC = "";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string pegA = "CCCCBBBAAA";
    string pegB = "";
    string pegC = "";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string pegA = "A";
    string pegB = "";
    string pegC = "";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string pegA = "BBBB";
    string pegB = "CCC";
    string pegC = "AAA";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string pegA = "C";
    string pegB = "B";
    string pegC = "";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
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
    string pegA = "CB";
    string pegB = "AACA";
    string pegC = "AA";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string pegA = "B";
    string pegB = "C";
    string pegC = "B";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string pegA = "B";
    string pegB = "";
    string pegC = "B";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string pegA = "C";
    string pegB = "C";
    string pegC = "";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string pegA = "BBB";
    string pegB = "";
    string pegC = "AB";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string pegA = "";
    string pegB = "AAACC";
    string pegC = "AAAAA";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string pegA = "BB";
    string pegB = "A";
    string pegC = "AAABAB";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string pegA = "C";
    string pegB = "CCCABB";
    string pegC = "A";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string pegA = "CABA";
    string pegB = "";
    string pegC = "BCC";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string pegA = "B";
    string pegB = "C";
    string pegC = "";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string pegA = "";
    string pegB = "CBA";
    string pegC = "BABBC";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string pegA = "";
    string pegB = "C";
    string pegC = "";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string pegA = "BBBCC";
    string pegB = "C";
    string pegC = "A";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string pegA = "";
    string pegB = "AA";
    string pegC = "";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string pegA = "BC";
    string pegB = "CCBA";
    string pegC = "AAC";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string pegA = "BC";
    string pegB = "";
    string pegC = "B";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string pegA = "C";
    string pegB = "";
    string pegC = "B";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string pegA = "C";
    string pegB = "";
    string pegC = "A";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string pegA = "CCC";
    string pegB = "AAB";
    string pegC = "BBAB";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string pegA = "B";
    string pegB = "ABACA";
    string pegC = "AAA";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string pegA = "";
    string pegB = "";
    string pegC = "BBB";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string pegA = "CCC";
    string pegB = "AAC";
    string pegC = "AAC";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string pegA = "CA";
    string pegB = "AAC";
    string pegC = "BAB";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string pegA = "BBAA";
    string pegB = "";
    string pegC = "B";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string pegA = "";
    string pegB = "A";
    string pegC = "B";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string pegA = "";
    string pegB = "AA";
    string pegC = "BA";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string pegA = "CBCA";
    string pegB = "C";
    string pegC = "BBB";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string pegA = "BBCC";
    string pegB = "C";
    string pegC = "";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string pegA = "CAA";
    string pegB = "A";
    string pegC = "";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string pegA = "C";
    string pegB = "AABC";
    string pegC = "BB";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string pegA = "";
    string pegB = "";
    string pegC = "AC";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string pegA = "";
    string pegB = "A";
    string pegC = "ABC";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string pegA = "CBA";
    string pegB = "";
    string pegC = "";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string pegA = "CCB";
    string pegB = "A";
    string pegC = "BA";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string pegA = "";
    string pegB = "AABB";
    string pegC = "";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string pegA = "BCB";
    string pegB = "";
    string pegC = "AB";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string pegA = "";
    string pegB = "";
    string pegC = "BBB";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string pegA = "CCAC";
    string pegB = "AB";
    string pegC = "ABC";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string pegA = "";
    string pegB = "C";
    string pegC = "AB";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string pegA = "CCCC";
    string pegB = "ACBC";
    string pegC = "B";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string pegA = "CACB";
    string pegB = "CA";
    string pegC = "ABC";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string pegA = "BA";
    string pegB = "A";
    string pegC = "B";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string pegA = "CBB";
    string pegB = "AAB";
    string pegC = "A";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string pegA = "";
    string pegB = "ABABBC";
    string pegC = "AC";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string pegA = "BA";
    string pegB = "CAC";
    string pegC = "BB";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string pegA = "BB";
    string pegB = "A";
    string pegC = "";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string pegA = "CACC";
    string pegB = "CAAAB";
    string pegC = "B";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string pegA = "C";
    string pegB = "AB";
    string pegC = "ABBB";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string pegA = "";
    string pegB = "C";
    string pegC = "ABB";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string pegA = "C";
    string pegB = "ABACB";
    string pegC = "A";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string pegA = "BCAA";
    string pegB = "CAB";
    string pegC = "ABC";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string pegA = "CBACBACBAA";
    string pegB = "";
    string pegC = "";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string pegA = "ABC";
    string pegB = "ABC";
    string pegC = "ABCA";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string pegA = "BC";
    string pegB = "ABCCBA";
    string pegC = "BA";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string pegA = "ABCABC";
    string pegB = "";
    string pegC = "";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string pegA = "BBB";
    string pegB = "CCC";
    string pegC = "AAAA";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string pegA = "CCC";
    string pegB = "BBB";
    string pegC = "AAAA";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string pegA = "BBA";
    string pegB = "AA";
    string pegC = "CCC";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string pegA = "CBAB";
    string pegB = "ABBA";
    string pegC = "BA";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string pegA = "ABBC";
    string pegB = "BACCB";
    string pegC = "C";
    HanoiTower* pObj = new HanoiTower();
    clock_t start = clock();
    int result = pObj->moves(pegA, pegB, pegC);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22833003&rd=13900&pm=10573
********************************************************************************
#include <cstdlib> 
#include <cctype> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <algorithm> 
#include <vector> 
#include <string> 
#include <iostream> 
#include <sstream> 
#include <map> 
#include <set> 
#include <queue> 
#include <stack> 
#include <fstream> 
#include <numeric> 
#include <iomanip> 
#include <bitset> 
#include <list> 
#include <stdexcept> 
#include <functional> 
#include <utility> 
#include <ctime> 
using namespace std; 
 
#define PB push_back 
#define MP make_pair 
 
#define REP(i,n) for(i=0;i<(n);++i) 
#define FOR(i,l,h) for(i=(l);i<=(h);++i) 
#define FORD(i,h,l) for(i=(h);i>=(l);--i) 
 
typedef vector<int> VI; 
typedef vector<string> VS; 
typedef vector<double> VD; 
typedef long long LL; 
typedef pair<int,int> PII; 
 
 
class HanoiTower 
{ 
        public: 
        map<vector<string>, int> m; 
        priority_queue<pair<int, vector<string> > > que; 
        int cc[3]; 
        int cal(vector<string> v, int x){ 
            int ret = x; 
            for(int i = 0; i < 3; i ++){ 
                bool b = true; 
                for(int j = 0; j < v[i].size(); j ++){ 
                    if(v[i][j] != 'A' + i) b = false; 
                    if(!b) ret ++; 
                } 
            } 
            return 100000 - ret; 
        } 
        bool test(vector<string> v, int x){ 
//            cout << v[0] << " " << v[1] << " " << v[2] << endl; 
            if(m.count(v) == 0){ 
                m[v] = x; 
                que.push(make_pair(cal(v, x), v)); 
            } 
            for(int i = 0; i < v[0].size(); i ++) if(v[0][i] != 'A') return false; 
            for(int i = 0; i < v[1].size(); i ++) if(v[1][i] != 'B') return false; 
            for(int i = 0; i < v[2].size(); i ++) if(v[2][i] != 'C') return false; 
            return true; 
        } 
        bool con(string s, char c){ 
            for(int i = 0; i < s.size(); i ++) if(s[i] != c) return false; 
            return true; 
        } 
        int moves(string pegA, string pegB, string pegC) 
        { 
            m.clear(); 
            while(!que.empty()) que.pop(); 
            vector<string> v(3), tmp(3); 
            v[0] = pegA; v[1] = pegB; v[2] = pegC; 
            if(test(v, 0)) return 0; 
            while(!que.empty()){ 
                v = que.top().second; que.pop(); 
//                cout << v[0] << " " << v[1] << " " << v[2] << endl; 
                int x = m[v]; 
                cc[0] = con(v[0], 'A'); 
                cc[1] = con(v[1], 'B'); 
                cc[2] = con(v[2], 'C'); 
                bool over = false; 
                for(int i = 0; i < 3; i ++){ 
                    if(cc[i]){ 
                        for(int j = 0; j < 3; j ++)if(i!=j){ 
                            if(v[j].size() != 0 && v[j][v[j].size()-1] == 'A'+i){ 
                                v[i] += 'A' + i; 
                                v[j] = v[j].substr(0, v[j].size()-1); 
                                 if(test(v, x + 1)) return x + 1; 
                                 over = true; break; 
                            } 
                        } 
                        if(over) break; 
                    } 
                } 
                if(over) continue; 
                if(v[0].size() != 0 && !cc[0]){ 
                    //                    cout << v[0] << " " << v[1] << " " << v[2] << endl; 
                    tmp[0] = v[0].substr(0, v[0].size() - 1); 
                    //                    cout << v[0] << " " << v[1] << " " << v[2] << endl; 
                    tmp[1] = v[1] + v[0][v[0].size()-1]; 
                    tmp[2] = v[2]; 
                    if(test(tmp, x + 1)) return x + 1; 
                    tmp[2] = v[2] + v[0][v[0].size()-1]; 
                    tmp[1] = v[1]; 
                    if(test(tmp, x + 1)) return x + 1; 
                } 
                if(v[1].size() != 0  && !cc[1]){ 
                    tmp[1] = v[1].substr(0, v[1].size() - 1); 
                    tmp[0] = v[0] + v[1][v[1].size()-1]; 
                    tmp[2] = v[2]; 
                    if(test(tmp, x + 1)) return x + 1; 
                    tmp[2] = v[2] + v[1][v[1].size()-1]; 
                    tmp[0] = v[0]; 
                    if(test(tmp, x + 1)) return x + 1; 
                } 
                if(v[2].size() != 0  && !cc[2]){ 
                    tmp[2] = v[2].substr(0, v[2].size() - 1); 
                    tmp[1] = v[1] + v[2][v[2].size()-1]; 
                    tmp[0] = v[0]; 
                    if(test(tmp, x + 1)) return x + 1; 
                    tmp[0] = v[0] + v[2][v[2].size()-1]; 
                    tmp[1] = v[1]; 
                    if(test(tmp, x + 1)) return x + 1; 
                } 
            } 
            return -1; 
        } 
         
 
}; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/