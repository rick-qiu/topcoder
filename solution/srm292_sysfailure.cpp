/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4513
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

class SysFailure {
public:
    int critical(int n, vector<string> state);
};

int SysFailure::critical(int n, vector<string> state) {
    int ret;
    return ret;
}


int test0() {
    int n = 4;
    vector<string> state = {"00000", "00000", "11111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 6;
    vector<string> state = {"01010", "10001", "11011", "10001", "01010"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
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
    vector<string> state = {"111", "111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 2;
    vector<string> state = {"101"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 3;
    vector<string> state = {"111", "100"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 1000;
    vector<string> state = {"00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 1000;
    vector<string> state = {"11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 12;
    vector<string> state = {"110111011101110", "111000100000001", "100000011111111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
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
    int n = 13;
    vector<string> state = {"110111011101110", "111000100000001", "100000011111111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 23;
    vector<string> state = {"110111011101110", "111000100000001", "100000011111111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 15;
    vector<string> state = {"110111011101110", "111000100000001", "100000011111111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 16;
    vector<string> state = {"110111011101110", "111000100000001", "100000011111111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 1;
    vector<string> state = {"1"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
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
    int n = 4;
    vector<string> state = {"1111111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 5;
    vector<string> state = {"1110", "0111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 598;
    vector<string> state = {"0000000000000000100", "0100000010000000100", "0000100000000000000", "0000000000000000000", "0000010000000001000", "0010000100001000001", "0001000000000000000", "0001100000000000000", "0000010100010000010", "0000000000100000100", "0000100000000000001", "0000000000000000000", "0010000000000100000", "0000000000100000000", "0001000000000010000", "0000000000000001000", "1000000000000000101", "0000000100000100010", "0001000000000000000", "0000000001000000000", "0010100000000000000", "1001000000000000100", "1010000000100000000", "1100000100100100000", "0000010000000000000", "0100000100000000000", "0001000000000000000", "0100100000000000010", "0000001000000000000", "1001000100000000000", "1000000000000000000", "0010011001000000000", "0000110000000100000", "0000000001000000010", "0000001000000000000", "0100100000100000000", "0100001000000001000", "0000000000000000000", "0000000000000000010"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 72;
    vector<string> state = {"0100011000001000", "1000001001101000", "0010001000000000", "0100100001000000", "0000010000100010", "1000000000110100", "1110110110000001", "0000000000001000", "0011101000111000", "0011000001000001", "0010011000100000", "0000010001001010", "0100010100010000", "0011100101101100", "1101000000000001", "1110000101110100", "0001010000000011", "0100011000000101", "1111011001100001", "1010001001111001", "0100010000101111", "1111010000000010", "0011110100101101", "0000100100110100", "1110000000010011", "0110001000100100", "1001001010101010", "0000110010101000", "0101000000111001", "0010000100000101", "0100000011101000", "0010110000000100", "0000100110011010", "0101001001100000", "0000011000000000", "0101101010001101", "0000000111000001", "1000001011010000", "1110000101010011", "1000011100100010", "0010000010000001", "0000001000010000", "1000100110010000", "1010011000011101", "1100010110010011", "1001000011001001"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 748;
    vector<string> state = {"11110111011100101011111", "11101111101110111111101", "11111111111011111100111", "01111111000111111101111", "11010010111111111111111", "11100010100100111111111", "00110001111011111110101", "11111111101110111110111", "11101111111100111011011", "11110110110011111110111", "11111111111111000110011", "01111110111110011111111", "11111111111001110101001", "01101111111111101101110", "01111111011001011111111", "10001110100011111111111", "10011100111111011000010", "10110101111111111111111", "11111011011111011111010", "10110111111101111011111", "11110111111011111111011", "01111111111111011110111", "01011110111011111101111", "11111111111110110110110", "01111111111110111110010", "11011111111111111010111", "11011111111111111111110", "00111111111011011110111", "10101111111110110111101", "11110111111110110111111", "00111111100111111111101", "11110110111111111111111", "01111111110111111111011", "10111011001011111011011", "10101110111111111111011", "11111111110101111101111", "10111111000111110111101", "10111100111100011010111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 143;
    vector<string> state = {"1011111011110001001111110", "1000011011010111001000111", "1010111110111110111000000", "1011111001011001101101010", "1110111101010111111001011", "1010010100111100100111111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 925;
    vector<string> state = {"1010000000000010011010000001000000000", "0000100000100000100000010000000100000", "1000000010100100000000110110000111100", "0000000000110100011000000000000000111", "0000000001100000010000010010010000000", "0010000000010000100000001110000001000", "0000000110010000001000001001100001000", "0100000001101000001001000000110010000", "0100111000000001000010000000010000000", "0001100000000000000010100000100000000", "0000010100000110010000000000001001000", "0000010001000000001000101100000000000", "0100011000100000010000000010110001100", "0000000000000000000000010000000000000", "1000110000001000011001000000101000101", "0000010000000100000000000000100101000", "1100000110110010100001100000000110000", "0010000000010010000000001000010010000", "0100000111010101001000000000000000010", "0001100100000000000000000100010000100", "0000100100100000000000000001000000001", "0100000000001000101100100000100100100", "0000101000010100000001100000010100000", "0011000001100001000000000000000100000", "0000010000100000010000000000000000000", "0001010000000001100010000000000001001", "0000001000000001000100000000001000010", "0000010000010010000000001010000000000", "0011000100010000000000001010110100000", "1000000001011111000000001000111010001", "1100000000001001000011000000000000101", "0100000000000000001000000100001000100", "0000000001000110000100101000001000000", "0000100000101110000000000000000001110", "0000001000000001001010000100000000000", "0111000100110101000000100000000000000", "0000000000000000011110010100000010000", "0001001000000110001010100001000000010"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 16;
    vector<string> state = {"1100110000011", "1000001010010"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 5;
    vector<string> state = {"00", "00", "00", "01", "10", "00", "00", "00", "01", "00", "10", "00", "00", "10", "01", "00", "00", "00", "00", "00", "00", "10", "01", "00", "10", "00", "00", "00", "00", "01", "00", "01", "01", "01", "10", "10", "11", "10", "00", "10", "00", "00", "10", "00", "00", "00", "00", "00", "01", "11"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
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
    int n = 6;
    vector<string> state = {"00", "00", "00", "01", "10", "00", "00", "00", "01", "00", "10", "00", "00", "10", "01", "00", "00", "00", "00", "00", "00", "10", "01", "00", "10", "00", "00", "00", "00", "01", "00", "01", "01", "01", "10", "10", "11", "10", "00", "10", "00", "00", "10", "00", "00", "00", "00", "00", "01", "11"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 7;
    vector<string> state = {"00", "00", "00", "01", "10", "00", "00", "00", "01", "00", "10", "00", "00", "10", "01", "00", "00", "00", "00", "00", "00", "10", "01", "00", "10", "00", "00", "00", "00", "01", "00", "01", "01", "01", "10", "10", "11", "10", "00", "10", "00", "00", "10", "00", "00", "00", "00", "00", "01", "11"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 8;
    vector<string> state = {"00", "00", "00", "01", "10", "00", "00", "00", "01", "00", "10", "00", "00", "10", "01", "00", "00", "00", "00", "00", "00", "10", "01", "00", "10", "00", "00", "00", "00", "01", "00", "01", "01", "01", "10", "10", "11", "10", "00", "10", "00", "00", "10", "00", "00", "00", "00", "00", "01", "11"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
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
    vector<string> state = {"000000110000000000001001000", "001000000000000010000000000", "000000000001000000100000000", "001001000000000000000000000", "001000000000000000001000000", "100000000000000000000001011", "100010000000010000000000000", "000001010000001000000000010", "000010000000000000000000000", "000000000000000000000010000", "100000010100110000000000000", "000001001010000000000000010", "000010010100000000000100000", "000000000100100000010000000", "000000001000000000000000001", "000000000000000000000000000", "000000000100000000001001100", "010000001101000010001000000", "000100000000010000000000000", "000000101101000001001001010", "010000000100000000100000000", "000000000000000001000000000", "000000010000000000000010001", "001000000000000100000001010", "000000000000000100000000001", "000000010100000100000000000", "100000000001000000000101000", "100010001000100000000010000", "000000000000000000000000000", "000000000000000010000000000", "000000000000100000000000000", "100000000000000000000000100", "000000100000101000010100000", "000000000000000101000000000", "000000000100000000000000000", "000000000000100000100000010", "000000000000000000000000000", "001000000000000000000010001", "000010000000000000000000000", "000010000101000000000000000", "010000000000000000000000100", "000000000000000010000000000", "000000110000001100000000000", "000000001000000000000000010"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 7;
    vector<string> state = {"000000110000000000001001000", "001000000000000010000000000", "000000000001000000100000000", "001001000000000000000000000", "001000000000000000001000000", "100000000000000000000001011", "100010000000010000000000000", "000001010000001000000000010", "000010000000000000000000000", "000000000000000000000010000", "100000010100110000000000000", "000001001010000000000000010", "000010010100000000000100000", "000000000100100000010000000", "000000001000000000000000001", "000000000000000000000000000", "000000000100000000001001100", "010000001101000010001000000", "000100000000010000000000000", "000000101101000001001001010", "010000000100000000100000000", "000000000000000001000000000", "000000010000000000000010001", "001000000000000100000001010", "000000000000000100000000001", "000000010100000100000000000", "100000000001000000000101000", "100010001000100000000010000", "000000000000000000000000000", "000000000000000010000000000", "000000000000100000000000000", "100000000000000000000000100", "000000100000101000010100000", "000000000000000101000000000", "000000000100000000000000000", "000000000000100000100000010", "000000000000000000000000000", "001000000000000000000010001", "000010000000000000000000000", "000010000101000000000000000", "010000000000000000000000100", "000000000000000010000000000", "000000110000001100000000000", "000000001000000000000000010"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 8;
    vector<string> state = {"000000110000000000001001000", "001000000000000010000000000", "000000000001000000100000000", "001001000000000000000000000", "001000000000000000001000000", "100000000000000000000001011", "100010000000010000000000000", "000001010000001000000000010", "000010000000000000000000000", "000000000000000000000010000", "100000010100110000000000000", "000001001010000000000000010", "000010010100000000000100000", "000000000100100000010000000", "000000001000000000000000001", "000000000000000000000000000", "000000000100000000001001100", "010000001101000010001000000", "000100000000010000000000000", "000000101101000001001001010", "010000000100000000100000000", "000000000000000001000000000", "000000010000000000000010001", "001000000000000100000001010", "000000000000000100000000001", "000000010100000100000000000", "100000000001000000000101000", "100010001000100000000010000", "000000000000000000000000000", "000000000000000010000000000", "000000000000100000000000000", "100000000000000000000000100", "000000100000101000010100000", "000000000000000101000000000", "000000000100000000000000000", "000000000000100000100000010", "000000000000000000000000000", "001000000000000000000010001", "000010000000000000000000000", "000010000101000000000000000", "010000000000000000000000100", "000000000000000010000000000", "000000110000001100000000000", "000000001000000000000000010"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 319;
    vector<string> state = {"011101110110010111011010", "100000100011100111011110", "100011010101011011111111", "111011111111110111001011", "001100101110100101100011", "110011111111010110110101", "111111111110111011011001", "011111111001110101101010", "111011110111111011101111", "110110111111110001111111", "011110011101010011111111", "111101011011010011001011", "011010111111101111110011", "110111110011111111011101", "111111011111111111101110", "111011111011111110101010", "111111111111111111101001", "000101001111011011111110", "100110100111010111111111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 320;
    vector<string> state = {"011101110110010111011010", "100000100011100111011110", "100011010101011011111111", "111011111111110111001011", "001100101110100101100011", "110011111111010110110101", "111111111110111011011001", "011111111001110101101010", "111011110111111011101111", "110110111111110001111111", "011110011101010011111111", "111101011011010011001011", "011010111111101111110011", "110111110011111111011101", "111111011111111111101110", "111011111011111110101010", "111111111111111111101001", "000101001111011011111110", "100110100111010111111111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 321;
    vector<string> state = {"011101110110010111011010", "100000100011100111011110", "100011010101011011111111", "111011111111110111001011", "001100101110100101100011", "110011111111010110110101", "111111111110111011011001", "011111111001110101101010", "111011110111111011101111", "110110111111110001111111", "011110011101010011111111", "111101011011010011001011", "011010111111101111110011", "110111110011111111011101", "111111011111111111101110", "111011111011111110101010", "111111111111111111101001", "000101001111011011111110", "100110100111010111111111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 322;
    vector<string> state = {"011101110110010111011010", "100000100011100111011110", "100011010101011011111111", "111011111111110111001011", "001100101110100101100011", "110011111111010110110101", "111111111110111011011001", "011111111001110101101010", "111011110111111011101111", "110110111111110001111111", "011110011101010011111111", "111101011011010011001011", "011010111111101111110011", "110111110011111111011101", "111111011111111111101110", "111011111011111110101010", "111111111111111111101001", "000101001111011011111110", "100110100111010111111111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 323;
    vector<string> state = {"011101110110010111011010", "100000100011100111011110", "100011010101011011111111", "111011111111110111001011", "001100101110100101100011", "110011111111010110110101", "111111111110111011011001", "011111111001110101101010", "111011110111111011101111", "110110111111110001111111", "011110011101010011111111", "111101011011010011001011", "011010111111101111110011", "110111110011111111011101", "111111011111111111101110", "111011111011111110101010", "111111111111111111101001", "000101001111011011111110", "100110100111010111111111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 324;
    vector<string> state = {"011101110110010111011010", "100000100011100111011110", "100011010101011011111111", "111011111111110111001011", "001100101110100101100011", "110011111111010110110101", "111111111110111011011001", "011111111001110101101010", "111011110111111011101111", "110110111111110001111111", "011110011101010011111111", "111101011011010011001011", "011010111111101111110011", "110111110011111111011101", "111111011111111111101110", "111011111011111110101010", "111111111111111111101001", "000101001111011011111110", "100110100111010111111111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 325;
    vector<string> state = {"011101110110010111011010", "100000100011100111011110", "100011010101011011111111", "111011111111110111001011", "001100101110100101100011", "110011111111010110110101", "111111111110111011011001", "011111111001110101101010", "111011110111111011101111", "110110111111110001111111", "011110011101010011111111", "111101011011010011001011", "011010111111101111110011", "110111110011111111011101", "111111011111111111101110", "111011111011111110101010", "111111111111111111101001", "000101001111011011111110", "100110100111010111111111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 325;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 318;
    vector<string> state = {"011101110110010111011010", "100000100011100111011110", "100011010101011011111111", "111011111111110111001011", "001100101110100101100011", "110011111111010110110101", "111111111110111011011001", "011111111001110101101010", "111011110111111011101111", "110110111111110001111111", "011110011101010011111111", "111101011011010011001011", "011010111111101111110011", "110111110011111111011101", "111111011111111111101110", "111011111011111110101010", "111111111111111111101001", "000101001111011011111110", "100110100111010111111111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 4;
    vector<string> state = {"00", "00", "00", "01", "10", "00", "00", "00", "01", "00", "10", "00", "00", "10", "01", "00", "00", "00", "00", "00", "00", "10", "01", "00", "10", "00", "00", "00", "00", "01", "00", "01", "01", "01", "10", "10", "11", "10", "00", "10", "00", "00", "10", "00", "00", "00", "00", "00", "01", "11"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 9;
    vector<string> state = {"00", "00", "00", "01", "10", "00", "00", "00", "01", "00", "10", "00", "00", "10", "01", "00", "00", "00", "00", "00", "00", "10", "01", "00", "10", "00", "00", "00", "00", "01", "00", "01", "01", "01", "10", "10", "11", "10", "00", "10", "00", "00", "10", "00", "00", "00", "00", "00", "01", "11"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 24;
    vector<string> state = {"111111", "011110", "001100", "001100", "011110", "111111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 23;
    vector<string> state = {"111111", "011110", "001100", "001100", "011110", "111111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 22;
    vector<string> state = {"111111", "011110", "001000", "001000", "011110", "111111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 21;
    vector<string> state = {"111111", "011110", "001000", "001000", "011110", "111111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 305;
    vector<string> state = {"01001100000000010011", "00111110001110011100", "01110110110011011111", "11010000111001010010", "10110101010110011111", "11101110011101111010", "01111000111011111011", "11000101010110011011", "10110010001111111001", "10000011101001001101", "10101101100010111000", "11100110001100100111", "01011110110110111111", "11011101111010001111", "01010110011000110101", "01001011111010000000", "11000011000110110101", "10000000110100001101", "00110000111101010111", "00101110001011010111", "11011111001101111110", "00110100111110011100", "00101110110111111010", "01011010000011111011", "10000011001111001010", "10110010011001101111", "01100100110110010000", "00010000001101100011", "00010010110000001010", "00000110101100011111", "10100011010111111111", "10011111100000110000", "01011101100001101110", "10100011010101000010", "10111101010001101001", "00100011111010000110", "00101010101111011011", "00111111101100010111", "00101000111000100111", "01111111000001011110", "01101101110001000010", "00101011000100101001", "10100011000001101111", "11011010110011110100", "01100000101100000011", "01101011001100010101", "11000101000111100010", "10010000000110001101", "01111100010011000100", "01010100100010111011"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 304;
    vector<string> state = {"01001100000000010011", "00111110001110011100", "01110110110011011111", "11010000111001010010", "10110101010110011111", "11101110011101111010", "01111000111011111011", "11000101010110011011", "10110010001111111001", "10000011101001001101", "10101101100010111000", "11100110001100100111", "01011110110110111111", "11011101111010001111", "01010110011000110101", "01001011111010000000", "11000011000110110101", "10000000110100001101", "00110000111101010111", "00101110001011010111", "11011111001101111110", "00110100111110011100", "00101110110111111010", "01011010000011111011", "10000011001111001010", "10110010011001101111", "01100100110110010000", "00010000001101100011", "00010010110000001010", "00000110101100011111", "10100011010111111111", "10011111100000110000", "01011101100001101110", "10100011010101000010", "10111101010001101001", "00100011111010000110", "00101010101111011011", "00111111101100010111", "00101000111000100111", "01111111000001011110", "01101101110001000010", "00101011000100101001", "10100011000001101111", "11011010110011110100", "01100000101100000011", "01101011001100010101", "11000101000111100010", "10010000000110001101", "01111100010011000100", "01010100100010111011"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 310;
    vector<string> state = {"01001100000000010011", "00111110001110011100", "01110110110011011111", "11010000111001010010", "10110101010110011111", "11101110011101111010", "01111000111011111011", "11000101010110011011", "10110010001111111001", "10000011101001001101", "10101101100010111000", "11100110001100100111", "01011110110110111111", "11011101111010001111", "01010110011000110101", "01001011111010000000", "11000011000110110101", "10000000110100001101", "00110000111101010111", "00101110001011010111", "11011111001101111110", "00110100111110011100", "00101110110111111010", "01011010000011111011", "10000011001111001010", "10110010011001101111", "01100100110110010000", "00010000001101100011", "00010010110000001010", "00000110101100011111", "10100011010111111111", "10011111100000110000", "01011101100001101110", "10100011010101000010", "10111101010001101001", "00100011111010000110", "00101010101111011011", "00111111101100010111", "00101000111000100111", "01111111000001011110", "01101101110001000010", "00101011000100101001", "10100011000001101111", "11011010110011110100", "01100000101100000011", "01101011001100010101", "11000101000111100010", "10010000000110001101", "01111100010011000100", "01010100100010111011"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 350;
    vector<string> state = {"01001100000000010011", "00111110001110011100", "01110110110011011111", "11010000111001010010", "10110101010110011111", "11101110011101111010", "01111000111011111011", "11000101010110011011", "10110010001111111001", "10000011101001001101", "10101101100010111000", "11100110001100100111", "01011110110110111111", "11011101111010001111", "01010110011000110101", "01001011111010000000", "11000011000110110101", "10000000110100001101", "00110000111101010111", "00101110001011010111", "11011111001101111110", "00110100111110011100", "00101110110111111010", "01011010000011111011", "10000011001111001010", "10110010011001101111", "01100100110110010000", "00010000001101100011", "00010010110000001010", "00000110101100011111", "10100011010111111111", "10011111100000110000", "01011101100001101110", "10100011010101000010", "10111101010001101001", "00100011111010000110", "00101010101111011011", "00111111101100010111", "00101000111000100111", "01111111000001011110", "01101101110001000010", "00101011000100101001", "10100011000001101111", "11011010110011110100", "01100000101100000011", "01101011001100010101", "11000101000111100010", "10010000000110001101", "01111100010011000100", "01010100100010111011"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 420;
    vector<string> state = {"01001100000000010011", "00111110001110011100", "01110110110011011111", "11010000111001010010", "10110101010110011111", "11101110011101111010", "01111000111011111011", "11000101010110011011", "10110010001111111001", "10000011101001001101", "10101101100010111000", "11100110001100100111", "01011110110110111111", "11011101111010001111", "01010110011000110101", "01001011111010000000", "11000011000110110101", "10000000110100001101", "00110000111101010111", "00101110001011010111", "11011111001101111110", "00110100111110011100", "00101110110111111010", "01011010000011111011", "10000011001111001010", "10110010011001101111", "01100100110110010000", "00010000001101100011", "00010010110000001010", "00000110101100011111", "10100011010111111111", "10011111100000110000", "01011101100001101110", "10100011010101000010", "10111101010001101001", "00100011111010000110", "00101010101111011011", "00111111101100010111", "00101000111000100111", "01111111000001011110", "01101101110001000010", "00101011000100101001", "10100011000001101111", "11011010110011110100", "01100000101100000011", "01101011001100010101", "11000101000111100010", "10010000000110001101", "01111100010011000100", "01010100100010111011"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 480;
    vector<string> state = {"01001100000000010011", "00111110001110011100", "01110110110011011111", "11010000111001010010", "10110101010110011111", "11101110011101111010", "01111000111011111011", "11000101010110011011", "10110010001111111001", "10000011101001001101", "10101101100010111000", "11100110001100100111", "01011110110110111111", "11011101111010001111", "01010110011000110101", "01001011111010000000", "11000011000110110101", "10000000110100001101", "00110000111101010111", "00101110001011010111", "11011111001101111110", "00110100111110011100", "00101110110111111010", "01011010000011111011", "10000011001111001010", "10110010011001101111", "01100100110110010000", "00010000001101100011", "00010010110000001010", "00000110101100011111", "10100011010111111111", "10011111100000110000", "01011101100001101110", "10100011010101000010", "10111101010001101001", "00100011111010000110", "00101010101111011011", "00111111101100010111", "00101000111000100111", "01111111000001011110", "01101101110001000010", "00101011000100101001", "10100011000001101111", "11011010110011110100", "01100000101100000011", "01101011001100010101", "11000101000111100010", "10010000000110001101", "01111100010011000100", "01010100100010111011"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 481;
    vector<string> state = {"01001100000000010011", "00111110001110011100", "01110110110011011111", "11010000111001010010", "10110101010110011111", "11101110011101111010", "01111000111011111011", "11000101010110011011", "10110010001111111001", "10000011101001001101", "10101101100010111000", "11100110001100100111", "01011110110110111111", "11011101111010001111", "01010110011000110101", "01001011111010000000", "11000011000110110101", "10000000110100001101", "00110000111101010111", "00101110001011010111", "11011111001101111110", "00110100111110011100", "00101110110111111010", "01011010000011111011", "10000011001111001010", "10110010011001101111", "01100100110110010000", "00010000001101100011", "00010010110000001010", "00000110101100011111", "10100011010111111111", "10011111100000110000", "01011101100001101110", "10100011010101000010", "10111101010001101001", "00100011111010000110", "00101010101111011011", "00111111101100010111", "00101000111000100111", "01111111000001011110", "01101101110001000010", "00101011000100101001", "10100011000001101111", "11011010110011110100", "01100000101100000011", "01101011001100010101", "11000101000111100010", "10010000000110001101", "01111100010011000100", "01010100100010111011"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 482;
    vector<string> state = {"01001100000000010011", "00111110001110011100", "01110110110011011111", "11010000111001010010", "10110101010110011111", "11101110011101111010", "01111000111011111011", "11000101010110011011", "10110010001111111001", "10000011101001001101", "10101101100010111000", "11100110001100100111", "01011110110110111111", "11011101111010001111", "01010110011000110101", "01001011111010000000", "11000011000110110101", "10000000110100001101", "00110000111101010111", "00101110001011010111", "11011111001101111110", "00110100111110011100", "00101110110111111010", "01011010000011111011", "10000011001111001010", "10110010011001101111", "01100100110110010000", "00010000001101100011", "00010010110000001010", "00000110101100011111", "10100011010111111111", "10011111100000110000", "01011101100001101110", "10100011010101000010", "10111101010001101001", "00100011111010000110", "00101010101111011011", "00111111101100010111", "00101000111000100111", "01111111000001011110", "01101101110001000010", "00101011000100101001", "10100011000001101111", "11011010110011110100", "01100000101100000011", "01101011001100010101", "11000101000111100010", "10010000000110001101", "01111100010011000100", "01010100100010111011"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 494;
    vector<string> state = {"01001100000000010011", "00111110001110011100", "01110110110011011111", "11010000111001010010", "10110101010110011111", "11101110011101111010", "01111000111011111011", "11000101010110011011", "10110010001111111001", "10000011101001001101", "10101101100010111000", "11100110001100100111", "01011110110110111111", "11011101111010001111", "01010110011000110101", "01001011111010000000", "11000011000110110101", "10000000110100001101", "00110000111101010111", "00101110001011010111", "11011111001101111110", "00110100111110011100", "00101110110111111010", "01011010000011111011", "10000011001111001010", "10110010011001101111", "01100100110110010000", "00010000001101100011", "00010010110000001010", "00000110101100011111", "10100011010111111111", "10011111100000110000", "01011101100001101110", "10100011010101000010", "10111101010001101001", "00100011111010000110", "00101010101111011011", "00111111101100010111", "00101000111000100111", "01111111000001011110", "01101101110001000010", "00101011000100101001", "10100011000001101111", "11011010110011110100", "01100000101100000011", "01101011001100010101", "11000101000111100010", "10010000000110001101", "01111100010011000100", "01010100100010111011"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 495;
    vector<string> state = {"01001100000000010011", "00111110001110011100", "01110110110011011111", "11010000111001010010", "10110101010110011111", "11101110011101111010", "01111000111011111011", "11000101010110011011", "10110010001111111001", "10000011101001001101", "10101101100010111000", "11100110001100100111", "01011110110110111111", "11011101111010001111", "01010110011000110101", "01001011111010000000", "11000011000110110101", "10000000110100001101", "00110000111101010111", "00101110001011010111", "11011111001101111110", "00110100111110011100", "00101110110111111010", "01011010000011111011", "10000011001111001010", "10110010011001101111", "01100100110110010000", "00010000001101100011", "00010010110000001010", "00000110101100011111", "10100011010111111111", "10011111100000110000", "01011101100001101110", "10100011010101000010", "10111101010001101001", "00100011111010000110", "00101010101111011011", "00111111101100010111", "00101000111000100111", "01111111000001011110", "01101101110001000010", "00101011000100101001", "10100011000001101111", "11011010110011110100", "01100000101100000011", "01101011001100010101", "11000101000111100010", "10010000000110001101", "01111100010011000100", "01010100100010111011"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 496;
    vector<string> state = {"01001100000000010011", "00111110001110011100", "01110110110011011111", "11010000111001010010", "10110101010110011111", "11101110011101111010", "01111000111011111011", "11000101010110011011", "10110010001111111001", "10000011101001001101", "10101101100010111000", "11100110001100100111", "01011110110110111111", "11011101111010001111", "01010110011000110101", "01001011111010000000", "11000011000110110101", "10000000110100001101", "00110000111101010111", "00101110001011010111", "11011111001101111110", "00110100111110011100", "00101110110111111010", "01011010000011111011", "10000011001111001010", "10110010011001101111", "01100100110110010000", "00010000001101100011", "00010010110000001010", "00000110101100011111", "10100011010111111111", "10011111100000110000", "01011101100001101110", "10100011010101000010", "10111101010001101001", "00100011111010000110", "00101010101111011011", "00111111101100010111", "00101000111000100111", "01111111000001011110", "01101101110001000010", "00101011000100101001", "10100011000001101111", "11011010110011110100", "01100000101100000011", "01101011001100010101", "11000101000111100010", "10010000000110001101", "01111100010011000100", "01010100100010111011"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 515;
    vector<string> state = {"01001100000000010011", "00111110001110011100", "01110110110011011111", "11010000111001010010", "10110101010110011111", "11101110011101111010", "01111000111011111011", "11000101010110011011", "10110010001111111001", "10000011101001001101", "10101101100010111000", "11100110001100100111", "01011110110110111111", "11011101111010001111", "01010110011000110101", "01001011111010000000", "11000011000110110101", "10000000110100001101", "00110000111101010111", "00101110001011010111", "11011111001101111110", "00110100111110011100", "00101110110111111010", "01011010000011111011", "10000011001111001010", "10110010011001101111", "01100100110110010000", "00010000001101100011", "00010010110000001010", "00000110101100011111", "10100011010111111111", "10011111100000110000", "01011101100001101110", "10100011010101000010", "10111101010001101001", "00100011111010000110", "00101010101111011011", "00111111101100010111", "00101000111000100111", "01111111000001011110", "01101101110001000010", "00101011000100101001", "10100011000001101111", "11011010110011110100", "01100000101100000011", "01101011001100010101", "11000101000111100010", "10010000000110001101", "01111100010011000100", "01010100100010111011"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 517;
    vector<string> state = {"01001100000000010011", "00111110001110011100", "01110110110011011111", "11010000111001010010", "10110101010110011111", "11101110011101111010", "01111000111011111011", "11000101010110011011", "10110010001111111001", "10000011101001001101", "10101101100010111000", "11100110001100100111", "01011110110110111111", "11011101111010001111", "01010110011000110101", "01001011111010000000", "11000011000110110101", "10000000110100001101", "00110000111101010111", "00101110001011010111", "11011111001101111110", "00110100111110011100", "00101110110111111010", "01011010000011111011", "10000011001111001010", "10110010011001101111", "01100100110110010000", "00010000001101100011", "00010010110000001010", "00000110101100011111", "10100011010111111111", "10011111100000110000", "01011101100001101110", "10100011010101000010", "10111101010001101001", "00100011111010000110", "00101010101111011011", "00111111101100010111", "00101000111000100111", "01111111000001011110", "01101101110001000010", "00101011000100101001", "10100011000001101111", "11011010110011110100", "01100000101100000011", "01101011001100010101", "11000101000111100010", "10010000000110001101", "01111100010011000100", "01010100100010111011"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 517;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 508;
    vector<string> state = {"01001100000000010011", "00111110001110011100", "01110110110011011111", "11010000111001010010", "10110101010110011111", "11101110011101111010", "01111000111011111011", "11000101010110011011", "10110010001111111001", "10000011101001001101", "10101101100010111000", "11100110001100100111", "01011110110110111111", "11011101111010001111", "01010110011000110101", "01001011111010000000", "11000011000110110101", "10000000110100001101", "00110000111101010111", "00101110001011010111", "11011111001101111110", "00110100111110011100", "00101110110111111010", "01011010000011111011", "10000011001111001010", "10110010011001101111", "01100100110110010000", "00010000001101100011", "00010010110000001010", "00000110101100011111", "10100011010111111111", "10011111100000110000", "01011101100001101110", "10100011010101000010", "10111101010001101001", "00100011111010000110", "00101010101111011011", "00111111101100010111", "00101000111000100111", "01111111000001011110", "01101101110001000010", "00101011000100101001", "10100011000001101111", "11011010110011110100", "01100000101100000011", "01101011001100010101", "11000101000111100010", "10010000000110001101", "01111100010011000100", "01010100100010111011"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 509;
    vector<string> state = {"01001100000000010011", "00111110001110011100", "01110110110011011111", "11010000111001010010", "10110101010110011111", "11101110011101111010", "01111000111011111011", "11000101010110011011", "10110010001111111001", "10000011101001001101", "10101101100010111000", "11100110001100100111", "01011110110110111111", "11011101111010001111", "01010110011000110101", "01001011111010000000", "11000011000110110101", "10000000110100001101", "00110000111101010111", "00101110001011010111", "11011111001101111110", "00110100111110011100", "00101110110111111010", "01011010000011111011", "10000011001111001010", "10110010011001101111", "01100100110110010000", "00010000001101100011", "00010010110000001010", "00000110101100011111", "10100011010111111111", "10011111100000110000", "01011101100001101110", "10100011010101000010", "10111101010001101001", "00100011111010000110", "00101010101111011011", "00111111101100010111", "00101000111000100111", "01111111000001011110", "01101101110001000010", "00101011000100101001", "10100011000001101111", "11011010110011110100", "01100000101100000011", "01101011001100010101", "11000101000111100010", "10010000000110001101", "01111100010011000100", "01010100100010111011"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 170;
    vector<string> state = {"0001", "1111", "1111", "1111", "1111", "1111", "0111", "1011", "1111", "1111", "1111", "1111", "1111", "1011", "0111", "1111", "1111", "1011", "1011", "1110", "1011", "1111", "1111", "1111", "1111", "1010", "1011", "1111", "1111", "1110", "1111", "1111", "1111", "1111", "1111", "1111", "1111", "1111", "1111", "1111", "0111", "1110", "1111", "1111", "1111", "1111", "1111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 171;
    vector<string> state = {"0001", "1111", "1111", "1111", "1111", "1111", "0111", "1011", "1111", "1111", "1111", "1111", "1111", "1011", "0111", "1111", "1111", "1011", "1011", "1110", "1011", "1111", "1111", "1111", "1111", "1010", "1011", "1111", "1111", "1110", "1111", "1111", "1111", "1111", "1111", "1111", "1111", "1111", "1111", "1111", "0111", "1110", "1111", "1111", "1111", "1111", "1111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 171;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 172;
    vector<string> state = {"0001", "1111", "1111", "1111", "1111", "1111", "0111", "1011", "1111", "1111", "1111", "1111", "1111", "1011", "0111", "1111", "1111", "1011", "1011", "1110", "1011", "1111", "1111", "1111", "1111", "1010", "1011", "1111", "1111", "1110", "1111", "1111", "1111", "1111", "1111", "1111", "1111", "1111", "1111", "1111", "0111", "1110", "1111", "1111", "1111", "1111", "1111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 2;
    vector<string> state = {"101"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 6;
    vector<string> state = {"01010", "10001", "11011", "10001", "01010"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 1000;
    vector<string> state = {"111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 999;
    vector<string> state = {"11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 4;
    vector<string> state = {"111", "111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 4;
    vector<string> state = {"111", "111", "111", "111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 1000;
    vector<string> state = {"11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 1000;
    vector<string> state = {"1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111"};
    SysFailure* pObj = new SysFailure();
    clock_t start = clock();
    int result = pObj->critical(n, state);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=21236001&rd=9813&pm=4513
********************************************************************************
#include<vector>
#include<string>
using namespace std;
 
#define vs vector<string>
vs all;
int l,l1;
 
const int dx[8]={-1,0,0,1,1,1,-1,-1};
const int dy[8]={0,1,-1,0,1,-1,1,-1};
 
bool valid(int row,int col)
{
  return 0<=row&&row<l&&0<=col&&col<l1;
}
 
bool visited[100][100];
int sz=0;
 
void dfs(int row,int col)
{
  visited[row][col]=true;
  sz++;
  for(int i=0;i<8;i++)
  {
    int nrow=row+dx[i],ncol=col+dy[i];
    if(!visited[nrow][ncol]&&valid(nrow,ncol)&&all[nrow][ncol]=='1')
      dfs(nrow,ncol);
  }
}
 
struct SysFailure
{
  int critical(int n,vs state)
  {
    all=state;
    l=all.size(),l1=all[0].size();
    int i,j;
    memset(visited,0,sizeof(visited));
    sz=0;
    int max=0;
    for(i=0;i<l;i++)
      for(j=0;j<l1;j++)
      {
        //printf("%d %d\n",i,j);
        sz=0;
        if(all[i][j]=='1') dfs(i,j);
        if(sz>max)
          max=sz;
      }
//    printf("%d\n",max);
    if(max<n)
      return -1;
    int ret=0;
    for(i=0;i<l;i++)
      for(j=0;j<l1;j++)
      {
        if(all[i][j]=='1')
        {
          int max=0;
          all[i][j]='0';
          memset(visited,0,sizeof(visited));
          for(int ii=0;ii<l;ii++)
            for(int jj=0;jj<l1;jj++)
            {
              sz=0;
              if(all[ii][jj]=='1') dfs(ii,jj);
              if(sz>max)
                max=sz;
            }
          all[i][j]='1';
          if(max<n)
            ret++;
        }
      }
    return ret;
  }
};

********************************************************************************
*******************************************************************************/