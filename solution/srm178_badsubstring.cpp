/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1872
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

class BadSubstring {
public:
    long howMany(int length);
};

long BadSubstring::howMany(int length) {
    long ret;
    return ret;
}


int test0() {
    int length = 0;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int length = 3;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 21;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int length = 29;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 1548008755920;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int length = 0;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int length = 1;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int length = 2;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int length = 3;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 21;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int length = 4;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 55;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int length = 5;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 144;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int length = 6;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 377;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int length = 7;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 987;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int length = 8;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 2584;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int length = 9;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 6765;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int length = 10;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 17711;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int length = 11;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 46368;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int length = 12;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 121393;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int length = 13;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 317811;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int length = 14;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 832040;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int length = 15;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 2178309;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int length = 16;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 5702887;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int length = 17;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 14930352;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int length = 18;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 39088169;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int length = 19;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 102334155;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int length = 20;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 267914296;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int length = 21;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 701408733;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int length = 22;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 1836311903;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int length = 23;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 4807526976;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int length = 24;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 12586269025;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int length = 25;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 32951280099;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int length = 26;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 86267571272;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int length = 27;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 225851433717;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int length = 28;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 591286729879;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int length = 29;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 1548008755920;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int length = 30;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 4052739537881;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int length = 31;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 10610209857723;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int length = 32;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 27777890035288;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int length = 33;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 72723460248141;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int length = 34;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 190392490709135;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int length = 35;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 498454011879264;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int length = 36;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 1304969544928657;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int length = 37;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 3416454622906707;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int length = 38;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 8944394323791464;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int length = 39;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 23416728348467685;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int length = 40;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 61305790721611591;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int length = 41;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 160500643816367088;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int length = 42;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 420196140727489673;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int length = 43;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 1100087778366101931;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int length = 44;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 2880067194370816120;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int length = 9;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 6765;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int length = 29;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 1548008755920;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int length = 0;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int length = 44;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 2880067194370816120;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int length = 2;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int length = 38;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 8944394323791464;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int length = 37;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 3416454622906707;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int length = 43;
    BadSubstring* pObj = new BadSubstring();
    clock_t start = clock();
    long result = pObj->howMany(length);
    clock_t end = clock();
    delete pObj;
    long expected = 1100087778366101931;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7251152&rd=4710&pm=1872
********************************************************************************
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <cstdio>
using namespace std;
 
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define FORD(i,a,b) for(int i=(a);i>=(b);--i)
#define REP(i,n) for(int i=0;i<(n);++i)
#define VAR(v,x) __typeof(x) v=x
#define FOREACH(i,c) for(VAR(i,(c).begin());i!=(c).end();++i)
 
class BadSubstring { public:
  long long howMany(int length) {
    int n = 0;
    long long a = 0, x = 1; // how many n-letter words begin with a, or else
    while (n < length) {
      long long a1 = (a+x), x1 = (a + 2*x);
      a = a1; x = x1; n++;
    }
    return a + x;
  }
};

********************************************************************************
*******************************************************************************/