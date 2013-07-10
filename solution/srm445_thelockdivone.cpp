/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10514
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

class TheLockDivOne {
public:
    string password(int n, long k);
};

string TheLockDivOne::password(int n, long k) {
    string ret;
    return ret;
}


int test0() {
    int n = 2;
    long k = 4;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "11";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 3;
    long k = 8;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "111";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 4;
    long k = 6;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0110";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 10;
    long k = 1;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000000";
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
    long k = 597;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1111111001";
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
    long k = 15;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0000001111";
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
    long k = 621;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1111111001";
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
    long k = 249;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "11111110";
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
    long k = 117;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1111110";
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
    long k = 442;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "111111011";
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
    long k = 228;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "11111110";
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
    long k = 1;
    TheLockDivOne* pObj = new TheLockDivOne();
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
    long k = 15;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "01111";
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
    long k = 13;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "01111";
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
    long k = 1;
    TheLockDivOne* pObj = new TheLockDivOne();
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
    long k = 1;
    TheLockDivOne* pObj = new TheLockDivOne();
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
    long k = 32;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "011111";
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
    long k = 512;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0111111111";
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
    long k = 64;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0111111";
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
    long k = 128;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "01111111";
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
    long k = 8;
    TheLockDivOne* pObj = new TheLockDivOne();
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
    long k = 2;
    TheLockDivOne* pObj = new TheLockDivOne();
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
    long k = 4;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "011";
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
    long k = 513;
    TheLockDivOne* pObj = new TheLockDivOne();
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
    long k = 513;
    TheLockDivOne* pObj = new TheLockDivOne();
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
    long k = 33;
    TheLockDivOne* pObj = new TheLockDivOne();
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
    long k = 17;
    TheLockDivOne* pObj = new TheLockDivOne();
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
    long k = 1024;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1111111111";
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
    long k = 128;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1111111";
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
    long k = 128;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1111111";
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
    long k = 1024;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1111111111";
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
    long k = 1;
    TheLockDivOne* pObj = new TheLockDivOne();
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
    int n = 48;
    long k = 208512386748577;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "111111111111111111111111111111111111111111010100";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 25;
    long k = 27411233;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1111111111111111111101110";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 38;
    long k = 105246396407;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "01111111111111111111111111111111100001";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 23;
    long k = 6621849;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111111111101101";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 45;
    long k = 11398125475641;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "011111111111111111111111111111111111111011000";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 23;
    long k = 6380913;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111111111101101";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 34;
    long k = 3005954651;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0011111111111111111111111111100100";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 50;
    long k = 1052937316880545;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111111111111111111111111111111111111010110";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 50;
    long k = 75288321082145;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "00011111111111111111111111111111111111111111010101";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 50;
    long k = 174927595212791;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "00111111111111111111111111111111111111111111010100";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 50;
    long k = 282406622136985;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "01111111111111111111111111111111111111111111010110";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 50;
    long k = 562949953421312;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "01111111111111111111111111111111111111111111111111";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 50;
    long k = 1125899906842624;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111111111111111111111111111111111111111111";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 50;
    long k = 562949953421313;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111111111111111111111111111111111111010010";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 50;
    long k = 1;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000000000000000000000000000000000000000000";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 34;
    long k = 2719886102;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0011111111111111111111111111100100";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 31;
    long k = 41952292;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0000011111111111111111111101011";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 32;
    long k = 19008497;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "00000001111111111111111111101010";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 49;
    long k = 93536637109166;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0011111111111111111111111111111111111111111010101";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 7;
    long k = 100;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1111110";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 50;
    long k = 725899906842624;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111111111111111111111111111111111111010010";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 50;
    long k = 123456789012345;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "00011111111111111111111111111111111111111111011111";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 50;
    long k = 1025899906842619;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111111111111111111111111111111111111010110";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 50;
    long k = 543797347268423;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "01111111111111111111111111111111111111111111010111";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 50;
    long k = 281474976710657;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "01111111111111111111111111111111111111111111010110";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 50;
    long k = 33553333;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000000000000000001111111111111111111111111";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 50;
    long k = 562949953131313;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "01111111111111111111111111111111111111111111111101";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 49;
    long k = 3214659873999;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000111111111111111111111111111111111111011011";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 50;
    long k = 140737488355328;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "00011111111111111111111111111111111111111111111111";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 50;
    long k = 100000000000000;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "00011111111111111111111111111111111111111111010101";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 50;
    long k = 1234565676543;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000011111111111111111111111111111111111011010";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 50;
    long k = 1000000000000000;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111111111111111111111111111111111111010110";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 49;
    long k = 562946180435304;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1111111111111111111111111111111111111111111111100";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 50;
    long k = 562949953421666;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111111111111111111111111111111111111010010";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 20;
    long k = 513;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000001111111001";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 50;
    long k = 365487745125434;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "01111111111111111111111111111111111111111111010110";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 50;
    long k = 27;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000000000000000000000000000000000000011111";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 50;
    long k = 1125899871101813;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111111111111111111111111111111111111111100";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 49;
    long k = 35184372088832;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0000111111111111111111111111111111111111111111111";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 50;
    long k = 745493936856584;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111111111111111111111111111111111111010010";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 20;
    long k = 1025;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000011111111000";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 49;
    long k = 562949953421000;
    TheLockDivOne* pObj = new TheLockDivOne();
    clock_t start = clock();
    string result = pObj->password(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1111111111111111111111111111111111111111111111111";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8351731&rd=13899&pm=10514
********************************************************************************
#define _CRT_SECURE_NO_DEPRECATE 
#include <iostream> 
#include <memory> 
#include <vector> 
#include <algorithm> 
#include <string> 
#include <utility> 
#include <functional> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <cmath> 
#include <cassert> 
#include <sstream> 
 
using namespace std;
 
 
class TheLockDivOne
{
public:
  string check(int n, long long k)
  {
    if (n == 1)
      return (k == 1) ? "0" : "1";
    else
    {
      long long m = (long long)1 << (n - 1);
      if (k <= m)
        return "0" + check(n - 1, k);
      else
        if (k == m + 1)
          return "1" + check(n - 1, m);
        else
          return "1" + check(n - 1, k - m - 1);
    }
  }
  string password(int n, long long k)
  {
    if (n == 1)
      return (k == 1) ? "0" : "1";
    else
    {
      long long m = (long long)1 << (n - 1);
      if (k <= m)
        return "0" + password(n - 1, k);
      else
        if (k == m + 1)
          return "1" + check(n - 1, m);
        else
        {
          string s = "1" + check(n - 1, m);
          string t = "1" + password(n - 1, k - m - 1);
          return (s > t) ? s : t;
        }
    }
  }
};

********************************************************************************
*******************************************************************************/