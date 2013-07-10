/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7294
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

class RepeatedPatterns {
public:
    long findZeroSegment(string P1, string P2, string zeroCount);
};

long RepeatedPatterns::findZeroSegment(string P1, string P2, string zeroCount) {
    long ret;
    return ret;
}


int test0() {
    string P1 = "111010100001010";
    string P2 = "010000001000";
    string zeroCount = "3";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string P1 = "1101010010";
    string P2 = "0001000";
    string zeroCount = "3";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 9999999;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string P1 = "1101010010";
    string P2 = "0001000";
    string zeroCount = "5";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 20000011;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string P1 = "10101010";
    string P2 = "101010101010";
    string zeroCount = "9876543219876";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string P1 = "11111111111111111111111111";
    string P2 = "0";
    string zeroCount = "9876543219876";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string P1 = "1111111111111";
    string P2 = "1111111";
    string zeroCount = "1";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string P1 = "1";
    string P2 = "1";
    string zeroCount = "1";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string P1 = "11111111111111111111111111111111111111111111111111";
    string P2 = "11111111111111111111111111111111111111111111111111";
    string zeroCount = "1";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string P1 = "11111111111111111111111111111111111111111111111111";
    string P2 = "11111111111111111111111111111111111111111111111111";
    string zeroCount = "10000000000000000";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string P1 = "0";
    string P2 = "0";
    string zeroCount = "1";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string P1 = "0";
    string P2 = "0";
    string zeroCount = "47";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string P1 = "0";
    string P2 = "0";
    string zeroCount = "10000000000000000";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string P1 = "0";
    string P2 = "1";
    string zeroCount = "1";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string P1 = "0";
    string P2 = "1";
    string zeroCount = "2";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string P1 = "1";
    string P2 = "0";
    string zeroCount = "1";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string P1 = "1";
    string P2 = "0";
    string zeroCount = "2";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 2000001;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string P1 = "1";
    string P2 = "0";
    string zeroCount = "87654321";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 3929294272158360;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string P1 = "00001010101011101101010100000";
    string P2 = "000000000010100000100000010000000";
    string zeroCount = "4";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string P1 = "00001010101011101101010100000";
    string P2 = "000000000010100000100000010000000";
    string zeroCount = "5";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string P1 = "0000101000000001111100000";
    string P2 = "1010010010101010";
    string zeroCount = "8";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string P1 = "0000101000000001111100000";
    string P2 = "0000101000000001111100000";
    string zeroCount = "9";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string P1 = "10000000000000000000000000000000000000000000000000";
    string P2 = "00000000000000000000000000000000000000000000000001";
    string zeroCount = "98";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 49999951;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string P1 = "10000000000000000000000000000000000000000000000000";
    string P2 = "00000000000000000000000000000000000000000000000001";
    string zeroCount = "99";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
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
    string P1 = "00000000000000000000000000000000000000000000000001";
    string P2 = "10000000000000000000000000000000000000000000000000";
    string zeroCount = "98";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 50000001;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string P1 = "00000000000000000000000000000000000000000000000001";
    string P2 = "10000000000000000000000000000000000000000000000000";
    string zeroCount = "99";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string P1 = "0010100101010101010101001111101011110";
    string P2 = "000000001111111111111101010111110000000";
    string zeroCount = "11";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 74000071;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string P1 = "00000";
    string P2 = "10";
    string zeroCount = "5000000";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string P1 = "00000";
    string P2 = "10";
    string zeroCount = "5000001";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 5000001;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string P1 = "00000000000000000000000000000000000000000000000000";
    string P2 = "10000000000000000000000000000000000000000000000000";
    string zeroCount = "49876543";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string P1 = "00000000000000000000000000000000000000000000000000";
    string P2 = "10000000000000000000000000000000000000000000000000";
    string zeroCount = "50000049";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 50000001;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string P1 = "00000000000000000000000000000000000000000000000000";
    string P2 = "10000000000000000000000000000000000000000000000000";
    string zeroCount = "50000050";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string P1 = "0000000000000000000000";
    string P2 = "0000000000000000000000000000";
    string zeroCount = "4632761373274275";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string P1 = "1";
    string P2 = "0";
    string zeroCount = "140424892";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string P1 = "1";
    string P2 = "0";
    string zeroCount = "140424891";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 9999999826968495;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string P1 = "000000000000000000000000000001";
    string P2 = "00";
    string zeroCount = "172237485";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 9999997066219256;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string P1 = "000000000000000000000000000001";
    string P2 = "00";
    string zeroCount = "172237511";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 9999999695306340;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string P1 = "000000000000000000000000000001";
    string P2 = "00";
    string zeroCount = "172237512";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string P1 = "001010111000";
    string P2 = "0";
    string zeroCount = "49283";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 592550136000;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string P1 = "01000";
    string P2 = "000";
    string zeroCount = "51";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 80000357;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string P1 = "1";
    string P2 = "0";
    string zeroCount = "2";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 2000001;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string P1 = "1";
    string P2 = "00";
    string zeroCount = "3";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 2000002;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string P1 = "0111111110";
    string P2 = "000";
    string zeroCount = "235153000";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 9999998702205833;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string P1 = "0";
    string P2 = "00000100000";
    string zeroCount = "1000008";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 1000006;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string P1 = "00110100110110001000";
    string P2 = "00";
    string zeroCount = "180989878";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 9999232272139029;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string P1 = "01100";
    string P2 = "00";
    string zeroCount = "195062491";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 9999999678656290;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string P1 = "00000000000000000000000000000000000000000000000000";
    string P2 = "00010000000000000000000000000000000000000000000100";
    string zeroCount = "50000005";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 50000048;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string P1 = "1";
    string P2 = "0";
    string zeroCount = "140424892";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string P1 = "00000";
    string P2 = "010";
    string zeroCount = "5000002";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 5000002;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string P1 = "0";
    string P2 = "01";
    string zeroCount = "1000001";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string P1 = "1";
    string P2 = "00";
    string zeroCount = "1000";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 500249500;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string P1 = "0";
    string P2 = "010";
    string zeroCount = "1000002";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 1000002;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string P1 = "111";
    string P2 = "0";
    string zeroCount = "1000";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 3000499500;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string P1 = "0";
    string P2 = "1";
    string zeroCount = "100";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string P1 = "0";
    string P2 = "00";
    string zeroCount = "3";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string P1 = "0";
    string P2 = "1";
    string zeroCount = "1000000000000";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string P1 = "000";
    string P2 = "000";
    string zeroCount = "1000000000";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string P1 = "101010";
    string P2 = "0";
    string zeroCount = "1000";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 5994498500;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string P1 = "001010";
    string P2 = "00";
    string zeroCount = "123456789";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 4180764798634055;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string P1 = "000000";
    string P2 = "000000";
    string zeroCount = "3";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string P1 = "00001111100000000000000000";
    string P2 = "00000";
    string zeroCount = "10000000";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 61999851000033;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string P1 = "000100";
    string P2 = "000";
    string zeroCount = "100";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 192001486;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string P1 = "00000000000000000000000000000000000000000000000000";
    string P2 = "00000000000000000000000000000000000000000000000000";
    string zeroCount = "10000000000000000";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string P1 = "11111111111111111111111111";
    string P2 = "0";
    string zeroCount = "9876543219876";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string P1 = "01000";
    string P2 = "00";
    string zeroCount = "192500123";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 9745324253753537;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string P1 = "00001000001";
    string P2 = "1111";
    string zeroCount = "3";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string P1 = "101";
    string P2 = "00";
    string zeroCount = "150";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 225005550;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string P1 = "1";
    string P2 = "101";
    string zeroCount = "1";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 1000001;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string P1 = "0000";
    string P2 = "0001";
    string zeroCount = "4000001";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string P1 = "00011";
    string P2 = "1100";
    string zeroCount = "5";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 5000002;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string P1 = "000";
    string P2 = "1";
    string zeroCount = "2";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string P1 = "010";
    string P2 = "0";
    string zeroCount = "1000";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 2994497502;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string P1 = "0";
    string P2 = "00100";
    string zeroCount = "1000004";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 1000003;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string P1 = "0001";
    string P2 = "10";
    string zeroCount = "4";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 4000001;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string P1 = "1111111111111111111100000";
    string P2 = "0";
    string zeroCount = "9876543213";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string P1 = "10101010";
    string P2 = "101010101010";
    string zeroCount = "9876578";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
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
    string P1 = "10001";
    string P2 = "10001";
    string zeroCount = "999000";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
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
    string P1 = "00100";
    string P2 = "0";
    string zeroCount = "4";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string P1 = "1";
    string P2 = "0";
    string zeroCount = "140424891";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 9999999826968495;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string P1 = "111010100001010";
    string P2 = "0";
    string zeroCount = "111111111";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 7839505977160494;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string P1 = "0010";
    string P2 = "0000";
    string zeroCount = "24000000";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 95999987999999;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string P1 = "0010";
    string P2 = "0000";
    string zeroCount = "21000000";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 76124989499999;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string P1 = "010110";
    string P2 = "1111100";
    string zeroCount = "3";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 6000005;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string P1 = "0011";
    string P2 = "1100";
    string zeroCount = "4";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 4000002;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string P1 = "0";
    string P2 = "010";
    string zeroCount = "1000001";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string P1 = "000000000";
    string P2 = "000000000";
    string zeroCount = "111111111";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string P1 = "0";
    string P2 = "00";
    string zeroCount = "1000002";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string P1 = "1";
    string P2 = "00000000";
    string zeroCount = "125";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 16000960;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string P1 = "10";
    string P2 = "00";
    string zeroCount = "4";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 4000001;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string P1 = "0000000000";
    string P2 = "000000000";
    string zeroCount = "100000000000";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string P1 = "00000000000000000000000000000000000000000000000000";
    string P2 = "0";
    string zeroCount = "999999999999";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string P1 = "0001000";
    string P2 = "0000000000";
    string zeroCount = "1011";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 707050497;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string P1 = "1001010010101010100010001010101";
    string P2 = "1010100101010100100000010101";
    string zeroCount = "6";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 31000017;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string P1 = "000";
    string P2 = "000";
    string zeroCount = "20";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string P1 = "00100";
    string P2 = "0000";
    string zeroCount = "4004";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 5001997998;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string P1 = "0110";
    string P2 = "0000000000";
    string zeroCount = "1000002";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 449999499999;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string P1 = "00100";
    string P2 = "0000";
    string zeroCount = "435432";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 567984475182;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string P1 = "111010100001010";
    string P2 = "010000001000";
    string zeroCount = "1000000000000000";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string P1 = "0";
    string P2 = "1";
    string zeroCount = "10000000";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string P1 = "0000010101000000";
    string P2 = "00000000";
    string zeroCount = "100000";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 200608850002;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string P1 = "00100";
    string P2 = "00";
    string zeroCount = "6";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 4999998;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string P1 = "010100";
    string P2 = "0";
    string zeroCount = "10";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 42000019;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string P1 = "10000000000000000000000000000000000000000000000000";
    string P2 = "00000000000000000000000000000000000000000000000001";
    string zeroCount = "60";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 49999951;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string P1 = "00001000";
    string P2 = "0000";
    string zeroCount = "111554487";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 1778659155231557;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string P1 = "101";
    string P2 = "0";
    string zeroCount = "1000";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 3000499500;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string P1 = "000";
    string P2 = "1110001110";
    string zeroCount = "3000001";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 3000009;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string P1 = "1";
    string P2 = "0";
    string zeroCount = "1000000000000000";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string P1 = "0010";
    string P2 = "000";
    string zeroCount = "11";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 12000008;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string P1 = "1111110000";
    string P2 = "0";
    string zeroCount = "20";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 160000116;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string P1 = "10";
    string P2 = "01";
    string zeroCount = "2";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 1999999;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string P1 = "001010";
    string P2 = "010101";
    string zeroCount = "3";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string P1 = "111";
    string P2 = "00000";
    string zeroCount = "117";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 72001380;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string P1 = "01";
    string P2 = "1000";
    string zeroCount = "4";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 2000001;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string P1 = "1";
    string P2 = "1001";
    string zeroCount = "2";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 1000001;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string P1 = "1111111111111111111111111111111011010101010101000";
    string P2 = "0";
    string zeroCount = "7";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 196000003;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string P1 = "1";
    string P2 = "0000000000";
    string zeroCount = "25000";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 2531237500;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string P1 = "11001";
    string P2 = "00";
    string zeroCount = "10";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 25000020;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string P1 = "011";
    string P2 = "110";
    string zeroCount = "2";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 3000002;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string P1 = "0";
    string P2 = "10000000000";
    string zeroCount = "1000001";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 1000001;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string P1 = "110";
    string P2 = "000";
    string zeroCount = "1234567";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 1488590917442;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string P1 = "1101010010";
    string P2 = "0001000";
    string zeroCount = "3";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 9999999;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string P1 = "010";
    string P2 = "0";
    string zeroCount = "3";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 2999999;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string P1 = "0";
    string P2 = "0100";
    string zeroCount = "1000003";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 1000002;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string P1 = "1";
    string P2 = "0";
    string zeroCount = "10000000000000000";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string P1 = "1";
    string P2 = "1";
    string zeroCount = "1919";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string P1 = "1";
    string P2 = "0100010";
    string zeroCount = "3";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 1000002;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string P1 = "100001110000000110000000000";
    string P2 = "000000000000000";
    string zeroCount = "6546212";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 13211603572355;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string P1 = "0";
    string P2 = "10";
    string zeroCount = "1000001";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 1000001;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string P1 = "0111111110";
    string P2 = "000";
    string zeroCount = "100000";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 334996583333;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string P1 = "1";
    string P2 = "0";
    string zeroCount = "9";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 9000036;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string P1 = "0";
    string P2 = "001";
    string zeroCount = "1000002";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string P1 = "0000000000";
    string P2 = "0000100000";
    string zeroCount = "10000009";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 10000005;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    string P1 = "00";
    string P2 = "0000000000";
    string zeroCount = "5";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    string P1 = "00100";
    string P2 = "0000";
    string zeroCount = "4";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    string P1 = "1001010010100100101001";
    string P2 = "0001000111010010100000000";
    string zeroCount = "12462189";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    string P1 = "0";
    string P2 = "0";
    string zeroCount = "1000000000000";
    RepeatedPatterns* pObj = new RepeatedPatterns();
    clock_t start = clock();
    long result = pObj->findZeroSegment(P1, P2, zeroCount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14970299&rd=10657&pm=7294
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
#include <fstream> 
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
#include <utility> 
#include <valarray> 
#include <vector> 
 
using namespace std; 
 
//Macroses 
#define all(v) (v).begin(), (v).end() 
 
//Types 
typedef long long ll; 
typedef pair <int, int> pii; 
typedef vector <int> vi; 
typedef vector <bool> vb; 
typedef vector <pii> vp; 
typedef vector <double> vd; 
typedef queue <pii> qp; 
 
//Constants 
const int INF = 1000000000; 
const double EPS = 1e-10; 
const double PI = 3.1415926535897932384626433832795; 
 
//Global 
int n; 
 
//Functions 
 
//Main class 
class RepeatedPatterns 
{ 
public: 
  long long findZeroSegment(string P1, string P2, string z) 
    { 
    long long res; 
    ll q; 
    istringstream in(z); 
    in >> q; 
    if (q > 1000) 
    { 
      if (count(all(P1), '0') == P1.size()) 
      { 
        if (count(all(P2), '0') == P2.size()) 
          return 0; 
        else 
        { 
          int st = find(all(P2), '1') - P2.begin(); 
          int q2 = P1.size() * 1000000; 
          if (st + q2 >= q) 
            return 0; 
          int end = find(P2.rbegin(), P2.rend(), '1') - P2.rbegin(); 
          if (end + st + q2 >= q) 
            return q2 + P2.size() - end; 
          return -1; 
        } 
      } 
      else 
      { 
        if (count(all(P2), '0') == P2.size()) 
        { 
          int st = find(all(P1), '1') - P1.begin(); 
          int end = find(P1.rbegin(), P1.rend(), '1') - P1.rbegin(); 
          ll oq = q; 
          q -= st; 
          q -= end; 
          ll a = (q + P2.size() - 1) / P2.size(); 
          long double overall = a * 1000000. * P1.size() + (a - 1) * double (a) / 2 * P2.size() - end; 
          if (overall + oq > ll(100000000) * 100000000 + 100) 
            return -1; 
          res = a * 1000000 * P1.size() + (a - 1) * a / 2 * P2.size() - end; 
          if (res + oq >= ll(100000000) * 100000000) 
            return -1; 
          return res; 
        } 
        else 
          return -1; 
      } 
    } 
    string zr; 
    for (int i = 0; i < q; ++i) 
    zr += '0'; 
    if (count(all(P1), '0') == P1.size()) 
      return 0; 
    else 
    { 
      string test = P1 + P1; 
      if (test.find(zr) != string::npos) 
        return test.find(zr); 
      if (count(all(P2), '0') == P2.size()) 
      { 
        int st = find(all(P1), '1') - P1.begin(); 
        int end = find(P1.rbegin(), P1.rend(), '1') - P1.rbegin(); 
        ll oq = q; 
        q -= st; 
        q -= end; 
        ll a = (q + P2.size() - 1) / P2.size(); 
        long double overall = a * 1000000. * P1.size() + (a - 1) * double (a) / 2 * P2.size() - end; 
        if (overall + oq > ll(100000000) * 100000000 + 100) 
          return -1; 
        res = a * 1000000 * P1.size() + (a - 1) * a / 2 * P2.size() - end; 
        if (res + oq >= ll(100000000) * 100000000) 
          return -1; 
        return res; 
      } 
      else 
      { 
        test = P1 + P2 + P1; 
        if (test.find(zr) != string::npos) 
          return test.find(zr) + 999999 * P1.size(); 
        test = P2 + P2; 
        if (test.find(zr) != string::npos) 
          return test.find(zr) + 2000000 * P1.size() + P2.size(); 
      } 
      return -1; 
    } 
    return res; 
    } 
     
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/