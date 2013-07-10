/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10513
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

class TheLockDivTwo {
public:
    string password(int n, int k);
};

string TheLockDivTwo::password(int n, int k) {
    string ret;
    return ret;
}


int test0() {
    int n = 2;
    int k = 4;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "10";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 4;
    int k = 6;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0100";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 10;
    int k = 1;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000000";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 7;
    int k = 100;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1100001";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 10;
    int k = 597;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1001010001";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 10;
    int k = 15;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0000001100";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 10;
    int k = 621;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1001101000";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 8;
    int k = 249;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "11110110";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 7;
    int k = 117;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1110001";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 9;
    int k = 442;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "110110100";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 8;
    int k = 228;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "11100000";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 1;
    int k = 1;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 5;
    int k = 15;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "01100";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 5;
    int k = 13;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "01010";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 1;
    int k = 1;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 1;
    int k = 1;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 6;
    int k = 32;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "011100";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 10;
    int k = 512;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0111111001";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 7;
    int k = 64;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0111110";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 8;
    int k = 128;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "01111010";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 4;
    int k = 8;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0111";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 2;
    int k = 2;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "01";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 3;
    int k = 4;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "010";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 10;
    int k = 513;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1111111001";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 10;
    int k = 513;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1111111001";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 6;
    int k = 33;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "111100";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 5;
    int k = 17;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "11101";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 10;
    int k = 1024;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1111111000";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 7;
    int k = 128;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1111010";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 7;
    int k = 128;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1111010";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 10;
    int k = 1024;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1111111000";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 10;
    int k = 1;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000000";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 10;
    int k = 110;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0001101011";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 9;
    int k = 511;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "111111000";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 10;
    int k = 1023;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1111111111";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 8;
    int k = 18;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "00010000";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 10;
    int k = 1011;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1111101110";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 10;
    int k = 9;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0000001111";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 10;
    int k = 987;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1111010100";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 9;
    int k = 210;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "011001101";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 9;
    int k = 300;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "100101000";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 10;
    int k = 999;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1111100001";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 9;
    int k = 120;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "001110110";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 1;
    int k = 2;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 9;
    int k = 510;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "111111111";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 4;
    int k = 5;
    TheLockDivTwo* pObj = new TheLockDivTwo();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0110";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22831202&rd=13899&pm=10513
********************************************************************************
#include <map>  
#include <set>  
#include <deque>  
#include <vector>  
#include <string>  
#include <cstdio>  
#include <cstring>  
#include <sstream>  
#include <iostream>  
#include <algorithm>  
using namespace std;  
template <class T> void out(T A[], int n) {for (int i = 0; i<n; i++) cout << A[i] << ' '; cout << endl;}   
template <class T> void out(vector<T> A, int n) {for (int i = 0; i<n; i++) cout << A[i] << ' '; cout << endl;}   
 
int a[2000], N; 
string s, ss; 
 
void ch(int a) { 
     s = ""; 
     for (int i=0; i<N; i++) { 
         if (a & 1) s = "1"+s; else s = "0"+s; 
         a /= 2; 
     } 
} 
 
int ava(int a, int b) { 
    if (a == b) return 0; 
    ch(a); ss = s; 
    ch(b); 
    int c0 = 0, c1 = 0; 
    for (int i=0; i<N; i++) 
        if (s[i] == '1' && ss[i] == '0') c0 = 1; 
    for (int i=0; i<N; i++) 
        if (s[i] == '0' && ss[i] == '1') c1 = 1; 
    return c0+c1 != 2; 
} 
 
class TheLockDivTwo {   
public:   
     string password(int n, int k) {   
            memset(a, 0, sizeof(a)); 
            a[0] = 1; N = n; 
            int cur = 0; 
            for (int i=1; i<k; i++) { 
                for (int j=1; j<(1 << n); j++) 
                    if (!a[j] && ava(cur, j)) { 
                       cur = j; 
                       a[j] = 1; 
                       break; 
                    } 
            } 
            ch(cur); 
            return s; 
     }   
      
    
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/