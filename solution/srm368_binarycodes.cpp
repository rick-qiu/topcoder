/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8247
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

class BinaryCodes {
public:
    int ambiguous(vector<string> code);
};

int BinaryCodes::ambiguous(vector<string> code) {
    int ret;
    return ret;
}


int test0() {
    vector<string> code = {"1", "1010", "01", "10101"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> code = {"0", "1"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> code = {"0", "11", "11", "11"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> code = {"0000", "001", "01001", "01010", "01011"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
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
    vector<string> code = {"1", "10", "00"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> code = {"", "01101001001", "111101011"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
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
    vector<string> code = {"00011011", "000110", "11", "0001", "1011", "00", "011011"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> code = {"00000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 148;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> code = {"000000000", "110", "1", "10", "00000", "0000110"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> code = {"000000", "0000", "000"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> code = {"010", "110111", "1101", "11", "0101101"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> code = {"01010101010101010101010101010101010101010101010101", "0101010101010101010101010101010101010101010101010", "1010101010101010101010101010101010101010101010101"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 198;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> code = {"01", "001", "01001"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> code = {"00000000000000000000000000000000000000000000000001", "0", "1", "01"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
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
    vector<string> code = {"00000000000000000000000000000000000000000000000011", "0", "000000000000000000000000000011", "0000000000000000000000000000011"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> code = {"00000110111010111111111111100", "01011100011010010010010000", "11111101010111000001001101110", "000001101110101111111111111001101", "0010000011000001000000111111110111", "110111001110100000000100011", "10011010001011101111000010", "000011000001000000111111110111", "100010001000010110111000000101111", "100000110111010111111111111100110", "1101001111010001100010101010", "110011010001011101111000010001000", "0011000001000000111111110111", "010100010100100000000100111111", "10011110100011000101010100011110", "00111101000110001010101000111101", "111001110100000000100011100001", "10001000100001011011100000010111", "01101100110100010111011110000100010", "0000100111111010101110000010011", "10000101011100011010010010010000", "01010111000001001101110110", "0000001010110100110100110", "1010100010100100000000100", "0011110101010001010010000", "00000010101101001101001100110", "00000000101011010011010011001101", "100001010111000110100100100100", "01110110111001110100000000100011", "100010001000010110111000000101111"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> code = {"100111100010001010111001", "00000010111110010100111111", "00011111111101011000100000101", "1001011101001111110001100111", "1110110000100110000011100", "00101110100111111000110011101100010", "11101001000011101101001001101", "0110111110110000100110000011100010001", "00000010100000010111110010100111111", "110100101110100111011011111011000", "001011110000100101101001111", "010011000001110001000110011110", "10000100101101001111000100010", "010100011111111101011000100000101", "0010100000010111110010100111111", "00100010101110010010111010", "00010001010110100101110100111011011", "010100111101000101001001101101", "01000110011110001000101011100", "00010010110100111100010001010", "1000111111111010110001000001", "011111100011001110110001010", "0100111101000101001001101101001011110", "11101001000011101101001001101010", "111010010000111011010010011010101", "10110100101110100111", "10010011110100101011000", "0110001010010011110100101011000000000101", "01001111010001010010011011010010111", "0100111101001010110000000"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 124;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> code = {"00101100010101001", "10101101010100111100100000010", "1010001111110100100101111010000100", "010100111100100000010100", "11111000010100010001000", "110110000010100011010010010101010", "100011000001", "1001000100100111011000001010001101001001010", "1011000101010010011011", "1010010001111111100001010001000100", "0011110011101100100010010011", "1110011100001011011010011001", "1011000001010001101001001", "0011011101011010101", "001111110100100101111010000100100011000001", "100111110101011111011000111001011000", "1010000100100011000001", "11011001100101001100100010110011110011101", "001111001000000101001101100110010100110010001", "0001000011100000", "001101001000111", "1001101100110010100110010001011", "10001110010110001110011100001011011010011", "0101100010101001001101110101101", "000100001110000010011111010101111101", "010101000111111010010010111", "1001101001000111111110000101000100010000", "011001111001110110010001001001", "000100001110000010011111010101111", "1011000111001011000111001110000101101101001"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 300;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> code = {"00011001111110110001011110110100100", "0000111010010001111010111", "011100100011100101110", "10111110010111101110001", "01010000111110111001011111001011110111000101", "0101111100101111011100010101111100011", "111110111010111000010001101101110101110011", "001010100111011100", "0010001100111101000101101100", "1000011010110101000111", "011100001000110110", "101000011111011100", "01011111000110100001110101001101", "100001101011010100011100001110100100011110101", "100100000100011001111010001011011", "1000011010110101000111000011101001000111101", "0110011111101100010111101101001000", "01000011101010011010001", "00010001100111101000101101100101010011101110", "0111110111010111000010001101101110101110011", "11011100100011100101110", "011101110010001110010111", "011001111110110001011110110", "101010011101110011111011101", "10010111101101010001111001001000000", "1110101110011", "0001100101111011010100011110010010000", "01111100011010000111010100110100011001011110", "1101010001111001001000000", "10100001111101110"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> code = {"00110000011101100", "110100110001011111001111010100111001", "0100100110110000", "1000010110101001010111111000100", "000011000100001000101000010", "00101110001111011010011000", "1010111001000001101010010111000111101101001", "10101001010111111000100", "0001100010000110000011101", "100011011111010011100101110", "0110111110100111001011100001100101011100", "110010100000100110110100010001110101110", "0001100101011100101010100001111100110", "1111111100011000100001", "0110001000010001010000100100100110110000101", "0111011011111000111111111100011000100", "101011100100000110101", "011101101111100011", "10000011101100011011111", "10111110011110101001110010001010000001000", "100010111110011110101001110010001010000001", "101010100001111100110", "01110110111110001111111111", "010011100101110000110010101110010101010000111", "0000100010100001001001001101", "10110101001010111111000100", "00010100000010000110001", "11001101100101000001001101101000100011", "1100101000001001101101000100011", "0100000110101001011100011110"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 146;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> code = {"0001010011010110000101101000010110011", "000101001101011", "1111111101001001001", "111100110011011111", "00010100110101100001011010000101100", "111111011111111010010010011010", "11101101101110010110011000001010", "10010110011000001010", "010100011010111101000100001001110100", "11100100100101000110000", "11001101011111101100010000", "1110010001101100000111011011011", "111001000000010100", "10111010111001001001010001100001010110011", "111111001000000", "0101100111111110", "101010101011111000011111001100010", "01000110110000011101101101110010110011000001010", "00111010010111010111001001001010001100001", "00010100110010100111100110011011", "0101111110110001000", "10101100111111110111111110100100100110", "101010111110000111110011000101000101001110", "0000101001100101001111001100110", "11111111001000000010100011010111101000100001", "1000101001110010001101100000", "1010101011111000011111001100010100010100", "0000101101000010", "01101011110100010000100111010010111010", "110101111110110001000000010100110010100"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 300;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> code = {"11000", "11", "100000", "101000", "110000", "111000", "100001", "101001", "110001", "111001", "100010", "101010", "110010", "111010", "100011", "101011", "110011", "111011", "000100", "001100", "010100", "011100", "000101", "001101", "010101", "011101", "000111", "001111", "010111", "011111"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> code = {"111111111000", "111111111", "100000", "101000", "110000", "111000", "100001", "101001", "110001", "111001", "100010", "101010", "110010", "111010", "100011", "101011", "110011", "111011", "000100", "001100", "010100", "011100", "000101", "001101", "010101", "011101", "000111", "001111", "010111", "011111"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> code = {"11111111101000", "11111111101", "100000", "101000", "110000", "111000", "100001", "101001", "110001", "111001", "100010", "101010", "110010", "111010", "100011", "101011", "110011", "111011", "000100", "001100", "010100", "011100", "000101", "001101", "010101", "011101", "000110", "001110", "010110", "011110"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> code = {"110", "110"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> code = {"00000000000000000000000000000000000000000000000001", "00000000000000000000000000000000000000000000000010", "00000000000000000000000000000000000000000000000011", "00000000000000000000000000000000000000000000000100", "00000000000000000000000000000000000000000000000101", "00000000000000000000000000000000000000000000000110", "00000000000000000000000000000000000000000000000111", "00000000000000000000000000000000000000000000001000", "00000000000000000000000000000000000000000000001001", "00000000000000000000000000000000000000000000001010", "00000000000000000000000000000000000000000000001011", "00000000000000000000000000000000000000000000001100", "00000000000000000000000000000000000000000000001101", "00000000000000000000000000000000000000000000001110", "00000000000000000000000000000000000000000000001111", "00000000000000000000000000000000000000000000010000", "00000000000000000000000000000000000000000000010001", "00000000000000000000000000000000000000000000010010", "00000000000000000000000000000000000000000000010011", "00000000000000000000000000000000000000000000010100", "00000000000000000000000000000000000000000000010101", "00000000000000000000000000000000000000000000010110", "00000000000000000000000000000000000000000000010111", "00000000000000000000000000000000000000000000011000", "00000000000000000000000000000000000000000000011001", "00000000000000000000000000000000000000000000011010", "00000000000000000000000000000000000000000000011011", "00000000000000000000000000000000000000000000011100", "00000000000000000000000000000000000000000000011101", "0"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> code = {"00000000000000000000000000000000000000000000000001", "00000000000000000000000000000000000000000000000010", "00000000000000000000000000000000000000000000000011", "00000000000000000000000000000000000000000000000100", "00000000000000000000000000000000000000000000000101", "00000000000000000000000000000000000000000000000110", "00000000000000000000000000000000000000000000000111", "00000000000000000000000000000000000000000000001000", "00000000000000000000000000000000000000000000001001", "00000000000000000000000000000000000000000000001010", "00000000000000000000000000000000000000000000001011", "00000000000000000000000000000000000000000000001100", "00000000000000000000000000000000000000000000001101", "00000000000000000000000000000000000000000000001110", "00000000000000000000000000000000000000000000001111", "00000000000000000000000000000000000000000000010000", "00000000000000000000000000000000000000000000010001", "00000000000000000000000000000000000000000000010010", "00000000000000000000000000000000000000000000010011", "00000000000000000000000000000000000000000000010100", "00000000000000000000000000000000000000000000010101", "00000000000000000000000000000000000000000000010110", "00000000000000000000000000000000000000000000010111", "00000000000000000000000000000000000000000000011000", "00000000000000000000000000000000000000000000011001", "00000000000000000000000000000000000000000000011010", "00000000000000000000000000000000000000000000011011", "00000000000000000000000000000000000000000000011100", "00000000000000000000000000000000000000000000011101", "00000000000000000000000000000000000000000000011110"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> code = {"0011100", "01110", "0010000", "001000", "0010", "0100000", "1101000", "11110", "1001100", "01", "111", "1010", "110000", "0100", "1011100", "001100000", "111000", "0000000", "0111100", "1111100", "11100000", "101100000", "0101000", "0001100", "0110", "1000000", "011", "1010000", "011000", "101100"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> code = {"0011100", "01110", "0000100", "000100", "0100", "0000010", "0001011", "01111", "0011001", "10", "111", "0101", "000011", "0010", "0011101", "000001100", "000111", "0000000", "0011110", "0011111", "00000111", "000001101", "0001010", "0011000", "0110", "0000001", "110", "0000101", "000110", "001101"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> code = {"111000100", "1001010", "10110", "010100", "11010", "010010", "01110", "1101", "001", "011000100", "11110", "00000100", "0010001010", "110100", "110001010", "00001010", "101010", "11", "00010", "00110", "00101", "1100", "110010", "100100", "10101", "001000100", "101000100", "10000100", "000", "1010001010"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> code = {"111000100", "1001010", "10110", "010100", "11010", "010010", "01110", "1101", "001", "011000100", "11110", "00000100", "0010001010", "110100", "110001010", "00001010", "101010", "11", "00010", "00110", "00101", "1100", "110010", "100100", "10101", "001000100", "101000100", "10000100", "0001010111000000111110111110", "111111111111111111000000010111111000"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> code = {"011110", "001", "000111", "010", "010111", "100", "1101111", "100011", "0101", "001011", "001111", "0101111", "00110", "100111", "11111", "01110", "1000", "1101", "011011", "010011", "110111", "111110", "10110", "000011", "0000", "110011", "111011", "101011", "10010010100010100100001010010101110101"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> code = {"000000000000000000000", "0000000000000000000000", "00000000000000000000000", "000000000000000000000000", "0000000000000000000000000", "00000000000000000000000000", "000000000000000000000000000", "0000000000000000000000000000", "00000000000000000000000000000", "000000000000000000000000000000", "0000000000000000000000000000000", "00000000000000000000000000000000", "000000000000000000000000000000000", "0000000000000000000000000000000000", "00000000000000000000000000000000000", "000000000000000000000000000000000000", "0000000000000000000000000000000000000", "00000000000000000000000000000000000000", "000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "00000000000000000000000000000000000000000", "000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000", "000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000", "000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> code = {"010", "01010101010101", "0101010101010101", "010101010101010101", "01010101010101010101", "0101010101010101010101", "010101010101010101010101", "01010101010101010101010101", "0101010101010101010101010101", "010101010101010101010101010101", "01010101010101010101010101010101", "0101010101010101010101010101010101", "010101010101010101010101010101010101", "01010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "010101010101010101010101010101010101010101", "01010101010101010101010101010101010101010101", "0101010101010101010101010101010101010101010101", "010101010101010101010101010101010101010101010101", "01010101010101010101010101010101010101010101010101"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> code = {"010", "01010", "0101010", "010101010", "01010101010", "0101010101010", "010101010101010", "01010101010101010", "0101010101010101010", "010101010101010101010", "01010101010101010101010", "0101010101010101010101010", "010101010101010101010101010", "01010101010101010101010101010", "0101010101010101010101010101010", "010101010101010101010101010101010", "01010101010101010101010101010101010", "0101010101010101010101010101010101010", "010101010101010101010101010101010101010", "01010101010101010101010101010101010101010", "0101010101010101010101010101010101010101010", "010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010", "0101010101010101010101010101010101010101010101010"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> code = {"01101001100101101001011001101001100101100110100101", "0110100110010110100101100110100110010110011010010", "011010011001011010010110011010011001011001101001", "01101001100101101001011001101001100101100110100", "0110100110010110100101100110100110010110011010", "110011010010101101001100101101", "011010011001011010010110011010011001011001101", "01101001100101101001011001101001100101100110", "0110100110010110100101100110100110010110011", "011010011001011010010110011010011001011001", "01101001100101101001011001101001100101100", "0110100110010110100101100110100110010110", "011010011001011010010110011010011001011", "01101001100101101001011001101001100101", "0110100110010110100101100110100110010", "011010011001011010010110011010011001", "01101001100101101001011001101001100", "0110100110010110100101100110100110", "011010011001011010010110011010011", "01101001100101101001011001101001", "001011001101001100101100110100101", "0110100110010110100101100110100", "011010011001011010010110011010", "01101001100101101001011001101", "0110100110010110100101100110", "011010011001011010010110011", "01101001100101101001011001", "0110100110010110100101100", "011010011001011010010110", "01101001100101101001011"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> code = {"10100000000100101011110101011111", "11110010000110001011001001100010101000000001001010", "1111010101111110111111111100111100001011", "10111111111100111100001011", "11110010000110001", "11110010000110001011001001100010", "0110010011000101010000000010", "010101111010101111110111111111100111100001011", "11111011010110110010001011101011000101000110101100", "11000111101100111101001111001111111100000110", "1111001111111100000110", "0111101100111101001111001111111100000110", "1111101101011011001000101110101100010100011010", "111110110101101100100010", "11101011000101000110101100011110110011110100", "11000111011010110100111110110101001010111000011100", "1110011101000001111010111100000010011111", "101001010111000011100111001", "11000111011010110100111110110", "1110011101000001111010111100000010011111", "11000111011010110100111110110101001010111000011100", "1101000001111010111100000010011111"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> code = {"00000101111000111011110110100100011001010111100001", "00000101111100100110001101001011011110", "101011110000101", "0100000101111100100110001101001011011110", "0000010111100011101111011010010001100101011110", "00010100000101111100100110001101001011011110", "0000010111100011101111011010010001100", "10000100011111101011101101101101101", "0110110110110111100111", "100001000111111010111", "01110101010111101000011101100100011000111100010", "1101100100011000111100010", "111001110111010101011110100001", "10000100011111101011101101101101101111001110111010", "1010111101000011101100100011000111100010", "1110110111100101001111000011110001011100", "01111000011110001011100", "00001110010100111110110000011011001110111111100101", "00001110010100111110110000011011001110111111100101", "000001101100111011111110010111101101111001010", "1110110111100101001111000011110001011100", "0000111001010011111011"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> code = {"011011111001001101010010100101000100011", "0100110101001010010100010001101111001", "00100111100000000011100010010100010000110010011000", "00001100101000011011100010110100001101110110111110", "1100100110101001010010100010001101111001", "110010001101000001", "0011001001100011011111010000001", "0000110010100001101110001011010000110111", "00010000011111111110010001101000001", "00101101011110111010110101011011000100100001110011", "01111001", "1101111101000000100000011010010100011001", "00000011010010100011001", "00101101011110111010110101011011000100100001110011", "001001111000000000111000100101000100", "00100111100000000011100010010100010000110010011", "00101101011110111010110101011", "00001100101000011011100010110100001101110110111", "00010000011111111110010001101000001", "01100010010000111001100010000011111111", "0001101111101000000100000011010010100011001"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> code = {"101100110000110000", "1100101001100011010011110001010100111111", "110011111111101001111111101110101110001", "001110010001011111100100110010010111111111010011", "11001010011000110100111100010101001111110011010100", "110101001111111111010101010001010100010100011110", "101110101110001", "101101101010011010000000101100110000110000", "1110100111110011111011001111111110100111", "1111101110101110001", "110010100110001101001111000101010011111100", "11100111100110111100001010100", "1111111111010101010001010100010100011110", "11100111100110111100001010100011101001111100111110", "011101001111100111110110011111111101001111111", "00110101001111111111010101010001010100010100011110", "10110110101001101000000010110011000011000000111001", "101101101010011010000000", "001110010001011111100100110010010111111111010011", "111001111001101111000010101000", "0001011111100100110010010111111111010011"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> code = {"00110110100001011011101000", "001101001011110000000010000111111001001", "0000101011001000100", "0011110010011001111011010010111111", "010101110100100100101000001101001011", "010011110110110110100", "0000000010011011100010011110110110110100", "11011110000000010011011100010011110110110110100", "0011011010000101101110100001010111010010", "111111000011011110000000010011011100", "00110110100001011011101000010101110100100100101000", "010100110011011010111", "1111001111001001100111101101001011111100000100010", "0010101011101111010110110001010101111110000", "01010011001101101011100001010110010001001111001111", "0000000010000111111001001", "110000000010000111111001001", "001001100111101101001011111100000100010", "01010011001101101011100001010110010001001111", "001010101110111101011011000101010", "00101010111011110101101100010101011111100001101111", "010010100000110100101111", "00000100010"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 89;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> code = {"10100100001111101011110111011001001011011010100010", "000011010010100000110101010011111110011101111111", "111011111111110011000011111001101000111011100101", "1110011000011111001101000111011100101", "00010010101111011000111110010011100101101111010010", "01000010011001011111111011010110100101101001001100", "101111100001000000111000000010000001110", "10011000011111001101000111011100101", "1100001000000111000000010000001110", "00110001110000100101110101110110001001111111", "00010011001011111111011010110100101101001", "10100100001111101011110111011001001011011010100010", "00110001110000100101110101110110001001111111", "01001001100111111000010000001011111000110001110010", "101111100001000000111000000010000001110", "101000101001101010110111101010001101111000110", "0001001010111101100011111001001110010110", "00010101000101001101010110111101010001101111000110", "00010011001011111111011010110100101101001", "00010010101111011000111110010011100101101111010010", "11110100100000110100101000001101010100111111100", "01001001100111111000010000001011111000110001110", "10100010100110101011011110101000110111100011010111", "00001101001010000011010101001111111001110111111111", "01110000100101110101110110001001111111", "01001001100111111000010000001011111000110001110010", "101001000011111010111101110110010010110110101"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> code = {"00011101111100101000100101110011010101110000011011", "1011010111101010110111110101101000100101", "00011101111100101000100101110011010101110000011011", "0001111000100110011100000111111111100000000111", "10001011010111101010110111110101101000100101011110", "10010101111100100101101110011011010000101011100110", "00111100010110101111010101101111101011010001001010", "1110111001101100110111001110110000111010", "01100101001111001010110100010001111111010", "11001010100100000010011110111011001", "011110101000111101011111001011100010010110100", "1101100110111001110110000111010", "0011011001010100100000010011110111011001", "00011101111100101000100101110011010101110000011011", "00011110001001100111000001111111111000000", "00011110001001100111000001111111111000000001111000", "00011011111000000000000011010000001001100100100110", "000110111110000000000000110100000010", "100101011111001001011011100110110100001010111", "10111001101100110111001110110000111010", "0110010010011011001010100100000010011110111011001", "101000111101011111001011100010010110100", "01100101001111001010110100010001111111010111011100", "0110010100111100101011010001000111111101011", "11110101000111101011111001011100010010110100", "10010101111100100101101110011011010000101011100110", "00110000110111110000000000000110100000010011001001"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> code = {"000011100001010111000111101001011011101111010001", "00011110010111010010000011111001", "10110101000001110001000000000101101111111111011", "010100111011010100011001000110111101110011", "10110000000111010001100010001100111111110101", "111111110010111010001111000001010101000100101000", "01110011110000110110011110001111001010101101101010", "111100011110010101011011010100111011010100", "11001010001010001100100111111011", "0100010010101101010000011100010000000", "0110010001101111011100111111111100101110100", "01110110101000110010001101111011100111", "011010101100101000101000110", "111011000000011101000110001000110011111111", "11111110010111010001111000001010101000100101000", "00011110010111010010000011111001010001001010110101", "000111100101110100100000111110010100010010", "00000111000100000000010110111111111101111", "01001111110110111111111101100000100000111000010", "100100111111011011111111110110000010", "01111000001010101000100101000", "000000111010001100010001100111111110101", "0101", "001011011111111110111110110", "011100111100001101100", "101001001001100101010110001101010", "1010010010011001010101100", "10100100100110010101011000110101011001010001010001", "10111000111101001011011101111010001", "0111111111101100000100000111000010101"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 135;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> code = {"011110000101010011001000100", "11100111110101111011110100101100010101010100", "00111001111110011110110111100000111011101010101010", "00110101100101101010100001001000001011001011101011", "00100000101100101110101100100001", "11110101111011110100101100010101010100", "00010111000111111010011110001011", "011011000110100101111001001", "111011000100100000111010100111110011110", "110100111111110110100010101", "001111010011111111011010001010110000101011100110", "10011111111011010001010", "111111000100100101100011010", "0011100111111001111011011110000011101110", "1000010101110011001111000010101001100", "00100001011011000110100101111001001", "01111100110000110101010101000100101011000000000010", "110101100111110011000", "11101100010010000011101010011111", "101010101000110101100101101010100001", "1000100111111000100100101100011010", "0110101010101000100101011000000000010111001", "11000010101110011001111000010101001100100", "0001011100011111101001111000101111010110", "111011000100100000111010100111110011", "0100111111000100100101100011010"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 134;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> code = {"01100110010110010100", "10001111011101011110001100100100100", "000010100000101000011011100100", "1111100111000001100111000001111000101010100100001", "00011100110011111101111111111001110000011001110000", "0110001111000010010010010100001", "00001010000010100001101110010001011010010110100000", "10000001000001011101011100001100110010110010100", "1001010000100110101000100000001101100100", "00110101101110010001010010011100111100100011111101", "11000100000000010101100011110000100100", "00110101000100000001101100100", "11010011101110001010110001101011010000110", "0101011011011101110011011101011001", "10010000100010111110011100100001100111101000011111", "01111000101010100100001010111011100010", "0000111110101011011011101110011011101011001", "010111011100010100000010000010111010111000", "01011010010110100000100", "00110101010010000100010111110011100100001100111101", "000111001100111111011111", "011110111010111100011001001001000011010110111001", "1000110110001000000000101", "0110010000101100001111110010111100000000000110011", "011001000010110000111111001011", "0001010010011100111100100011111101", "11000000000001100111000110", "11010011101110001010110001101011010000110001101010"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 268;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> code = {"1100000", "1100001", "1100010", "1100011", "1100100", "1100101", "00000000000000000000000000000000000000000000000", "1100110", "1100111", "1101000", "1101001", "1101010", "1101011", "1101100", "1101101", "1101110", "1101111", "1110000", "1110001", "1110010", "1110011", "1110100", "000000000000000000000000000000000000000000000000", "1110101", "1110110", "1110111", "1111000", "1111001", "1111010", "1111011"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 142;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> code = {"00010101110101", "10101010101110101", "1011111111111101110101", "1000000000000101110101", "101011111101110101", "10101010101110101", "10100101110101", "10101110101", "10101010101110101", "10101000001110101", "10101010101110101", "10101010101110101", "101010111110101", "101111110101", "10101010101110101", "10101010101110101", "10101010101110101", "1010000101110101", "10101010101110101", "10101010101110101", "101001110101", "10101010101110101", "1010111101110101", "10101110101", "10010101011001101010", "010001101101101", "100011011010101"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> code = {"00000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "1101010101010", "1110101010101", "111110101010101", "111111010101101"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 148;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> code = {"0001101", "001011110111", "001111101011101111", "1110011111001", "000110100101", "111011", "1001111101011101111111", "0011111001", "0001101001", "01111011100111", "1101011101111111001", "1111001"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> code = {"0", "0"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> code = {"1", "10", "100", "1000", "10000", "100000", "1000000", "10000000", "100000000", "1000000000", "10000000000", "100000000000", "1000000000000", "10000000000000", "100000000000000", "1000000000000000", "10000000000000000", "100000000000000000", "1000000000000000000", "10000000000000000000", "100000000000000000000", "1000000000000000000000", "10000000000000000000000", "100000000000000000000000", "1000000000000000000000000", "10000000000000000000000000", "100000000000000000000000000", "1000000000000000000000000000", "10000000000000000000000000000", "100000000000000000000000000000"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> code = {"111111", "00000", "1111111"};
    BinaryCodes* pObj = new BinaryCodes();
    clock_t start = clock();
    int result = pObj->ambiguous(code);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7210680&rd=10936&pm=8247
********************************************************************************
#include <string> 
#include <vector> 
#include <set> 
#include <algorithm> 
 
//#line 126 "BinaryCodes.cpp" 
 
using namespace std; 
class BinaryCodes 
{  
  public:  
  int ambiguous(vector <string> code)  
  {  
    set<vector<pair<int, pair<int, char> > > > statedata; 
 
    for (int i = 0; i < code.size(); i++) 
    { 
      if (code[i].length() == 0) return 0; 
    } 
 
     
    vector<vector<pair<int, pair<int, char> > > > states[2]; 
    vector<pair<int, pair<int, char> > > state; 
    state.push_back(make_pair(1, make_pair(0, code[0].length() - 1)));     
 
    states[0].push_back(state); 
 
    bool now = 0; 
    int len = 0; 
    while (states[now].size()) 
    { 
      states[!now].clear(); 
      for (int i = 0; i < 2; i++) 
      { 
        for (int j = 0; j < states[now].size(); j++) 
        { 
          vector<pair<int, pair<int, char> > >& fromstate = states[now][j]; 
 
          state.clear(); 
          long long countstart = 0; 
 
          for (int k = 0; k < fromstate.size(); k++) 
          { 
            countstart += 
              fromstate[k].first * (code[fromstate[k].second.first].length() - 1 == fromstate[k].second.second); 
          } 
 
          long long sum = 0; 
          bool ok = false; 
          if (countstart) 
          { 
            for (int k = 0; k < code.size(); k++) 
            { 
              if (code[k][0] == i + 48) 
              { 
                state.push_back(make_pair(countstart, make_pair(k, 0))); 
                sum += countstart; 
                if (sum >= 2) ok = true; 
              } 
            } 
          } 
 
          for (int k = 0; k < fromstate.size(); k++) 
          { 
            if (code[fromstate[k].second.first].length() - 1 != fromstate[k].second.second) 
            { 
              if (code[fromstate[k].second.first][fromstate[k].second.second + 1] == i + 48) 
              { 
                state.push_back(make_pair(fromstate[k].first, make_pair(fromstate[k].second.first,  
                  fromstate[k].second.second + 1))); 
 
                sum += fromstate[k].first; 
                if (sum >= 2) ok = true; 
              } 
            } 
          } 
 
          if (ok) 
          {             
            if (statedata.find(state) == statedata.end()) states[!now].push_back(state); 
 
            if (len) statedata.insert(state); 
            if (countstart >= 3 && len) return len; 
 
          } 
        } 
      } 
      len++; 
      now = !now; 
    } 
 
    return -1; 
  }  
   
  
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/