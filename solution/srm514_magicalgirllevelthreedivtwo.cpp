/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11479
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

class MagicalGirlLevelThreeDivTwo {
public:
    int theCount(vector<string> first, int n, long lo, long hi);
};

int MagicalGirlLevelThreeDivTwo::theCount(vector<string> first, int n, long lo, long hi) {
    int ret;
    return ret;
}


int test0() {
    vector<string> first = {"101", "01"};
    int n = 4;
    long lo = 2;
    long hi = 5;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> first = {"01", "10"};
    int n = 5;
    long lo = 4;
    long hi = 5;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> first = {"1", "11", "111"};
    int n = 46;
    long lo = 10000;
    long hi = 11000;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 1001;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> first = {"0", "00", "000"};
    int n = 46;
    long lo = 10000;
    long hi = 11000;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> first = {"00110110101101001111101101001011010011111011010010"};
    int n = 100;
    long lo = 999999999999915;
    long hi = 1000000000000000;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> first = {"10000", "011011001011000001101000010100000111000110110", "000001010001011000001101110", "100100000110100001010000", "011011010", "01100000010101101110000011100011001000", "0001010", "010011000", "000101001", "00", "1"};
    int n = 91;
    long lo = 123456;
    long hi = 123654;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> first = {"1"};
    int n = 100;
    long lo = 999999999999000;
    long hi = 1000000000000000;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 1001;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> first = {"0"};
    int n = 100;
    long lo = 999999999999000;
    long hi = 1000000000000000;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> first = {"1", "0"};
    int n = 100;
    long lo = 999999999999000;
    long hi = 1000000000000000;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 382;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> first = {"0", "1"};
    int n = 100;
    long lo = 999999999999000;
    long hi = 1000000000000000;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 619;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> first = {"1", "11", "111"};
    int n = 0;
    long lo = 0;
    long hi = 0;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> first = {"0", "01", "101"};
    int n = 1;
    long lo = 1;
    long hi = 1;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> first = {"1101", "0110", "1011"};
    int n = 2;
    long lo = 1;
    long hi = 2;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> first = {"101", "11011", "1110111"};
    int n = 3;
    long lo = 0;
    long hi = 4;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> first = {"10", "001", "0100", "00"};
    int n = 100;
    long lo = 97959288696179;
    long hi = 97959288697179;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 250;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> first = {"10", "001", "0100", "00"};
    int n = 100;
    long lo = 0;
    long hi = 1000;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 249;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> first = {"10", "001", "0100", "00"};
    int n = 100;
    long lo = 48979644347590;
    long hi = 48979644348590;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 250;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> first = {"00000", "000", "000000", "000000", "1", "0000"};
    int n = 100;
    long lo = 124631126531;
    long hi = 124631127531;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> first = {"01101010111010111010001010111000100101010010001001"};
    int n = 77;
    long lo = 999999999996999;
    long hi = 999999999997988;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 477;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> first = {"01101010111010111010001010111000100101010010001001"};
    int n = 77;
    long lo = 31415;
    long hi = 32415;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 481;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> first = {"00000000000000000010000000000000000000000000000"};
    int n = 77;
    long lo = 999999999998000;
    long hi = 999999999998888;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> first = {"010111111001011100001010010001010101101100100001", "0000011110110100100011011010010001101101", "10101000111010000000111010010100110", "1010101001010100011100100111110000101011010100", "1010001", "11100100001000111101011101000010111011000", "0110110", "100011", "1110100111100101111110011101101010010011100111011", "01000001001001011100101110110", "01110", "0011100111111000110011100010001", "01001101000100001111011", "111011101010", "0000000011000101", "11110100111", "001000000001101011", "100100111010010", "11111100000010", "011110100110", "111000100001000110110111111", "111000111011110010000000", "011000011100010100010", "111111110101001010000111100111010100100101001", "100011001110011", "101100100010010111", "111100110001000011010011011000011001101010011", "101001000011010100", "0100101101011101000110011101010", "000110", "1001100001110", "01100", "001010101101100111011000110000001110010111010", "00001110000110001101", "10101110110111101011011000001011110101110001111", "0100011", "00000100100011100000111110011010001010", "100", "000011111001100001100010111011111", "11010111010011100101011"};
    int n = 44;
    long lo = 52;
    long hi = 156;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> first = {"10000111110010011101011010", "011100", "10010000101010010101001010000100110011011010110100", "000001010011001011010101100011", "111000011000011", "10000011110001100110000001011110011", "011011010000111001100001001", "00111100", "1101111101001101001111010001011101000", "1001001110011", "1011100111101101110010000001101101110001010011001", "101010000000100011111001111000001", "10000010110001011001110011001001111111101110010101", "11001001110011001001111000111001", "11", "001101101100100101011100011000111111111111000", "0010111001011011111", "00001110010111000010011001111000110001100000011", "00100101101011010000011010010101010110", "110001111011111000101110100010100111111110", "0011101101001001101110011111", "10001101001", "00100001110101010101110001000000101", "1000100101101010", "01110", "101111010100100111100011011001", "01000100010000101100011", "01010101000110010010010", "11111101001111010110101001110101000011010", "1101110000101101101001110", "11101001000010111100010000111001111", "1011011010000110111000111100011001110110010000", "0100011011011110001001", "0010011111", "1010001111100011010010", "111", "0111100100111010111010011101101100110", "1010101101111001", "00100100101010010001", "110010000111001101111010110011001000011101", "1101111000010010000000101", "1100001010111111110110000100110001001000011110", "011000100011100101110101", "001010111101101001011001", "11110001", "10110111010100101111001011000"};
    int n = 76;
    long lo = 119;
    long hi = 362;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 119;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> first = {"10110111100", "010001100101001000110011101011111011101011111", "1011011101100111", "1101101", "01010110001", "0100000110010000111111", "00110101110000", "111011101011010011010001000110001010010110", "101001001000", "0001101010001001110111100001111110001", "11011101110111", "010001100011110", "00111101010111", "011001011010000010011111101001010001", "001010011", "0110010001100011000011001110011", "10100010101101001011101001101111011011110111001", "11010101100010101101110101", "010", "101"};
    int n = 64;
    long lo = 1964;
    long hi = 2826;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 462;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> first = {"100110010001010000101101111010101000101010000", "11101110010", "10000101011111101001111011", "010010011101000100100100011110101100000010", "00101", "11000", "10111100011110010000001101", "1110111101", "01001"};
    int n = 59;
    long lo = 489087;
    long hi = 489201;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> first = {"11100001011010001011001110", "111010101001000000", "101010000100111101110100001001101100100000", "10111010100101", "0011010100010111101", "00111000001001011101110110000", "0010010110011100000100100101010111001110111010111", "0101101101101000111100010001111", "10101001000010101011010101111000010000010101011101"};
    int n = 30;
    long lo = 127;
    long hi = 398;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 131;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> first = {"0101110001011101001111", "11100000110010110111100010011011011", "0011010011001100001011010000111001010100100", "00011000100000110100100000011100010011011010", "010011", "001110101100111011110100000000001000111", "1000111010111111000100010010000011100", "010", "1100001100100", "11101101110011100100010110101111110100001001111", "101110100001000100010101100", "00111001010110000110101001", "110101011100110", "1101011011111100000111011000000", "10011011000011", "110111111000111110010110001110110000011", "110101101101000011001110011111011101111", "111001010011100000001111", "01010000001100101100100010111000000110110111100", "0000100110000101000110001001000011", "1111101001110111100011110001010110110001000100", "00011010011001001101010101101001011111000011010010", "11110111101101101111111001101110010001110100", "1001100111011101101111111010001000011"};
    int n = 45;
    long lo = 163;
    long hi = 509;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 178;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> first = {"100001001110100101011011111110111000010", "011001000100000101001010", "1010111101101111101111001100110000100101101", "011111110000110011100011111110101101010011001101", "1000111011010100010100010000111011011001110", "10010000100011011111101010010111011010001111100", "1101110110011000010000111100000100100110", "01100101011100000100000111111001001001001", "100000100000000010000000", "100001010101000101000101000100110000001001", "1111110100", "0100", "111", "1010111001001110010110100101000100", "01001000100000111001011", "0100000", "0001100000101111111001100001000100111011100100111", "111010011100011111010101010", "1", "101010010000111", "00000100101110", "001110011", "101001000011010001010100010001100", "111100101110100001100100110111010101110000100", "1000111010011110100100001010000000000011111", "000011110111000111000110011111011100010", "000100001101011001010011", "001111011100100011", "100010010000010110010", "010111011111000110000100000100011110110001000101", "001100110100111100110", "10001011110101", "011000010110", "0111011000001110001111011", "111001110", "1", "011001101011011101101001010001001110000", "11000000001000011100110011010011111101111110", "0111111111001"};
    int n = 60;
    long lo = 13;
    long hi = 216;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 107;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> first = {"100010", "0000010000100100111110100100111001111100", "101111111100011100100110101100100111100111", "11101100100001010010100110110000110100111", "1001100111010111110001100", "0111111001010001010100100111010011110000111", "001", "00", "000111011001100101011011", "101111101100", "0", "011001000100111001010110001111100010010100111110", "01100011100001", "01011101", "101000101011101000011111000111101110", "1", "010111011111000011001100101101", "001111001", "010101001000110110101100010100000000111", "100110101000100111010110100101011001010011000", "01111001000000101111100001100111101011101110", "101011100", "1100001100111110100001010010000100001111111100", "010111001011010000111010", "1101100111110101110110101110", "1010101111000111100101011010", "011001110110011100111000111000001011101000001000", "0101111001010110100110101110001001100", "1011000100011101101100111110010101111111110", "10011010001011110110101", "10"};
    int n = 92;
    long lo = 396;
    long hi = 853;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 234;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> first = {"01100001101001", "111001011101000100010", "10010010011101011011001110011000100001000011", "0000000001011111", "10100100001111010011001111100000", "10", "00110100011111100110101111110110100011", "01100100111111101000", "1110110001111010101001011111", "1110001", "1011001100111110110111011", "0100000101010011", "110100101", "0010010", "0101010011010110111", "01", "10010010111000100100001101101111101010101001110", "1011010110001011011110", "1", "10010100010110", "1010100011000110"};
    int n = 65;
    long lo = 4487;
    long hi = 5064;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 306;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> first = {"11010000111110101", "0110100101001101100001011", "011101100111110001000", "0100010111001100001100000110101110101010111011101", "00010111001001010111111010101010000001100100", "1111011110100010100010", "01111000101101110100011110", "0111000001001000", "0110110001011000111011000111001100", "1010111111101010011001000111011101000010110100", "01010101100011100010000000101011101101", "101111000011111011010010101110010001100", "1000111", "11110", "0110111000110011101100101110100100", "110100010001100", "0101110101000110111100100010110001", "11010011000111010000000010000010110101", "00100011000101001", "0110110100100010011", "1010110111100011011001111000000011010010", "110100100110100000011100101", "110011011110010011111111000010110110", "0111110100", "001000110010101100100011011100101111111011000", "0000", "101100"};
    int n = 50;
    long lo = 101;
    long hi = 232;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> first = {"000000000010", "0000110000000001000010010000110101000", "11001000110000001000101000101100100001100", "010000000001100000", "0001", "000000001000110000010010101011000000011", "00011000000001000010001000001", "00101000000000000011", "00001000000000000111110", "1001100000", "00000000000000010000000100000", "10000000000010100001000010010001000001010110100010", "0000000010011000010000011000000000100001001100000", "0000100000100100000010100010001001001101", "00100000110", "0", "000100000000001000110010", "0111000", "00000110000000000011100110000010", "000010000001001000100000000000000000000", "000000010000000", "0000110000000001001000100", "0101010000001001000000010100001000010000001100", "000", "001000010110100000010", "011000100010000110010000000", "0001100110", "1100", "011001000100000011000000000000", "00111000100110001000000000001000010010", "10001000", "101000000000010010100000000000000000010", "000000000000000001010000000000", "0010000000000010010000001000010000001000000100000", "100001010000110000000001100001001", "100000", "000100000000010000001000001000"};
    int n = 85;
    long lo = 1840;
    long hi = 2026;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> first = {"1000000000000000", "0"};
    int n = 35;
    long lo = 30709313;
    long hi = 30709330;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> first = {"000100000000100000000100", "00010000000010000001101010000010000000", "011000001010010001000100", "0000110101010000000001010", "0100010110000001110000000000000000010000", "0100101100000010000001001000011010000010010000", "00100010100000001010100100000000101010010", "00000100010000010000110010000100100010", "01010"};
    int n = 68;
    long lo = 3784096;
    long hi = 3784956;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 189;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> first = {"100100010000001", "01000000000010100100000100000000000000000100100010", "0000001000100000010101001011000000010110000", "111000001000000010000100101000010010000000000", "10110001101000000001101100011", "0000010000000000000010010011001100000010101", "0000001000100000100110000000001000", "1010010001000", "00000000000011", "00000000011010", "1010000", "01000000100110000000", "0000000000010000000000100000", "0010000100000100000000", "0000001001010000010010111001100000"};
    int n = 77;
    long lo = 179452;
    long hi = 180397;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 223;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> first = {"100010000100000111000000000000101000", "1010011000001000110000101001000001000", "0000000000100010000000001001000001000010000000000", "000010010000", "0110010000000", "0000101010000000100000001000000100010000000", "1", "000010001000011001001110000000000000", "100001100000010100100000100001100010000100000", "010011001000000001100011001000", "111001101000001000100000100001000101000000", "00000000010000010100100000001110000000100001", "100000010000001001000000000100000000000000", "0000000001001000000010101011", "0010010000000000001011000100000010110000000000", "00100000011100000011000000000000010000000001100010", "110010000", "00101100000", "0010001100101000001000000010100010101000", "1100000010000000000100000001010", "0", "010100000000000001000000", "10010100101011010000000000000000000000000000110"};
    int n = 86;
    long lo = 31703;
    long hi = 31803;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> first = {"0110000000000000000100000000100001000", "00", "00000", "0010001000000100010000010000000", "00000000000010010000000000", "000010100100100000000000", "01000000000", "01010", "000010000010000000000001", "010000000000000000000010000000000100000000000000", "0000000000000000011000000000000000000111000000", "000000100000000000000", "000010000100000000000000000000001", "000000000000000100001100000010000", "0000000000000010000001000010000000", "0000000000100000000000000000", "000100000000000000000000000000000000000000000", "00000001000101100000000010100000000000", "0000001", "0000010010000000000", "00000100010000000000000000", "0001000100100100000000001000000", "0000000000000110000000100100", "000", "0000001010", "00000000010001100000000000000100000", "000000100000000000000", "0010100000000000100000000000001000001001100000000", "000000000000000000000000000", "00", "0010000000010000000010010000001011100000100", "0001101001000101000100000100000000000000100000"};
    int n = 45;
    long lo = 40;
    long hi = 213;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> first = {"0000000000000000001", "10000000", "000000000000000000000000001000000000", "010000001001001", "00000000000000000010000000001101101000000", "11001000000000001100010000", "000000000000100100000", "0101000000000000000100010010000000010000000", "010000001000", "00100111000000000001", "1000000010000010000000000000000000100010", "00", "00000011000100000", "000000000000000010", "0000000000101", "0000000", "000", "00000010000000000000100000000000000000000", "001001000000001010000010000000", "000000100000000000011001000010000000000001000000", "00000000000000100000000010000000000", "0001110100000000000000000000", "00001000010000000", "1000000100000000000000", "00000000000000000000010", "00000100001000", "101000000100000000000", "00000000001000000000000000", "0001000000"};
    int n = 32;
    long lo = 47;
    long hi = 55;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> first = {"00000000100000000000010000000000000000000", "0000000001", "100000100010000000000110000", "110000000000000", "000000000000100000000000100100000000100000000", "10000001000000110000100000000000000", "000000000000100000000000000001000101000000", "00000000000000010100001000010000010", "001000001000000001000000100001000000000", "10000001000000000100000010000", "00000", "01000000000001000000000000000", "00000", "00010000000000100000000100010000001000000", "000000000000000000", "0000100000000000010010000000000010", "00000000000000000010000000001", "1000000000000000000000", "000000000000000", "000000010000000000000000010000000", "000010", "00000000000000000000000000000000000000000", "00000000000", "0000100000000000000000000000000000000000000000", "00010000000000000000000000000000000000000000000000", "100000000", "0010000000000000000000000000000000000000000", "1000000000100000111000010000001", "00", "0001001", "000010000001000010000000001010000000000000010000", "0000000010000000100000101", "000000010000000000", "00100001000000000000000000", "000000100000000000000010000", "000000", "010010000000000", "000000000000", "000000000000000000100000000000000000", "000000", "0001000000000000001000000"};
    int n = 76;
    long lo = 16;
    long hi = 811;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> first = {"0000000000100011100001100000", "000110011000000000010000000000000000000000001000", "00000000001000010000000000000100000000000010000100", "00000000001000", "000000000100000001000100000000", "10000000001000000000000000000001", "00000000100001000000000010100000000000", "000000000010000", "0010000", "00001000000010000001", "000000000000000000000000", "000001010010", "000000", "0000000000000100000100001010000010000100010000000", "00000010000000000000000", "0000010000000000000010000000001000111000001000", "000010000000", "00000010000000000000", "00101000", "000000", "0000100010001000", "01", "000001000001000000000010000000000000000", "000000000000000000000100", "0000000000000000000", "0010000000000010000000001000000000010000000000001", "000010000010000000000000000", "100000000001000", "000000", "000000000001000000000000000011000000000100"};
    int n = 44;
    long lo = 6;
    long hi = 189;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> first = {"000001001001", "1000001110000000000010000000000", "0100000", "0010000000000000", "00000000000000000", "000000100000", "00000000000100000000001000100000000000000", "000000000000000000000000000000000000000000", "0000000000000001001000011000", "00010000000", "00000000001000000000001", "0000000010000000000", "00000010001000000000100100000", "00000000000000000000000010000000001", "0000000000000100000000", "000000000000000000000000000000000000000010", "0000000000010100000001000000000000000000", "00000000100000000000001000001000000100000000000", "0000001000000000000000001000000000000", "0000010100000010000", "0000000000000000000", "0100000001000000000000000010100100000000000000", "000000", "10000000000", "00000000000000000000000000000010100000010000000", "0000000010000000000000000010000000", "0000000000100", "000000000000000000000000010000000000000", "00000000010010000001010000000", "0000000010000000000000000", "000000000010000", "000010000000000000001000000000000000100000", "0000000000000000000000000000000000000000000000000", "000010000010000101010000000000000", "001000010000000001", "010000000000000001000000000000000000", "0001000000000000000100000000001000000000", "0000000000000000001000000101010000", "00", "00000000000000000001", "00000000010000000000010000000000000", "000", "000000000000000000100001100000000000000100000000", "0000000000000", "001000100000100000000000000", "000010"};
    int n = 55;
    long lo = 43;
    long hi = 151;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> first = {"100111111101011111111", "01111110", "101011111101111111", "11", "1011111010110110101111111111110011111111", "0111111001111111011100", "11110011011011100011011111111110111", "11111001110111110111", "11011111", "1110111111100101", "10110001001101011101111110101011110", "1111001111101", "1101111111111", "0111110111111111111111011111111111111"};
    int n = 58;
    long lo = 20728;
    long hi = 21356;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 487;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> first = {"01101111111111101100101111101101", "010111011011111", "0111111001111111101101010111100111110", "0100110110011110111111111111111", "011101101111111111011", "111111101110011110111110111110111101111", "11001110110101100011111111", "1111110111111", "1110101111", "1111111111101111111101111101", "11111111111101111111010111111111111110", "11011101100111111111111010111111111111", "1110111111111110110111111", "011", "1111101110101111111111111111110111111111111", "11111101111111011111001001111111111111", "11111111111011111110101111111", "11110111101111111001110111111111111101101", "1110111111111111111110001111110110110110", "11111111101010111111111101111111111011001111111111", "111101111001111111111110101111111", "10111101011110111111111111110", "11111111111111101", "11110110111111101100001111111", "111100110", "11111111111", "111110111011111111011100111111111110101", "11111", "0110111111111111011", "111111011111011111111111111000111", "11101101111111111111010101110111", "101101111111111111011011110111111111", "111111111111011111111010101000110111110111111111", "010111110011111101111111111011100010101010010111", "111111111111101111111110", "0111011001010110111111111111011001", "1011111010111110111111110011111111110", "111010101", "1000111111"};
    int n = 82;
    long lo = 4;
    long hi = 357;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 287;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> first = {"1111", "11111011111111111111110111101011111111111110011", "110111110", "11110010111111111111111101111111111111111111110111", "10110101001100111111110001", "101101", "1111111111101011111111111111", "111110001101100011111101111110", "1110111111101001111111", "0011110011111011111110011101111111111111000", "111101111111111110111101111101011101101101111", "11", "111", "11110111011010110011000101010011111110110010011111", "01111111110111111011111111111111111010110", "111111111111011011011010111101101111111", "101110011011111111110111111", "111010110111011001", "11101010101111", "111101011011101111101110001111111", "11111111011", "111111100111111111111110111111101111101111100", "111111110110111000111111111011100111111", "111101111111011100101010", "1111100101011111001111011111111111110111111111", "11111111011111011011110101011", "11111111101111000110110111111111110011101", "011111011111111010110111", "11111110100111001101010100111011011111110", "111011111111101101111111011110110111101111111110", "01111111111101011101101101110111111111100011", "10101111100"};
    int n = 43;
    long lo = 105;
    long hi = 268;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> first = {"111110", "1111111011111111111100111111", "0111011111111110100101111101111111110101101", "111111010011110111111111011111111010100111111111", "101011011111011111111011", "101011101011111", "101100110111011100110111101111110111111111", "1", "1110111111011111111101111100", "111101111111111111011111", "1111111101111011111", "0111011111111111111111011101111110111101010111111", "11110101001111011111011", "11111111111111110111100101011101", "111110111011101101110010111110111110100", "1110110111010110111", "0111110111111011001110101111111111111101000100", "01", "0001111011101110101101110110011111011", "110101111", "110110111111111110111110111110100111111101101111", "10111100000111111110111111110001101111001110011110", "11110111101011111111110111101010111", "110011111111111111", "10011111111111110010111", "10111111", "11111111111111010111101111110111", "11111101111101111111110111", "11110100111101111010111101111111111011", "10110111111000111111111", "1111101111111111", "101110", "111101111111", "101111111111111111111001111111111101", "101110101111001011011111111"};
    int n = 92;
    long lo = 7267;
    long hi = 7891;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 489;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> first = {"11110011111111011101111111111011011111011", "00010011", "1111011001101", "10111111110111000010111101111111111111100", "111101111101110111", "1", "0", "111111111111111110111111111101111111111110", "1111111111110", "1110011110101101101101111", "111110111111011001111111111100110", "01101111111111110111111111111110110111111110101001", "1111", "111111111101111011111111111000111010000", "11011101", "11", "11011111111101", "10111101111111", "11000", "1", "1111101111110111101011011", "111111111111111011011111110111111010111011", "1", "1110111111111111101110111010011111111011101101", "10110101011111101101101011110", "10", "111111111001111101101111111", "11111111111011111111", "1111111110111", "101111110111111111", "10100111111111111011101111001111", "011011111111111110111111101110111110111111", "01011111111111111111111111", "101111011010", "101111101011111111111111111111110111011111111", "1011111111011111011", "100111", "11111110111011111111011010111", "0111110111111101", "1111011111111011110101101111111101100101", "10011100111111111111", "110111", "111101110110110111101110", "111111111011110111011101111101101110111010", "11", "10111011", "1110101101110111111101111111100100110", "10101110011111101111110011111100"};
    int n = 87;
    long lo = 612;
    long hi = 686;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> first = {"111", "11111111111111111111", "10111111111011111011111110011111111111111011101111", "1111111111111100111111111111001111111", "1101111111110111111111111", "1111111111110111111111110111111111111111111111011", "111110111101111111111111111111", "10101111111111111111111101111110111", "1111111111111111", "101111101111111011111111111111", "1111010111011111111110111110011111111111", "1111011111", "111110101111", "111111111101111111111111111111111111111111", "1111100111111111111111111", "010111111", "11111111111110111111", "10111111111111101101111111111111111110111111101", "1111111111111", "1111111111", "1110111111", "11011", "10111111111111111110111111111011111101111111", "1111111111111111101111110101", "1111111110110110111011111111111111111111011", "101111111111110111111111111011", "011111111111111110111111", "11011111111101111111111111"};
    int n = 81;
    long lo = 8763;
    long hi = 9052;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 266;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> first = {"1111111111111111111111111111111111", "011111110111111111111111", "11011111111111", "1111111101111110011111111111111111011", "10111111111111111111111111110011111110111101101", "010111111111111111111011111101", "1101111111101", "11110111111010111", "011010111111101111101111111111", "1111111111100111111111111101111", "111111111111101111111111111110", "11101110111111111111111", "1111", "11111111111110111111111", "1111110111111110", "111111110111111011", "11111101111111111111011110111111111111111", "11111011111111111111111111111111011111101111111", "1111111", "1101", "1111", "1", "11", "111011111011110111111111111111"};
    int n = 25;
    long lo = 4;
    long hi = 43;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> first = {"111111", "11111111111101110011111111111111", "011011110110111111111111111111101111111111111101", "111111111111", "101111", "1111111", "11101111111111011111111111111100110111", "111", "1111111111111111111110111110111", "0111111011111", "1111111111111111111111111111110110101111011111111", "111011111110111111111110101111111111111111110111", "1111111111111111", "111110111111111101111101111011111", "101111111111", "010111111111110111111111111111", "1111111011111111111101011111111111111101111111", "1110111111011111111111111111", "1111111111111111101111110111111111111111011111111", "1110011", "111111111101001111111111111111", "111111111111110111111111", "1111", "11101111111111101011111111111111110110111110011", "1", "1111111111", "11110101110101", "01111111", "111111111111111111101", "1111111111111111110111111111011111011111", "111111", "11111111101111011111110011", "1111111111111101011111111111111101110111111111111", "10011111111011", "1111111111110111111111111111111111111111", "11111110110111011110", "011111011111111111110111101011111", "111111111111111111111011111", "00111011111111111111101101", "11", "111001111111111100110111111111", "111111", "111110111111111111", "011111111110111"};
    int n = 49;
    long lo = 58;
    long hi = 78;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> first = {"1111111111", "110111111111111111111111111111111111111001", "111111011111111111111101101", "1111011011111111111111111110111111110111111011011", "1111110111011111110111111011111111110", "101101111111111111111111111111010010111111111111", "11101110111111111111111110111111"};
    int n = 64;
    long lo = 2803134;
    long hi = 2803702;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 518;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> first = {"1111111111111111111001111100", "1", "0110111110111", "01111101111111111111111111111101", "11110111111111011100111111111011111101011111111", "0110101111", "101111101111101111111011111111111111111"};
    int n = 80;
    long lo = 674984052;
    long hi = 674984875;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 719;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> first = {"001101", "1", "0000000011", "011101", "01110100100110100001", "0101111001011110000100", "1101011100101011001", "11100110111110000011001011110111000010101011", "111101101000101011100000101000011101001", "10011001000111010", "100011", "110011101110001010100101111001011111000010100", "11101111100001000000", "011101111000100100011001010", "0101010110101", "1", "00000001011000101111", "01001101110100110100101001001"};
    int n = 91;
    long lo = 209768;
    long hi = 209860;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> first = {"00000000001001010010010101110010011011", "11001", "100100001101", "01", "0110101000100101111000010000011011101", "100001001101001100010111111100011011", "0110101001001010111111010011", "0010101010100111001010111110000000111010111", "0001010000101", "10011010001011011011001101101110", "1011001111000111011100001011110111001001010", "110100000100011111110010110111101110100101001010", "11111100010010001", "11110110000000001110000110010100101101", "1000000001001101", "10001010110101011111110011110010010", "000110010"};
    int n = 94;
    long lo = 895997;
    long hi = 896503;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 252;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> first = {"0001111110110011000000", "000111110001001101001", "000011101110011101000100000001000", "100111000101011000011000000000110", "0111100000000101101111110101100", "01000100010100"};
    int n = 95;
    long lo = 93458672984;
    long hi = 93458673045;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> first = {"1001101111", "11010010001110", "1", "0111000101101111110010", "10000110100", "1001110111100100110011100000110111000100", "11011101111111011001", "100010111011101110111110110011", "10010011100010110000101010111", "1100100001111010001011", "11011111111010010110110111010010001011111000100", "0000110010001100110010111101001100111100011", "0100100011001110001100111110", "010110101110010010011001100010011111110111110", "10011011100011110110010110110101111111101", "10011010000000010111", "1110100100111100", "00011100000110001110101011111010110010010010", "0100001", "00001011100101110000011101101000001101010"};
    int n = 95;
    long lo = 181676;
    long hi = 181743;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> first = {"00101101010100010110100111", "10101001101", "11111001100111010111101100011100101011011110", "0011100101101011001000110111100011010101110001", "11001111001010111001110011000", "10111010001011010", "1111011111111010001010", "1010101110001110101010100001000101010"};
    int n = 92;
    long lo = 1302161425;
    long hi = 1302162114;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 364;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> first = {"1101001111010110101100100000100000011010", "1101111101000010000110000", "011", "11111000001000101100000001", "1100010001011001011100100101", "1101111011111010011000100110", "11010010101100011100011100001000100111011101101011", "01000101110011000100000001100111010110010111011", "0110010001"};
    int n = 97;
    long lo = 12456468;
    long hi = 12457028;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 264;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> first = {"1000110010001001010111100000111001000011101"};
    int n = 96;
    long lo = 883011963867317;
    long hi = 883011963867619;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 133;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> first = {"1010010", "011111101000011110011110111110000110111111101", "0010111", "0000011100101100101011110010111100110110011", "11011", "1100100010110010001110111", "10", "01110110101011101110001110001000", "111001010001", "110001011111001101010001110010100111011000", "01001010111010110000101", "10110101101000000100011", "0010010000110101010010110110100110000110111", "0101101100000000", "101011001101", "1011000100", "1101010000000110100011100000", "101000010001010111101100001", "11010111001111100110001110000011011110100111000100", "10011"};
    int n = 92;
    long lo = 157222;
    long hi = 157398;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> first = {"11001010", "100111100100011110100110010000110110", "011110100000010100111000101001000010010111", "00011000110100101011100111111011110", "010010001011100000111", "1011", "10110", "01111011000101010001100000", "1111000110000011100011100", "11000000", "11100010", "0111001101110011001111011", "000011010001110110101010001101111010", "00", "00111001100000111001111000", "111010100", "11000", "000100110101100011110100110011", "0110010010100000101", "0"};
    int n = 95;
    long lo = 112983;
    long hi = 113914;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 450;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> first = {"001110010110100100110111001110011", "1000101001110110010000", "1011000011001000110", "00100001010110111110011101101100101111010"};
    int n = 97;
    long lo = 409208921677229;
    long hi = 409208921677809;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 303;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> first = {"0001001101", "0000000001100010011101010101001101101110", "01111001111011101000110", "010001001011", "1100111111111100100010110000000110011010000111101", "1100", "01110111100000111101000100011000100000", "100010110010001101", "10011110110001010000010", "10111101011100011110110101101100000001000101", "10001010"};
    int n = 91;
    long lo = 32718174;
    long hi = 32718960;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 367;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> first = {"10001001100", "0101111010", "00011100111111001100011", "11000110110001101", "0101110101110010100010000", "10001111101000110101101011111110101001000101001000", "01010000011"};
    int n = 93;
    long lo = 3156714641;
    long hi = 3156715238;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 279;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> first = {"1100", "0110110100101101010111010110001001111110100", "1101010001101110011001000110001", "10101100010", "000010010010010100110000010111100001", "0010101101011100000111000101010", "111001100010110101001000110011111110110001111", "101101000011011", "0101111100010100011110010100110000010011110"};
    int n = 97;
    long lo = 1138737211;
    long hi = 1138737968;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 380;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> first = {"010000110110100010101100110101011", "10101101101010001010000100001000010101110", "0000110011010111101111111100000001100100011010", "1100011101010010101010100001100010110001001110111", "1010100101111110101100101111000000011101000101001", "11001100111011101101011000011", "001101110001010001", "01010010111011011001000101111000101010011011000", "11111111111111000101110111100010111111110", "1101110100101110", "1000", "100100111010010101000001", "1101011101000111101010110000", "100101010010000001000000001001110", "010010010000001110", "0010011000001010001110000000", "00001101111100111001011010011001001001"};
    int n = 92;
    long lo = 714277;
    long hi = 714775;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 238;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> first = {"000010100100100100001010000000", "01101010101111111", "01", "0100", "1100000110011110111010100001011111011101111000110", "0111011110001110100000111110100111000110011", "11001011000001001111111110", "1110111010111111000100100"};
    int n = 100;
    long lo = 6298072059;
    long hi = 6298072802;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 369;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> first = {"10111111101110001111101011000000111011111110010000", "1010000001011011010000", "00001011001001101001001100011011001110", "1000100010000010010011100", "100011111000000101110"};
    int n = 90;
    long lo = 994802658993;
    long hi = 994802659619;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 308;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> first = {"0011101110100010011000000010", "11101110111100110101", "100111110011111101000001000110101", "1011101111011100100000", "0110001000", "010110011111011101110010100100011001110011", "111111110011111110111001010110001010011", "1000011", "01010101001110001111111011000", "11111111001110100011001010010101001010101100", "000100110100011000100", "11010000111101001110001", "11010101000010000110111", "10010101001110110101", "10001000011101110110111110100", "1110001000000010111110100001011011", "1000001000011111", "1111011111010011111011110000001000001110000011", "1110111011110010110100000100110", "10110000000100111"};
    int n = 94;
    long lo = 191890;
    long hi = 192386;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 266;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> first = {"00000011111101010", "0010000011101001000001111000011010110110111", "001000000001111101000001", "100"};
    int n = 100;
    long lo = 161557272879599;
    long hi = 161557272879692;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> first = {"0100110001001", "1101000000001100100101000001000001111101001010", "1011000101110111000000010101111111000111111010000"};
    int n = 96;
    long lo = 613217833770983;
    long hi = 613217833771904;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 428;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> first = {"10000010", "00000111101000000001011010000001011000100"};
    int n = 92;
    long lo = 469583475337384;
    long hi = 469583475338324;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 291;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> first = {"1101010010111001011", "1010100011000001100101110001110010110010100", "000110000100011101111101101011111001100000101", "110010011000010110"};
    int n = 93;
    long lo = 16653959777843;
    long hi = 16653959778213;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> first = {"01101100101111001001001011100000110100", "011000111110001100110010110", "0", "11101010000111100011111010010000010010000100", "001101001101011110100010010000100000110001011001", "101111000101111101000101011000011001011100100", "00000110000000101101000000001111110", "10000000001111011011111011100100111", "0011011000001111010100110110111110100010101010110", "11100111101100111101101000010001010111010010000", "110010011110011000101001", "11001010011000100000001010011", "110111110010110111000011001110101"};
    int n = 95;
    long lo = 17818163;
    long hi = 17818957;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 399;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> first = {"10100110110110", "01001000100000011110000011011111000111010001", "10011100", "10010101000111101101010010111000000010101010110001", "01110110010100000110111011110101011111100110011", "0111100100001100001110111000111100011101100000101", "1110010010011100111", "0100010111000"};
    int n = 90;
    long lo = 353447052;
    long hi = 353447842;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 384;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> first = {"100101010101110100011001110001000101100", "1100001011000010111101011000101110", "11110100010101000110000111011110000001101", "11100110000000110010110011101111111111", "10001001000000110000110110100111101"};
    int n = 91;
    long lo = 1321243879212;
    long hi = 1321243879837;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 296;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> first = {"101010", "00110111001111100001000010100101111", "100000001111010101100001", "111011001101100", "0001011011000", "110001110110111000111010011101100011", "00010010010011000100001100", "1100000001101100011", "01010000000000111110011", "1110001110000001000101110101", "10011000101111110", "000010101", "00011011110101100101001101", "0000111101", "0000110001001111", "000100101000010", "001110101", "000110001101111", "11111011011001110101111110001010111100100", "00011100100101101111000101"};
    int n = 96;
    long lo = 212454;
    long hi = 212653;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> first = {"1", "00111111000000001110001001001", "00011100000100001001011001101110100011001111001001", "01001111110001000010100000101000", "110110", "001100110010011101011001100000110011100001101110", "00101010110000010110111100", "000010001101001110001010000111001110", "10101000001100010100010011011101110111111011000011", "11111001101000101111110010001101110", "1001001110110000110010100000010101", "11011010", "1000001100010001111011010100101100100001110", "1000", "0111100011011111100001", "0101011111001000111111111011000111010000101", "11010011101111"};
    int n = 100;
    long lo = 263447;
    long hi = 264218;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 368;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> first = {"0001111000011110111", "0001011101101110110000110", "10001011001010110001011111011011011100", "0000110010000110000001111001110", "111000101011110011110000100100", "01100100110001011110001111110101011011000110", "110100111010", "01011100010100100001001000000101001001101100011001", "0000011110001101101110111011100101010111101000100", "1001001010111001110000"};
    int n = 97;
    long lo = 37409881;
    long hi = 37410595;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 359;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> first = {"10010", "00110011111010111100100000", "001", "1101011101110101100110101111000010101000101110", "011001010011001", "0110111111111011110011110111111101", "00010", "11000111010010010011010", "000110001011010101010110001101010011101101111", "0000101011100001011110101", "11101010"};
    int n = 94;
    long lo = 6585772;
    long hi = 6586546;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 421;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> first = {"00000", "1010000100101000100101010110111011011101", "000110110101100111001011", "1111100110010111100010110000000010110101110000110", "00011111000100111001001011001001010", "00010001001100111", "1011010110001100111111100001110", "00001110000111100100", "0010100010011001011100100010111", "10101101010101100111110001111011110110110100100010", "1100000110010000001001000111111111", "0100111011001000111000101001010011100110010001", "1101001111101101011101", "0110100", "001000000000110110", "1110100", "00010010000010010101111000101", "00101011010110"};
    int n = 91;
    long lo = 86953;
    long hi = 87636;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 329;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> first = {"101110", "110001000001001111", "1111101100101000", "0111100001011011011101000001111110", "10", "1000000", "1010011000101001100010000", "01011101110110110001001010000111100100001001011", "101001110100001011111100100011010011", "1101", "00111001001100010011101100", "0110010001", "01000100001010001000110010111101"};
    int n = 94;
    long lo = 4645898;
    long hi = 4645907;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> first = {"00110110101101001111101101001011010011111011010010"};
    int n = 100;
    long lo = 999999999999915;
    long hi = 1000000000000000;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> first = {"10000", "011011001011000001101000010100000111000110110", "000001010001011000001101110", "100100000110100001010000", "011011010", "01100000010101101110000011100011001000", "0001010", "010011000", "000101001", "00", "1"};
    int n = 91;
    long lo = 123456;
    long hi = 123654;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> first = {"10111011100100110001011101010100110001110011100011", "01110110001010101110011111110010000001010001111001", "01010001010101100011001010111000001110010010101011", "00110110111000000000110110100100101001111100010100", "00001000101111101110100010100001010010101100110010", "01010111111011001010001111011101111000000001101011", "11100100000100110000100001100101010001001100001110", "10000110100100110011100011100001111101011000000010", "00010000001010101011110001111001010110111000111001", "11111011000101110110111001010111001111001010110100", "10100100010110100100001011111110000111101110000110", "10100011101010101010011001110110101100000111111101", "00010010101011011001110010111100101100100011000100", "00010101101100010010100010010101111010100010000001", "11000001001110110010001000100111011010101010110010", "00001001101001110111101000100011000000101011010100", "10100010110101110011100000001000110111100110111010", "10001111101011011011011011010000110010101111111010", "10000011100110100111011010101000010101111000111110", "01100101111011011110011001101011101100011100101101", "01001100111101011101001000101111001100100001000111", "01011001010100101000011010010111011000010110001101", "00101000100110101110101011000000001100110101101100", "11100010101000010001000010001010101011110011011100", "00000001011101011001100110011000001000101101000111", "11001100110000110101010011010001010001111001010111", "11000011001100010101011000001011011101000110010001", "10101111101001001000110100010111001011000000011001", "11010011001101010010011011000000010101110001000000", "10101010001011011000011001110011000101011001101000", "01000110111101100101010010110011001010100000111100", "10011110010110110111000001010001111000000001011110", "00000111011000011100101110010100100110000010000110", "10111111100001111010011000100000010110001100011000", "01010111111011001000100111111001111000011110011100", "01010111101101100101110110100001010000101110101001", "11101100110000100001100010010010000110000110110111", "10011001110100101000001001011010011011101101100001", "10110111110001111100110011110001001001001101011111", "01001010100011000101011110011000001001100011110000", "11000100100010110101110101111111001000011001100010", "11000110111011111110101011011000101101000010010110", "01000111111001000110000100111100111111000100101011", "10101001110100011011111001001111000111000000110000", "10000000000000101101011010000111011010110001000111", "10011001011100010100101010000111010000000011111000", "01110110100001111010010111111111110111011101001110", "01000110101001011100100000101001100000000000010100", "00111111001110001111110010101100111101100001010101", "00011001001000011100110001000101101111010010101100"};
    int n = 100;
    long lo = 1000;
    long hi = 2000;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 478;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> first = {"1", "11", "111"};
    int n = 46;
    long lo = 10000;
    long hi = 11000;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 1001;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> first = {"11100101101100101100111001011011100101101111010110"};
    int n = 100;
    long lo = 999999999999001;
    long hi = 1000000000000000;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 600;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> first = {"010", "10"};
    int n = 100;
    long lo = 100000;
    long hi = 101000;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 421;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> first = {"10101010101010101010101010101010101010101010101010"};
    int n = 100;
    long lo = 999999999999800;
    long hi = 1000000000000000;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> first = {"01111000101010101000111", "01100101010010101000111", "01111000101010101001111", "01111000101010101010111", "00000000111111111010111"};
    int n = 75;
    long lo = 99145;
    long hi = 99901;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 406;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> first = {"100", "101"};
    int n = 4;
    long lo = 5;
    long hi = 6;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> first = {"0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"};
    int n = 100;
    long lo = 0;
    long hi = 10;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> first = {"010101", "01010101", "010101010010101", "0", "1", "010101010101010", "11"};
    int n = 99;
    long lo = 978;
    long hi = 998;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> first = {"11111111111111111111110011111111111111111111111111"};
    int n = 100;
    long lo = 999999999999000;
    long hi = 1000000000000000;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 961;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> first = {"00110110101101001111101101001011010011111011010010", "00110110101101001111101101001011010011111011010010", "00110110101101001111101101001011010011111011010010"};
    int n = 100;
    long lo = 999999999999915;
    long hi = 1000000000000000;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> first = {"101010101010101010101010101010101010101010101010", "101010101010101010101010101010101010101010101010", "101010101010101010101010101010101010101010101010", "101010101010101010101010101010101010101010101010", "101010101010101010101010101010101010101010101010", "101010101010101010101010101010101010101010101010", "101010101010101010101010101010101010101010101010", "101010101010101010101010101010101010101010101010", "101010101010101010101010101010101010101010101010", "101010101010101010101010101010101010101010101010", "101010101010101010101010101010101010101010101010", "101010101010101010101010101010101010101010101010", "101010101010101010101010101010101010101010101010", "101010101010101010101010101010101010101010101010", "101010101010101010101010101010101010101010101010", "101010101010101010101010101010101010101010101010", "101010101010101010101010101010101010101010101010", "101010101010101010101010101010101010101010101010", "101010101010101010101010101010101010101010101010", "101010101010101010101010101010101010101010101010"};
    int n = 98;
    long lo = 1998;
    long hi = 2756;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 380;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> first = {"1111111111111111111111111111110111111111"};
    int n = 100;
    long lo = 999999999000;
    long hi = 1000000000000;
    MagicalGirlLevelThreeDivTwo* pObj = new MagicalGirlLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->theCount(first, n, lo, hi);
    clock_t end = clock();
    delete pObj;
    int expected = 976;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22627668&rd=14539&pm=11479
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
 
class MagicalGirlLevelThreeDivTwo {
  long long len[101];
  char getAt(vector <string> &first, int n, long long at)
  {
    int k = (int)first.size();
    if (n < k)
      return first[n][at];
    for (int m = n - 1; m >= 0; m -= k)
      if (at >= len[m])
        at -= len[m];
      else
        return getAt(first, m, at);
  }
public:
  int theCount(vector <string>, int, long long, long long);
};
 
int MagicalGirlLevelThreeDivTwo::theCount(vector <string> first, int n, long long lo, long long hi) {
  int k = (int)first.size();
  for (int m = 0; m <= n; ++m)
    if (m < k)
      len[m] = (int)first[m].length();
    else {
      len[m] = 0;
      for (int m2 = m - 1; m2 >= 0; m2 -= k)
        len[m] = min(hi + 1, len[m] + len[m2]);
    }
  int cnt = 0;
  for (long long at = lo; at <= hi; ++at)
    if (getAt(first, n, at) == '1')
      cnt++;
  return cnt;  
}

********************************************************************************
*******************************************************************************/