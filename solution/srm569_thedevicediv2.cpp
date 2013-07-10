/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12399
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

class TheDeviceDiv2 {
public:
    string identify(vector<string> plates);
};

string TheDeviceDiv2::identify(vector<string> plates) {
    string ret;
    return ret;
}


int test0() {
    vector<string> plates = {"010", "011", "000"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> plates = {"1", "0", "1", "0"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> plates = {"11111"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> plates = {"0110011", "0101001", "1111010", "1010010"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> plates = {"101001011", "011011010", "010110010", "111010100", "111111111"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> plates = {"0", "0", "0", "0"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> plates = {"0", "0", "0", "1"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> plates = {"1", "0", "0", "1"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> plates = {"1", "0", "1", "1"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> plates = {"1", "0", "1"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> plates = {"1", "0", "0"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> plates = {"1", "1", "1"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> plates = {"0", "0", "0"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> plates = {"1", "1", "0"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> plates = {"1", "1"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> plates = {"0", "0"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> plates = {"1", "0"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> plates = {"0", "1"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> plates = {"1"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> plates = {"0"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> plates = {"1100010110011010011001101000010", "0101100111111000100010000010000", "1110001110001001011110101110001", "1101111110010001000100111000010", "0001010000011010001100001010010", "0010101100101010010111010011111", "0001101011111111100011001010110", "1010001100010111110010011111111", "0010110101100011110101110110010", "1100001110001011001000100111100", "1101000111110111001100100111101", "1101100110110001111110000000111", "0100101100101010100101111001011", "1000111010000001010001111010010", "1011010010010110111001010100000", "0000101000011000010110110010000", "0011100100111011111111101111100", "0001111101000110101110011111111", "1110101000001011101110100110010", "0010101010100010101000001101000", "0110011001011110000011111111110", "1111000111010110101000011010111", "0000101100010000001011011110000", "1100010101110001111101011101001", "0011000100111110010110001001001", "0001010101010001110101011010001", "1110110100111110000110110000010", "1010011101111111001100111100001", "0100110011000100111001110011110"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> plates = {"111000101001", "011000011011", "011100111001", "110010101111", "111101001000", "101110110001", "000010111010", "001001001101", "001001110011", "110100100111", "011101100101", "101001111000", "001110011001", "100011000010", "011011000000", "000010011100", "011111101001", "001011111011", "010001010101", "000001111110", "001110001110", "100000000010", "011110010111", "111011110011", "100110010111", "010000001010", "111110001011", "001111010110", "010101110100", "111001110011", "001111010110", "000101001011", "111101011100", "110100111101", "110000001010", "010001110101", "011001010111", "111111101001", "011001010111", "000101101111", "001010100100", "001101000000", "110001111011", "111000110110", "101001000110", "011001000111", "100010011010", "010010001100"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> plates = {"01000000111011001000010011", "10100010101011010100010110", "01011110100010001111011010", "10110010000011110100000110", "10011111011011011111010000", "00110101011110100001000101", "11001000001001010001110000", "01100001100010000100011100", "10111100100000000110001010", "01101001111010001101010000", "01111100101110010110101111", "01100011101110101100110010", "00100011101011100001101110", "00111110111101001010000011", "00010011011001100110010111", "11101110010111011101001111", "11001011011000010111101101", "00110110011111010010110001", "11101001001101111010101100", "11101011111101000101110110", "00001011010101010101101111", "01101011100001000010101100", "10100101000000100001011011", "11001011101111011011111000", "01010110000010000000000101", "11000011110000110000100110", "01001100100011010000110111", "10000001000101101100100000", "11111011111101011011011110"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> plates = {"0101100010101111010100000100010", "0111111101011011100010001100110", "0011000101110001000111000111011", "1010010101111101010111001001101", "1010101100111110111011010000110", "1110111110000010110001111100100", "1110111110100000011111111111011", "0111011011001110101110000001000"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> plates = {"0000011101000001000001100100010000010110000000", "1011011011110111001010110000011010110110001000", "1010100010110110011111001001000001111011111110", "1010101110101011101100100011000011100111001111", "1011101100110110011101100001010110001000101001", "1100010000110111000000000001110101110011100011", "1110110001010110010100101011010011010001111000", "0001001111001010110100001100000100001111000100", "0000010111100110110100101100101001010101011001", "0000100101001000101110011101111010010010100001", "1010011110010100100001100101001011100101111101", "0010101010100010000010000111111001000001100111", "1001100101000010010101110111101110100000110100", "0010000110111001010000110111110100110111110011", "0011001011001100110000110001100000111001001101", "1011010011101010111110101000101100011111010001", "1000111010010110110001000110111001110001101010", "0001111011110100011001000101010110001001100010", "0111110001011100111000101110010010110010011000", "1111101111111111011000000101100000001000110111", "0000111000001100010110111110010000010100100110", "1110000000010001010100001110000010011011101101", "0101100101011001111101111001000001101100010101", "1111110101100001010000010001011100000001100001", "0011000010100101000011011001111111000001101111", "1010010001000111010001110001000101110010000011", "0111101010011000010000000111110100001011110111", "1010001101110011011001010011010000101011001101", "0000010000110011100101011011111010001000000111", "0101000111011101001001101100001101010011110001", "0010111000000001010110011001011111011100010111", "1111010001001000110000010111110001011111000100", "1110010100000011111011011001100010111010101001", "0100100110010110001011001111010011011110000110", "1111011000011110101111000000000000111100000101", "0101011100110011101101111011000001110001110010", "1101111010011001111001010001011101110111101101", "0111001100101010100000100110011000001101110001", "1110010101110100100101000010111101010001100001", "0111111110110111000000010010000010100111111100", "0110001010100000010000011100010110110110110111"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> plates = {"0101110000011101110101100000101010", "1000110110011010110111101001101111", "1100010001100100001001001111111101", "0001001100000000111110110011010100", "1110000111000000001000100011011100", "0010001000001000000001110111111100", "1010011000001000010111100011101100", "0000001110001000010000111001110010", "1100101010100001010010011101101111", "0100000010010111101111101100000010", "0111101101001011110001000111000001", "0110111101011110111100110101100011", "0110011101101011111010011111000111", "1011100011010100001110101111101000", "0011010111000011001101001000101000", "0010010111101100000111101000101110", "0100001001100100000101000010011100", "1011010100010011110011010010010111", "0110101110011111111000100010111110", "0101100010111101001000010011111101", "1000100000000001111111110010111101", "1101001111010001101101110100010001", "0000100000100101010011101000011010", "0001100011110001111100101011110001", "0011111101101010110100110101100100"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> plates = {"010110011010000110011101010", "110100111001011000011001111", "011011010111110110101011000", "010110100110110000010101010", "110010110001001010011100101", "011011111011101010100001001", "100010101111100111010111001", "100110101110100101001010100", "110101111110000000011111011", "111100100101000100011111011", "001000010111111000110001001", "100001100000010010001001001", "001011101101011110010000110", "100010110010111111100010101", "110010011011101011110110011", "000101101100001111100011110", "111010101110101001100110110", "101111100011000010110111010"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> plates = {"010011101101000000001001001011101", "111001011010000100010001001001001", "010010101100110101101111110111100", "101010001000100110000110011001101", "010110100100111001001000000001000", "000100011100001101011001101000100", "010111100010100111111001110101010", "111001101110110111000011000001101", "111110011010010101101101100111111", "000110101000100100110000111101110", "011111010001100011010110011110110", "010010111001100001110101110110000", "010010100111111010001111111000111", "110001111110111110010110101100010", "011111010010001010111010110110101", "001001101010111101010001011101001", "010010110010100111000000100111100", "000010101010011000000100001000111", "010110101011011000011011100110111", "101100010001101100100111100000010", "110111010011010100111001111001010", "111101110010011000000010000101010"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> plates = {"010101100000110110111010110", "000110110000001100110011111", "111011001100010011011101101", "010101001010001000100100001", "110100111111110110001010111", "100010100001110011001110101", "100111111100000100101001000", "001111101001001010101111010", "100110010101110011110001000", "010101111001000001001001110", "100001100011001100100101101", "000100110000110100111000100", "101111100111010010010011010", "010111011111100110000010000", "010111000110000000110010011", "101011100100111101001000111"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> plates = {"00101100000010111110001010101", "11010010001011101011000100110", "11100111011101001110101100101", "01001111010100001110011001100", "00000011000011011100010001000", "00110001010001000111110100011", "11011011110010000110011111110", "10100010110000100001100010101", "01110100110111111100110101110", "00110011011010101000100101000", "00101111000110101000100110011", "00101010010100011001001000100", "10011010101001101100011110110", "01111111001011000011011011000", "11011010000111001101110010001"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> plates = {"0010110011111001001110100001100", "0101011001101110000111101100100", "1011011111000010001000001001011", "0111100001010100101011010101100", "1101001000001011100101111011101"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> plates = {"101011000111100011100100000001100", "111100110101001011110000011011110", "000001101100011000000001111101000", "001001001001011001110001000011101", "001101000011001011110111000100011", "001011001100101101011110001001011", "001011110110111110001100110101010", "010100010110000011101101100011111", "001110111000111001001011101111000", "010100010110111001001100001111110", "001000011110110100110011111110110", "110010101101110100111000000110110", "110111010110111110011000110100010", "101100101010010100100111101000011", "101001111111001110110001010101110", "100000111100100011110111111011110", "100110100001001110010010100001110", "100000010000010001101010101100110", "000010001111100111101110111001000", "000011110011111001111100000111010", "111001010110100101101101111001000", "110110111111000110000101100000101", "001001111111001000101111101011001", "011100101111101001100011001111111", "000010111011001111110011101000100", "000110101110010100101001110100010", "000101101000110101001001101110101", "011010111001001010011100011011000", "011110100111110101011011001100001", "001100111110010100000011110011010", "011000111010011111111100101101010", "110011011100001110010100001000001", "010001110111010010100100101010111", "100000101011101010010100011000011", "010101110110101100100111000011001", "100011000100000111011110011001100", "111100100100111001010111111111101", "011011101010001001111111110010101", "000101000010011010100101001000100", "001011110101110101010000110101001", "110110110110000010111010010101000", "001101010110000010111011011000111", "000001011010010010110011000110011", "101010100011001011101001100000000", "010110111101001000001110010100110", "001101001110111111111101100011001", "100100001110011111001011010011100", "111101101111000110100001001010010", "110101010010111100000011011111010", "011000010111100100001101011100010"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> plates = {"0111000101100111100011111011010010101001011101011", "1100111110000011011000010011111111101110110000111", "0010010110000110010000010011100101001101111011010", "0011101011001100111010000111011011011001011001011", "0010111111010111110000110100101111110101110000010", "1111111111100110010011110000100101011111110001111", "0110000110001001101100001000011111011001000000000", "0111001110011011001000101001101110100001101010110", "0100110100000110010010001011100101010001011001101", "0101100011000100111110100001011110011110110101110", "0000000010011000000010010010111001000010001011011", "0101000101000001110101101100110010011010011111000", "1111111001010010000000011011100110010101101110010", "1000111000001010001000101000011000000000011010000", "1010101011001110111111100110000101010001001000001", "1001001001111000011100111000011000110101100110011", "0011111100101001000101010001100111101101011010110", "1001110001111000001110111010101000100010101101010", "0110101110011000011101011001001100100001011010111", "1111100011101111011101010110111111011010011000001", "1111100001010100001100110001100110100000111011010", "0010101000011010100000011011101111100000100101010", "0100111010011001010011010001001101010101110011001", "0010010101100000110011110001011101000100111101101", "1101001001110011010001011110011111110010100000101", "0100101111010010111100111001111010101011100010110", "0010001001010100001101010100110011101010001110100", "0011001111010001010001011111010100001111001000001", "1010111000010010110010100001001100000101101011100", "1111001011111001000110111110111001110011000001101", "0101100000010100111001111101100001111101010000010", "0111100100011110000110101001101001101010111111111", "1110101001111000001001011101101000101110001111010", "1100100100001010111000011011100010101101011001110", "1100101011010100000001100110111011010010001001111", "0011111111001111100011100111100001111111011110011", "1000111111110010010011100010101011100100100001111", "0001101111111001001101100111000111011110100101011", "0010111111111001011011001001000010010111010010100", "1010111101001111111110111101111010011110101011010", "1010111111000001000011101111001101011000000111101", "0101111010000111110100100011110100001111010011110", "0111001010111100010010010110111110000011100000010", "1110010110001110000101111000111000100101000001000", "1011111101100011000010011101000111111110001010101"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> plates = {"0001100101101000011000", "1111100001100101001111", "1101001111101011000100", "0111110111101001101001", "1100110100011111100011", "1111100010000101110100", "1100010101001111000000"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> plates = {"0001011100101100", "1110110101001001", "1110100010001111", "0011000100010101", "1001000101001001", "0100011110010101", "0101011001011010", "1100111011011011", "1000001110101110", "1000100011001000", "1101110101001110", "0011010100010000"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> plates = {"010111011110101101100010111100101100", "111111111100011000100010111101010011", "001010111111110001011101010000101101", "101010011011101001010010010101101000", "010011001111110011000001101011011000", "111101001010101010000001011100100010", "010111101000101110011010111101011010", "110011011010000101010101111101011010", "101001111111010000100101010010000101"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> plates = {"01100101001001111111100101011100110", "10001001011110011110000000110000100", "00101101101100100111100100001100001", "00000100001010100101111000111110010", "10111010000100001000110111011101000", "01100011000001011111000010010100010", "01100100110110101011010010100000011"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> plates = {"10010100000011001011010110001100011011101", "11001001001100000111000011110110100101111", "00101000010110111101111010001011111010111", "10000000111110100111010100000101000010010", "11110110100000111011100000111111111110010", "11101100001000000100111000000000101110111", "10010000100000010100010001010001001111100", "11001001001010011111111100010111001001111", "11100011010100110110101011011000010001011", "11010100011101001011111001011011001011110", "00011000001110101100110001100100100110010", "11101001011001110011011001100000000111110", "01000000001010001111001100011100011011111", "00011000101110001000001010001110000001000", "00011101111001011111000101101110110001011", "11101110000111100110110001111110100101110", "11011110011100010100100010011001100110110", "10000011100111100011101100110111111000001", "11111000100010010010101110110000100000100", "01110100100000000110110100100110100100111", "00001100110010011001010110010101011110001", "01001011001101000101101001000101011000010", "01101010110100011011010110100010110111101", "00010101101111111010000001110100111001000"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> plates = {"01000010000011010011000111001101", "00111110001101110011011000110110", "10011111111010100001110101101010", "01000001111100100011111101111110", "10000101001111101001010001001101"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> plates = {"110001001110101010000001101010001000000111101", "111111000000101011001111111000100000100111110", "010011111010000010011011000001000100010111110", "100111011110111101111111110010000100000010010", "111010101001010001101000101000011010001001000", "010100111001011000100011001000001010100000011", "100001010110011111011010100101000000101100100", "000010010110101010110101100100100001010001110", "110010000010100010111011110101010101110101000", "110101100011010010001110010110010110110100010", "100000011000001001011110101110001111011110101", "001001011000010000000010001011101101000011110", "111110010111010010000010000000111111110111011", "110111010010010110010110010001001110101010001", "010101111111100001010101111011011101011111011", "011101101000001110010110001110010010000011100", "111111011001001110001100100111101010001111011", "101000010100100011110111101101010100100100010", "110100101001101111011010100101111000000100001", "111111110001001010101011100011011100000100101", "110010001010011100010000010101110011100100011", "110110010000110011011101011001100000110010100", "011100101000001101100110111110001111000011110", "010000101101000110000010101101000110011111001", "100000110101010000010010001000100110111001111", "010010010101000101111011100111110000011010010", "111100011100001001101001001111111000110100100", "101001101100001010000001000011010011011011001", "100110010100100011111100010100010111010110011", "110100100101111110110001010011110101010001000", "010001110100100010000000010001011000100111111", "110010100011111100001100000110101101011001000", "010110100101111100110000001100011101010110010"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> plates = {"0111110101110111000001011011001111001000110111", "1010000100111010001001000110001010110001110011", "1101111101001110000100111010111110000001101010", "1000101100000100000100100100110111010110100100", "0111001011001111010111100011100000000010010000", "1100010010110000010010011001001101000011100110", "1110010011100110001100000100101011100010001010", "1101110111010101001101111010101110110111110111", "0100100110001101011101110011001000111110110110", "1010010100101101000101101100110111100110110101", "1111001111001111001110101110001111100111001010"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> plates = {"00001110000110100100110000000100110100111010001100", "00111100100001110100010000011110001110101110111010", "01101011111000010101001010101011111110010110010011", "11101111101000100011010110001000101100110111100100", "01111100100100010101110001000001010011101100111101", "10000111110101110101001001110001100101111000110101", "10000001100000101000011011011100010001011000011111", "11001001101110001100010011000100011111101000110101", "10011011011101110001101000100010011101000111000010", "11101010101001010101101101110101100111001010011011", "00000011101111101110111000101101110110110110101011", "01001000111011001101010001111101011001111111000110", "01100010111111111100101000001101111010011100111101", "01110001010010110001001100001101111001010111100101", "10011010111000001101010111001101011010000010101010", "00110100000111010101111011011101101101001101110100", "10001001101000000111111111001101000111101001110110", "11010101111001100010010000000111110010100000111010", "00111110011100100010010101111001101111011110101000", "11001010011010000011000111101000011000110101011101", "01111001011011110000101001001101100111010011110001", "00001110000111011010101111101100001110010011001011"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> plates = {"010001001011101101110001010001000110100100000010", "100111111111001010001110000101011010001101110101", "100000110011000110001010101011000100011110101010", "111001011100011011011001010100000110010001000000", "001101111111001000100000001010000110110010010100", "101001011010101100100000110110110101101011101001", "110100100011010110001100000001111001001010000010", "001000100110011100011111101000010001111100110101", "011110110010000101010010100100101101011000001101", "001111101001001001000111001100100111010000010011", "100011000110001001010100111010110100011010011011", "110001100011001000011000100111011010100111000110", "011000010110010100111100110110001011111011111010", "001010001110001101100010001010000100011000111000", "010101110010110100101111101100011100000000111000", "101110010010011111010001101000001010100010011101", "111001010010010010110110000000010011100001100100", "110000011111010001011101000011000011001010011000", "110110010111011000011010001101010010000101110111", "010011100110110001000110011000110101101000001111", "100101101010110000100100001100100100110100000011", "000010101010110110001000001100000001001010010001"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> plates = {"11111110111110001101001101011100010110010001110", "01001101110000110101001001010101111110011011011", "11011011000101001010111100100111011101100000011", "10111100001011001011110111111010011101100100110", "10011010000111001111100011111100110110110110100", "11000111001010110010011111110111100101101000100", "01001111100111110100100000111000101010101110010", "00110111110000110001101000010110101010001100010", "11101101010111111010101100100001000011100110100", "00101001100000100110111100000101100101101001101", "11000101011110011100110110101000011001000110010", "10011101010001101001000000100001110100100011100", "11011001011011010010011111100111010011010110111", "00110001101111100111001000100100111111100010010", "11101001001001011011110001010101100001011100000", "10001100001001010101001111110101111011001011101", "11100101100111111011011101110011010001000001001", "00001010101001111101101111010101001100100001111", "01101001110101100011111010111010010001110011011", "01100100101010000100010001100100000001001010010", "00111000111100111000110001111110001001110011100", "01001000001101110110111111101110011110001100100", "01100010010100100011000111001011010000101000011", "01011000100110110001000000001010110110111010001", "00101111110000001100000000111010010100000000000", "00101001100110010011000001011100010010001100010", "10110001100111101111001110111000101101001110011", "11000001101111100010111000001101010101011100011", "00001010100000100011101110000000111101000010001", "01100010110011010001110011100001111001101100110", "01111001000001010111010011100111100001110010010", "11010101111001111010010100001001100111100110010", "10111100101011010111101011000000101101010110011", "10000101000111000111111011111000111000100110010"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> plates = {"11101111010111011100111100101011100010111100100000", "00010111000101001000011010101100000110100010110010", "10110001110010101101110001010111011000000010010111", "11110100101111011100101011000010101110101101011101", "00101111001000000101001100100110010000110101011010", "11100101101111010011010010011011010100010101001111", "00110011011001100001011011110010101011110100101100", "01101000011001000101011110011011010001001011011000", "01110111111101011110001111111010111111010110011101", "00000101011111110000101010111001110100001101000101", "11100011100010100110001101111110011010100111101001", "10010101100010100101011100101000100101011011110010", "01001101101110010111110000101110110000010101001101", "01000000110111001111111010000111001110000110110110", "10010110011001111100111111110011110011101101101100", "11000101001110101001000111111011000101101000011110", "11111111010000011011111111100101000001100001110100", "00100111010000110001000110100001111100010010110000", "01011101000101101010010010011110100100111101110100", "10011100110100001010011010000011001001110100110000", "01100100000110111110010010110010000110000000001101", "11100010011101101110010001110010010010011101110001", "10100000001101101110001011101110111110101001000101", "11011110111101011111000001100001000010000101110100", "11101100010111101111111111100011001101101011111010", "11101100011101101111010110101100110000001000011001", "01001111010010000001111111000011101100011101101111"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> plates = {"0010100001101001101010011001100011000110100011", "1110101111010110110011100001011100011100010101", "0011111100010111100110010111000111001101100000", "1111000001100011000100110001001101111110101001", "1010110111011011001010101001110011000010111110", "1010011000110111100000101101011011110111001101", "1110101000000101111001000000000010011001100000", "0100101010001001010101100101000111110101011010", "0011001101001101110100011010110101000101110100", "0000001111011010110010000001101110111001001111", "1100110101101101100000100000111001101011100110", "0111101100101100101100000010100001011100011110", "0101001101011000110001011000010110111100100101", "1001100110011001011011001011010010111101110100", "1111011011010000011001011111001010100011010110", "1101100001001110101011110000000000101101100100", "0000000011110000010010011000101111100000000100", "1100001111001000111111000101111001000101100001", "1100011001111110101000111100011111110100000111", "0001010101101110101100000010110010101111000100", "1101100101100000001110100000110100001111010100", "0001011010011001000100110010100111000010001100", "0100110100111110010010001001011101111010110011", "0111110110000000101011011000101100100110011111"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> plates = {"11111010111100000111100011110001010010100011100", "00101110001100110110001010111111000101000010100", "11010010000111110010001011100110100011110011101", "10000001100010000001111001101100011110110000010", "10111100111111001000110110001001011001010000011", "01111010110001010100101110111000010001111001010", "00100100100001101101010110110001001001110010101", "10100101001001110000001011110101001110010110110", "01110101110000010111011100000011010111010011001", "00111001100000100000100101100000111100011110101", "01000000010100111100110110111101100010000010011", "10101111001111101101000101110000000101110001000", "00001011111011010011010111000001110010100100100", "10100111000110110110111001110010010001011111000", "10110011010011110110100011101100111011100101010", "01100110000000000001101010111011001100001110111", "10001000101011011110001111101001100001111010001", "11111101111000000011111011111011001011101010110", "11110011001101011011111110111111011101011110111", "01111111111000011011010111111010111001011110100", "01001010011011011010100000101101010001010011001", "11101001111000011110000110111001110011110100110", "11101001110000000101001101111010011110100010100", "01010011010011110101101101101111000010001101100", "10111001001110010110101110010100110101001000100", "00101111110100001010010011001000011111001101110", "00001100100001001011101011101000000110110000011", "10100110000110000001101100111110100110100000001", "11100010000110000011010011111001100101110000101", "10011011111001000100110000101010001100011111100", "11001010001100010010011100000101101011000011100", "00101001001110001100011001110101010010011101110", "11101001100001101001011001101011100101001001100", "10100001110101101100111001001011110110000011101", "10100001110111010011001111101111011000110111111", "00111111111100101110111000111001101001111010101", "11010110110001000010110100110100100000101100101", "11100110001011001000110110000110100010110001000", "11010010100101010100110011100110101011010101000", "10101101101111101010010001110010100100111110101", "10110001011010000011110111011111101101010111111", "10100001000110111010001101011101110101101011010", "10101110100101100100100110111100101111001110011", "11001010111100101010100001110011110001110001011", "01001000111101110110010001111100111110100010001", "10110100011111111001110101010011101011100111111", "01010111110001111101101110000110011111110101110"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> plates = {"100111001001010001111100100001010101001001000101", "101000111100001100101111100000101011111110100010", "101010011100100100101010101111111011100110111101", "011000001110001000100111000011110111111100001111", "000110000111011101000001000001011101111100101000", "111001111110101110010011111110100101000001001011", "000111101001101100000111100110100101010110101010", "111100011000111111111111111001111110101101010111", "101111010111000011110010110010111110111100001000", "100001011010001110000100010000101000010111001111", "011010100011000001001011100000110001000000001011", "110100101010101101011100011110100110101000000100", "101101110011111011100000000000110011001011111110", "001100000010001010101100000000001111011011011100", "101001000111111001111101100110001001111011011101", "111101000001000110111011010001010101011111100110", "100110001111100100010101100111011010011100100011", "001111100110100101001111100100111000101001111110", "100010000011000101101010010111010111010101011001", "100011011001000111111101100011110110111001110111", "110001111101000101111111110111011011010100101111", "100010111011011011100101101100000010011010100010", "111100110011100000000100111110000100011111001010", "101111101001100110000011111001010010001111111110", "000101000110100111110001111110001001010101101011", "101110101101101011000001111101100111001100110110", "011100011000101111011000001001101101000001000111", "001010000100001100110000100011000001011001001010", "010100011100111110100001001011000100111001110001", "100101000111101000111110110110100001000001010101", "100000001110010101000001011111000001100010100100", "001101000010110000110101101110000000001010111010", "101110101101011010101101010110011100000010001111", "010011110111011000001000111110101100000101001110"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> plates = {"0010010101000111001111000011011110111100110001", "0000100000100000101000011100111111000000100110", "1111010000000100100010010100111000111010100100", "0101001000101010011011001100101001010001001110", "0011011011001011101111101001111011011100101010", "0101011011001011110111011100001100010110101111", "0010000011011000111101111111011100011011100010"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> plates = {"00010111100110001000111111111101111101010100011", "01111110111001100010111010011111001011001111011", "11100011011010111010000010101100101001110001011", "00011000001001011011101001110010100101111011100", "01101010101100111100011100110111010111000001010", "11111011010100100100110100110001000111011100111", "01110010000000010101010100011110000110011000101", "11010101010011001111000101100011111000010101011", "00010110001000010000111000001001011000111110111", "00000011000011111010011010011000101001110111111", "11011011101110111000110100101010101010110100110", "01110110001000101010111100101100001111000001111", "10001110100010010101000110110001110110100110100", "10001010111001101101001010010101000100110000110", "00101111110111001001001101001111010011111000010", "01011001111001100011101101100110000000001000000", "11101101000100011001100010001110001101101100100", "10110010100110101001111110101110101100001000100", "10000011101001001110111100110010010010000011111", "01100111001100010110111001111011101100111000111", "00010000111000000101101101110011110100010001100", "10101110011100101000100111010010010100011111100", "11100111100010101001101110000011100011101100000"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> plates = {"100001101001101111011101110011011101000011110", "101101011101111100100111110101000101011101001", "011100000010101100100001101000111100101001000", "100000000000001100000011100110010001110010110", "111001101011110100111110011010011111111110011", "101011100001001110010000001001101011000010001", "101011111101010010000010110111111010001011001", "111001000001011001011000110010100111000001110", "100001010011110110011001100010111101101100000", "011001111110000111000111101010111011110010110", "001000100101001100001100110010011001000000010", "100010000101101010111011101010100000100110110", "100010010100011001000100001101011010111010000", "110011100110101100000011001101010101011000010", "011100100001011011010011110011011111000111001", "011111110001100110010010100001111011110000111", "000111100101011000000111110000000111111101101", "010110111100100111011011000001011001100100101", "100011000001011110010011100100011111100111010", "111111001000001001000110011011101000111100101", "110111010000110011010100111010111000100001001", "110101100010100000111111111110111100001001101", "111011100000100101101110000010011101010000110", "011011000111010001111110011111001010011001010", "110101100111000010110101110011110110100111000", "111101010010110010000110101011011111100011011", "100101111100010100100111001010000110101010010", "000111101000001000110001011010101000010010000", "010110101111101010001111100101010011101110011", "101100010001100100010001110101110100011000001", "000000110001101110111001101111110110011100110", "101100100000101101011111100100001110000000000", "010111010001111001110111011001011110001001101", "001011101111101000011111011000101101011011011", "010100110111101011011101110000010001111110000", "100011100000110000000100110000101010010001111", "110000010100110001101100100001110001011001101", "100100011000111111101011001110001111100000010", "111100110011101110000011001001001011001110010", "100111010001101111011100011100000011000010110", "101000010001011101000110000000111010110000101", "010100011001101110011001101111110011101110000", "101010011011001101010010010110111101000010110", "001001100011011001000110101111000100101010001", "101010100111011000011001101111110101111011110", "001011110010001111000100101010100000100110001", "100000010100000011110000011010010110011001100"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> plates = {"1000100101011011101100000010101110", "1101110111100011011101001110011001", "1101001111110110010100001110111001", "0011001110000101011101000000011110", "1110000101101101010010010110111011", "0001001000101010100111010011110001", "0000111111100111010101101011001011", "0111011101001101101100101111110010", "0000001110111010000010101111011001", "0101011111110000000011000010011111", "1010100101010001011101110110101000", "0001011100000000000010100001111110", "0101000101001010000001000100010110", "1100001101011100110010111010011111", "0111110010000101001001010010111001", "0110000101110110110001110010101011", "1111001001001111111110001101100011", "0001110001001010110001010010000001", "0101110011010000000111011101010000", "1000010011110011101001101101110101", "0001110000000110110010011111010111", "1000000011101010001010000010000000", "0111110011101101101111110100111011", "0001111001110000010011001010011110", "0100110100001010001101100101100111", "0011101110110101101101110100111001", "1010011001011011101110001000001011", "0000101110110101101101111100111010", "1111101101011101101000111000000011", "0011000111110100100001111101101110", "0011110100011101001010000001001111", "0001101110110111000010111011010001", "1000101001100110011101001010111111", "0101000110101110011011000101011111", "0100101100100110101110010011100111", "1101010100111111110010011000110010", "1001101110010111001010110110101001", "1010000010101010000111000010011110", "1011001100110000111111101010100001", "1011011000101000011110101111011010", "0111110110010111010100110000100111", "1110001000111110001111001101101100", "1111100101110011010010001010001101", "1000001011100000101000111111110111", "0101110001010101011110010010011011", "1100111011000101101011101001001100", "1000111001110100110111110010000011", "1101011000011000111010010001101110", "1010100010101000100100001100111011"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> plates = {"011001100000110010101011010010", "001100010110011000000111111010", "111001101101010000101111100011", "001010001000100011010101011001", "100101111101110100101111011001", "101011100101010011010000101110", "101110101111111111011110011111", "111111100111100111100001101100", "100110110100010000111010000010", "111110000000011001111011100101", "011001000001110110000111011011", "001101001101010011000000111011", "111100110110001111010010101101", "011110111000110110010111011011", "100011111001111101111000100101", "010100001101110100111111001101", "001010000111010011111111110010", "110000101111100000011101010000", "111000000010010110111101100001", "101110010001010000011001001010", "110110101111111111111011001111", "110011111100011111010010100100", "011010000110101101111111001111", "001000001011011101101001001110", "010001010010000111110011010000", "011100011000000010100010101001", "011111011010101010010000001110", "111010110100101101001100111110", "101011111101000000000011100100", "011101101001011000000010000000", "011000000001011010001001010000", "110011001000011100001000000011", "100010010011111001001111010011", "001010111101110110101010110110", "111010001110110100100101011010", "011001011101011010010001101000", "110111001110001101001111100010", "110111000100101101000000100100", "011001100100101010110101000111", "101110001110111011001011101110", "111111000011011111000101100011", "111101100100110000101000010010", "101110100110011001000100101110", "101100000000011100011110110111", "110100100100000110000011000101", "101001100101011010011010100101", "011010111011011010111011111001"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> plates = {"111110110001", "110110110111", "111101000101", "101001100011", "111000011111", "100001110010", "111011100111", "100101010001", "110001001000", "000100101011", "010100011001", "101011000001", "001100101010", "100010010010", "111101101110", "110100100110", "000010011100", "010111110000", "001010100001", "101011011000", "101001011001", "110010011111", "010111111100", "101000111110", "100100011000", "101001101001", "011000011110", "101110101011", "100001010110", "101000010110", "010000101010", "101110101101", "111101000010", "011011000010", "100010111111", "010011011111", "001101111000", "110000011000", "111110100100", "010000001011", "100110010110", "111101001010", "101010011010", "010111000000", "111110111000", "001000001111", "110001110101", "000011011010"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> plates = {"1011101010100011", "0101011010101001", "1100001001100001", "1001111111101000", "1100111100011010", "0111101111100010", "1010001000010000", "1101011111000110", "0111100101000010", "0011111010001010", "0000101100111001", "1101111001000100", "0111000111001011", "0100010111101000", "0001001111100011", "0011010000001100", "0101111101111011", "1100111101111110", "1010011101001110", "0011101110100100", "1101010111110000", "1010011000001110", "0111101100110111", "0000100100000110", "0011110010011100", "1100110101111110", "1101100010101111", "1101101000011000", "0101001010010001", "0111100100011000", "1101010000111111", "1001101010011100", "1101111100010010", "1001111100101101", "0100001101000101", "1111111001100111", "0010010100111010", "0001010010010001", "1000010110001110", "0111111010101111", "0111100110100100", "0100100011010101", "1001111011111110", "0000110001111011", "0100100111100000", "1100111101000011", "1100100100100010", "0000011010111111", "1000101100010101"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> plates = {"1010100100010001100000111111", "0101000000111010101100010011", "0101100100010001011101111100", "1100001000111000011100000011", "1101010111011011001110011011", "0000101111101110000000010101", "0111110011111100111001010110", "0110101001001110100111101010", "0000100111011110011010100100", "1110001000101110000100011111", "1101000011111000110101001010", "1001101101001100100000000100", "0001100011001001001001110000", "1011011000001011001100010100", "0001010001000101110010010010", "1111011100100100101111001011", "0000100010000011111100101100", "0111110101101011100011001001", "1010010111101111001100111010", "0101110010001000010010111111", "1111010100111111100100010111", "0010000101011011110001110001", "1001110010010001100101100110", "1001011011111001000111000101", "1111011110011110101110101111", "0100100110101000000000110011", "1001010011111000001101000001", "0011011101000011100110111101", "1111101100011110101101111000", "0110110010001001101000011010", "1001100000001010101111110101", "1111001011110011010000000100", "0101000010011010101100101100", "0001010101100111100001000111", "1010100100011111011111000011", "1111001111011111111011110000", "0110011100100001100011000111", "1100000101011010111010111010", "1010111001011110110100001101", "0001011011000110100010000100", "0010100101001110010100010011", "0101000101110010010000010000", "0110101000011111011000111001", "0101000011101101001100000100", "1001101110011000110001010011", "0111000010001110111101101011", "0101111101011010100110101000", "1011101010011001001101100000", "0110100111000101000111110010"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> plates = {"0101000101110111100000001110100100001111011", "0000001101110100000001110001010101000101000", "0101110000101100001101000101111110110010111", "1101011010010011110000001101011111100010111", "0100110000011001100010100111110110000100010", "1010010111111111001111111110000000100001011", "0001001111001001010101011110111010001111101", "1011001010010110110110001110001001010100001", "0001100010001000111000010011011010010011110", "1111001101001111110100011011111111001010100", "0011110110110111011111100000111011111000011", "0011010111100111011100010101101010010111001", "0100000001010111111011110110101010001000100", "1110010011001000000010100110100100010101110", "0010010000101111001100100001000101111110000", "1110100010011100010101100110100000000111001", "1010001000000100110010110001001100011000001", "1000111111101001101101110010010100000100111", "0010011001001110010100000111011110000011110", "0100010101111110011101010111011001110011011", "0100000101011110011111101111111110001011111", "1010011110000111010100110111000001011100011", "1111110111011111100101000111000001111111111", "0011010010111101101110011010011101101111001", "1100001101001111110010100101000000011010101", "1010110110010100110100000010000110011110101", "0111110110111110101101100011101110000111110", "0111010000011100010001000110111011100111111", "0000100100100010001001111100000101100110010", "1111110111010101000101101001110010001111010", "1011111000001110001000111010111011111001100", "1011101001110011111001111101001111110101001", "1010101011010010100000001010001001100101111", "1100010111011000000100100001101000000111011", "0000111000001100101101011110011001001111001", "0111111010010100001101001001000101010111110", "1000100001010100001111000000110110000111001", "0001000000101001101001101001101100101101100", "0001001100000011001111101100000000101110000", "1001101001001010001101111000101101111001011", "1100111110010000011010100011001100000111010", "1001111100100000101111010101011011001111101", "0110000110110100101010010011110100001001010", "1101111000011111011000111001110100101101110", "1100010100100111001111001101011100110111000", "0110101001110100110111001100101110111011001", "0101100110101110110101011101000100010000111", "1001100110100101110111001001001101100011010", "0110010000011001101011101101000000110100011", "1100101101110010110101111100100100101111111"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> plates = {"10000010000100110010110110001", "10111101011011010101101001110", "11000011011100000111001001000", "11000110000101010110000001001", "01011111001100110100100001001", "11010011010110000100100101111", "11100101000000000000111110011", "11100010101001010101111101011", "10111000101011011011010101001", "00010010010100100111101011111", "01111110001111110111001000110", "00001000011011100110000110010", "11010101010001011000111010100", "10100001011010000011001100101", "10000101110101000000000110101", "10101001010110000010011100110", "11011011101001110100010110011", "11001001111101100000010110101", "11110101101010100110101011110", "11011010100000111010111001101", "01001110011000111111001000010", "11110000100011011000000010101", "11011001011010001111111101010", "10101100101101110011110100100", "10101000001110101110001010111", "11101011111110110001011101100", "11111111001100010010111111001", "00100000010000111100110010111", "10010100110101101001111101110", "11000011000010001111110011111", "10111010001101011110001000001", "11100100110010110011001000101", "10000010111000101110001111111", "00101111100001110011001010011", "01000101011111000011010001011", "10001100001011111101010100011", "11011010010100111010010001100", "01010011011110110000100101111", "11111000111111111100000100010", "00100100011010011110111100100", "00110001010011111010001111011", "01110000001011011111100010111", "11111000011100000010101000110", "11001011001010001010011000000", "11000110101001001001001010001", "11110000101101010010010110000", "11110101111101110100111101011", "10100110111111100000010100001"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> plates = {"10011000011110100011001010011", "00000010100010110111100111111", "01001100011110000101001011111", "00011110100010010111100010000", "10000110101010111110101110001", "00110010001111100001111000101", "01110000010100011011001110111", "00101110100110000110100110111", "10100010110100110000010011111", "01001010001000010010110111111", "00110000000111010000111001000", "11010111110001000011000001111", "10001110110001110110010001110", "10100000011000011111010010101", "00110010010010101000000110000", "01111010011100011111101100011", "10101110001100111101010010010", "01110000001100100011010001001", "01100011001011101000111111111", "10111011001101010001001111001", "10111010111110011111110110111", "10000101111111111001111001100", "00011100001100001101101101000", "01010000111100011000010101101", "01011110100001010110010100010", "10001101100101010100100010110", "10000010001100111111000101110", "01111110111001011011001010000", "00100000110010001001011001111", "10110011010101010111101100100", "11000101100100111011111000000", "00000001010100100001000100001", "00010110101000011010111111000", "01011101110010110101111001001", "11001001011100101001101010101", "01111010101100111001010000000", "00111011101111011000011010111", "01111010101001001010111101000", "01011100100001110000111001111", "01011000010100001101000001000", "11001111100110001000110111011", "00010000011110101111010110000", "10011000100101101010011010111", "01000001111000101011000110110", "01101011001111011100101010001", "10010000010101100010111000101", "01011011001000100110010011011", "01111001101100000100000001111", "00100101000110011000110010110"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> plates = {"010110", "100110", "110010", "111001", "101111", "110101", "011100", "101010", "010011", "111001", "101100", "011000", "001100", "101011", "111111", "100010", "011111", "010010", "111010", "010000", "110011", "101000", "101111", "001011", "111010", "111101", "110000", "100110", "100010", "111100", "001010", "111011", "101100", "011100", "000001", "101000", "011000", "011001", "001000", "011101", "101011", "011101", "001011", "001111", "100111", "111110", "010000", "110111", "011011"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> plates = {"00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> plates = {"11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> plates = {"00111010110101110101111000001", "00101010110101110001111000000", "00101010110001110101111000110", "00111010110101110101111100100", "00101010110101110101111100001", "00111010110101110101111100011", "00111010110101110001111000110", "00111010110101110101111100000", "00111010110001110101111000110", "00111010110101110101111000000", "11101010110001110101111100000", "00101010110101110100111000110", "00111010110101110001111000101", "00101010110101110101111100110", "00111010110001110101111000010", "10111010110101110101111100000", "00101010110101110101111000000", "00111010110101110101111000110", "00111010110101110101111000001", "00111010110101110001111000100", "10101010110101110101111000010", "00101010110001110100111000100", "00111010110101110101111000011", "00101110111101110101111100001", "00111010110101110101111100100", "00111010110101110101111010001", "00111010110001110101101100001", "10111010110101110101111100111", "00111010110101110101111000000", "00111010110001110101111000110", "00111010110101110101111000000", "00111010110101110101111000101", "00101010110001111101111100000", "00111010110101110101111101111", "00111010110001110101101100000", "00101010110101110101111000000", "00101011110101110111111000000", "00101010110111110001111100010", "10101010110101110101101100100"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> plates = {"01010100001001010", "01110100011001011", "01010100111001011", "01010100011001010", "01010100001001010", "01010100001001010", "01010100101001011", "01010101001001010", "01010100001001010", "01010100011011010", "01010100011001010", "01010100001001011", "01010100001001011", "11010100001101010", "01010100011001011", "01010100011001010", "01010100001011010", "01010100011001010", "01010100011001110", "01010100101001010", "01010100001001010", "01010100111001011", "01010000011001011", "01011100001001010", "01010100101011010", "11010100011001010", "11010110001011010", "01010100001011011", "01010100011001011", "01010100111001010"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> plates = {"0001000110001011000010000000100010", "0001100111001111000010000000110010", "0001101110001111001010000110100010", "0001000111001111010011100000100010", "0001101111001111000010000101110010", "0101011110001111001010000111100010", "0001100111001111001010000110110010", "0001100111001111001010000110100010", "0001000110001111000010000110100010", "0001100111001111001010010111110011", "0001000110111011001010010000100010", "0001000111001111001010010110110010", "0001001111001110000010000110100010", "0001101110001111001110000111100010", "0001001111001011000011000001110010", "0001100110001111001010000000100010", "1001100110001111001010010100100010", "0001100110001111001010000000100110", "0001000111001111000010000000110010", "0001000111001111000010000110100010", "0001000111001111000010001000111010", "0001101111001111001010010110100010", "0001000111001111001010000101100010", "0001000110001111000010000101110010", "0001101111001111000010000110110010", "0001101111001111000011000111110010", "0001101111001111000010010111100010", "0001100110001111001010010110100010", "0001101111001111001010010000100010", "0001001111001111100010010110100010", "0001100110001111001010000111100010", "0001001110001111000010000000110010", "0001000110001111000010000011100010", "0001000110001111000010000110100010", "0001000110001111001010010110100010", "0001000111001111000010000001100010", "0001101110001111001011000001110010", "0011100101001011000010000111110010", "0001001111001111000011000111110010", "0001001110001111001010010000110010", "0001101111001111001010000001100010", "0001000111001111000010010010100010", "0001001111001111000011000110100010", "0001000110001011001010000100110010"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> plates = {"1011111010101110001001110000101000110000111100001", "1011111011100110001001010000101001110001111001101", "1111111000101110001111010000101001100001111001001", "0011111000101110101101010000101001100001111100001", "0011111101101110000001010000101001100011111100001", "1011111001100110001011110000101011100011110101101", "0011111101101110001101100000101001100001111100101", "1011111101101110001001010000101001110001111000001", "1011111011101110100011110000101001100000111000001", "1011111011100110001101110000101001100000111000001", "1011111010100110001101110000101001100001111100011", "1111111110100110001001110000101000110001111100001", "1011111110101110101101010000101001110001111000001", "1011111010100110001011111000101001100000110101001", "1011111111100110001001010000101001100101111100001", "1011011000101110000001110000101011100011111100001", "0111011010101110101011110000101001100011111100001", "1011111010101110001001110000111011100001111101001", "1011111010111111001111110000101001100001111100101", "1011111010100110010001010000101001100001111100001", "1011111110101110001101010000101001100001110100101", "0011111010101110001001010000101001100011111101001", "1111111010100110101111010000101001100001111100001", "1011111010101110001111010000101001100000011100001", "1011111010101110001011010100101011101001111000101", "1011111010101110000011010000101000100001111101001", "1011111011101110001001010000101001100001111000101", "0011111010101110001111010000101001100001111000101", "0011111100101110001001000000101001100001110101001", "0011111010101110001101010001101001110001111101001", "0011111001100110001111110000101101100001111000001", "1011111001101110001101110000101001100001111010001", "1111111110101110101111010010101011110011011100101", "0011111001100110001001010000101000100001110001101", "1011111010100110101111010000101001100001111001101", "1111111010100110101101010000101001100001111101101", "0011111010101110000011010000101001100001111001101", "0011111001100110100101110000101001100001011100101", "1011111010101110001101010000101001100001111101101"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> plates = {"00011110100001100001100001", "00011110100001011001111001", "00011110100000000001101111", "01011110100001101001101101", "01010110101001100001101101", "00111100100100101001101101", "00010100000100000001110101", "00110101100000000001101101", "10010110100000100101101101", "00011110100001000101101101", "01111110100101001001111101", "01110110100010001001110001", "01011111000001010001111101", "00011100110100101001110001", "00011110100001001001110101", "01110110100101000001110101", "01010110100100000001101101", "00011100100001100111101101"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> plates = {"111010001101001000010", "111111101101001010110", "111010111100001010011", "110110111100001000010", "111010111101001000010", "111111111111001000010", "110010111101011000010", "111010111110001100010", "111010111110000000010", "111110111100011000010", "110110111100001000010", "111110111101001100011", "110110111110001100010", "111110111100001000010", "111110111101000000010", "111010101111101000010", "101110111101001000010", "111110101111001010010", "101010111101001010010", "111111001101001000010", "110010110100001110010", "110110111111001000010", "111110111101001000010", "111110101100001000010", "110010111101001010010", "111010111101001000010", "111010111101001000010", "111110111111001001010", "110110111111001000011", "111010100101001000010", "110110011100001000010", "111010111111001010010", "111110111111001000011", "111110111101001000010", "111010011101001000010", "111110111101000000010"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> plates = {"00011011010101011111", "10000010001101111101", "00001011010101010001", "01011010000101111001", "00010011010101011101", "00010010010101011101", "00000010010101011011", "00011011000101011101", "01001010010101011001", "01011010000101011111", "00000010010101010101", "00011110010101011011", "00011011000101011111", "01010011010101111101", "11001010011101011011", "10001010010101011101", "00000010000101010111", "00111011000101110111", "01011011001101011101", "00000010100101011111", "00011011010101011111", "01011010000101111101", "00001011001101111011", "00010011001101011111", "01010010010101011101", "00011010010111011001", "00011010010101011111", "11001010000101011111", "10000010000101011101", "01000011000101011111", "00010010001101111111", "01011011011101011111", "00010010100101011001", "00010011000101011101", "01010011000101011111", "00101010011101111111"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> plates = {"0100010010010001001101011001", "0000010010010001000100011001", "0100010010010101000101111001", "0000010010010001001100001001", "0100010010010111000100111001", "0100000110010101001100011001", "0100010010010101000110011001", "0000010010000001000101111001", "0000010010010101001100011001", "0100010011110001101101011001", "0010010011010001000100111001", "0001010011010101001100011001", "0100010010010011001100011001", "0100011011010101000100011001", "0100010010010001000101111001", "0100010010011101001101011001", "0000010010010011001100001001", "0100010010011001000100001111", "0100010010010001000100111001", "0100010010010001000100011001", "0100010011010001001101011001", "0100010010010001000101011001", "0100010011010101001100011001", "0100010010010001001100011001", "0000110011010101001101011001", "0100010011011101001100011001", "0100010010010011010100011001", "0110010011010101001101011001", "0100010010010101001100011001", "0000010010010001001100011001", "0100010011010101001101001001", "0000010010010101000101011001", "0000010011010001001101011001", "0100010010010001001101011001", "1100010010010101000101001001", "0100010010010111000100011001", "0100010000010001001100001001"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> plates = {"01001011000111001011000110110001111110010110001001", "01001011000111000011100110110101101100100110011011", "01011011100101001011100110110001111100110110111001", "01101011000111000011100110110101111100010110011001", "01010111000111101101101110110001101100110110010001", "01011011100111000011100110110001011100000110011001", "01011011000111001111000110110001011100110111011011", "01011001010111001011000110110001001100000110011001", "01001011000111100001000110110001011100110110011001", "01101001000111101011110110110001111100100111011001", "01101011000101000011100110110101111100100110011001", "01010011000111000111100110110101011100010110011001", "01101011000111001011100110111001011101001110110011", "01111001101111001011000110110001011100000111011001", "01101011000111001011100110110101001100110110010010", "01000011100111001001100110110001111100100110111001", "01001011000111001011100110110101011100100110111001", "01011011000111010001100100110101101110100110010001", "01000011000111101011000110111101101100110110011001", "01011011100111001001100110110101011100010110111111", "01101001100111000011100110110001011100110110001001", "01001011100111001011100100110001011100010110111000", "01011011100111001011000110110001011100010111011001", "11011001100101001011100110111101001110010110111001", "01001011000101000011100110111101011100110110111001", "01000011000111000011100110110001011100000110011001", "01000011000111001011100100111001011100110110111001", "01001011000111001011100110110011111100110110011001", "01011011000111001011100111110001101110010110011011", "01001011000111101111100110110001011100000110111101", "01101011000111000011100110110101111100010111001001", "01111011000101000011100110110101001100110110011001", "01101011000111001011100110110001011100010110111001", "01101011000101001111100110110101011100010110011001", "01001111000111000111100110110101011100010110011001", "01011011000111100011100100110101111100100110011001", "01010011100101001111100110110001011100100110011001", "01000011000111000011100110110001111100010110110011", "01011001000111001011100110110001011100000110011001", "01010001000111001111100110110101011100010110011001", "01011111000111001111100110110101111110010110111001", "01110011100111001111000100110001001100010110111001", "01100011000111001011100110110101011100010110111001"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> plates = {"111000000011001001100101101100100", "111000000111000001110101101110110", "111010000011000001110101101100100", "111011000000001001100001101000010", "111001000011000101101101111110110", "111011000001001001110101101100110", "111001000111001001110001101110110", "111000000011000001100100101100100", "111010001111001001110101111101110", "111000000111001011110111111100111", "111001010110000001100101101100100", "111010000111000101110000101110110", "111101000101010101100100101110100", "111011000111001001100001101110100", "111011000011000001100101111110100", "111000100110100001100101111100110", "111000100111001001100100111100100", "111011000011000001100100111110100", "111001000111000001100101101110100", "111000001100000101100001101110110"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> plates = {"001001111001100001011010010110100100101111", "101010101011010001010010010110100111101011", "001100111001000001011011010100100101111011", "101010111001100001011010000100100111101011", "001010111010011001011010110100100111111011", "000001111101000001011110010110100110111011", "000010101000000001010110010100100101100011", "111001111001000001011010110111100100101011", "110011111000000001010010110110100101111011", "100010111001010001010110010111100110101011", "101001101001000001010010010101100100100011", "101001111000000001011010110111110111011011", "000011111001010001011010010101100100101011", "000000101000000001011110000110100101101011", "101011111000000001011110000101100101111011", "101001111000100001011110000100100101101111", "100001111011000001010010010100101101101011", "010001111011000001010110010110100101111011", "101011111000000001010010010100100100101011", "101001101011000001010110010100100110001011", "100001111000000001011110010100100100111111", "011001101000000001011010110100100101101011", "101010111000000001011010010111100100111011", "001001111001000001010110010111100100101011", "000000101001000001011110010101100101110111", "100011111000000001011010110111100101101011", "000011111000000001011010110111100100101011", "000001111001000001010010010100100101001011", "111011111001000001011010010100100100101111", "001001111000100001010010010110100101111011", "000001111001100001011011010100100101111011", "101001111011000001011110110110100101100011", "101001101000100101011010010110100101101011", "101000111001000001011010110100100101101011", "011001101010000001010010111101100101101011", "100010111011000001010110100100100101100011", "001011111001000001011110000101100101101011", "110001111001100001010010010100100100001011", "000010111001000001011010010100100101101011", "001001101011000001011010000111100101111011", "001011111001000001011011000111100100111011", "000011111001000001011011010100100101101011", "100001111011000001011110010110100101101011", "010011101001000011011110000110100101101111", "101011101001000001111010110110100110100011", "001001111011000001011000010111100100101111"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> plates = {"01111101111001101110100", "00010101111011111110111", "00010101111011111110100", "01110100111011111110100", "01110101111001111110100", "01010100111011111110100", "01111100111001001110100", "01110100111011111110000", "00111100111001111110100", "01110001111011011110100", "01110100111000111110100", "11110001111001101110000", "01010001111011011110100", "01010101111001011110100", "00010100111011111110100", "01110101111011111110000", "00111000110011101110100", "00010101111000101110000", "00110101111011111110100", "01110110111011111110100", "00110101111001101110100", "00010100111011111110100", "00110100111011101110100", "00010101110011011110000", "01110101111011111110100", "00110101111101111110100", "00110101111001111110100", "00010101111001111110100", "00110001111001101110100", "00010101111001111110100", "01010100111001111110100", "00010000111011101110100", "01010101111000111111100", "01010101111001111110100", "01110101111011101110100"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> plates = {"000001010111110110100110011011101011101101100", "000100000011110110010010011010100010101101101", "100001010111110010000110011011101110100101101", "000101010110111010000110011011100011101111100", "000100010101110011000010011011101011101101000", "100000000011110010000110011011101111100111101", "000000010101110110000110011011101111100101000", "000100010111110110000100011011101111100111101", "000001010110110110100100011011101111100101001", "000100010100110110000100011011101010100111100", "000100010111110010000110011011101111100101100", "100001011111110010100110011001101111101101101", "100101010010110010000010011011101111100111101", "000000000100110110000010011011101011100111010", "101001010111110110000000111011101111101101000", "010000010111110010010110011011101111100111100", "100100010101110010010110011011101111100101001", "000101010110110010010010011011101011101101100", "000111010100110010000110011011101111100111101", "000101010100110010000110011011101111101101000", "100110110001110010101100011011100111101101101", "000101010110110010000110011011101011100101101", "000001010011110110000100011011101111101111100", "000101010111110010100000011001101111110101101", "000001010111110010010001011011100110101101100", "000101010110110010010010011010101010100111001", "100000010110110010100100011011101011100111101", "100011010100110010000010011010101111100101100", "000100010101110010010110011001101011100101100", "000100000110110110000010011011101111100101101", "000001010100110010100010011011101011101111001", "100000010110110110010010011011110011100111000", "100101010100110010000010011011100111101101100", "000111010111110010000010011011101111100111100", "100100010111110110000010011110101111100101101", "100100010110110010000000011011101111100111101", "000001010111110010000110011010101111100101001", "000100010111110010010100011001101010100111100", "100000010110110110000010011011101111101101001"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> plates = {"0100011111001011", "0001011111011011", "0000111111001011", "0001111111001110", "0000111111001011", "0110010111101011", "0100010111001011", "1000111111001011", "0000011111101011", "0111010111001011", "0000111111101011", "0100111111001010", "0110010111111011", "0111110111001010", "0000011111001011", "0100111111001110", "0010110111001111", "0100111111001011"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> plates = {"1110011101101101111110", "1110011101101101111100", "1110011101101101111100", "1111011101101101110110", "1110111101101101111110", "1100111101101101111110", "1110011101101101111100", "1110011101101101111101", "1111111101101101111111", "1110111101001101110100", "1110011101101101111110", "1110011101101101111100", "1100011101101101111111", "1100111101001101110100", "1110111101101101111100", "1110111101101101111110", "1110111101101101111111", "1110011101101101110100", "1110111101101101111100", "1110011100111101111111", "1110111101101101111111", "1110111101101101111110", "1111111101101101110100", "1110111101001101111110", "1110011101101101111110", "1110111101101101111111", "1111011101101101110111", "1110111110101101110110", "1100111101100101110111", "1110011101101101111100", "1110111100101101110110", "1101111101101101111100", "1111111100001101111110", "1100111101001101111110", "1100111101101101111101", "1110111101001101111101", "1100111101101101110101", "1110111101001111111110", "1110011101101101111110", "1110011101001101111110", "1110011101101101111110", "1110011101101101111100", "1110011100101101111100", "1111111101101101111110"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> plates = {"1000001000000110", "0000001100010110", "0000001000010110", "0110101010010110", "0000001000001110", "0000001100010111", "0110001000010110", "0000001000011111", "0100001100010111", "0010001000010110", "0110001101010110", "0101001110010111", "0010001000010110", "1100001000010111", "0110001000000111", "0000001000010111", "1110001000110110", "0100001000011110", "0110001000010110", "0100011100010110"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> plates = {"0100111001111100110111110001001010000101", "1000101000111100011111110001011010110111", "1000111000111001011111110101111010100111", "1000100010101110011111111001011010110101", "0100101000111110011111111001001010110101", "0100101000111100011111110101011010101111", "0000101000111000011111110000001010000111", "0000101000111000011101111001011010010101", "0000101000111100011111110101001010110111", "1000100000111000011101110100011110100111", "1100101100111010011111111001001010110101", "1100101000111100011111110000011010100111", "0000101000101100011101110001101010110101", "1111101000111000011101111100011010100101", "0000101000111010010111111110011010110101", "1100101100111000011111110011011011110111"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> plates = {"111110110110101000001011011010", "111110110111101010000011111010", "111110010110001111101010000000", "111100110101001010100011001010", "111110110110101100000010010000", "101100110101101111101011100000", "111110110111101001110011001100", "111100110110101011101010111000", "111110110110001000111111100010", "111110110110101111101110001010", "101110110110001011101011110100", "111110110110101011001011111000", "111100010110101011101110011110", "111110010110001000101010101000", "111110110100101000101011011010", "111100111100001010101011001100", "111110110100001110101110011010", "111101110100101000110010111000", "111100110111001101111011101010", "111110010110011101001010011011", "111110010111001011001011100010", "111100010110101111100011100110", "111110110100001110110011101010", "111110010110101111001110011110", "111100110110101010010111011010", "111100110110001010100011011010", "111100010111001110101111001000", "111110010100001000101010011010", "111110110110001100100011001010", "111110010101101001101010101110", "111110010110001011111011011000", "111100110111011110110011001100"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> plates = {"0101010100110110010010010101", "0110110110011000011001010011", "0111110111010100011011011111", "0111110110010000011011111111", "0110110110111100011011010101", "0101110110110000011111011111", "0101010110110000111011010011", "0101110110110100010001010111", "1111110100110100010110011101", "0111110110110000011010010011", "0111010110011000011011011101", "0111010110110000011001011011", "0110110110010100010011010111", "0101010110111000010011011001", "0111010100110001011011000111", "0110110100111000010111000111", "0111110110111000011011000111", "0111110100111000011010010001", "0100011110110100010010011111", "0101010110111000011011010111", "0100010100111000011111011111", "0100110100110100011010010001"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> plates = {"100111110011111111000110001", "100001111011111111000110111", "000101110011101111010110101", "100001111011101111010110101", "101011110011101111011110001", "101111111011101111010110001", "100011101011101111000111001", "101101110011111111011110101", "110111111011111111000110101", "000111111011101111011010101", "100111110011101111001110101", "101001110011111111100010101", "110011110011101111000010101", "100111110011111111010110101", "100001111011111111000110101", "101101111011111111000011101", "101111111011101111000110001", "100011111011101111000010101", "101011110011111111000110101", "000111111111111111010110101"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> plates = {"01010111011111000000110100011000", "01010111111111100000111100111000", "01010111111111000000110101111000", "01000111111111100000110101111000", "01010111011111110000111100111010", "11000111011111000000110101111010", "01110111011111100000110100011000", "01000111111111000000110101011000", "01000111111111010100111100111000", "01011111111111100100100101111010", "01010111011111100000100101111000", "01010111111111100000101101011000", "01100111011111010100111100111000", "01110111011111000000100100011011", "01010111111111110000110100111000", "01010111111111000000110101101011", "01010111111111000000111101111000", "01010111011111010000100100111000", "01010111011111100000110100100000", "01010111011111000000100100011000", "01110111011111000000111100111001", "01000111011111100001100100111000", "01000111011111100000110100111010", "01000111011111100000110101110010", "01010111101111100100110100111010", "01110111011111101000110100111010", "01010111111111000000110100111000", "01000111011111100100111110111010", "01100111011111100000110100011000"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> plates = {"010100010110100110100111100110010000110", "010101010110100100100011000010000101100", "011100010010100110100011000110010000100", "010101010110001000100011000110010011100", "011101010110001100100111100010010000100", "011101010010101100110011100110000001100", "010100010010000100110111000110010001100", "000101010110101100100111110110000000100", "010100010110100100100011100110000001100", "110101010110100100101111000110010001100", "000100010110100110100111000110010000110", "010100010010000110100011100110001000100", "010100011010000110100111100110010000001", "000100010010100101100011101110000011110", "010100010010100100100011100110010001100", "010110011010100110110111100110000001100", "000100010110110110100011000110000011100", "000100011010001000100111100110000001100", "000101010110000010100011100110000001100", "000101010111100110100111100110010000100", "001100110110100100100111100110110000100"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> plates = {"10000010111110111000110110111100100100001011", "10000010110010110000110110011100100101011101", "10001010111011111000110111011101101101001011", "10001010110000110000110010111101100101011001", "11000011110100111000110010111101101101011011", "11011010110000111000110110011111100101011011", "10000011110000111000110110111100101100011011", "10000010110100110000110111111100100101001001", "11001010110000110000110010111101101101001101", "11000010110000110000110010111101100101001001", "11000011110000111000110010011101101101011101", "11000010110110111000110111111101101100001001", "10000010111000110000110111111100101101001001", "10000010110100110000110010011101100111011001", "11000010111010111000110110111100101100001001", "11000010110010110100110011011100100101001011", "10001011111100110000110010111100101100001001", "11001010110000110000110111110001101101011101", "10001011110000110001110111011100101110011011", "11001010110000111000111110111100111100001011", "10100010110100110000110010111101101100001001", "11000010111100110000110111111100101100001011", "10001010110100110000110110111100101100001111", "10001110111010111000110110111100100101011011", "10000010110100110000110111011100100111011001", "11000010110110111000110110111100101101001001", "10000010110000111000110110011101101100011001", "11000010110010111000110010111001101101001011", "10000010110110111000110110111101101100001001"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> plates = {"11000111110000000111000010110111", "11011111110010010111000010000101", "11010111111010110111001010100111", "11000111110010010111000110100111", "11010111111010010111011010100111", "11010111111010010111000010111011", "11110111101000010111000010100111", "11010111111010010111000010010101", "11010111111000010111000010111001", "11010111111011011111000010010111", "11010111111000010110000010110111", "11010111110000010111001011011111", "11010111110010000111000010110111", "11010110101110010111000010010101", "11010111101010010111000010110111", "11110111110010000111001010111101"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> plates = {"1101110110010100001", "1101110110011000001", "1101101110001000001", "1101111110001001001", "1101101110011000001", "1101111110011000001", "1101111110001000001", "1101101111011000001", "1101100110000000001", "1101111110001001001", "1101110110011000001", "1101100110010001001", "1101111110001001001", "1101111100011000001", "1101111111001000001", "0111100100001000001", "1101110110001000011", "1101101110001000001", "1101100110001000001", "0101110110001000001", "1101100110011001001", "1101100111011000001", "1101111110011000001", "1101111111001000101", "1101101110011000001", "1101111100011000001", "0101100110001000001", "1101111110001001001", "1101100110011001001", "1101111110011000001", "1101110110001000001", "0101101100010000001", "1101111110011001001", "1101101100001000001"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> plates = {"000000011100000000001000111001", "000000011100110001001000111101", "001000001110110100101000111101", "001000011101100100001100111101", "000110011110011000001000111101", "001110011111101001001000110111", "001100011101010100001001111101", "001100000101011000001000111101", "001100001110111100001010111101", "000000011100100001011000111011", "000000000101111100001000111001", "000110011111011101001010101001", "000100001100110100001000111011", "000100011101011100011000101111", "000000010100011001001000111011", "000000001101011100001010111001", "001000001101110101001000101001", "001010011100011101011000111011", "000111010100110000001000111101", "000000000111010100001000111101", "001110100100110100001000111001", "000100001111011100011010101101", "001110001100110100001000111001", "001000001100010001001000110001", "001110001101011101001010111101", "000110010100111100001000111011", "001110000100111100001000111101", "001000011100010101001000111101", "000100010101011100001000110001", "000000001101011101001000111111", "001000011100010101001010111101", "001100000101111000001000111011", "000100001100011100001010111011", "001010000100111111001000111001", "000000000110011000011000101011", "000000010111110001001000111011", "011010001111011101001000110001", "001110001100111101001000111011", "000010001100011100001000111111", "001000010100011100001000111001", "000010000100010100001010111011", "001010001100011001001010111101"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> plates = {"1000111110000110100011011000110000100", "1000111111001101100111011010110001100", "1100111110000100100111011011110001100", "1000111110000110100101011010110001000", "1100111110000111100011111010110000000", "1100111110000111100111111010110000110", "1000111110000101100001011000110001100", "1101111110000100101111011000110000000", "1000111110000110100011111000110000100", "1100111110000101100001011000110111000", "1100111110000100100111111000110001100", "1000111110000100100001011000110101010", "1000111110000100100101111000110000100", "1010111110000100100011011010110000000", "1100111110000100100011011000110000000", "1000111110000111100011111110110100100", "1000111110000100100101011000110100001", "1000111110000101100011011010110101000", "1100111110000110100011011000110100000", "1000111110000111100111111000110000100", "1100111110000111100011111000110001000", "0100111110000000100001011000110100101", "1100111110000100100001111000110000000", "1100111110000100100011111000110000011", "1100111110100100110011111010110001110"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> plates = {"000110100101001000011110000001010010000110", "000110110001001000111100010001010000001111", "000100100100001010111100010001010000001111", "001110100001001111111111000001010000101111", "000100100000001010110111000001010000001110", "000110100100001111110010000011010000100111", "000100100100001111111111000011010000001110", "000100110010000110110100110011010000101111", "000110110000000001110111000001010010001110", "000110100001000101110100000011010001101111", "000100100001001000111010000001010000001110", "000110110001001110011111000011010000101110", "000110100000001011010101000011010000101111", "000111100101001100111000000011010000101111", "000111100101001010110010000001010000101111", "000100110000000100111011000001010000101111", "000101100000001110110110000001010000001111", "000110100001001010110011000011010000100101", "000100100000001010111100000001010010101110", "000100110001000010111111010101010000001110", "000110100001001011111100000001010000101110", "000111100000001010111101000001010000100111", "000100100100000001111100000011010000001111", "000100100100000010111101000011010000101111", "000111100001001110111111000011010000101111", "000100101101011011011111000001010010101110", "000101100000001011010001000001010010001110", "000100100000000101110111000011010000001111", "000111100000001000011001000001110010101111", "010111100001000000110110000001010010101111", "000111110000000011110000000001010100101100", "000100110001000010111110000011010000001111", "000110100101001010110101000011010000101111", "000100100000001001110110010011010000001111", "000110110101001110111110001001010000000111", "000110100001001111010101000011010000100111", "100100110000001011110100000001010000111111", "000100110000001000110100000011010000100111", "000110100000001010111101000011010000101111", "000110110000001010110111010001010000001111"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> plates = {"11000101010010000111000111110001110", "10011111010010000101000101110000110", "11010111010110000100100101110000111", "11111111010010000100000101110100011", "10011111011010000111001101110011100", "10111111010110000111000101110001010", "11011111011010000100000111110000100", "11011111011010000111010101110011010", "10011111010010001111000101110001110", "10011111000010000111000101111010110", "11110111000010000110000101111101110", "11111101000010000101000101110010010", "10111111011010000100000101110100010", "10011111010010000101000101110111110", "10011111010010000101000101110001101", "10111101010011000101000111110000110", "11101101010010000101000101111010110", "11010111010010000001000101110010100", "11001101011010010111000111110000110", "10111111011110000101000101110011111", "10011111010011000101000101110111110", "10111111010010000101000101110010010", "10101111010011100101000101110010110", "10010111000011000111000101111010110", "10111111010010000011000111110101110"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> plates = {"1001110010001001001011001011001001", "1001110010101011011111001011001001", "1001111010101001001011001011001001", "1011110000001001101111001011001001", "1001111000011001101010001011001011", "1001111011001001001111001011001001", "1001111010001001001011001011001001", "1001110000111001001011001011001001", "1001111010101101001111001011001001", "1001111010001001101110001011001001", "1001110010001011001111001111001001", "1001111010001001101011001011001001", "1001111000011001001111001011001001", "1001110010001001101011011011001001", "1001111010001001101111001011001001", "1001110010111001001111001011001001", "1001111011001001001111001011001001", "1101111000001001101110001011001001", "1001110010101001101110001011001001", "1001111110001011001111001011000001", "1001111000111001001011001011001001", "1101111010111011101111001011001001", "1001111010001011101111001011000001", "1001111011001001001011001011001001", "1001110010011001101111001011001001", "1001110010011001101011001011101001", "1001111010101001101011001011001001", "1001111010011011001111001011001001", "1001110010101001101011001011001001", "1001110010011001001011001011011001", "1001111010001001101111001011000001", "1001110010011001001111001011001101", "1001111011001001001011001011001001", "1001111011011001001011001011001001", "1001111000001001001111001011001001", "1001110010001001001111001011001001", "1011111000001001101111001011001001"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> plates = {"11111"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> plates = {"0", "0", "1"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> plates = {"1", "0", "0"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> plates = {"1", "1", "1", "1"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> plates = {"0", "1"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> plates = {"1", "0", "0", "0"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> plates = {"1", "1", "1"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> plates = {"1", "1"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> plates = {"0", "1", "1"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> plates = {"101001011", "111011010", "110110010", "111010100", "111111111"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> plates = {"000", "111", "111"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> plates = {"11111", "11111", "11111", "11111", "11111"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> plates = {"101001011", "011011010", "010110010", "111010100", "111111111"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> plates = {"001", "010", "100"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> plates = {"10", "01"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> plates = {"1", "0", "1"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> plates = {"1", "0"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> plates = {"0", "1", "0", "0"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> plates = {"0", "1", "0"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> plates = {"111", "011", "010"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> plates = {"1", "0", "1", "0"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> plates = {"01", "10"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> plates = {"111", "111", "111"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> plates = {"0", "0", "0", "1"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> plates = {"111", "000", "000"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> plates = {"10", "00", "00", "01"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> plates = {"111", "111", "111", "111"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> plates = {"1", "1", "0"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> plates = {"010", "111", "100"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> plates = {"0", "0", "1", "0"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> plates = {"11", "11", "11"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> plates = {"000", "111"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> plates = {"010", "101"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> plates = {"001", "110"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> plates = {"101", "010"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> plates = {"1", "1", "0", "1"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> plates = {"101010101010", "010101010101"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> plates = {"111", "111"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> plates = {"000", "111", "000"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> plates = {"010", "011", "111", "101"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> plates = {"111111000000", "000001010101", "110101010101", "011101101010", "100010010101"};
    TheDeviceDiv2* pObj = new TheDeviceDiv2();
    clock_t start = clock();
    string result = pObj->identify(plates);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23080041&rd=15489&pm=12399
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
#include <cstring>
#include <climits>
 
using namespace std;
 
class TheDeviceDiv2 {
public:
  string identify(vector <string> p) {
    for(int j=0;j<p[0].length();j++){
      int o=0,z=0;
      for(int i=0;i<p.size();i++){
        if(p[i][j]=='1')o++;
        else z++;
      }
      if(o>=2&&z>=1)continue;
      else return "NO";
    }
    return "YES";
  }
};
 
 
 
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/